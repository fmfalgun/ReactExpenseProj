#include<bits/stdc++.h>
using namespace std;

void reverseFunction (int a[], int len){

    int start = 0, end = len-1;
    while(start < end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

void printingArray(int a[], int len){
    for(int i=0; i<len; i++)
    cout << a[i] << " ";
    cout << endl;
}

int main(void){

    int t, n;
    cin >> t;
    while(t--){

        cin >> n;
        int a[n];

        for (int i=0; i<n; i++) cin >> a[i];
        cout << "Value entered : ";

        printingArray(a, n);
        reverseFunction(a, n);

        cout << "Reversed Value : ";
        printingArray(a, n);

    }

    return 0;
}