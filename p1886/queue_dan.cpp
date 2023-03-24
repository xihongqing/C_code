/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-23 20:31:42
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-23 21:17:43
 * @FilePath: /CProject/p1886/queue_dan.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
#include<deque>
struct node{int id,v;}a[10000006];
deque<node> qmin,qmax;
int main(){
    int n,k;
    cin>>n>>k;
    int s;
    for(int i=0;i<n;i++){
        scanf("%d",&s);
        a[i].v = s;
        a[i].id = i;
    }
    for(int i=0;i<n;i++){
        if(qmin.empty()||a[i].v>=qmin.back().v){
            qmin.push_back(a[i]);
        }
        else{
            while(!qmin.empty()&&a[i].v<qmin.back().v){
                qmin.pop_back();
            }
            qmin.push_back(a[i]);
        }
        if(qmin.front().id==i-k){
            qmin.pop_front();
        }
        if(i==k-1){
            printf("%d",qmin.front().v);
        }
        if(i>k-1){
            printf(" %d",qmin.front().v);
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        if(qmax.empty()||a[i].v<=qmax.back().v){
            qmax.push_back(a[i]);
        }
        else{
            while(!qmax.empty()&&a[i].v>qmax.back().v){
                qmax.pop_back();
            }
            qmax.push_back(a[i]);
        }
        if(qmax.front().id==i-k){
            qmax.pop_front();
        }
        if(i==k-1){
            printf("%d",qmax.front().v);
        }
        if(i>k-1){
            printf(" %d",qmax.front().v);
        }
    }
    return 0;

}