//求数列的和
// Created by kirton on 2023/4/9.
//
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,m;
    double sum;
    while(cin>>n>>m){
        sum=0;
        while(m>0){
            sum=sum+sqrt(n);
            cout<<sum<<endl;
            n=sqrt(n);
            m--;
        }
        cout<<sum<<endl;
    }

}