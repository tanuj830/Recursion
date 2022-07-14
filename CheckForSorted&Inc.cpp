// Your task is to check for the array that it is sorted as well as strictly increasing or not.
#include <bits/stdc++.h>

using namespace std;

bool check(int arr[], int n, int elm, int i)
{
    if(i == n)   return true;
    
    if(elm >= arr[i])   return false;
    
    check(arr, n, arr[i], i+1);
}

int main()
{
    
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int min_elm = -1;

    cout << check(arr, n, min_elm, 0);
    
    return 0;
}

