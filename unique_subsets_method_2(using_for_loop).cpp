#include <bits/stdc++.h>
using namespace std;
void Calculate(int index,vector<int>&arr,vector<int>&Small,vector<vector<int>>&Big){
Big.push_back(Small);
 
    for (int i= index;i<arr.size();i++){
        if (i>index&& arr[i]==arr[i-1])continue;
        Small.push_back(arr[i]);
        Calculate(i+1,arr,Small,Big);
        Small.pop_back();
    }
}
int main()
{   
vector<int>arr={1,3,5,6,6,7};
vector<int>Small;
vector<vector<int>>Big;
Calculate(0,arr,Small,Big);
for(const auto vec : Big){
    cout<<"[ ";
    for (const auto element: vec){
        cout<<element<<" ";
    }
    cout<<"]"<<endl;
}
    return 0;
}