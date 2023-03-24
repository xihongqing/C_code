/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-23 09:37:41
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-23 19:34:59
 * @FilePath: /CProject/p2032/scan.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
//尝试维护一个单调栈
#include<deque>
using namespace std;
struct node{int v,id;}a[1000005];
int main(){
    int n,k,ans=0,m;
    cin>>n>>k;
    deque<node> qmax,qmin;
    for(int i=0;i<n;i++){
        cin>>m;
        a[i].v = m;
        a[i].id = i;
    }
    for(int i=0;i<n;i++){
        if(qmax.empty()||a[i].v<=qmax.back().v){
            qmax.push_back(a[i]);//入栈
        }
        else{
            while(!qmax.empty()&&a[i].v>qmax.back().v){
                qmax.pop_back();
            }
            qmax.push_back(a[i]);
            
        }
        if(qmax.front().id==i-k)qmax.pop_front();
        if(i+1>=k){
            cout<<qmax.front().v<<endl;
        }
        
    }

    return 0;
}