#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int main(){
    int first;
    int second;
    cout << "Entre first number: ";
    cin >> first;
    cout << "Entre the second number: ";
    cin >> second;
    
    int s = sum(first, second);
    cout << "Total: " << s;
    return 0;
}