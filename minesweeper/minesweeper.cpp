/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-11-15 15:25:45
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-11-15 20:02:11
 * @FilePath: /minesweeper/minesweeper.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
int main(){
    int n,m,t=0;
    cin>>n>>m;
    int s[n+2][m+2];
    char f;
    for(int i=0;i<n+2;i++){
        for(int j=0;j<=m+2;j++){
            s[i][j]=0;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            cin>>f;
            if(f=='*'){
                s[i][j]=1;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(s[i][j]==1){
                cout<<'*';
            }
            else{
               cout<<s[i-1][j-1]+s[i-1][j]+s[i-1][j+1]+s[i][j-1]+s[i][j+1]+s[i+1][j-1]+s[i+1][j]+s[i+1][j+1];
            }
        }
        cout<<endl;
    }
    return 0;
}