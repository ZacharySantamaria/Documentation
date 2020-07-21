/*
 * Created by: Zachary
 * Date created: July 20, 2020
 */
#include <string.h> 
#include <sysexits.h>
#include <stdio.h>

/* 
 * To move all comments into a more elegant solution to have a general 
 * overview of what a project is going to be about all while using markdown.
 * if ((input_file = fopen(argv[1], "r")) == NULL) { 
                    fprintf(stderr, "%s cannot be opened.\n", argv[1]); 
                return EX_OSERR; 

                } else {             

                while (fgets(input, MAX_STR_SIZE + 1, input_file)) 
                    if (strcmp(input, "quit\n") && strcmp(input, "exit\n")) { 
                        sscanf_return_amount = sscanf(input, " %c%s", &char_check, input_tmp); 
                        if ((pos=strchr(input, '\n')) != NULL){ 
                            *pos = '\0'; 
                        } 
                        if (sscanf_return_amount > 0 && char_check != '#') { 
                            validate_command(&doc, input); 
                        } 
                    } 
                }  
    }
 */ 
int main(int argc, char *argv[]){

    char ch, file_name[100];
    FILE *fp;

    printf("Enter name of a file you wish to see\n");
    gets(file_name);

    fp = fopen(file_name, "r"); // read mode

    if (fp == NULL)
    {
        perror("Error while opening the file.\n");
        return -1;
    }
    printf("The contents of %s file are:\n", file_name);

    while((ch = fgetc(fp)) != EOF)
        printf("%c", ch);
    fclose(fp);

    return 0;

    
}

