/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-23 19:25:01
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-23 20:56:48
 * @FilePath: /CProject/p1440/m_range_min.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
#include<deque>
struct node{int id,v;}a[30000000];
deque<node> qmin;
int main(){
    int n,m;
    cin>>n>>m;
    int s;
    a[0].v = 0;
    a[0].id = 0;
    for(int i=1;i<=n;i++){
        scanf("%d",&s);
        a[i].v = s;
        a[i].id = i;
    }
    cout<<0<<endl;
    for(int i=1;i<n;i++){
        if(qmin.empty()||a[i].v>qmin.back().v){
            qmin.push_back(a[i]);
        }
        else{
            while(!qmin.empty()&&a[i].v<qmin.back().v){
                qmin.pop_back();
            }
            qmin.push_back(a[i]);
        }
        if(qmin.front().id==i-m){
            qmin.pop_front();
        }
        printf("%d\n",qmin.front().v);
    }
    return 0;
}