#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n ;
    scanf("%d",&n);

    int arr[n];

    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }

    int index ;
    scanf("%d",&index);
    int val ;
    scanf("%d",&val);
    arr[index]= val;
    for(int i = n-1 ; i>=0 ; i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
