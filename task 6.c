#include <stdio.h>
#include <string.h>

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
    FILE * f= fopen("task6.txt", "r");
    char line[200] ={0};
    int i=0;
    int narray=0;
    char* array[50];
    //read the statement from the file we created and store it in an array
    while(fgets(line, sizeof line, f)!=NULL) {
        //add each filename into array 
        array[i]=line; 
        i++;
        // number of array elements "words" in file
        narray++;
    }
    printf("file opened successfully \n");
    //print statement we read
    printf("string input from file : %s\n", *array);
    // function to reverse this statement using pointers
    reverse_stat(*array,narray);
    //print statement we read after reaverse
    printf("Reversed string: %s\n",*array);
    FILE *fo = fopen("task6.txt", "a");
    fputs("\n", fo);
    fputs(*array, fo); 
    printf("Reversed string added to file successfully \n");
    fclose(f);
}
