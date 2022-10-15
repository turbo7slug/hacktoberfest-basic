
#include <stdio.h>
#include <ctype.h>
int caseconv(char string[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(isupper(string[i]))
        {
            string[i]=tolower(string[i]);
        }
        else if(islower(string[i]))
        {
            string[i]=toupper(string[i]);
        }
    }
}
int main()
{
    int size=0;
 
    while(size<=0)// valid size of string
    {
           printf("enter the size of the string: ");
           scanf("%d",&size);
           if(size>0)// if size is valid
           {
               char string[size];// declaring string 
               printf("replace spaces by underscore'_'");
               printf("enter the string:");
               scanf("%s",string);// getting string from user
               caseconv(string,size);// converting the string
               for(int i=0;i<size;i++)// printing the string
               {
                   printf("%c",string[i]);
               }
           }
           
           
    }
    
    return 0;
}
