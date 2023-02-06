# Advanced and Parallel Programming Exam 2022-2023

Developers: Vittorio Amoruso, Nicola Cortinovis, Erion Islamay and Nicola Zucchia

Project: Sequential Implementation of Simplex Algorithm with Big-M Method

### Repository Structure

* `LinearConstrainSystem.hpp` header containing the definition of the struct Linear Constrain System and its associated methods

* `Tableau.hpp` header containing the defition of the struct Tableau and its associated methods

* `examples` folder contains 4 source files for testing various cases of linear constrain systems

    * `mainEQ.cpp`  (test for a constrain system with all equalities)
    * `mainINFEASIBLE.cpp` (test for an infeasible constrain system)
    * `mainMIN.cpp`  (test for a minimization problem)
    * `mainUNBOUND.cpp` (test for an unbounded constrain system)

* `CMakeLists.txt` txt file necessary to compile code with CMake

* `main.cpp` source file for testing a standard maximization problem

## Prerequirements

C++ | IDE (user's choice)

Cmake

## How To build and execute

![Screenshot](image.png)
