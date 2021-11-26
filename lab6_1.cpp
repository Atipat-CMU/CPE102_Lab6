#include<iostream>
using namespace std;

int main(){
    
    int userInt = 1, countOdd = 0, countEven = 0;
    while(userInt != 0){
        cout << "Enter an integer: ";
        cin >> userInt;
        
        if(userInt != 0){
            if(userInt%2 == 0){
                countEven++;
            }else{
                countOdd++;
            }
        }
    }
    cout << "#Even numbers = " << countEven << endl;
    cout << "#Odd numbers = " << countOdd << endl;

    return 0;
}
