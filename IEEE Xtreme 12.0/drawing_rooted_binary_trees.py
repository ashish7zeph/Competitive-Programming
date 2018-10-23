from sys import stdin
import math
 
class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
       
def buildTree(inOrder, preOrder, inStrt, inEnd):
     
    if (inStrt > inEnd):
        return None
    tNode = Node(preOrder[buildTree.preIndex])
    buildTree.preIndex += 1
    if inStrt == inEnd :
        return tNode
 
    inIndex = search(inOrder, inStrt, inEnd, tNode.data)
 
    tNode.left = buildTree(inOrder, preOrder, inStrt, inIndex-1)
    tNode.right = buildTree(inOrder, preOrder, inIndex + 1, inEnd)
 
    return tNode
 
def search(arr, start, end, value):
    for i in range(start, end + 1):
        if arr[i] == value:
            return i
 
def treeTraversal(node, a, x):
    if node is None:
        return
    z = a[node.data][1]
    if x == -1: a[node.data][0] = 2 * a[z][0]
    elif x == -2: a[node.data][0] = (2 * a[z][0]) + 1
    if node.left != None: a[node.left.data][1] = node.data
    if node.right != None: a[node.right.data][1] = node.data
    treeTraversal(node.left, a, -1)
    treeTraversal(node.right, a, -2)
    
testing = []
for line in stdin:
    if line == '': # If empty string is read then stop the loop
        break
    testing.append(line)
    
test = []
for i in range(len(testing)):
    if i != len(testing)-1:
        test.append(testing[i][:len(testing[i])-1])
    else:
        test.append(testing[i])
length = len(test)
last = []
for i in range(len(test)):
    if i != len(test)-1:
        last.append(test[i][:len(test[i])-1])
    else:
        last.append(test[i])
 
 
for i in range(0, length, 2):
    preOrder = list(last[i+1])
    inOrder = list(last[i])

   
    buildTree.preIndex = 0
    root = buildTree(inOrder, preOrder, 0, len(inOrder)-1)
 
    l = len(inOrder)
    a = {}
    for i in inOrder: a[i] = [0, 0]
    a[root.data][0] = 1
    a[root.data][1] = None
    treeTraversal(root, a, 0)
    b = []
    c = {}
    for i in a.keys():
        b.append(a[i][0])
        c[a[i][0]] = i
    b.sort()
    i = 0
    lvl = 0
    count = 0
    while i < l:
        node = c[b[i]]
        space = inOrder.index(node)
        ind = b[i]
        temp = count
        if int(math.log2(ind)) != lvl:
            lvl += 1
            count = 0
            print()
            continue
        else:
            count = space+1
            i += 1
       
        for j in range(space-temp): print(' ', end = '')
        print(node, end = '')
    print()

