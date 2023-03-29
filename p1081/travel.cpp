/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-24 09:34:16
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-27 21:23:15
 * @FilePath: /CProject/p1081/travel.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>

using namespace std;

int main(){
    int n,x0,m;
    cin>>n;
    int a[n];
    int dis_a[n][2],dis_b[n][2];
    int b[n][2];
    int ans=0;
    double s=1000;
    //设定邻接矩阵定义距离？
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x0>>m;//总路程超过x0则停止旅行
    for(int i=0;i<n-2;i++){
        dis_a[i][0]=i+1;
        dis_a[i][1]=abs(a[i]-a[i+1]);
        dis_b[i][0]=i+1;
        dis_b[i][1]=abs(a[i]-a[i+1]);
        for(int j=i+2;j<n;j++){
            if(abs(a[i]-a[j])<dis_b[i][1]){
                dis_b[i][0]=j;
                dis_b[i][1]=abs(a[i]-a[j]);
            }
            if(abs(a[i]-a[j])==dis_b[i][1]){
                if(a[j]<a[i]){
                    dis_b[i][0]=j;
                    dis_b[i][1]=abs(a[i]-a[j]);
                }
            }
        }
        if(dis_b[i][0]==dis_a[i][0]){
            dis_a[i][0]=dis_b[i][0]+1;
            dis_a[i][1]=abs(a[dis_b[i][0]+1]-a[i]);
        }
        for(int j=i+2;j<n;j++){
            if((abs(a[i]-a[j])>dis_b[i][1])&&(abs(a[i]-a[j])<dis_a[i][1])){
                dis_a[i][0]=j;
                dis_a[i][1]=abs(a[i]-a[j]);
            }
            if((abs(a[i]-a[j])==dis_b[i][1])&&(j!=dis_b[i][0])&&(a[j]>a[dis_b[i][0]])){
                dis_a[i][0]=j;
                dis_a[i][1]=abs(a[i]-a[j]);
            }
            if((abs(a[i]-a[j])>dis_b[i][1])&&(abs(a[i]-a[j])==dis_a[i][1])){
                if(a[j]<a[dis_a[i][0]]){
                    dis_a[i][0]=j;
                    dis_a[i][1]=abs(a[i]-a[j]);
                }
            }
        }
    }
    dis_b[n-2][0] = n-1;
    dis_b[n-2][1] = abs(a[n-2]-a[n-1]);
    dis_a[n-2][0] = n-1;//此时找不到次二大的参数
    dis_a[n-2][1] = x0+1;

    dis_a[n-1][1] = x0+1;
    dis_b[n-1][1] = x0+1;

    // for(int i=0;i<n;i++){
    //     cout<<dis_b[i][0]<<" "<<dis_b[i][1]<<endl;
    // }

    for(int i=0;i<m;i++){
        cin>>b[i][0]>>b[i][1];
    }
    for(int i=0;i<n;i++){
        double d_a=0,d_b=0,flag=0;
        for(int j=i;(j<n)&&((d_a+d_b)<=x0);){
            if(flag==0){
                if(d_a+d_b+dis_a[j][1]>x0){
                    break;
                }
                d_a+=dis_a[j][1];
                j=dis_a[j][0];
                flag=1;
            }
            if(flag==1){
                if(d_a+d_b+dis_b[j][1]>x0){
                    break;
                }
                d_b+=dis_b[j][1];
                j=dis_b[j][0];
                flag=0;
            }
        }
        //cout<<d_a<<" "<<d_b<<endl;
        if(d_b==0.0){
            if(d_a==0.0){
                if(s>1){
                    s=1;
                    ans=i;
                }
            }
            else{

            }
        }
        else{
            if((d_a/d_b)<s){
                s=d_a/d_b;
                ans=i;
            }
        }
    }
    cout<<ans+1<<endl;
    for(int i=0;i<n;i++){
        double d_a=0,d_b=0,flag=0;
        for(int j=i;(j<n)&&((d_a+d_b)<=x0);){
            if(flag==0){
                if(d_a+d_b+dis_a[j][1]>x0){
                    break;
                }
                d_a+=dis_a[j][1];
                j=dis_a[j][0];
                flag=1;
            }
            if(flag==1){
                if(d_a+d_b+dis_b[j][1]>x0){
                    break;
                }
                d_b+=dis_b[j][1];
                j=dis_b[j][0];
                flag=0;
            }
        }
        cout<<d_a<<" "<<d_b<<endl;
        if(d_b==0.0){
            if(d_a==0.0){
                if(s>1){
                    s=1;
                    ans=i;
                }
            }
            else{

            }
        }
        else{
            if((d_a/d_b)<s){
                s=d_a/d_b;
                ans=i;
            }
        }
    }
    return 0;
}