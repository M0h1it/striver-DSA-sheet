#include<iostream>
using namespace std;


int isPalindrome(int n ){
    int reversed = 0;
    int original = n;
    while(n>0){
        int digit = n%10;
        reversed = reversed*10+digit;
        n=n/10;
    }
    if(original== reversed){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isPalindrome(n)){
        cout << n << " is a palindrome." << endl;
    }
    else{
        cout << n << " is not a palindrome." << endl;
    }
    return 0 ;

}