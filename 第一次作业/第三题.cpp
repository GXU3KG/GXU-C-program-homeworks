/*输入三个1-100之间的随机数，输出其中的最
  大值。（提示：随机数用rand()函数和srand()函数）*/
  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num[3], i, max=0;
    srand((unsigned int)time(NULL));
    for (i = 0; i < 3; ++i)   //循环生成3个随机数
    {
        num[i] = rand()%100+1;
        if(max < num[i])    // 判断新生成的数与现有最大的数
        {
            max = num[i];   // 设置max变量为目前最大的数
        }
    }
    printf("the 3 random numbers we have is:");
    for (i = 0; i < 3; ++i)
    {
        printf ("%d  ", num[i]);
    }
    printf ("\nthe biggest number is %d \n", max);
    return 0;
}
