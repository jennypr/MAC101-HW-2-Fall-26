#include <iostream>
using namespace std;

int main(){

    int number;
    cout<< "Enter A number"<< endl;
    cin >> number; 
 
    if((number %3 ==0 ) && (number %5==00)&&(number!=0)){
     cout<< "FizzBuzz";
    }

    else if(number%3==0 && number!=0){
        cout<< "Fizz" << endl;
        
    } else if (number%5==0 && number!=0){
        cout<<"Buzz"<<endl;
    } 
   
    else {
        cout<< number;
    }
     
return 0;
}
