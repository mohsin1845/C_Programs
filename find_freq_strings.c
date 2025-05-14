// Find frequency of elements in string
#include <stdio.h>
#include<string.h>
void find_freq(char str[],int len)
{
    for(int i=0;i<len;i++)
    {
        int count=0,flag=0;
        for(int j=0;j<len;j++)
        {
            if(j<i)
            {
                if(str[i]==str[j])
                {
                    break;
                }
            }
            if(str[i]==str[j])
            {
                count++;
                flag=1;
            }
        }
        if(count>=1 && flag==1)
        {
            printf("freq of %c is %d times\n",str[i],count);
        }
    }
}
int main()
{
    char str[]="aabbcdeff";
    find_freq(str,strlen(str));
    return 0;
}
