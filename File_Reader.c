#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc,char *argv[])
{
    // create a file pointer
	  FILE*fPointer = fopen (argv[1],"r"); 
    //open the file and read it in
    
    //error handling
    if (fPointer == NULL){
    
        perror("The file does not exist.\n");
        exit(1);
    }
    
    printf("The File is opened.\n");
    char singleLine[150];

    //read until the end of the file

    int Pid = fork();
    Pid = getpid();
    char temp[20];
    
    while(!feof(fPointer)){
        fgets(singleLine,150,fPointer);
        printf("%d\n",Pid);
        puts(singleLine);
        
    }    
    fclose(fPointer);
    return 0;}
