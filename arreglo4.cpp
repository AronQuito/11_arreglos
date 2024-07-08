#include "iostream"
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int A[n+1];
    for (int i = 1; i <= n; i++){
        A[i]=i*x;
    }
    for (int i = 1; i <= n; i++){
        cout<<A[i]<<" ";
    }

    return 0;
}

