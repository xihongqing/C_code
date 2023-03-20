/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-02-17 16:40:57
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2023-02-17 19:31:09
 * @FilePath: /CProject/bigboom/bigboom.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

int main(){
    int n,na,nb;
    cin>>n>>na>>nb;
    int sa=0;
    int sb=0;
    int a[na];
    int b[nb];
    int s[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            s[i][j]=0;
        }
    }
    s[0][2]=1;
    s[0][3]=1;
    s[1][3]=1;
    s[2][4]=1;
    s[3][4]=1;

    s[1][0]=1;
    s[4][0]=1;
    s[2][1]=1;
    s[4][1]=1;
    s[3][2]=1;
    for(int i=0;i<na;i++){
        cin>>a[i];
    }
    for(int i=0;i<nb;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        if(s[a[i%na]][b[i%nb]]==1){
            sa++;
        }
        if(s[b[i%nb]][a[i%na]]==1){
            sb++;
        }
    }
    cout<<sa<<' '<<sb<<endl;
    return 0;
}