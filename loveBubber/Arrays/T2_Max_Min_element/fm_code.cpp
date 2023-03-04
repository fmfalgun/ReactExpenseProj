#include<bits/stdc++.h>
using namespace std;

struct EndPoints{
    int max, min;
};

EndPoints MaxMin(int a[],int len){
    struct EndPoints temp;
    temp.max = INT_MIN;
    temp.min = INT_MAX;
    for(int i=0; i<len; i++){
        if(a[i]>temp.max) temp.max = a[i];
        if(a[i]<temp.min) temp.min = a[i];
    }
    return temp;
}

void printingArray(int a[], int len){
    for(int i=0; i<len; i++) cout << a[i] << " ";
    cout << endl;
}

int main(void){

    int t, n;
    cin >> t;

    while(t--){

        cin >> n;
        int a[n];

        for(int i=0; i<n; i++) cin >> a[i];
        cout << "Entered Value : ";
        printingArray(a, n);
        struct EndPoints result;
        result = MaxMin(a,n);
        cout << result.max << " " << result.min << endl;
    }

    return 0;
}