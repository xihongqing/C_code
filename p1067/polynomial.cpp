/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-02-20 09:55:33
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-02-20 10:52:36
 * @FilePath: /CProject/p1067/polynomial.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

int main(){
    int n;
    int flag=0;
    cin>>n;
    //getchar();
    int a[n+1];
    for(int i=0;i<n+1;i++){
        cin>>a[i];
        if(a[i]!=0){
            flag=1;
        }
    }
    if(flag==0){
        cout<<0;
        return 0;
    }
    if(n==0){
        if(a[n]==0){

        }
        else{
            cout<<a[n];
        }
        return 0;
    }
    if(a[0]==0){
        
    }
    else if(a[0]>0){
        if(n!=1){
            if(a[0]!=1){
                cout<<a[0]<<"x^"<<n;
            }
            else{
                cout<<"x^"<<n;
            }
        }
        else{
            if(a[0]!=1){
                cout<<a[0]<<"x";
            }
            else{
                cout<<"x";
            }
        }
    }
    else{
        if(n!=1){
            if(a[0]!=-1){
                cout<<a[0]<<"x^"<<n;
            }
            else{
                cout<<"-x^"<<n;
            }
        }
        else{
            if(a[0]!=-1){
                cout<<a[0]<<"x";
            }
            else{
                cout<<"-x";
            }
        }
    }
    for(int i=1;i<n-1;i++){
        if(a[i]==0){

        }
        else if(a[i]>0){
            if(a[i]==1){
                cout<<"+"<<"x^"<<n-i;
            }
            else{
                cout<<"+"<<a[i]<<"x^"<<n-i;
            }
        }
        else{
            if(a[i]!=-1){
                cout<<a[i]<<"x^"<<n-i;
            }
            else{
                cout<<"-x^"<<n-i;
            }
        }
    }
    if(a[n-1]==0){

    }
    else if(a[n-1]>0){
        if(a[n-1]!=1){
            cout<<"+"<<a[n-1]<<"x";
        }
        else{
            cout<<"+x";
        }
    }
    else{
        if(a[n-1]!=-1){
            cout<<a[n-1]<<"x";
        }
        else{
            cout<<"-x";
        }
    }
    if(a[n]==0){

    }
    else if(a[n]>0){
        cout<<"+"<<a[n];
    }
    else{
        cout<<a[n];
    }
    return 0;
}