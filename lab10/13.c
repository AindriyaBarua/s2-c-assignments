
#include <stdio.h>  
#include <stdlib.h> 
#include <string.h>   
typedef struct _stud_record_ 
{   
char *name;  /* Name of the student. */  
int m1, m2;  /* Marks of the student. */ 
} stud_record;    
stud_record * populate_records(int n) 
{  
 int i = 0;   
 char temp[100];   
 stud_record *sr = NULL;     
 sr = (stud_record*)malloc(sizeof(stud_record) * n);  
 for(i = 0; i < n; i++) 
 { 
 printf("name: ");
  scanf("%s", temp);   
 sr[i].name = (char*)malloc(strlen(temp)+1);  
 strcpy(sr[i].name, temp);   
 printf("Enter the marks: ");   
 scanf("%d%d", &sr[i].m1, &sr[i].m2);   
 }   
return sr;   
}  
void delete_records(stud_record *sr) 
{  
 free(sr);  
}   
int main() 
{  
stud_record *sr = NULL;  
sr =  populate_records(3);   
delete_records(sr);        
return EXIT_SUCCESS;  
 }   
