#include <stdio.h>
int main()
{
    printf("Abhinav Singh Yadav\n");
    int n,c=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int f=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            c++;
        }
        if(c==2)
        {
            printf("Second non repeating element %d \n",a[i]);
            break;
        }
    }
    return 0;
}
