#include<bits/stdc++.h>
using namespace std;

struct MaxMin{
    int max, min;
}

MaxMin Pair(int a[], int len){
    struct MaxMin maxmin;
    if(len == 1){
        maxmin.max = a[0];
        maxmin.min = a[0];
    } 
    else if(len == 2){
        if(a[0] > a[1]){
            maxmin.max = a[0];
            maxmin.min = a[1];
        }
        else{
            maxmin.max = a[1];
            maxmin.min = a[0];
        }
    }
    else{
    









































































































    
    }
}

int main(void){



    return 0;
}