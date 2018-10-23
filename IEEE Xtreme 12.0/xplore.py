import ast
n=int(input())
dict={}
for i in range(n):
    d=ast.literal_eval(input())
    for i in range(len(d["authors"]["authors"])):
        if d["authors"]["authors"][i]["full_name"] not in  dict:
            dict[d["authors"]["authors"][i]["full_name"]]=[]
        dict[d["authors"]["authors"][i]["full_name"]].append(d["citing_paper_count"])
for key,value in dict.items():
    dict[key]=sorted(dict[key],reverse=True)
m={}
for key,value in dict.items():
    array=value
    max=0
    for j in range(len(array)):
        cc=min(j+1,array[j])
        if cc >= max:
            max=cc
    m[key]=max
import operator
sorted_x = sorted(m.items(), key=operator.itemgetter(1),reverse=True)
f={}
for i in range(len(sorted_x)):
    if sorted_x[i][1] not in f:
        f[sorted_x[i][1]]=[]
    f[sorted_x[i][1]].append(sorted_x[i][0])
        
for k,v in f.items():
    f[k]=sorted(v)
sorted_xy = sorted(f.items(), key=operator.itemgetter(0),reverse=True)
for i in range(len(sorted_xy)):
    for j in range(len(sorted_xy[i][1])):
        print(sorted_xy[i][1][j],sorted_xy[i][0])
