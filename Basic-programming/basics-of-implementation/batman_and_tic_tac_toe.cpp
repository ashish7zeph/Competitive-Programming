#include <iostream>
using namespace std;

int main(){
    int t, k, i, j, flag;
    cin >> t;
    char a[4][4];
    char c;
    for(k=0 ;k<t; k++){
        flag = 0;
        for(i=0 ;i<4; i++)
            for(j=0; j<4; j++)
                cin >> a[i][j];
       /* for(i=0 ;i<4; i++)
            for(j=0; j<4; j++)
                cout << a[i][j] << endl;*/
        for(i=0 ;i<4; i++){
            for(j=0; j<2; j++){
                if((a[i][j]=='x' && a[i][j+1]=='x' && a[i][j+2]=='.')||
                   (a[i][j]=='.' && a[i][j+1]=='x' && a[i][j+2]=='x')||
                   (a[i][j]=='x' && a[i][j+1]=='.' && a[i][j+2]=='x')){
                    flag = 1;
                    break;
                }
                if((a[j][i]=='x' && a[j+1][i]=='x' && a[j+2][i]=='.')||
                   (a[j][i]=='.' && a[j+1][i]=='x' && a[j+2][i]=='x')||
                   (a[j][i]=='x' && a[j+1][i]=='.' && a[j+2][i]=='x')){
                    flag = 1;
                    break;
                }
            }
        }
        for(i=0 ;i<2; i++){
            for(j=0; j<2; j++){
                if((a[i][j]=='x' && a[i+1][j+1]=='x' && a[i+2][j+2]=='.')||
                   (a[i][j]=='.' && a[i+1][j+1]=='x' && a[i+2][j+2]=='x')||
                   (a[i][j]=='x' && a[i+1][j+1]=='.' && a[i+2][j+2]=='x')){
                    flag = 1;
                    break;
                }
                if((a[i][3-j]=='x' && a[i+1][2-j]=='x' && a[i+2][1-j]=='.')||
                   (a[i][3-j]=='.' && a[i+1][2-j]=='x' && a[i+2][1-j]=='x')||
                   (a[i][3-j]=='x' && a[i+1][2-j]=='.' && a[i+2][1-j]=='x')){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
