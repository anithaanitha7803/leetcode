int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int count=0;
    for(int i=0;i<gridSize;i++)
    {
        int low=0;
        int high=gridColSize[i]-1;
        int first=gridColSize[i];
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(grid[i][mid]<0)
            {
                first=mid;
                high=mid-1;
            }
            else 
            {
                low=mid+1;
            }
        }
        count+=gridColSize[i]-first;
    }
    return count;
    
}