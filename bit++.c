#include<iostream>
using namespace std;
int main()
{
    char str[10];
    int t=0,n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>str;
        if (str[1]=='+'){t++;}
        else{t--;}
    }
    cout<<t;
    return 0;
}