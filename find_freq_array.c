// program to count freq of elements in array
#include <stdio.h>
void find_freq(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int count=0,flag=0;
        for(int j=0;j<size;j++)
        {
            if(j<i)
            {
                if(arr[i]==arr[j])
                {
                    break;
                }
            }
            if(arr[i]==arr[j])
            {
                count++;
                flag=1;
            }
        }
        if(count>=1 && flag==1)
        {
            printf("freq of %d is %d times\n",arr[i],count);
        }
    }
}
int main()
{
    int arr[]={1,2,1,3,2,4,5,2,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    find_freq(arr,size);
    return 0;
}
