#include<stdio.h>
#include<string.h>
int main(void)
{
char ch[100];
gets(ch);
int K;
scanf("%d",&K);
int i;
for(i=0;i<K;i++)
{
printf("%c",ch[i]);
}
return 0;
}
