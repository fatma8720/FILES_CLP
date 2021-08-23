#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse_stat(char* stat,int n)
{
    char ch, *fptr , *lptr;
    fptr = stat;
    lptr = stat;
    int i,l;
    l = strlen(stat);
    for (i = 0; i < l - 1; i++){
    	 lptr++;
	}
    for (i = 0; i < l / 2; i++) {
        ch = *lptr;
        *lptr = *fptr;
        *fptr = ch;
        fptr++;
        lptr--;
    }
}

int main(void)
{
    FILE * f;
    f= fopen("task6.txt", "w");
    char line[900] ;
    printf("file opened successfully \n");
    printf("string input from file : \n");
    fgets(line,sizeof(line),stdin);
    fprintf(f,"%s",line);
    printf("Reversed string:\n");
    fgets(line,sizeof(line),stdin);
    fprintf(f,"%s",line);
     printf("Reversed string added to file successfully \n");
    fclose(f);
}
