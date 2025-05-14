// Remove Dublicates in string
#include <stdio.h>
#include<string.h>
void remove_dub(char str[],int len)
{
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;)
        {
            if(str[i]==str[j])
            {
                for(int k=j;k<len;k++)
                {
                    str[k]=str[k+1];
                }
                len--;
            }
            j++;
            
        }
    }
    str[len+1]='\0';
}
int main()
{
    char str[]="aabbcdeff";
    printf("Original string: %s\n",str);
    remove_dub(str,strlen(str));
    printf("The string After removing dublicates: %s",str);
    return 0;
}
