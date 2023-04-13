//删除字符串
// Created by kirton on 2023/4/9.
//
#include <iostream>
#include "string.h"
#include <string>
using namespace std;
int main(){
    int k,len;
    char obj[100000],result[100000];
    //string objj;
    //string objj[100000];
    //cin>>objj;
    cin>>k;
    //gets(objj);
    cin>>obj;
    //cout<<obj<<endl;
    //cin>>obj;
    len=0;
    while(obj[len]!='\0'){
        len++;
    }
    //cout<<len<<endl;
    int re_index=0;
    int temp_k=k;
    int time=0;
    for(int i=0;i<len;i++){
        if(i==0){
            time=0;
            continue;
        }else{
            if(time==k){
                time=0;
                continue;
            }else{
                result[re_index]=obj[i];
                re_index++;
                time++;
            }

        }
    }
    for(int i=0;i<re_index;i++){
        cout<<result[i];
    }
    //cout<<len<<endl;

}