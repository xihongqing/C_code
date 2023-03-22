/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-22 10:39:20
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-22 18:35:00
 * @FilePath: /CProject/p1950/rectangle.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
#define N 1005
int main(){
    int n,m,ans=0;
    int high[N]={0};
    scanf("%d%d",&n,&m);
    char ch;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ch;
            if(ch=='.'){
                ++high[j];
            }
            else{
                high[j]=0;
            }
        }
        for(int j=0;j<m;j++){
                int now = high[j];
                for(int k=j;k<n;k++){
                    if(!high[k]){
                        break;
                    }
                    now = min(now,high[k]);
                    ans += now;
                }
        }

    }
    cout<<ans<<endl;
    return 0;
}