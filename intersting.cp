#include<bits/stdc++.h>
using namespace std;
void solve (vector<int> shops, long long coin){
int index=upper_bound(shops.begin(),shops.end(),coin)-shops.begin();
        cout<<index<<endl;
}
int main(){
    long long n;
    cin>>n;
    vector<int> shops(n);
    for(int i=0;i<n;i++){
        cin>>shops[i];
    }
    sort(shops.begin(),shops.end());
    long long m,coin;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>coin;
        int index=upper_bound(shops.begin(),shops.end(),coin)-shops.begin();
        cout<<index<<endl;
    }

}