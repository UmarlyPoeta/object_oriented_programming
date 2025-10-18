# Object-Oriented Programming in C++

This repository contains a collection of C++ programming exercises and examples demonstrating various object-oriented programming (OOP) concepts and techniques.

## 📁 Repository Structure

The repository is organized into numbered directories (01-07), each focusing on different OOP concepts:

### 01 - Pointers and Memory Management
- Introduction to pointers (`*pa`, `&a`)
- Pointer arithmetic with different data types
- Dynamic memory allocation (`new`, `delete`)
- Array operations with pointers

**Topics covered:**
- Pointer basics and dereferencing
- Memory addresses and pointer arithmetic
- Dynamic arrays

### 02 - Structures and Structs
- Working with C-style structures
- Structure pointers and member access
- Dynamic structure allocation
- Member functions in structures

**Example:** Student record management system with structure

### 03 - Classes and Constructors
- Basic class definitions
- Constructor overloading
- Member functions
- Encapsulation (private/public)
- Composition (classes containing other classes)

**Classes demonstrated:**
- `Portfel` (Wallet) - managing balance with deposit/withdrawal
- `Produkt` (Product) - product management with dynamic ID
- `Magazyn` (Warehouse) - inventory management
- `Samochod` (Car) - vehicle information
- `Firma` (Company) - copy constructor demonstration
- `Procesor` (Processor) and `Laptop` - composition example

### 04 - Friend Functions and Classes
- Friend class relationships
- Private member access through friends
- Class composition with restricted access

**Example:** `TSilnik` (Engine) and `TSamochód` (Car) classes demonstrating friend relationships

### 05 - Operator Overloading and Type Conversion
- Overloading arithmetic operators
- Type conversion operators
- Custom classes with operator support

**Classes demonstrated:**
- `TUlamek` (Fraction) - fraction arithmetic with operator overloading
- `TZespolona` (Complex Number) - complex number operations
- `Stone_weight` - unit conversion (stones to pounds)
- `Fahrenheit` - temperature conversion with type casting

### 06 - Advanced Operator Overloading
- Binary operator overloading (`+`)
- Stream operators (`<<`, `>>`)
- Unary operators (`!`)
- Friend operator functions

**Classes demonstrated:**
- `Class` and `ClassModified` - addition operator
- `Punkt2D` (Point2D) - I/O stream operators
- `TStruktura` - logical NOT operator
- `TOsoba` (Person) - output stream operator

### 07 - Inheritance and Polymorphism
- Single inheritance
- Multiple inheritance
- Protected members
- Method overriding
- Virtual inheritance concepts

**Classes demonstrated:**
- `Figura` (Figure), `Prostokat` (Rectangle), `Trojkat` (Triangle) - basic inheritance
- `A`, `B`, `C`, `Z` - multiple inheritance
- `Punkt` (Point) and `Kolo` (Circle) - geometric inheritance
- `Zwierze` (Animal), `ZwierzeDomowe` (Pet), `Kot` (Cat), `Pies` (Dog) - animal hierarchy
- `Osoba` (Person) and `Kadra` (Staff) - person management
- `Question` and `ChoiceQuestion` - quiz system with inheritance

## 🛠️ How to Compile and Run

Each directory contains standalone C++ programs. To compile and run:

```bash
# Single file programs (most examples)
g++ -o program 01/01.cpp
./program

# Multi-file programs (e.g., directory 05)
g++ -o program 05/main.cpp 05/source.cpp
./program
```

### Compiler Requirements
- C++11 or later
- Standard libraries: `<iostream>`, `<string>`, `<vector>`, `<cmath>`

## 📚 Key OOP Concepts Covered

1. **Encapsulation** - Data hiding using private/public access specifiers
2. **Abstraction** - Simplifying complex systems through well-defined interfaces
3. **Inheritance** - Code reuse through class hierarchies
4. **Polymorphism** - Method overriding and operator overloading
5. **Composition** - Building complex objects from simpler ones
6. **Friend Functions/Classes** - Controlled access to private members
7. **Operator Overloading** - Custom behavior for standard operators
8. **Type Conversion** - Custom casting between types
9. **Dynamic Memory Management** - Proper use of new/delete

## 📝 Notes

- Code comments are primarily in Polish
- Each directory contains executable examples that can be run independently
- Examples progress from basic to advanced OOP concepts
- Some programs require user input during execution

## 🎓 Learning Path

For those new to OOP, it's recommended to study the directories in order:
1. Start with **01** (pointers and memory)
2. Progress through **02** (structures)
3. Move to **03** (classes and basic OOP)
4. Continue with **04-06** (advanced class features)
5. Finish with **07** (inheritance and polymorphism)

## 🔧 Directory Details

| Directory | Main Focus | Files | Key Concepts |
|-----------|-----------|-------|--------------|
| 01 | Pointers & Memory | 5 files | Pointers, dynamic allocation |
| 02 | Structures | 5 files | Structs, member functions |
| 03 | Classes | 1 comprehensive file | Constructors, encapsulation, composition |
| 04 | Friends | 3 files | Friend classes, private access |
| 05 | Operators | 3 files (header/source/main) | Operator overloading, conversions |
| 06 | Advanced Operators | 1 comprehensive file | Stream operators, friend operators |
| 07 | Inheritance | 1 comprehensive file | Single/multiple inheritance, polymorphism |

## 👨‍💻 Author

UmarlyPoeta

## 📄 License

This is an educational repository. Feel free to use these examples for learning purposes.
