#include<iostream>
using namespace std;
int honestcoach(int n,int str[]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(str[j]>str[j+1]){
                int sort = str[j];
                str[j]=str[j+1];
                str[j+1]=sort;
            }
        }
    }
    int min = str[1] - str[0];

    for(int i=2;i<n;i++){
        int diff = str[i] - str[i-1];
        if(diff < min){
            min = diff;
        }
    }   

    return min;
}

int main(){
    int t;
    cin>>t;
    int n;
    
    while(t--){
        cin>>n;

        int str[n];

        for(int i=0; i < n; i++){
            cin>> str[i];
        }

        int min= honestcoach(n, str);
        cout<< min<< endl;
    }

    return 0;
}