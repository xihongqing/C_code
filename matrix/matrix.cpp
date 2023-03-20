/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-02-17 14:51:48
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2023-02-17 16:08:39
 * @FilePath: /CProject/matrix/matrix.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

int main(){
    int n;
    int m;
    int s=1;
    int x,y,r,z;
    cin>>n>>m;
    int a[n][n];
    int b[m][4];
    int c[n][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<4;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=s++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        x=b[i][0]-1;
        y=b[i][1]-1;
        r=b[i][2];
        z=b[i][3];
        for(int p=-r;p<=r;p++){
            for(int q=-r;q<=r;q++){
                if(z==1){
                    c[x-q][y+p]=a[x+p][y+q];
                }
                if(z==0){
                    c[x+q][y-p]=a[x+p][y+q];
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=c[i][j];
            }
        }


    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=(n-1)){
                cout<<c[i][j]<<" ";
            }
            else{
                if(i!=n-1){
                    cout<<c[i][j]<<endl;
                }
                else{
                    cout<<c[i][j];
                }
            }
        }
    }

    return 0;
}