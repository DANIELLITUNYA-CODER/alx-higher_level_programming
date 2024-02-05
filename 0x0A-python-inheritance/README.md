# 0x0A Python Inheritance

## Description
This repository contains Python scripts and classes that demonstrate various concepts of inheritance in Python programming. Each script or class serves as a practical example to understand and implement inheritance in Python effectively.

## List of Files
1. **0-lookup.py**: A function that returns the list of available attributes and methods of an object.
2. **1-my_list.py**: A class `MyList` that inherits from `list` and sorts the list in ascending order when `print_sorted()` method is called.
3. **2-is_same_class.py**: A function that returns `True` if the object is exactly an instance of the specified class, otherwise `False`.
4. **3-is_kind_of_class.py**: A function that returns `True` if the object is an instance of, or if the object is an instance of a class that inherited from, the specified class, otherwise `False`.
5. **4-inherits_from.py**: A function that returns `True` if the object is an instance of a class that inherited (directly or indirectly) from the specified class, otherwise `False`.
6. **5-base_geometry.py**: An empty class `BaseGeometry`.
7. **6-base_geometry.py**: A class `BaseGeometry` with a public instance method `area()` that raises an Exception with the message `area() is not implemented`.
8. **7-base_geometry.py**: A class `BaseGeometry` with a public instance method `integer_validator()` that validates the value passed to it.
9. **8-rectangle.py**: A class `Rectangle` that inherits from `BaseGeometry` with instantiation requirements for width and height.
10. **9-rectangle.py**: A class `Rectangle` that inherits from `BaseGeometry` with the implementation of the `area()` method.
11. **10-square.py**: A class `Square` that inherits from `Rectangle` with instantiation requirements for size.
12. **11-square.py**: A class `Square` that inherits from `Rectangle` with custom `print()` and `str()` methods.
13. **100-my_int.py**: A class `MyInt` that inherits from `int` with inverted `==` and `!=` operators.
14. **101-add_attribute.py**: A function `add_attribute()` that adds a new attribute to an object if it's possible.

## How to Use
Each Python script or class file can be executed individually to demonstrate the functionality of the implemented concepts of inheritance in Python.

To execute a script, simply run it in a Python interpreter:
```bash
./script_name.py
