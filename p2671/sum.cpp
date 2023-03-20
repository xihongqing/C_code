/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-16 15:52:40
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-17 13:29:42
 * @FilePath: /CProject/p2671/sum.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
//前缀和相关问题
int main(){
    int n,m;
    cin>>n>>m;
    int s[100005][2]={0},x[100005]={0},y[100005]={0},n_b[100005][2]={0};
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>x[i];
    }
    for(int i=1;i<=n;i++){
        cin>>y[i];
        s[y[i]][i%2]++;
        n_b[y[i]][i%2] = (n_b[y[i]][i%2] + x[i])%10007;
    } 
    for(int i=1;i<=n;i++){
        ans = (ans + i*((s[y[i]][i%2]-2)*x[i]%10007 + n_b[y[i]][i%2]))%10007;
    }
    cout<<ans;
    return 0;

}