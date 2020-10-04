/*输入一个字符，若它是大写字母则转成小写字母，若它是小写
  字母则转成大写字母，若它是数字字符则转成*，若是其他字符则转成#输出。*/
  
#include<stdio.h>
int main()
{
    char ch; 
    printf("please input a character");
    ch = getchar();          //传入字符
    
    if (ch >= '0' && ch <= '9')      //判断是否为数字
    {
        printf("%c\n", '*');
    }
    else if(ch >= 'a' && ch <= 'z')       //判断是否为小写字母
    {
        ch = ch - 32;                  //小写字母转换
        printf("%c\n", ch);
    }
    else if(ch >= 'A' && ch <= 'Z')      //判断是否为大写字母
    {
        ch = ch + 32;              // 大写字母转换
        printf("%c\n", ch);
    }
    else
    {
        printf("%c\n", '#');     //其他字符输出#
    }

}
