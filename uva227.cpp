#include <stdio.h>
#include <string.h>


#define maxn 20

char a[5][5];

int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	char b[maxn];
	for (int i = 0; i < 5; ++i)
	{
		gets(a[i]);
	}
	gets(b);
	int h,s;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (a[i][j] == ' ')
			{
				h=i;
				s=j;
				break;
			}
		}
	}
	int len = strlen(b);
	int flag = 0;
	for (int i = 0; i < len; ++i)
	{
		if (b[i]=='A' && h!=0)
		{
			a[h][s] = a[h-1][s];
			h--;
		}
		else if (b[i]=='B' && h!=4)
		{
			a[h][s] = a[h+1][s];
			h++;
		}
		else if (b[i]=='L' && s!=0)
		{
			a[h][s] = a[h][s-1];
			s--;
		}
		else if (b[i]=='R' && s!=4)
		{
			a[h][s] = a[h][s+1];
			s++;
		}
		else{
			flag = 1;
		}
		a[h][s]=' ';
	}
	for(int i = 0; i < 5; i++)
    {
        printf("%c %c %c %c %c\n", a[i][0], a[i][1], a[i][2], a[i][3], a[i][4]);
    }
	return 0;
}
