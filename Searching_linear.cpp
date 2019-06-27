#include<iostream>
using namespace std;
main()
{   int n,x,pos=-1;
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
    for(int i=0;i<n;i++)
    {
        if (arr[i]==x)
           {pos=i+1;
            cout<<"\nElement found at position "<<pos;}
    }
    if(pos==-1)
        cout<<"\nElement not found";

}
