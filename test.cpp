#include<iostream>
using namespace std;
int main()
{
    //Prime number
    // int n;
    // cout << "Enter Value of n : ";
    // cin >> n;
    // bool isprime = true;

    // for(int i=2;i<=n-1;i++){
    //     if(n%i==0){
    //         isprime = false;
    //         break;
    //     }
    // }
    // if (isprime==true)
    // {
    //     cout << "Prime number \n" << n;
    // }
    // else{
    //     cout << "Not at prime" <<  endl;
    // }
    
    int n;
    int fact = 1;

    cout << "Enter Value of n : ";
    cin >> n;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    cout << fact;


}