#include <iostream>
#include <stdio.h>
using namespace std;

void trace(int a[], int n){
    for(int i=0; i<n;i++){
        if(i>0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
}

void InsertionSort(int a[], int n){
    for(int i=1;i<n;i++){
        int v = a[i];
        int j = i-1;
        while(j>=0 && a[j] > v){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = v;
        trace(a, n);
    }
}

int main() {
    int n;
    int a[110];
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    InsertionSort(a,n);
    return 0;
}