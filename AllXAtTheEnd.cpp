
#include <bits/stdc++.h>

using namespace std;

void allXAtEnd(string nums, int n, int i, string &newStr)
{
    if(i == n)   return;
    
    if(nums[i] != 'x')
    newStr.push_back(nums[i]);
    
    allXAtEnd(nums,n,i+1, newStr);
    
    
}

int main()
{
    
    string nums = "xxaxbcxxd";
    string newStr;
    
    allXAtEnd(nums, nums.size(), 0, newStr);
    
    int n = nums.size()- newStr.size();
    
    // adding rest all x's at the end
    for(int i=0;i<n;i++)
    newStr.push_back('x');
    
    cout << newStr;  // output: abcdxxxxx
    
    return 0;
}

