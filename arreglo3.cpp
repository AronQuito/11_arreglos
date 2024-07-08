#include "iostream"
using namespace std;
int main(){
    float TM[7];
    int p=0,k,DB,Tmax[7],Tmin[7];
    for (int i = 0; i <= 6; i++){
        cout<<"max "<<i+1<<": ";cin>>Tmax[i];
    }
    for (int i = 0; i <= 6; i++){
        cout<<"min "<<i+1<<": ";cin>>Tmin[i];
    }
    for (int i = 0; i<=6; i++){
        TM[i] = (static_cast<float>(Tmax[i]) + static_cast<float>(Tmin[i]))/2;
        cout<<TM[i]<<endl;
    }
    DB=Tmin[0];
    for (int i = 0; i < 6; i++){
        if (DB<Tmin[i+1]){
            DB=Tmin[i+1];
        }
    }
    cin>>k;
    for (int i = 0; i <= 6; i++){
        if (k==Tmax[i]){
            p++;
            cout<<"temperatura max Coincide con el dia: "<<i+1<<endl;
        }
    }
    if (p==0)
    {
        cout<<"El valor introducido no coincide con ninguna temperatura maxima";
    }
    
    return 0;
}
