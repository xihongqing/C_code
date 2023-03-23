/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-22 10:39:20
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-22 20:56:05
 * @FilePath: /CProject/p1950/rectangle.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
#define N 1005
int h[N][N], st[N], l[N], r[N], top=0, n, m;
char a[N][N];
long long ans;
inline void ddzl(int x){//直接计算出单调栈
    top = 0;
    for(int i=1;i<=m;i++){
        while(top && h[x][st[top]]>=h[x][i]){
            r[st[top--]] = i;//入右边的递减栈，存储编号
        }
        st[++top] = i;
    }
    while(top) r[st[top--]] = m+1;//没计算的均置为m+1
    for(int i=m;i>=1;--i){
        while(top && h[x][st[top]]>h[x][i]){
            l[st[top--]]=i;
        }
        st[++top] = i;
    }
    while(top) l[st[top--]]=0;
}



int main() {
	cin>>n>>m;
	for(int i = 1; i <= n; i++) scanf("%s", a[i] + 1);
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			if(a[i][j] == '*') h[i][j] = 0;
			else h[i][j] = h[i - 1][j] + 1;
		}
	}
	for(int i = 1; i <= n; i++) {
		ddzl(i);
		for(int j = 1; j <= m; j++) {
			ans += (j - l[j]) * (r[j] - j) * h[i][j];
		} 
	}
	cout << ans << '\n';
	return 0;
}
