#include<iostream>
#include <climits>
using namespace std;

int reverseint(int n ){
    int rev = 0;
    while(n>0){
        int digit = n%10;
        n=n/10;

        if(rev > INT_MAX / 10|| rev == INT_MAX/10 && digit>7) return 0;
        if(rev < INT_MIN / 10|| rev == INT_MIN/10 && digit<-8) return 0;
        rev = rev*10+digit;
    }
    return rev ;
}
int main(){
    reverseint(7789);
    // cout<<reverseint(123)<<endl;
    return 0;
}