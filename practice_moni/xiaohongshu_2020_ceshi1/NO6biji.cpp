//笔记草稿
// Created by kirton on 2023/4/9.
//
#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;
int main(){
    char biji[100000],output[100000];
    cin>>biji;
    int len=0,i=0;
    while(biji[i]!='\0'){
        i++;
        len++;
    }
    //cout<<len<<endl;
    i=0;
    int temp=0,duo=0;
    for(int j=0;j<len;j++){
        if(biji[j] == '('){
            if(temp==1){
                duo=duo+1;
            }
            temp=1;
            continue;
        }else if(biji[j] == ')'){
            if(duo != 0){
                duo--;
                continue;
            }else{
                temp=0;
            }

            continue;
        }else if(temp == 1){
            continue;
        }else if(biji[j] == '<'){
            i--;
            output[i]='\0';
        }else{
            output[i]=biji[j];
            i++;
        }
    }
    cout<<output<<endl;
}