# Documentation 

The project to make comments in code into markdown files for a better and more visually apealing reading.

## Technologies
* Written entirely in C because I love C and easier for me.

## Usage
When writing comments the main reason for the file should be above the main method.
The name of the markdown file will be from the filename. Example would be
``` 
Documentation test1.c
``` 
output
```
test1.md
```
After that process it will begin the markdown file with the header of the
file name. 
``` 
# test1
comments from the main method
```
Then the remaining methods will have the second header tag and its comments
under.
```
## method1
comments here
```
## Currently Working 

- [*] Working on reading a c file.
- [ ] parsing comments out of the files
- [ ] transfering the comments into markdown
- [ ] Making it portable; html, website similar to java docs

