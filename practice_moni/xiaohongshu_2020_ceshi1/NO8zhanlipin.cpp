//倒卖战利品(NOTEND)
// Created by kirton on 2023/4/9.
//
#include "iostream"
using namespace std;
int main(){
    int N,X,H,sum,temp_x,temp_h;
    int x[10000],h[10000];
    cin>>N;
    sum=0;
    while(sum<N){
        cin>>X>>H;
        sum++;
        if(sum==1){
            x[sum-1]=X;
            h[sum-1]=H;
        }
        for(int i=sum-2;i>=0;i--){
            if(X<x[i] & H<h[i]){
                temp_x=x[i];
                temp_h=h[i];
                x[i]=X;
                h[i]=H;
                x[i+1]=temp_x;
                h[i+1]=temp_h;
            }else if(X<x[i] & H==h[i]){
                temp_x=x[i];
                temp_h=h[i];
                x[i]=X;
                h[i]=H;
                x[i+1]=temp_x;
                h[i+1]=temp_h;
            }else if(X==x[i] & H<h[i]){
                temp_x=x[i];
                temp_h=h[i];
                x[i]=X;
                h[i]=H;
                x[i+1]=temp_x;
                h[i+1]=temp_h;
            }else{
                x[sum-1]=X;
                h[sum-1]=H;
                continue;
            }
        }
    }
    int index=0;
    for(int j=0;j<sum;j++){
        if(x[j]<x[j+1] & h[j]<h[j+1]){
            index++;
        }else if(x[j]<x[j+1] & h[j]==h[j+1]){
            index++;
        }else if(x[j]==x[j+1] & h[j]<h[j+1]){
            index++;
        }
    }
    cout<<index+1<<endl;


}