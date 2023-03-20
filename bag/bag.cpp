/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-13 16:49:03
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-13 18:13:24
 * @FilePath: /CProject/bag/bag.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
#include<queue>

void bubble_sort(double a[][2], int m){
    double s=0;
    for(int i=0;i<m-1;i++){
        for(int j=0;j<m-i-1;j++){
            if(a[j][1]>a[j+1][1]){
                s = a[j+1][1];
                a[j+1][1] = a[j][1];
                a[j][1] = s;
                s = a[j+1][0];
                a[j+1][0] = a[j][0];
                a[j][0] = s;
            }
        }
    }
}
int main(){
    int n,t;
    cin>>n>>t;
    double a[n][2];
    double s=0;
    void bubble_sort(double a[][2], int m);
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
        a[i][1]=a[i][1]/a[i][0];
    }
    bubble_sort(a,n);
    for(int i=n-1;i>=0;i--){
        if(t-a[i][0]>0){
            t = t-a[i][0];
            s += a[i][0]*a[i][1];
        }
        else{
            s += t*a[i][1];
            break;
        }
    }
    printf("%.2f",s);
    return 0;
}