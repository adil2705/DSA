#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.

    for(int i=0; i <=n-1; i++){
        int min= i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[min])
            min=j;
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
