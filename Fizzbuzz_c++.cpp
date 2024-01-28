//*Fizzbuzz in C++


#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

vector<string> metod(int num,vector<string>resenje){
    for (int i = 1; i < num; i++)
    {
        if (i%15==0)
        {
            resenje.push_back("FizzBuzz");
        }   else if (i%3==0)
        {
            resenje.push_back("Fizz");
        }   else if (i%5==0)
        {
            resenje.push_back("Buzz");
        }   else {
            resenje.push_back(to_string(i));
        }
    }
    

    return resenje;
}


int main(){
    vector<string>resenje;
    int num =0;
    std::cout << "Enter number: ";
    std::cin >> num;
    resenje = metod(num,resenje);
    for (string& str: resenje){
        std::cout<< str << ' ';
    }
    
    
    std::cout << "\n" "DONE";
    
    return 0;
}
