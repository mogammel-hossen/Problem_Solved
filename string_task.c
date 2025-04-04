#include<stdio.h>
#include<string.h>
int main ()
{
    char str[1000],x[1000];
    int n,i,j=0;
    gets(str);
    n=strlen(str);
    for (i=0;i<n;i++){
      if (str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'||str[i]=='Y'||str[i]=='y')
        {
        }
       else if (65<=str[i]&&str[i]<=90)
        {
            x[j]='.';
            j++;
            x[j]=str[i]+32;
            j++;
        }
        else if (i==n)
        {
            x[j]=NULL;
        }
        else if (str[i]>=97&&str[i]<=122)
        {
          x[j]='.';j++;
          x[j]=str[i];j++;
        }
    }
    for (int i=0;i<j;i++)
    {
        printf ("%c",x[i]);
    }
    return 0;
 
}