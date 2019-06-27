#include<iostream>
using namespace std;
int binarySearch(int arr[],int l,int r,int x)
{   int mid;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[mid]<x)
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
}
main()
{
    int n,x,ans;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter element to be searched for";
    cin>>x;
    ans=binarySearch(arr,0,n-1,x);
    if (ans==-1)
        cout<<"\nElement not found";
    else
        cout<<"Element found at position "<<ans+1;

}
