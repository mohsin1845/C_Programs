// Print Non-Repeating characters in string
#include <stdio.h>
#include<string.h>
void remove_non_dub(char str[],int len)
{
    int k=0;
    char temp[10];
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
        if(count==1 && flag==1)
        {
            temp[k++]=str[i];
        }
    }
    temp[k]='\0';
    strcpy(str,temp);
}
int main()
{
    char str[]="aabccdeff";
    printf("Original string: %s\n",str);
    remove_non_dub(str,strlen(str));
    printf("The string with non-repeating characters: %s",str);
    return 0;
}
