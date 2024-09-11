#include<iostream>
using namespace std;


int summing(int n){

    int sum = 0;

    for (int i =1; i*i <= n; i++){

        if (n % i == 0){

            sum = sum + i;

            if((n / i) != i){

                sum = sum + (n / i);
            }
        }
    }
    return sum;
}



int main(){

int n ;
cout<<"enter number : "<<endl;
cin>>n;

cout<<"afetr the summing : "<<summing(n)<<endl;
return 0;
}