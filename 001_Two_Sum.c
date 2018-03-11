/*
 * Filename: 
 * 
 * Description: 
 * 
 * Change Logs:
 * Date         Author      Version     Notes
 * 2018-03-11   Xu          1.0.0       the first version
 */

/* INCLUDES */
#include <stdio.h>
#include <stdlib.h>

/* MACROS */

/* CONSTANTS */

/* TYPEDEFS */
struct object
{
    int val;
    int index;
};

/* GLOBAL VARIABLES */

/* GLOBAL FUNCTIONS */

/* LOCAL VARIABLES */

/* LOCAL FUNCTIONS */
static int compare(const void * a, const void * b);
int * twoSum(int * nums, int numsSize, int target);

    /*
 * @fn main
 * 
 * @brief none
 * 
 * @param none
 * 
 * @return none 
 */
    int main(void)
{
    //int nums[] = {-1, -2, -3, -4, -5};
    //int target = -8;
    //int nums[] = {0,4,3,0};
    //int target = 0;
    int nums[] = {3, 2, 3};
    int count = sizeof(nums) / sizeof(*nums);
    int target = 6;
    int *indexes = twosum(nums, count, target);
    if (indexes != NULL)
    {
        printf("%d %d\n", indexes[0], indexes[1]);
    }
    else
    {
        printf("Not found\n");
    }

    return 0;
}

/*
 * @fn compare
 * 
 * @brief none
 * 
 * @param const void *a
 * @param const void *b
 * 
 * @return
 */
static int compare(const void * a, const void * b)
{
    return ((struct object *)a)->val - ((struct object *)b)->val;
}

/*
 * @fn twoSum
 * 
 * @brief none
 * 
 * @param int * nums -
 * @param int numsSize 
 * @param int target 
 * 
 * @return
 */
static int * twosum(int * nums, int numsSize, int target)
{
    int i, j;
    struct object * objs = malloc(numsSize * sizeof(*objs));
    for (i = 0; i < numsSize; i++)
    {
        objs[i].val = nums[i];
        objs[i].index = i;
    }
    qsort(objs, numsSize, sizeof(*objs), compare);

    int count = 0;
    int *results = malloc(2 * sizeof(int));
    i = 0;
    j = numsSize - 1;
    while (i < j)
    {
        int diff = target - objs[i].val;
        if (diff > objs[j].val)
        {
            while (++i < j && objs[i].val == objs[i - 1].val)
            {
            }
        }
        else if (diff < objs[j].val)
        {
            while (--j > i && objs[j].val == objs[j + 1].val)
            {
            }
        }
        else
        {
            results[0] = objs[i].index;
            results[1] = objs[j].index;
            return results;
        }
    }
    return NULL;
}