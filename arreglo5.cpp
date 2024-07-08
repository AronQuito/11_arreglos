#include <iostream>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    string FP[n+1],PG[n+1],A[n+1];
    for (int i = 1; i <= n; i++){
        cout<<"Ingresa el estudiante de FP numero "<<i<<": "; cin>>FP[i];
    }
    for (int i = 1; i <= n; i++){
        cout<<"Ingresa el estudiante de PG numero "<<i<<": "; cin>>PG[i];
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (FP[i]==PG[j]){
                c++;
                A[c]=FP[i];
            } 
        } 
    }

    cout<<"Comunes: "<<c<<endl;
    for (int i = 1; i <= n; i++){  
        cout<<A[i]<<endl;
    }
    
    return 0;
}