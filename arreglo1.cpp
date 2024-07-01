#include "iostream"
using namespace std;
int main(){
    int n,s;
    float c=0;
    cin>>n;
    int A[n+1];
    for (int i = 1 ; i <= n; i++){
        cin>>A[i];
    }
    for (int i = 1; i <= n; i++){
        if (A[i]==0){
            c++;
        }else{
            s+=A[i];
        }
    }
    c=(c/n)*100;
    cout<<"Sumatoria: "<<s<<endl;
    cout<<"Porcentaje de ceros: "<<c<<"%";
    return 0;
}