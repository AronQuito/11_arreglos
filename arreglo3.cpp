#include "iostream"
using namespace std;
int main(){
    float TM[7];
    int p=0,k,DB,TA[7]={10,2,3,4,5,9,2},TB[7]={9,1,2,3,4,8,1};
    for (int i = 0; i<7; i++){
        TM[i] = static_cast<float>(TA[i]) / TB[i];
    }
    DB=TB[0];
    for (int i = 0; i < 6; i++){
        if (TB[i]<TB[i+1]){
            DB=TB[i+1];
        }
    }
    cin>>k;
    for (int i = 0; i < 7; i++){
        if (k==TA[i]){
            p=1;
            cout<<"temperatura max Coincide con el dia: "<<i+1<<endl;
        }
    }
    if (p==0)
    {
        cout<<"El valor introducido no coincide con ninguna temperatura maxima";
    }
    
    return 0;
}