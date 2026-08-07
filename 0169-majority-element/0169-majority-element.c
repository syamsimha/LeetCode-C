int majorityElement(int* nums, int numsSize) 
{
    int n=0,res=nums[0];
    for(int i=0;i<numsSize;i++)
    {
        if(res==nums[i])
            n++;
        else
        {
            n--;
            if(n==0)
            {
                res=nums[i];
                n=1;
            }
        }
        
    }
    return res;
}