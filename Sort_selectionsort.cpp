#include<iostream>
using namespace std;
main()
{

    int ar[]= {100,23,87,405,5,45,266,53,1,15};
    int n=10,small,pos;

    for(int i=0;i<=n-2;i++)
    {   small=ar[i];
        for(int j=i+1;j<n;j++)
        {
            if(ar[j]<small)
            {
                small=ar[j];
                pos=j;
            }

        }
        ar[pos]=ar[i];
        ar[i]=small;
    }
    cout<<"\nSorted array is:\n";
   for(int i=0;i<n;i++)
        cout<<ar[i]<<"\t";
}
