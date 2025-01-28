Example :
Input 1:
5
6 2 8 4 10
Sample Output 1:
2 4 6 8 10
  
#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
 
 for ( int i = 0; i<n-1;i++){
  int min = i;
  for (int j =i+1;j < n; j++){

    if(arr[j] < arr[min] ){
      min = j;

    }
    

    }
   if (min != i ){
   
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;


  }
 }    
}
