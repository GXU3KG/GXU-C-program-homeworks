/*输入10个字符，将其中的大写字母转成小写字母，其中的小写
  字母转成大写字母，其中的数字字符转成*，其他字符转成#输出。*/
  
#include<stdio.h>
int main()
{
    int i;
    printf("please input ten characters\n");
    for(i=1; i<=10; ++i)                    //设置10次循环
    {
        char ch;                          
        scanf("%c", &ch);                        //传入字符
        if (ch >= 'A' && ch <= 'Z')             //同上作出判断转换
        {
            ch = ch + 32;
            printf("%c", ch);
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
            printf("%c", ch);
        }
        else if(ch >= '0' && ch <= '9')
        {
            printf("%c", '*');
        }
        else
        {
            printf("%c", '#'); 
        }
    }
    return 0;
}
