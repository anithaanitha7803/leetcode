bool search(int* nums, int numsSize, int target) {
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
            return 1;
        }
    }
    return 0;
}