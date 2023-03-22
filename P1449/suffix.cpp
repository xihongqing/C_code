/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-21 10:44:34
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-22 10:31:37
 * @FilePath: /CProject/P1449/suffix.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>

using namespace std;
int main(){
    char ch;
    long int num[60];
    ch = getchar();
    int i=0,j=0,s=0;
    for(;ch != '@';){
        if(ch!='.'){
            if(ch >= '0' && ch <= '9'){
                s = 10 * s + (ch-'0');
            }
            else{

                if(ch == '-'){
                    num[i] = num[i-2] - num[i-1];
                }
                if(ch == '+'){
                    num[i] = num[i-2] + num[i-1];
                }
                if(ch == '*'){
                    num[i] = num[i-2] * num[i-1];
                }
                if(ch == '/'){
                    num[i] = num[i-2] / num[i-1];
                }
                num[i-2]=num[i];
                i=i-1;
            }
        }
        else{
            num[i++]=s;
            s=0;
        }
        ch = getchar();
    }
    cout<<num[i-1];
    return 0;
}