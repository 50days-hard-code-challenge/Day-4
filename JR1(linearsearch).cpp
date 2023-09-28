#include<iostream>
#include<vector>
using namespace std;

int linearSearch(int n, int num, int arr[])
{
    // Write your code here.
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int num;
    cin>>num;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << linearSearch(n,num,arr);
    
}
