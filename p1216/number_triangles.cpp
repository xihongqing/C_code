/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-28 09:30:43
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-29 09:45:22
 * @FilePath: /CProject/p1216/number_triangles.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>

using namespace std;
//dp 问题
//转移条件：经过数字最大，从底向上
int main(){
    int r;
    cin>>r;
    int a[r+1][r+1];
    int dp[r+1][r+1];
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
            dp[i][j]=a[i][j];
        }
    }
    for(int i=r-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            dp[i][j]+=(dp[i+1][j]>dp[i+1][j+1])?dp[i+1][j]:dp[i+1][j+1];
        }
    }
    cout<<dp[1][1];
    return 0;
}