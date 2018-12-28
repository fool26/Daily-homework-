#include<stdio.h>
#define MAXSIZE 30

typedef struct{
	char ch[MAXSIZE];
	int length;
}sstring;

void init(sstring *s,sstring *t)
{
	int i=0,j=0;
	gets(s->ch);
	gets(t->ch);
	while(s->ch[i]!='\0')
		i++;
	while(t->ch[j]!='\0')
		j++;
	s->length=i;
	t->length=j;
}
int bf(sstring s,sstring t,int pos)//s:main string  t:searching string
{
	
	int i=pos,j=0;
	while(i<=s.length-1&&j<=t.length-1)
	{
		if(s.ch[i]==t.ch[j])
		{
			i++;
			j++;
		}
		else
		{
			i=i-j+1;
			j=0;
		}
	}
	if(j>t.length-1)
		return i-t.length;
	else
		return -1;
}

int main(void)
{
	int pos=0;
	sstring s,t;
	init(&s,&t);
	scanf("%d",&pos);
	printf("%d\n",bf(s,t,pos));
	return 0;
}



