# Types, Operators, and Expression

## Basic Data Type
```
char    a single byte
int     an integer
float   single-precision floating point
double  double-precision floating point

extended data type
short basic_type      
long  basic_type
```
For check size variable using function `sizeof(mixed variable)`   


***Note**  
> range and memory used in implement data type is depend on OS, Compiler, and arcitecture

### signed and unsigned
In C signed and unsigned can be applied to `char` or any `integer`.
```
unsigned    -> number always positive or zero, and obey the laws of arithmetic modulo 2^n

signed      -> number can represent in positive and negative

```

### Constants
For determine data type in constant using `surfix` at the value. when define char in constant, that char will be integer ex: if you declare 'x' in constant that x will be value 48 because 48 in ascii is `x`

Enumeration constant 
```
enum boolean {No, YS}
```

### Declarations
Declarations Variable :
- all variable must be declared before use
- value can be initialized in first declaration

### Arithmetic Operators
```
+   -> plus
-   -> minus
*   -> multiple
/   -> divede
%   -> modulus operator 
```
`%` not be applied for `float` or `double`

### Relational and Logical Operators
Relational operators :
```
>   -> greater
>=  -> greater than equal
<   -> less
<=  -> less than equal
```

Logical Operators
```
==      -> equal
!=      -> not equal
&&      -> and
||      -> or
```

### Type Conversions
A char is just a small integer, so chars may be freely used in arithmetic expression

```
- ketika melakukan perbandingan untuk char maka char akan di konversi ke asce terlebih dahulu
```