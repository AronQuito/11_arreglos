#include "iostream"
using namespace std;
int main(){
    int n, a1=0,a2=0;
    cin>>n;
    int A[n+1],P[n+1],I[n+1];
    for (int i =1; i <= n; i++){
        cin>>A[i];
    }
    for (int i = 1; i <=n; i++){
        if (A[i]%2==0){
            a1++;
            P[a1]=A[i];
        }else{
            a2++;
            I[a2]=A[i];
        }
    }
    for (int i =1; i <= a1; i++){
        cout<<P[i]<<" ";
    }
    cout<<endl;
    for (int i =1; i <= a2; i++){
        cout<<I[i]<<" ";
    }
    
}