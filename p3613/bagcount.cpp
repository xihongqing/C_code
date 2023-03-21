/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-20 09:45:08
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-21 10:12:31
 * @FilePath: /CProject/p3613/bagcount.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

int main(){
    //
    int n,q;
    int sign,flag;
    cin>>n>>q;
    int a[q][3];
    int l=0;
    int m[q];
    for(int i=0,j=0;i<q;i++){
        cin>>sign;
        if(sign==1){
            int x,y,z;
            cin>>x>>y>>z;
            a[j][0]=x;
            a[j][1]=y;
            a[j++][2]=z;
        }
        if(sign==2){
            int x,y,k;
            cin>>x>>y;
            flag=0;
            for(k=0;k<j;k++){
                if((a[k][0]==x)&&(a[k][1]==y)){
                    m[l++]=a[k][2];
                    flag=1;
                    cout<<a[k][2]<<endl;
                    break;
                }
            }
            if(flag==0){
                m[l++]=0;
            }
        }
    }

    
    return 0;
}