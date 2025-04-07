#include<iostream>
using namespace std;

int evenlyDivides(int n){
    int count = 0;
    int temp = n;
    while(temp > 0){
        int digit = temp%10;
        if(digit != 0 && n%digit==0){
            count++;
        }
        temp = temp/10;
    }
    return count;
}

int main (){
    cout<< evenlyDivides(12)<<endl;
    return 0;
}