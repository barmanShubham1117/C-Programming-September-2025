# Day 4: Operators and Associativity in C

## What are Operators?

Operators are special symbols that perform operations on operands (variables, constants, or expressions). C provides a rich set of operators for various operations.

## Types of Operators

### 1. Arithmetic Operators
```c
+ (Addition)        // 5 + 3 = 8
- (Subtraction)     // 5 - 3 = 2
* (Multiplication)  // 5 * 3 = 15
/ (Division)        // 5 / 3 = 1 (integer division)
% (Modulus)         // 5 % 3 = 2
```

### 2. Relational Operators
```c
== (Equal to)           // 5 == 3 → 0 (false)
!= (Not equal to)       // 5 != 3 → 1 (true)
>  (Greater than)       // 5 > 3 → 1 (true)
<  (Less than)          // 5 < 3 → 0 (false)
>= (Greater than equal) // 5 >= 3 → 1 (true)
<= (Less than equal)    // 5 <= 3 → 0 (false)
```

### 3. Logical Operators
```c
&& (Logical AND)    // (5 > 3) && (2 < 4) → 1 (true)
|| (Logical OR)     // (5 < 3) || (2 < 4) → 1 (true)
!  (Logical NOT)    // !(5 > 3) → 0 (false)
```

### 4. Assignment Operators
```c
=   (Simple assignment)     // x = 5
+=  (Add and assign)        // x += 3 → x = x + 3
-=  (Subtract and assign)   // x -= 3 → x = x - 3
*=  (Multiply and assign)   // x *= 3 → x = x * 3
/=  (Divide and assign)     // x /= 3 → x = x / 3
%=  (Modulus and assign)    // x %= 3 → x = x % 3
```

### 5. Increment/Decrement Operators
```c
++  (Increment)
    Pre-increment:  ++x  // Increment x first, then use value
    Post-increment: x++  // Use value first, then increment x

--  (Decrement)
    Pre-decrement:  --x  // Decrement x first, then use value
    Post-decrement: x--  // Use value first, then decrement x
```

### 6. Bitwise Operators
```c
&  (Bitwise AND)     // 5 & 3 → 1
|  (Bitwise OR)      // 5 | 3 → 7
^  (Bitwise XOR)     // 5 ^ 3 → 6
~  (Bitwise NOT)     // ~5 → -6
<< (Left shift)      // 5 << 1 → 10
>> (Right shift)     // 5 >> 1 → 2
```

### 7. Conditional (Ternary) Operator
```c
condition ? value_if_true : value_if_false
// Example: max = (a > b) ? a : b;
```

## Operator Precedence

Precedence determines which operator is evaluated first in an expression with multiple operators.

| Precedence | Operators | Description |
|------------|-----------|-------------|
| 1 (Highest) | `()` `[]` `->` `.` | Parentheses, Array subscript, Structure operators |
| 2 | `!` `~` `++` `--` `+` `-` `*` `&` `sizeof` | Unary operators |
| 3 | `*` `/` `%` | Multiplicative |
| 4 | `+` `-` | Additive |
| 5 | `<<` `>>` | Shift operators |
| 6 | `<` `<=` `>` `>=` | Relational |
| 7 | `==` `!=` | Equality |
| 8 | `&` | Bitwise AND |
| 9 | `^` | Bitwise XOR |
| 10 | `|` | Bitwise OR |
| 11 | `&&` | Logical AND |
| 12 | `||` | Logical OR |
| 13 | `?:` | Conditional |
| 14 (Lowest) | `=` `+=` `-=` `*=` `/=` `%=` | Assignment |

## Associativity

Associativity determines the order of evaluation when operators have the same precedence.

### Left-to-Right Associativity
Most operators are left-associative:
```c
a + b + c    // Evaluated as (a + b) + c
a * b / c    // Evaluated as (a * b) / c
a < b < c    // Evaluated as (a < b) < c
```

### Right-to-Left Associativity
Assignment and unary operators are right-associative:
```c
a = b = c = 5    // Evaluated as a = (b = (c = 5))
++--x            // Evaluated as ++(--x)
```

## Practical Examples

### Example 1: Mixed Operations
```c
int result = 2 + 3 * 4;  // Result = 14 (not 20)
// Explanation: * has higher precedence than +
// So: 2 + (3 * 4) = 2 + 12 = 14
```

### Example 2: Using Parentheses
```c
int result = (2 + 3) * 4;  // Result = 20
// Parentheses override precedence
```

### Example 3: Pre vs Post Increment
```c
int x = 5;
int a = ++x;  // a = 6, x = 6 (pre-increment)
int b = x++;  // b = 6, x = 7 (post-increment)
```

### Example 4: Assignment Associativity
```c
int a, b, c;
a = b = c = 10;  // All variables get value 10
// Evaluated as: a = (b = (c = 10))
```

## Common Mistakes to Avoid

1. **Confusing = and ==**
   ```c
   if (x = 5)  // Assignment (always true if x != 0)
   if (x == 5) // Comparison (correct)
   ```

2. **Operator precedence confusion**
   ```c
   if (x & 1 == 0)  // Wrong: evaluated as x & (1 == 0)
   if ((x & 1) == 0) // Correct: check if x is even
   ```

3. **Pre/Post increment in expressions**
   ```c
   int x = 5;
   int y = x++ + ++x;  // Undefined behavior - avoid
   ```

## Key Points to Remember

- Use parentheses when in doubt about precedence
- Assignment operators return the assigned value
- Logical operators return 1 (true) or 0 (false)
- Bitwise operators work on individual bits
- Pre-increment/decrement: change first, then use
- Post-increment/decrement: use first, then change
- Avoid multiple modifications of the same variable in one expression