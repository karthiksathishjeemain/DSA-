#include<bits/stdc++.h>
using namespace std;
int calculate_ways(vector<int>&dop,int index){
 
if (index==0)return 1;
if(index==1)return 1;
if( dop[index]!=-1)return dop[index];
int left =calculate_ways(dop,index-1);
int right =calculate_ways(dop,index-2);
return dop[index]=left+right;
}
int main(){
    
    int no_of_steps=2;
    vector<int>dop(no_of_steps+1,-1);
   int no_of_ways =calculate_ways(dop,no_of_steps);
   cout<<no_of_ways;

    return 0;
}