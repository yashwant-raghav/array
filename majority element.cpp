#include <iostream>
using namespace std;
int main(){
    int n;
 cout<<"enter the size of array ";
 cin>>n;
 int arr[n];
 for(int i = 0; i < n; i++){
    cin >> arr[i];
 } 
 int max = -1;
 for(int i = 0; i < n; i++){
     int count = 0;
     for(int j = 0; j < n; j++){
     if(arr[i] == arr[j]){
        count++;
    }
     }
    if(count > n/2){
    max = arr[i];
 }
 }
 if(max != -1){
     cout<<"the maximum array is :"<< max;
 }else{
     cout<<" no maximum array found";
 }
 
 return 0;
}