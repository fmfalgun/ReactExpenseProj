#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, n;
    cin >> t;
    while(t--){

        cin >> n;
        int rev[n], a[n];
        
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) rev[i] = a[n-i-1];
        
        for(int i=0; i<n; i++) cout << rev[i] << " ";
        cout << endl << endl;

    }

return 0;
}