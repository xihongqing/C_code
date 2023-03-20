/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-02-24 09:37:59
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-02-24 11:00:24
 * @FilePath: /CProject/p1065/homework.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int a[2*n];
    int b[n][2];
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i][0]>>b[i][1];
    }


    return 0;
}