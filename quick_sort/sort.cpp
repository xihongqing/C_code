/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-14 10:09:43
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-14 21:34:52
 * @FilePath: /CProject/quick_sort/sort.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
//简单的快速排序
void quick_sort(int a[], int left, int right){
    if(left<right){
        int i = left;
        int key = a[left];
        int j = right;
        for(;i<j;){
            int s1=0;
            int s2=0;
            while((a[j]>=key)&&(i<j)){
                j--;
            }
            while(a[i]<=key&&(i<j)){
                i++;
            }
            swap(a[j],a[i]);
        }
        swap(a[left],a[i]);
        quick_sort(a,left,j-1);
        quick_sort(a,j+1,right);
    }

}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<a[i];
        }
        else{
            cout<<" "<<a[i];
        }
    }
    cout<<endl;
    return 0;
}