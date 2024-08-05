#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n,q,k,temp,q_1,q_2;
    
    cin>>n>>q;
    vector<int> v[n];
    
    for(int n_ind = 0; n_ind<n; n_ind++){
        cin>>k;
        while(k--){
            cin>>temp;
            v[n_ind].push_back(temp);
        }   
    }
    
    for(int q_ind=0; q_ind<q; q_ind++){
        cin>>q_1>>q_2;
        cout<<v[q_1].at(q_2)<<endl;;
    }
    
    return 0;
}