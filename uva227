#include <stdio.h>
#include <string.h>
#define maxn 20
#define command 10000
char a[5][5];
char s[command];
int main()
{
	freopen("input.txt","r",stdin);
    int blank_x = 0, blank_y = 0;
    int flag = 1;
    //先输入值
    /*for(int x=0; x<5; x++)
    {
        for(int y=0; y<5; y++)
        {
            scanf("%c",&a[x][y]);
        }
    }*/

    //************************************
    gets(a[0]);
    gets(a[1]);
    gets(a[2]);
    gets(a[3]);
    gets(a[4]);

    //检测空格的位置
    for(int x=0; x<5; x++)
    {
        for(int y=0; y<5; y++)
        {
            if(a[x][y] == ' ')
            {
                blank_x = x;
                blank_y = y;
            }
        }
    }

    //输入指令
    gets(s);
    int len = strlen(s);

    for(int i = 0; i < len; i++)
    {
        if(s[len-1] == '0' || s[i] == 'A' || s[i] == 'R' || s[i] == 'B' || s[i] == 'L' )
        {
            if(s[i] == 'A' && blank_x != 0)
            {
                a[blank_x][blank_y] = a[blank_x-1][blank_y];
                a[--blank_x][blank_y] = ' ';
            }
            if(s[i] == 'R' && blank_y != 4)
            {
                a[blank_x][blank_y] = a[blank_x][blank_y+1];
                a[blank_x][++blank_y] = ' ';
            }
            if(s[i] == 'B' && blank_x != 4)
            {
                a[blank_x][blank_y] = a[blank_x+1][ blank_y];
                a[++blank_x][ blank_y] = ' ';
            }
            if(s[i] == 'L' && blank_y != 0)
            {
                a[blank_x][blank_y] = a[blank_x][ blank_y-1];
                a[blank_x][--blank_y] = ' ';
            }
        }
        else flag = 0;
    }
    if(flag)
    {
        for(int i = 0; i < 5; i++)
        {
            printf("%c %c %c %c %c\n", a[i][0], a[i][1], a[i][2], a[i][3], a[i][4]);
        }
    }
    else
        printf("This puzzle has no final configuration.\n");

return 0;
}
