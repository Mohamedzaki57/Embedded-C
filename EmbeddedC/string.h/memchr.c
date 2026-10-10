#include<stdio.h>

char * memchr(char s[],char c,int n)
{
    for (int i=0 ; i<n ; i++)
    {
        if(s[i]==c)
        {
            return &s[i];
        }
    }
    return NULL;
}
int main()
{


}