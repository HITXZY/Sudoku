int delete(a);
{int a[9][9];
int i,j,k,n;
printf("请输入去除的数目")；
scanf("%d",&k);
for(n=0;n<k;n++){
    i=rand()%10;
    j=rand()%10;
    if(a[i][j]=0)
    {n--;}
    else
    {a[i][j]=0;}
    }
}
