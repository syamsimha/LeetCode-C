int removeElement(int* nums, int numsSize, int val) {
    int k=1;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=val)
        {
            nums[k-1]=nums[i];
            k++;
        }
    }
    return k-1;
    return *nums;
}