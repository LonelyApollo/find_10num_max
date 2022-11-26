#include <stdio.h>
int main()
{
    int arr [10] = {0};
    
    int i = 0;
    printf("请输入10个十进制整数\n");
    for(i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0];
    for (i=1;i<10;i++)
    {
        if(arr[i]>max)
            {
                max = arr[i];
            }
    }
    
    for(i=0;i<10;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("\n max = %d \n",max);
    
    return 0;
}
