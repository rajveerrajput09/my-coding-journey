#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    cout << v[0] << v[1] << v[2] << endl ;
    cout << v.size() << endl;
    v.pop_back();
    
    // let's see now the new size
    
    cout << v.size() << endl;
    
    // Create an vector like this [-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1]
    vector<int> a(10,-1) ;
    return 0;
}