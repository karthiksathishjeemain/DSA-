#include<bits/stdc++.h>
using namespace std;
void calculate_ways(int sum,int  &no_of_ways, int no_of_steps){
    if (sum==no_of_steps)
{
    no_of_ways+=1;
    return;
}  
// if(sum>no_of_steps) {
//     return;
// }
 for (int i=1;i<=2;i++){
     sum+=i;
     if (sum>no_of_steps) break;
     calculate_ways(sum,no_of_ways,no_of_steps);
     sum-=i;
    }
}
int main(){
    int no_of_ways=0;
    int no_of_steps=2;
   calculate_ways(0,no_of_ways,4);
   cout<<no_of_ways;
    return 0;
}