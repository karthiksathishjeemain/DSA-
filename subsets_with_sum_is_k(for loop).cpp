
#include <bits/stdc++.h>
using namespace std;
void Calculate(int index, int target, vector<int> &arr, vector<int> &Small, vector<vector<int>> &Big)
{

   
    
        if (target == 0) {Big.push_back(Small);
        return;}

   for (int i=index;i<arr.size();i++){
    // if(i>index && arr[i]==arr[i-1])continue; Note: This is for unique array!!
    if(target>=arr[i]){//if(target<arr[i]) break; if the array was sorted initially then I would have written this!!
    Small.push_back(arr[i]);
    Calculate(i+1,target-arr[i],arr,Small,Big);
    Small.pop_back();}
   }
}
int main()
{
    vector<int> arr = {1, 3, 5, 6, 6, 2, 2, 7};
    vector<int> Small;
    vector<vector<int>> Big;
    int target = 8;
    Calculate(0, target, arr, Small, Big);
    for (const auto vec : Big)
    {
        cout << "[ ";
        for (const auto element : vec)
        {

            cout << element << " ";
        }
        cout << "]";
        cout << endl;
    }
    return 0;
}