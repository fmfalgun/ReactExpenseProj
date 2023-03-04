#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        int max, min;

        if(n==1){
            max = a[0];
            min = a[0];
        }
        else{
            if(a[0]>a[1]){
                max = a[0];
                min = a[1];
            }
            else{
                max = a[1];
                min = a[0];
            }

            for(int i=2; i<n; i++){
                if(max < a[i]) max = a[i];
                if(min > a[i]) min = a[i];
            }
        }

        cout << max << " " << min << endl;
    }
}