# C++ OOP Tasks

A collection of beginner Object-Oriented Programming tasks in C++, covering classes, objects, constructors, and encapsulation (private members with getters and setters).

## Tasks

| # | File | Topic | Description |
|---|------|-------|-------------|
| 1 | `Task #1.cpp` | Classes and Objects | A `Book` class with private `title`, `author`, and `price`, set through setter methods and printed with `display()`. |
| 2 | `Task #2.cpp` | Default Values | A `Fan` class with `speed` and `color` initialized through `setSpeed()` and `setColor()`, shown with `showFan()`. |
| 3 | `Task #3.cpp` | Private Members, Getters and Setters | A `Student` class with private `marks`, validated in `setMarks()` (0 to 100), plus `getMarks()` and `getGrade()`. |
| 4 | `Task #4.cpp` | Constructors | A `WaterBottle` class with default and parameterized constructors, and `drink()`, `refill()`, `setWaterLevel()` and `showInfo()` methods. |

## Concepts Covered

- Defining classes and creating objects
- Access specifiers (`private` and `public`)
- Encapsulation using getters and setters
- Input validation inside setter methods
- Default and parameterized constructors
- `const` member functions

## Task Details

### Task 1: Book
Creates two `Book` objects and prints their title, author, and price.

### Task 2: Fan
Creates a `Fan` object, sets its speed to `1` and color to `"White"`, and displays them.

### Task 3: Student
Marks are stored privately, so they can only be changed through `setMarks()`, which rejects values outside 0 to 100. Grades are assigned as:

| Marks | Grade |
|-------|-------|
| 80 and above | A |
| 60 to 79 | B |
| 50 to 59 | C |
| Below 50 | F |

Writing `student1.marks = 90;` in `main()` causes a compilation error because `marks` is private.

### Task 4: WaterBottle
- The default constructor creates a full 500 ml bottle from the brand "Local".
- The parameterized constructor takes a brand and capacity, and starts the bottle full.
- `drink(ml)` reduces the water level, or prints "Not enough water!" if there is too little.
- `refill()` restores the water to full capacity.
- `setWaterLevel(w)` rejects values below 0 or above the capacity.

## Author

Mohammad Ahmed , BSCS at FAST-NUCES Karachi.
