/*
 * Created by: Zachary
 * Date created: July 20, 2020
 */
#include <string.h> 
#include <sysexits.h>
#include <stdio.h>
#include "Documentation.h"

/* Will go through the entire file and find then call the init_method 
 * on the header struct and adding a method into the array of method 
 * subheaders in that struct.
 */
int find_methods(const char string[]){
    return FAILURE;
}

/* After assigning methods will take the remaining of the string with that
 * method and place into the unparsed string in the method struct.
 */
int assign_method_comments(const char string[]){
    return FAILURE;
}

/* Will memory allocate space for the struct and create the array of method
 * structs aswell. 
 */
int init_topic_header(){
    return FAILURE;
}

/* Will memory allocate space for the method and place it into the current
 * header.
 */
int init_method(){
    return FAILURE;
}

int multi_line_comment_parse(const char string[]){
    return FAILURE;
}

int single_comment_parse(const char string[]){
    return FAILURE;
}

/* 
 * To move all comments into a more elegant solution to have a general 
 * overview of what a project is going to be about all while using markdown.
 */ 
int main(int argc, char *argv[]){

    char line[MAX_STR_LEN], file_name[MAX_STR_LEN], commented_string[MAX_STR_LEN];
    char *string;
    FILE *input_file;
    int sscanf_return_amount;

    // Finding in the file with "/* */"
    if(argc == 1){
        fprintf(stderr, "Only one argument found.");
    } else {
        if ((input_file = fopen(argv[1], "r")) == NULL) { 
            fprintf(stderr, "%s cannot be opened.\n", argv[1]); 
            return -1; 
        } else {             
            while (fgets(line, MAX_STR_LEN + 1, input_file)) {
                sscanf(line, "/*", commented_string);
                printf("%s", commented_string);
            }  

        }
        return 0;

    
    }
}

