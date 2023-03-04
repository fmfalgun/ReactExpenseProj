#include<bits/stdc++.h>
using namespace std;

void printingArray(int a[], int n){
    for(int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;
}

void reverseFunction(int a[], int start, int end){
    if(start <= end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        reverseFunction(a, start+1, end-1);
    }
}

int main(void){

    int t, n;
    cin >> t;
    while(t--){

        cin >> n;
        int a[n];

        for(int i=0; i<n; i++) cin >> a[i];
        cout << "Value entered : ";

        printingArray(a,n);
        reverseFunction(a, 0, n-1);

        cout << "Reverseb Values : ";
        printingArray(a,n);

    }

    return 0;
}