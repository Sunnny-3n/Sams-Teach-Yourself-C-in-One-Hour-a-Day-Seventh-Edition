#include <stdio.h>
#include <string.h>

// 从str1中查找str2的个数，并返回
int findChildCnt(char* str1, char* str2)
{
    int len = strlen(str2);
    int cnt = 0;
    while (str1 == strstr(str1, str2)) // 如果查找到,则执行循环，否则为空退出循环
    {
        cnt++; // 统计次数
        str1 += len; // 加上偏移量，即移除str2
    }
    return cnt;
}

int main(void)
{
    FILE *fp;
    int count = 0;
    int tmp = 0;
    char filename[100];
    char str1[100], str2[100];
    printf("intput filename: ");
    gets(filename);
    fp = fopen(filename,"r");
    printf("intput str2: ");
    gets(str2);
    while(!feof(fp))
    {
        count++;
        fgets(str1,233,fp);
        tmp = findChildCnt(str1, str2) ;
        if (tmp != 0)
           printf("%s in %d have %d\n",str2,count,tmp);
    }
    if (tmp == 0)
    {
        printf("Sorry , we not find \"%s\"\n",str2 );
    }
    return 0;
}