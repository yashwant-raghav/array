
#include <iostream>
using namespace std;
int main() {
int nums[] ={2,0,2,1,1,0};
int size = 6;
int st = 0; 
int end = size-1;
int temp = 0;
while(st< end){
    if(nums[st] > nums[end]){
    temp = nums[st];
    nums[st] = nums[end];
    nums[end] = temp;
    st++;
    end--;
    }else{
        st++;
    }
}
for(int i = 0; i < size; i++){
cout << nums[i];
}
return 0;
}