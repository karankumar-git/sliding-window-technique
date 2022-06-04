
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int k ; cin>>k;
    int i = 0; 
    int j = 0;
    vector<int> ans;
    list<int> s;

    while(j<n){
        //include
        if(arr[j]<0){
            s.push_back(arr[j]);
        }

        if((j-i+1)<k){
            j++;
        }
        else if((j-i+1)==k){
            //answer
            if(s.empty()){
                ans.push_back(0);
            }
            else{
                ans.push_back(s.front());
            }
            //declude
            if(arr[i]<0){
                s.remove(arr[i]);
            }

            //increment window
            i++;
            j++;
        }
    }
    for(int x: ans){
        cout<<x<<" ";
    }
	return 0;
}