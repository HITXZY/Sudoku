#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
void color(char [9][9])
{int i,j;
 HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | FOREGROUND_RED);
 printf("%2c",&a[i][j]);	
}
void print(char a[9][9])                     
{
    int i,j;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
}
int test_line(char a[9])				
{
    int sum=1,i,j,test[9]={0};
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            test[a[i]-'0'-1]=1;
        }
    }
    for(i=0;i<9;i++)
    {
        sum*=test[i];
    }
    return sum;
}
int small_nine(char a[9][9],int x,int y)
{
    int i=x,j=y;
    if(x%3==0)
        return 0;
    if(x%3==1)
    {
        if(j%3==0)
        {
            if(a[x][y]==a[i-1][j] || a[x][y]==a[i-1][j+1]
                                  ||a[x][y]==a[i-1][j+2])
                return 1;
        }
        else
        {
            while(j%3!=0)
            {
                --j;
                if(a[x][y]==a[x][j])
                {    return 1;}
            }
            if(a[x][y]==a[i-1][j] || a[x][y]==a[i-1][j+1]
                                  ||a[x][y]==a[i-1][j+2])
                return 1;
        }
    }
    if(x%3==2)
    {
        if(j%3==0)
        {
            if(a[x][y]==a[i-1][j] || a[x][y]==a[i-1][j+1]
                                  || a[x][y]==a[i-1][j+2]
                                  || a[x][y]==a[i-2][j]
                                  || a[x][y]==a[i-2][j+1]

                                  || a[x][y]==a[i-2][j+2])
                return 1;
        }
        else
        {
            while(j%3!=0)
            {
                --j;
                if(a[x][y]==a[i][j])
                    return 1;
            }
            if(a[x][y]==a[i-1][j] || a[x][y]==a[i-1][j+1]
                                  || a[x][y]==a[i-1][j+2]
                                  || a[x][y]==a[i-2][j]
                                  || a[x][y]==a[i-2][j+1]
                                  || a[x][y]==a[i-2][j+2])
                return 1;
        }
    }
    return 0;
}

void delete(char a[9][9])			
{    int m,n,maxnum,cnt;
    printf("请输入去除的数目:\n");
    scanf("%d",&maxnum);
    for(cnt=0;cnt<maxnum;cnt++)
    {
    m=rand()%9;
    n=rand()%9;
    if(a[m][n]=='0')
      {cnt--;}
    else
      {a[m][n]='0';}
    }

        for(m=0;m<9;m++)
        {printf("\n");
            for(n=0;n<9;n++)
            {if(a[m][n]=='?')
             color(a[m][n]);
			printf("%2c",a[m][n]);}
             }
}

int main(void)
{
    char a[9][9];
    int k,i,j,sm_n;
    time_t time1,timebreak;
esc:
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            a[i][j]='0';
    srand((unsigned)time(NULL));
    while(1)
    {
        time(&time1);
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                a[i][j]=rand()%9+1+'0';
                for(k=0;k<i;k++)
                {
                    time(&timebreak);
                    if(timebreak-time1>1)
                    {
                        goto esc;
                    }
                    sm_n=small_nine(a,i,j);
                    if(a[i][j]==a[k][j]||sm_n)
                    {    j--;break;}
                    else
                        continue;
                }
            }
            if(test_line(a[i])==1)
                continue;
            else
                --i;
        }
    
        break;
    }
		delete(a);
        return 0;
}
