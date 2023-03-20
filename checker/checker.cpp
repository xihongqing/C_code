/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-13 18:16:20
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-13 19:33:39
 * @FilePath: /CProject/checker/checker.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
int total = 0;

bool place_ok(int a[], int n){
    for(int i=0;i<n;i++){
        if((abs(a[i]-a[n])==n-i)||(a[i]==a[n])){
            return false;
        }
    }
    return true;
}

void queue_check(int a[], int k, int n){
    if(k>=n){
        if(total<3){
            for(int i=0;i<n-1;i++){
                cout<<a[i]+1<<" ";
            }
            cout<<a[n-1]+1<<endl;
        }
        total++;
    }
    else{
        for(int i=0;i<n;i++){
            a[k]=i;
            if(place_ok(a,k)==1){
                queue_check(a,k+1,n);
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    int a[14];
    queue_check(a,0,n);
    cout<<total;
    return 0;
}