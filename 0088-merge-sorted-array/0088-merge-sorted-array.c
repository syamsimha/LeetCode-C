void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) 
{
    int *ans;
    ans = (int*)malloc((m+n)*sizeof(int));
    for(int i=0;i<m;i++)
        ans[i]=nums1[i];
    for(int i=0;i<n;i++)
        ans[i+m]=nums2[i];
    for(int i=0;i<(m+n);i++)
    {
        for(int j=0;j<(m+n-i-1);j++)
        {
            if(ans[j]>ans[j+1])
            {
                int temp=ans[j];
                ans[j]=ans[j+1];
                ans[j+1]=temp;
            }
        }
    }
    for(int i=0;i<(m+n);i++)
        nums1[i] = ans[i];
    free(ans);
}