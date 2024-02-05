# **Data Types**

1. **char:** Used to represent characters.
2. **int:** Used to represent integral numbers.
3. **float:** Used to represent decimal numbers up to 6-7 precision digits.
4. **double:** Used to represent decimal numbers up to 15 precision digits.
5. **void:** Used to represent the valueless entity.

Example of Basic Data Types:

```
char c = 'a';
int integer = 24;
float f = 24.32;
double d = 24.3435;
void v;
```


The size of these basic data types can be modified using data type modifiers which are:

1. short
2. long
3. signed
4. unsigned
   

Example of Data Type Modifiers:

```
unsigned int var1;
long double var2;
long int var3;
```

# **Derived Data Types**
Derived data types are derived from the basic data types. There are 2 derived data types in C:
1. Pointers
2. Arrays

# **User-Defined Data Types**
The user-defined data types are the data types that are defined by the programmers in their code.  There are 3 user-defined data types in C:

1. Structure
2. Union 
3. Enumeration

# **Keywords**
Keywords are the reserved words that have predefined meanings in the C compiler. They cannot be used as identifiers.

Example of Keywords:

```
auto,
float,
int,
return,
switch
```

# **Basic Input and Output**
The basic input and output in C are done using two <stdio.h> functions namely scanf() and print() respectively.

```
printf("formatted-string", ...{arguments-list});
```

where,

- **formatted-string:** String to be printed. It may contain format specifiers, escape sequences, etc.
- **arguments-list:** It is the list of data to be printed.

## Basic Input – scanf()

```
scanf("formatted-string", {address-argument-list});
```


where,

- **formatted-string:** String that describes the format of the input.
- **address-of-arguments-list:** It is the address list of the variables where we want to store the input.

# **Format Specifiers**
Format specifiers are used to describe the format of input and output in formatted string. It is different for different data types. It always starts with %

The following is the list of some commonly used format specifiers in C:


| **Format Specifier** | **Description**          |
| :------------------- | :----------------------- |
| %c                   | For b type.              |
| %d                   | For signed integer type. |
| %f                   | For float type.          |
| %lf                  | Double                   |
| %p                   | Pointer                  |
| %s                   | String                   |
| %u                   | Unsigned int             |
| %%                   | Prints % character       |

# **Arrays**
An array is a fixed-size homogeneous collection of items stored at a contiguous memory location. It can contain elements from type int, char, float, structure, etc. to even other arrays.

- Array provides random access using the element **index**.
- Array size **cannot** change.
- Array can have multiple **dimensions** in which it can grow.

# **Pointers**
Pointers are the variables that store the address of another variable. They can point to any data type in C

Syntax:
```
data_type * ptr_name;
```


There are different types of pointers based on different classification parameters. Some of them are:

1. Double Pointers
2. Function Pointers
3. Structure Pointers
4. NULL Pointers
5. Dangling Pointers
6. Wild Pointers


# **Function**

Functions are the block of statements enclosed within { } braces that perform some specific task. They provide code reusability and modularity to the program.