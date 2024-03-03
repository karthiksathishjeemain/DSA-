#include <bits/stdc++.h>
using namespace std;
void Calculate(int index,int target, vector<int>arr,vector<int>chotu,vector<vector<int>>& Big){
    if (index ==arr.size()){
       if (target ==0)Big.push_back(chotu);
       return;
    }
    if (arr[index]<=target){
        chotu.push_back(arr[index]);
        Calculate(index+1,target-arr[index],arr,chotu,Big);
        chotu.pop_back();
    }
    Calculate(index+1,target,arr,chotu,Big);
}
int main()
{   
    vector<int>arr={1,4,5,6,9,3};
    vector<vector<int>>Big;
    vector<int>chotu;
    Calculate(0,9,arr,chotu,Big);
     for (size_t i = 0; i < Big.size(); ++i) {
        for (size_t j = 0; j < Big[i].size(); ++j) {
            std::cout << Big[i][j] << " ";
        }
        std::cout << std::endl;
    }

        return 0;
}