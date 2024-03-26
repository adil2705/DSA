#include <iostream>
using namespace std;
int getAllNegative(int arr[],int n){
  int i =0;
  int start=i;
  int end =n-1;
  while (i!=end){
    if(arr[i]<0){
      int temp=arr[start];
      arr[start]=arr[i];
      arr[i]=temp;
      start++;
      i++;
    }
    else{
      int temp=arr[end];
      arr[end]=arr[i];
      arr[i]=temp;
      end--;
    }
  }
  return 0;
}

int main() {
  int arr[7]={-1,-5,-2,0,1,9,10};
  int n=7;
  getAllNegative(arr,n);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  
}
