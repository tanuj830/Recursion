
#include <iostream>

using namespace std;
int sum = 0; // For my ease i take it as global(u can also pass this to parameters)
void SubsetSum(int arr[], int n, int i)
{
    
    if(i == n){
        cout << sum << " "; // i am just printing you can store that to vector also.
        return;
    }
    
    sum = sum + arr[i];
    SubsetSum(arr,n,i+1);
    sum = sum - arr[i];
    SubsetSum(arr,n,i+1);
}

int main()
{
int arr[] = {3,1,2};

SubsetSum(arr,3,0); // output: 0,1,2,3,3,4,5,6

    return 0;
}