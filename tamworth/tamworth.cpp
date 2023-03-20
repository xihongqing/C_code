/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-02-19 16:58:27
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-02-19 21:36:37
 * @FilePath: /CProject/tamworth/tamworth.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

int main(){
    char a[12][12]={0};
    int c_x,c_y;
    int f_x,f_y;
    int cd_x=-1,cd_y=0;
    int fd_x=-1,fd_y=0;
    int t=0;
    int ff_c=1;
    int ff_f=1;
    int fff_c=0;
    int fff_f=0;
    int s;
    int flag_c=0;
    int flag_f=0;
    int cx_0,cy_0;
    int fx_0,fy_0;
    int cdx_0,cdy_0;
    int fdx_0,fdy_0;
    cx_0=0;
    cy_0=0;
    fx_0=0;
    fy_0=0;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            cin>>a[i][j];
            if(a[i][j]=='C'){
                c_x=i;
                c_y=j;
            }
            if(a[i][j]=='F'){
                f_x=i;
                f_y=j;

            }
        }
    }
    for(t=0;;t++){
        if((a[c_x+cd_x][c_y+cd_y]=='*')||(a[c_x+cd_x][c_y+cd_y]==0)){
            s=cd_x;
            cd_x=cd_y;
            cd_y=-s;
            if(fff_c==10){
                cx_0=c_x;
                cy_0=c_y;
                cdx_0=cd_x;
                cdy_0=cd_y;
                fff_c++;
            }
            if(fff_c<10){
                fff_c++;
            }
        }
        else{
            c_x=c_x+cd_x;
            c_y=c_y+cd_y;
        }
        if((a[f_x+fd_x][f_y+fd_y]=='*')||(a[f_x+fd_x][f_y+fd_y]==0)){
            s=fd_x;
            fd_x=fd_y;
            fd_y=-s;
            if(fff_f==10){
                fx_0=f_x;
                fy_0=f_y;
                fdx_0=fd_x;
                fdy_0=fd_y;
                fff_f++;
            }            
            if(fff_f<10){
                fff_f++;
            }
        }
        else{
            f_x=f_x+fd_x;
            f_y=f_y+fd_y;
        }
        if((c_x==f_x)&&(c_y==f_y)){
            cout<<++t;
            return 0;
        }
        if((c_x==cx_0)&&(c_y==cy_0)&&(cd_x==cdx_0)&&(cd_y==cdy_0)){

            if(ff_c==10){
                flag_c=1;
            }
            if(ff_c<10){
                ff_c++;
            }

        }
        if((f_x==fx_0)&&(f_y==fy_0)&&(fd_x==fdx_0)&&(fd_y==fdy_0)){
            if(ff_f==10){
                flag_f=1;
            }
            if(ff_f<10){
                ff_f++;
            }

        }
        if((flag_c==1)&&(flag_f==1)){
            cout<<'0';
            return 0;
        }
    }
    cout<<'0';
    //移动方式相同，相差3分钟，则追不上

    return 0;
}