# Standard Libray

A stream is a source or destination of data that may be associated with a disk or other peripheral. The library supports text streams and binary stream :

* A text stream is a sequence of line, each line has zero or more characters and is terminated by , \n
* A binary stream is a sequence of unprocessed
bytes that record internal data,  with the property that if it is written, then read back on the same system, it will compare equal  

3 Standard Stream in C :

* `stdin`
* `stdout`
* `stderr`

## Input and Output <stdio.h>

* `int getchar(void)`  
    Gets a characters ( unsigned char ) from stdin. and Returns the characters read as an unsigned char cast to an int or EOF on end fo file or error

* `int putchar(int c)`  
    Write a character ( unsigned char) specified by the argument char to stdout. and Returns the character written as an unsigned char cast to an int or EOF on error.
