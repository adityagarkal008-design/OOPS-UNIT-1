# Unit 1 — C++ Code Collection

This folder contains the 8 C++ programs from the Unit 1 Code Book, separated into individual `.cpp` files and corrected where needed.

## Programs

| No. | Program | File |
|---|---|---|
| 1 | Basic Data Types | `01_Basic_Data_Types.cpp` |
| 2 | if-else | `02_If_Else.cpp` |
| 3 | Loop and Array | `03_Loop_and_Array.cpp` |
| 4 | Functions | `04_Functions.cpp` |
| 5 | Class and Object | `05_Class_and_Object.cpp` |
| 6 | Constructor and Destructor | `06_Constructor_and_Destructor.cpp` |
| 7 | Static Member | `07_Static_Member.cpp` |
| 8 | Inline and Friend Function | `08_Inline_and_Friend_Function.cpp` |

## Corrections made

- Added the required `<string>` header to the Class and Object program.
- Fixed the constructor/destructor output strings so they compile correctly.
- Added `endl` where useful for clean output.
- Used `12500.50f` for the `float` fee value.
- Used `const Test&` in the friend function to avoid an unnecessary object copy while preserving the original concept.
- Kept the programs simple and close to the original Code Book.

## How to compile

Using g++:

```bash
g++ 01_Basic_Data_Types.cpp -o program
./program
```

On Windows:

```bash
g++ 01_Basic_Data_Types.cpp -o program.exe
program.exe
```

Replace the filename with any of the other `.cpp` files.

## Expected outputs

### 1. Basic Data Types
```text
Roll No: 101
Grade: A
Fee: 12500.5
```

### 2. if-else
```text
Pass
```

### 3. Loop and Array
```text
78 82 91 67 88
```

### 4. Functions
```text
Sum = 30
```

### 5. Class and Object
```text
Amit 20
```

### 6. Constructor and Destructor
```text
Constructor called
Destructor called
```

### 7. Static Member
```text
3
```

### 8. Inline and Friend Function
```text
50
50
```
