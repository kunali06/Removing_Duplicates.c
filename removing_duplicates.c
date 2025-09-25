#include<stdio.h>
void main(){
int n,i,j,k;
printf("enter number of elements:\n");
scanf("%d",&n);
int a[n];
printf("enter %d elements:\n",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;)
    {
        if(a[i]==a[j])
        {
            for(k=j;k<n-1;k++)
            {
                a[k]=a[k+1];
            }
            n--;
        }
        else
        {
            j++;
        }
    }
}
printf("array after removing duplicates:\n");
for(i=0;i<n;i++)
{
    printf("%d\n",a[i]);
}
getch();
}
