# C Programming Notes

## Introduction to C
- **C** is a general-purpose, procedural programming language.
- Developed in the early 1970s by **Dennis Ritchie** at Bell Labs.
- It is considered the "mother of all programming languages" since many modern languages (C++, Java, Python, etc.) are influenced by it.
- **Key Features:**
  - Fast and efficient
  - Portable (runs on different machines)
  - Rich library support
  - Structured programming language
  - Provides low-level memory access

## Syntax and Comments
Every C program consists of:
- **Preprocessor directives** (e.g., `#include <stdio.h>`)
- **main function**: Entry point of execution
- **Statements** ending with `;`
- **Curly braces `{ }`** to define blocks of code

**Example:**
```c
#include <stdio.h>

int main() {
    printf("Hello, C!");
    return 0;
}
```

### Comments in C
- **Single-line comment**: `// This is a single-line comment`
- **Multi-line comment**:
```c
/* This is
   a multi-line
   comment */
```

## Describing Hello World Program
```c
#include <stdio.h>   // Preprocessor directive to include standard I/O library

int main() {         // main() function - program execution starts here
    printf("Hello, World!\n");  // printf() prints output to the console
    return 0;        // returns 0, indicating successful execution
}
```

**Explanation:**
- `#include <stdio.h>`: Includes the standard input-output header file.
- `int main()`: The main function where execution starts.
- `printf("Hello, World!\n");`: Prints text with a newline (`\n`).
- `return 0;`: Ends the program successfully.

## Variables and Constants
### Variables
- Variables are named memory locations to store data.
- Must be **declared** before use.
- Syntax:  
```c
datatype variable_name = value;
```

**Example:**
```c
int age = 20;
float salary = 55000.50;
char grade = 'A';
```

### Constants
- Fixed values that cannot be changed during execution.
- Declared using:
  - **`const` keyword**
  - **`#define` preprocessor directive**

**Example:**
```c
const float PI = 3.14159;   // constant variable
#define MAX 100             // macro constant
```

## Data Types and Format Specifiers
### Basic Data Types
- **int** → Integer numbers (e.g., `10`, `-5`)
- **float** → Decimal numbers (e.g., `3.14`)
- **double** → Large decimal numbers with higher precision
- **char** → Single character (e.g., `'A'`, `'9'`)
- **void** → Represents no value (used in functions)

### Format Specifiers (used in `printf` and `scanf`)
| Data Type | Format Specifier | Example |
|-----------|------------------|---------|
| int       | `%d`             | `printf("%d", 10);` |
| float     | `%f`             | `printf("%f", 3.14);` |
| double    | `%lf`            | `printf("%lf", 3.14159);` |
| char      | `%c`             | `printf("%c", 'A');` |
| string    | `%s`             | `printf("%s", "Hello");` |

## Type Casting
Type casting is converting one data type into another.

### Implicit Type Casting (Type Conversion)
- Automatically performed by the compiler (smaller type → larger type).
- Example:
```c
int a = 10;
float b = a;  // int automatically converted to float
```

### Explicit Type Casting (Type Casting)
- Manually done using **casting operator `(datatype)`**.
- Example:
```c
float num = 5.67;
int val = (int) num;  // explicitly converts float to int
printf("%d", val);    // Output: 5
```

## ✅ Summary
- **C** is a powerful language used for system and application programming.
- **Syntax** involves preprocessor, main function, statements, and comments.
- **Hello World** is the simplest C program.
- **Variables** store data, **constants** hold fixed values.
- **Data types** define what kind of data a variable can hold.
- **Format specifiers** are used for input/output operations.
- **Type casting** allows conversion between data types.