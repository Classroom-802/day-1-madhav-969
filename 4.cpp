#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any number:";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    cout<<"Sum of odd numbers:"<<sum;
}