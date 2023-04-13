//平衡树
// Created by kirton on 2023/4/9.
//
#include <iostream>
using namespace std;
int main(){
    int n,m,temp_ss,temp_tt,output_result,output_type,temp;
    output_type=temp=0;
    output_result=100000;
    int ss[10000],tt[10000],T1[10000],T2[10000];
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>ss[i]>>tt[i];
    }
    for(m=0;m<n-1;m++){
        temp_ss=ss[m];
        temp_tt=tt[m];
        ss[m]=tt[m]=0;//删掉某一边了
        int baocun=0;
        int A=0,B=0;
        for(int index=0;index<n-1;index++){
            if(index==0){//如果是第一次
                if(ss[index]!=0){
                    T1[baocun]=ss[index];
                    T1[baocun+1]=tt[index];
                    baocun=baocun+2;
                    A=A+2;
                }else{
                    continue;
                }
            }else{//如果是第二行开始
                if(ss[index]!=0){//如果有数据，开始查是否在T1
                    for(int iii=0;iii<=baocun;iii++){
                        if(ss[index]==T1[iii]){
                            T1[baocun]=ss[index];
                            T1[baocun+1]=tt[index];
                            baocun=baocun+2;
                            A=A+1;
                        }else{
                            B=B+2;
                        }
                    }
                }else{
                    continue;
                }
            }
            temp=A-B;
            if(temp < 0){
                temp=0-temp;
            }
            if(temp==output_result){
                output_type++;
            }
            if(temp<output_result){
                output_result=temp;
                output_type=0;
            }
        }
        ss[m]=temp_ss;
        tt[m]=temp_tt;


    }
    cout<<output_result-1;
    cout<<output_type+1;

}