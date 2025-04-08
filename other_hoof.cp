#include <iostream>
using namespace std;
int main() {
   
    int A[5],count=0;
    cin>>A[0]>>A[1]>>A[2]>>A[3];
    for (int i=0;i<4;i++)
    {
        if (A[i]!=0){
            for(int j=i+1;j<4;j++){
                if (A[i]==A[j]){
                    A[j]=0;
                }
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        if(A[i]==0){
            count++;
        }
    }
    cout<<count;
   
    return 0;
}