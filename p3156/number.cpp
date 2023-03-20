/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-20 09:28:21
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-20 09:44:05
 * @FilePath: /CProject/p3156/number.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<m;i++){
        if(i!=0){
            cout<<endl;
        }
        cout<<a[b[i]-1];
    }
    return 0;
}