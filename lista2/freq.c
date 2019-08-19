#include <stdio.h>
int main()
{
    int n, i, temp, j, count;
    scanf("%d", &n);

    int nums[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }


    for (i = 0; i < n; ++i)
    {

        for (j = i + 1; j < n; ++j)
        {

            if (nums[i] > nums[j])
            {

                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    
    count = 1;
    for(i = 0; i < n; i++){
        if(i+1 < n && nums[i] == nums[i+1]){
            count++;
        }
        else{
            printf("%d aparece %d vez(es)\n", nums[i], count);
            count=1;
        }
        
    }

    return 0;
}