//Note: If all subsets required , then just remove set;
#include <bits/stdc++.h>
using namespace std;
void Calculate(int index,vector<int>&arr,vector<int>&Small,set<vector<int>>&Big){
   Big.insert(Small);
   if (index==arr.size()){
    return;
   }
   Small.push_back(arr[index]);
   Calculate(index+1,arr,Small,Big);

   Small.pop_back();
   Calculate(index+1,arr,Small,Big);

}
int main()
{   
vector<int>arr={1,3,5,6,6,7};
vector<int>Small;
set<vector<int>>Big;
Calculate(0,arr,Small,Big);
for(const auto vec : Big){
    cout<<"[ ";
    for (const auto element: vec){

        cout<<element<<" ";
    
    }
    cout<<"]";
    cout<<endl;
}
    return 0;
}