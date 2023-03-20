/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-14 09:39:11
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-14 10:00:58
 * @FilePath: /CProject/candidate/candidate.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

int main(){
    //空间换时间
    int n=0,m,s,flag=0;
    cin>>n>>m;
    int a[1001]={0};
    for(int i=0;i<m;i++){
        cin>>s;
        a[s]++;
    }
    for(int i=0;i<n;i++){
        for(int j=a[i+1];j>0;j--){
            if(flag==0){
                cout<<i+1;
                flag=1;
            }
            else{
                cout<<" "<<i+1;
            }
        }
    }
    
    
    //printf("%c",8);实际输出无效，只是打印看起来有效

    return 0;

}