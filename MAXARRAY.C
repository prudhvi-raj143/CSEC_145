#include<stdio.h>
#include<limits.h>
int main()
{
int n;
scanf("%d",&n);
int a[n],max=INT_MIN,cur;
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++)
    {
        cur=0;
        for(int k=i;k<=j;k++)
        {
            cur+=a[k];
        
        if(cur>max)
        {
            max=cur;
        }
    }
}
}
printf("%d",max);
//hi
return 0;
}