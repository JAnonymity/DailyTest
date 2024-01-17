//
// Created by JAnonymity on 2024/1/16.
// 删除有序数组中的重复项
#include<stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    int i,j,k=0;
    for(i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]==nums[j]){
                for(k=i;k<numsSize-1;k++){
                    nums[k]=nums[k+1];
                }
            }
        }
    }

    for(i=0;i<k;i++)
        printf("%d ",nums[i]);

    return k;
}

int main(){
    int* nums;
    removeDuplicates(nums,10);

    return 0;
}