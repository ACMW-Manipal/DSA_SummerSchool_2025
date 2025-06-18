int removeDuplicates(int* nums, int numsSize) {
    int i=0, j=1;
    while(j<numsSize){
        if(nums[i] == nums[j]) j++;
        else nums[++i] = nums[j++];
    }
    return i+1;
}
