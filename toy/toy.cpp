/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-11-15 20:05:58
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-11-15 20:58:00
 * @FilePath: /toy/toy.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,m;
    int a,s;
    cin>>n>>m;
    string name[n];
    int face[n];
    for(int i=0;i<n;i++){
        cin>>face[i]>>name[i];
        }
    int j=0;
    for(int i=0;i<m;i++){
        cin>>a>>s;
        if(face[j]==0){
            if(a==0){
                j=j-s;
            }
            else{
                j=j+s;
            }
        }
        else{
            if(a==0){
                j=j+s;
            }
            else{
                j=j-s;
            }

        }
        while(j<0){
            j=j+n;
        }
        j=j%n;
        
    }
    cout<<name[j]<<endl;
    return 0;
}
