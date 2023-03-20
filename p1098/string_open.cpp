/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-02-20 11:12:54
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-02-21 10:49:56
 * @FilePath: /CProject/p1098/string_open.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include<string>
using namespace std;

int main(){
    //单纯模拟题目，根据不同情况分工划分
    int p1,p2,p3;
    int i;
    int n;
    int k=0;
    cin>>p1>>p2>>p3;
    string s;//此处与使用char有何区别？
    cin>>s;
    char b[1000][1000];
    char a[1000];
    for(i=0;s[i]!='\0';i++){
        n=0;
        if(s[i]=='-'){
            n=0;  
            if((s[i-1]+1<s[i+1])&&(s[i+1]<s[i-1]+30)&&(s[i-1]!='-')&&(s[i+1]!='-')){
                n=s[i+1]-s[i-1]-1;
                for(int j=0;j<n;j++){
                    a[j]=s[i-1]+1+j;
                }
                for(int j=0;j<p2*n;j=j+p2){
                    if(p1==2){
                        if((a[j/p2]>96)&&(a[j/p2]<123)){
                            a[j/p2]=a[j/p2]-32;
                        }
                    }
                    if(p1==3){
                        a[j/p2]='*';
                    }
                    for(int l=0;l<p2;l++){
                        b[k][j+l]=a[j/p2];
                    }
                }
                }
            k++;
        }
    }

    //输出部分
    k=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]!='-'){
            cout<<s[i];
        }
        else{
            if(p3==1){//顺序输出
                if((s[i-1]+1>s[i+1])||(s[i+1]>s[i-1]+30)||(s[i-1]=='-')||(s[i+1]=='-')){
                    cout<<'-';
                }
                else if(s[i-1]+1<s[i+1]){
                    for(int j=0;b[k][j]!='\0';j++){
                        cout<<b[k][j];
                    }
                }
            }
            else{//逆序输出
                if(s[i-1]+1>s[i+1]||(s[i+1]>s[i-1]+30)||(s[i-1]=='-')||(s[i+1]=='-')){
                    cout<<'-';
                }
                else if(s[i-1]+1<s[i+1]){
                    n=p2*(s[i+1]-s[i-1]-1);
                    for(int j=(n-1);j>=0;j--){
                        cout<<b[k][j];
                    }
                } 
            }
            k++;
        }
    }
    return 0;
}
