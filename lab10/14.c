

#include <stdio.h>  
#include <string.h>
char* stringConcat(char *s1, char *s2)  
{   
char *temp = s1;    
s1=s1+strlen(s2)+1;
while((*s1++ = *s2++)!='\0'){}    

return temp;  
 }   
int main() 
{   
char s[100] = "Amrita Vishwa ";   
printf("%s\n", stringConcat(s, "Vidyapeetham"));    
return 0;   
}  

