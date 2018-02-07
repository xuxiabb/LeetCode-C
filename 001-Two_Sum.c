#include <stdio.h>

int * twoSum(int *nums, int numsSize, int target)

int main(void)
{
    const int numsSize = 4;
    int * nums;
    nums = (int *) malloc(numsSize * sizeof(int));
     = {2, 7, 11, 15};
    int target = 9; 
    int * result = twoSum(nums, numsSize, target);
    printf("%d %d\n", &result[0], &result[1]);

    return 0;
}

int * twoSum(int *nums, int numsSize, int target)
{
    const int numsum_size;
    numsum_size = numsSize * （numsSize - 1） / 2;
    int numsum[numsum_size][3];
    int i, j;

    for (i = 0; i < numsum_size; i++)
    {
        for (j = 1; j < numsum_size; j++)
        numsum[i][0] = nums[i];
        numsum[i][1] = nums[j];
        numsum[i][2] = nums[i] + num[j];
        if (numsum[i][2] = taget)
        {
            return numsum[i];
        }
        else
        {
            ;
        }
    }
}