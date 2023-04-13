//跳格子游戏
// Created by kirton on 2023/4/8.
//
#include <iostream>

using namespace std;
int jump(int n){
    if(n<=3){
        return n;
    }else{
        return jump(n-1) + jump(n-2);
    }
}
int main(){
    int n,output,now,a;
    cin>>n;
    cout<<jump(n)<<endl;

}
