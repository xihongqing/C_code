/*
 * @Author: HongqingXi xiacrossthesea@gmail.com
 * @Date: 2023-03-22 21:39:22
 * @LastEditors: HongqingXi xiacrossthesea@gmail.com
 * @LastEditTime: 2023-03-23 10:12:12
 * @FilePath: /CProject/warehouse/warehouse.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//递归栈构建
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(5);
    s.push(6);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}