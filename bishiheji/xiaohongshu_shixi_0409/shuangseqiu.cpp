//双色球
// Created by kirton on 2023/4/9.
//
#include <iostream>
using namespace std;
int main(){
    int n,m,temp,result,quchu;//有几个球,几次操作
    temp=result=0;
    int mark[10000],time[10000],result_shuzu[10000],whatdo[10000],status[10000],status_time[10000],status_hong[10000];
    char color[10000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>mark[i];
        status[i]=0;
        status_time[i]=0;
    }
    cin>>color;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>time[i];
    }
    for(int i=0;i<m;i++){
        cin>>whatdo[i];
    }
    for(int index=0;index<m;index++){
        int temp_result=0;
        if(whatdo[index]>0){//放入了编号为whatdo[index]的球
            //cout<<"放入"<<whatdo[index]<<endl;
            if(color[whatdo[index]-1]=='R'){
                status_hong[whatdo[index]-1]=1;
            }else{
                status_hong[whatdo[index]-1]=0;
            }
            status[whatdo[index]-1]=1;//球在内
            status_time[whatdo[index]-1]=time[index];
        }else if(whatdo[index]==0){//查询
            for(int i=0;i<=n;i++){//更新mark
                if(status[i]==1){
                    //cout<<"cunzai:"<<i<<endl;
                    if(status_hong[i]==1){//是红球
                        temp_result=temp_result+mark[i]+(time[index]-status_time[i]);
                    }else{
                        temp_result=temp_result+mark[i]-(time[index]-status_time[i]);
                    }
                }else{
                    continue;
                }
            }
            result_shuzu[result]=temp_result;
            result++;

            //cout<<result<<endl;
        }else if(whatdo[index]<0){//取出编号quchu的球
            quchu=0-whatdo[index];
            //cout<<"quhcu"<<quchu<<endl;
            status[quchu-1]=0;
            status_time[quchu-1]=0;
        }
    }
    cout<<result;
    for(int i=0;i<result;i++){
        cout<<result_shuzu[i];
    }

}