#include<iostream>
using namespace std;
int main ()
{
    int t,arr[1000],j=0,n,p=1;
    for (int i=0;i<1000;i++)
    {
        while (1)
    {
        if (p%3!=0&&p%10!=3){arr[i]= p;p++;break;}
        p++;
    }
    }
    cin>>t;
    for (int j=0;j<t;j++)
    {
        cin>>n;
        cout<<arr[n-1]<<"\n";

    }
    return 0;
}