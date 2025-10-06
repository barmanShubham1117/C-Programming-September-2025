# Day 5: Pointers, Functions, and Arrays

## Pointers

**Definition**: Variables that store memory addresses of other variables.

### Declaration and Initialization
```c
int x = 10;
int *ptr = &x;  // ptr stores address of x
```

### Key Operators
- `&` - Address-of operator
- `*` - Dereference operator

### Basic Operations
```c
int value = *ptr;    // Get value at address
*ptr = 20;          // Modify value at address
```

### Pointer Arithmetic
```c
int arr[] = {1, 2, 3};
int *p = arr;
p++;                 // Move to next element
```

---

## Functions

**Definition**: Reusable blocks of code that perform specific tasks.

### Function Declaration
```c
return_type function_name(parameters);
```

### Function Definition
```c
int add(int a, int b) {
    return a + b;
}
```

### Function Call
```c
int result = add(5, 3);
```

### Parameter Passing
- **Pass by Value**: Copy of value is passed
- **Pass by Reference**: Address is passed using pointers

```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

---

## Arrays

**Definition**: Collection of elements of same data type stored in contiguous memory.

### Declaration and Initialization
```c
int arr[5];                    // Declaration
int nums[] = {1, 2, 3, 4, 5}; // Initialization
```

### Array Access
```c
arr[0] = 10;        // Set first element
int first = arr[0]; // Get first element
```

### Array and Pointers
- Array name is a pointer to first element
- `arr` is equivalent to `&arr[0]`

```c
int *ptr = arr;     // Points to first element
ptr[2] = 100;       // Same as arr[2] = 100
```

### Multi-dimensional Arrays
```c
int matrix[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
```

---

## Key Relationships

1. **Arrays and Pointers**: Arrays decay to pointers when passed to functions
2. **Functions and Pointers**: Use pointers to modify variables in calling function
3. **Dynamic Memory**: Pointers enable dynamic array allocation

## Common Pitfalls
- Uninitialized pointers
- Array bounds overflow
- Memory leaks with dynamic allocation
- Dangling pointers