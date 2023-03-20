/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-02-16 21:20:47
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2023-02-17 14:37:14
 * @FilePath: /CProject/factorial/factorial.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

int main(){
    int n;
    int s;
    int sum=0;
    int a[1000]={0},b[1000]={0};
    int flag;
    int j;
    int l;
    cin>>n;
    b[0]=1;
    a[0]=1;
    for(int i=2;i<=n;i++){
        flag=0;
        for(j=0;j<1000;j++){
            if(b[j]*i+flag>9){
                s=(b[j]*i+flag)%10;
                flag = (b[j]*i+flag)/10;
                b[j]=s;
            }
            else{
                b[j]=b[j]*i+flag;
                flag=0;
            }
        }
        if(flag!=0){
            b[j]=flag;
            flag=0;
        }
        for(j=0;j<1000;j++){
            if(a[j]+b[j]+flag>9){
                a[j]=(a[j]+b[j]+flag)%10;
                flag=1;
            }
            else{
                a[j]=a[j]+b[j]+flag;
                flag=0;
            }
        }
    }
    for(int i=999;i>=0;i--){
        if(a[i]!=0){
            l=i;
            break;
        }
    }
    for(;l>=0;l--){
        cout<<a[l];
    }
    return 0;
}