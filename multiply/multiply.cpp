/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-02-14 10:23:29
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2023-02-17 14:32:16
 * @FilePath: /CProject/multiply/multiply.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1;
    string s2;
    int flag=0;
    cin>>s2>>s1;
    //这边做一个反向
    //最好获取S1的长度
    int s1_l = s1.size();
    int s2_l = s2.size();
    char s4[2000]={0};
    int l=0;
    for(int i=0;i<2000;i++){
        s4[i]=48;
    }
    for(int i=s1_l-1;i>=0;i--){
        char s3[s2_l+1];
        for(int i=0;i<s2_l;i++){
            s3[i]=48;
        }
        flag=0;
        for(int j=s2_l-1;j>=0;j--){
            if((s2[j]-48)*(s1[i]-48)+flag>9){
                s3[j+1]=((s2[j]-48)*(s1[i]-48)+flag)%10+48;
                flag = ((s2[j]-48)*(s1[i]-48)+flag)/10;
            }
            else{
                s3[j+1]=(s2[j]-48)*(s1[i]-48)+flag+48;
                flag = 0;
            }  
        }
        if(flag!=0){
            s3[0]=char(flag+48);
            flag=0;
        }
        flag=0;
        //反向计算
        for(int k=0;k<=s2_l;k++){
            if(s4[k+s1_l-1-i]+s3[s2_l-k]-48+flag>'9'){
                s4[k+s1_l-1-i]=s4[k+s1_l-1-i]+s3[s2_l-k]-'9'-1+flag;
                flag = 1;
            }
            else{
                s4[k+s1_l-1-i]=s4[k+s1_l-1-i]+s3[s2_l-k]-48+flag;
                flag = 0;
            }
        }
    }
    for(int i=1999;i>=0;i--){
        if(s4[i]!='0'){
            l=i;
            break;
        }
    }
    for(;l>=0;l--){
        cout<<s4[l];
    }
    cout<<endl;
    return 0;
}