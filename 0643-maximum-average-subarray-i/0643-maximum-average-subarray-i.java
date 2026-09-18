class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum=sum+nums[i];
        }
        int maxsum=sum;
        for(int j=k;j<nums.length;j++)
        {

               sum=sum+nums[j]-nums[j-k];
               maxsum=Math.max(sum,maxsum);
        }
        return (double)maxsum/k;
 
    }
}