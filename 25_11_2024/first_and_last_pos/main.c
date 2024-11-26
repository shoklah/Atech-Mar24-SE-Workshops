#include <stdio.h>
int searchRange(int *nums, int nums_length, int target){
    for(int i = 0; i < nums_length; i++){
        if(nums[i] == target && nums[i-1] != target){
            printf("[%d,]\n", i);
            
        }
    }
}

int main(){
    int nums[] = {1, 2, 2, 2, 4};

    int value = searchRange(nums, 5, 2);
}