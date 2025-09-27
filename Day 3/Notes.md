
# C Programming Notes – Day 3

## Operators in C

Operators are special symbols used to perform operations on variables and values. They are the building blocks for any programming logic.

### 1. Arithmetic Operators
Used for mathematical calculations.

| Operator | Description      | Example      |
|----------|------------------|-------------|
| +        | Addition         | a + b       |
| -        | Subtraction      | a - b       |
| *        | Multiplication   | a * b       |
| /        | Division         | a / b       |
| %        | Modulus          | a % b       |
| ++       | Increment        | ++a or a++  |
| --       | Decrement        | --a or a--  |

### 2. Assignment Operators
Used to assign values to variables.

| Operator | Description           | Example      |
|----------|-----------------------|-------------|
| =        | Assign                | a = 5       |
| +=       | Add and assign        | a += 3      |
| -=       | Subtract and assign   | a -= 2      |
| *=       | Multiply and assign   | a *= 4      |
| /=       | Divide and assign     | a /= 2      |
| %=       | Modulus and assign    | a %= 3      |

### 3. Comparison Operators
Used to compare two values.

| Operator | Description         | Example      |
|----------|---------------------|-------------|
| ==       | Equal to            | a == b      |
| !=       | Not equal to        | a != b      |
| >        | Greater than        | a > b       |
| <        | Less than           | a < b       |
| >=       | Greater or equal    | a >= b      |
| <=       | Less or equal       | a <= b      |

### 4. Logical Operators
Used to combine multiple conditions.

| Operator | Description         | Example           |
|----------|---------------------|------------------|
| &&       | Logical AND         | (a > 0 && b > 0) |
| ||       | Logical OR          | (a > 0 || b > 0) |
| !        | Logical NOT         | !(a > 0)         |

### 5. Bitwise Operators
Used to perform operations on bits.

| Operator | Name                | Example   | Description                                      |
|----------|---------------------|-----------|--------------------------------------------------|
| &        | Bitwise AND         | a & b     | Sets each bit to 1 if both bits are 1            |
| \|       | Bitwise OR          | a \| b    | Sets each bit to 1 if one of two bits is 1       |
| ^        | Bitwise XOR         | a ^ b     | Sets each bit to 1 if only one of two bits is 1  |
| ~        | Bitwise NOT         | ~a        | Inverts all the bits                             |
| <<       | Left Shift          | a << n    | Shifts bits of a left by n positions             |
| >>       | Right Shift         | a >> n    | Shifts bits of a right by n positions            |

### 6. Miscellaneous Operators
| Operator | Name                | Example   | Description                                      |
|----------|---------------------|-----------|--------------------------------------------------|
| *        | Pointer             | int *p    | Declares a pointer variable                      |
| &        | Address-of          | &a        | Returns address of variable                      |

---

## Conditional Statements

Conditional statements are used to make decisions in a program based on certain conditions.

### 1. if, if-else
Executes a block of code if a condition is true, otherwise executes another block.

**Syntax:**
```c
if (condition) {
	// code if true
} else {
	// code if false
}
```

### 2. else-if Ladder
Used to check multiple conditions.
```c
if (condition1) {
	// code
} else if (condition2) {
	// code
} else {
	// code
}
```

### 3. switch-case
Selects one of many code blocks to execute.
```c
switch (expression) {
	case value1:
		// code
		break;
	case value2:
		// code
		break;
	default:
		// code
}
```

### 4. goto Statement
Transfers control to a labeled statement (use with caution).
```c
goto label;
// ...
label:
	// code
```

---

## Looping Statements

Loops are used to execute a block of code repeatedly.

### 1. for Loop
Executes a block of code a specific number of times.
```c
for (initialization; condition; increment) {
	// code
}
```

### 2. while Loop
Executes a block of code as long as a condition is true.
```c
while (condition) {
	// code
}
```

### 3. do-while Loop
Executes a block of code at least once, then repeats as long as a condition is true.
```c
do {
	// code
} while (condition);
```

---

## ✅ Summary
- **Operators** are used for calculations, assignments, comparisons, logic, and bitwise operations.
- **Conditional statements** control the flow of execution based on conditions.
- **Loops** allow repeated execution of code blocks.