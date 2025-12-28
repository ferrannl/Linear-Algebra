![Linal gameplay](logo.gif)

# Linear Algebra – Space Simulation (IIIN-LINAL)

> **Linal Eindopdracht** for the course **Lineaire Algebra (IIIN-LINAL)**  
> Made using **C++** and **SDL**  
> **Author:** Ferran Hendriks

This repository contains the final assignment (*Linal Eindopdracht*) for the course **Lineaire Algebra (IIIN-LINAL)**.  
It is a small **space simulation** that demonstrates how linear algebra is used in game development for:

- Movement (forward motion and rotation)  
- Transformations with matrices  
- Basic collision / “hit” logic in space  

---

## Table of Contents

- [About the Project](#about-the-project)
- [Repository Structure](#repository-structure)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
  - [Cloning the Repository](#cloning-the-repository)
  - [Opening in Visual Studio (Windows)](#opening-in-visual-studio-windows)
- [Building and Running](#building-and-running)
- [Unit Tests](#unit-tests)
- [Course / Assignment Documents](#course--assignment-documents)
- [Linear Algebra Concepts](#linear-algebra-concepts)
- [Notes](#notes)
- [Author](#author)

---

## About the Project

This project was created as the **final assignment** for the course **Lineaire Algebra (IIIN-LINAL)**.

In the course, you learn how much mathematics is involved in making games. The following topics are covered:

- Positions, vectors and lines in space  
- Movement and rotation of objects  
- Scaling and translation using matrices  
- Rotation in 2D and 3D  
- Planes in 3D, dot product (*inproduct*) and cross product (*uitproduct*)  
- Matrix inverses and applications  
- Distances, intersections and intersection lines in 3D  

The space simulation in this repository ties these topics together in a practical, visual way.

---

## Repository Structure

At the top level you’ll find:

- `Space-Simulation/` — main project containing the space simulation source code and project files  
- `Space-Simulation-UnitTest/` — unit test project for testing core functions and math used in the simulation  
- `External Libraries/SDL2/` — bundled **SDL2** headers/libraries used by the project (for graphics and input)  
- `Linal-Eindopdracht-Ferran-Nick.sln` — Visual Studio solution file (simulation + tests)  
- `LINAL_Assessment_2020-11-13.pdf` — original assignment description  
- `Beoordeling LINAL Assessment 2020-11-13.pdf` — evaluation / grading document  
- `.gitattributes`, `.gitignore` — standard Git configuration files  
- `README.md` — this file  

---

## Requirements

To build and run the project, you typically need:

- **Operating system:** Windows (originally developed and tested on Windows)  
- **Tools:** Microsoft Visual Studio (2019 or later recommended) with C++ support  
- **Libraries:** SDL2 (already included in `External Libraries/SDL2/`)  

---

## Getting Started

### Cloning the Repository

```bash
git clone https://github.com/ferrannl/Linear-Algebra.git
cd Linear-Algebra
```

### Opening in Visual Studio (Windows)

1. Start Visual Studio  
2. Open the solution file: `Linal-Eindopdracht-Ferran-Nick.sln`  
3. After opening, you should see at least the following projects:
   - `Space-Simulation`  
   - `Space-Simulation-UnitTest`  

---

## Building and Running

1. **Select Startup Project**  
   In Visual Studio, set `Space-Simulation` as the Startup Project  

2. **Check SDL2 Paths (if necessary)**  
   - C/C++ → General → Additional Include Directories → `External Libraries/SDL2/include`  
   - Linker → General → Additional Library Directories → `External Libraries/SDL2/lib`  
   - Ensure the SDL2 `.dll` is accessible (next to the executable or on your PATH)  

3. **Build**  
   Choose Debug or Release configuration  
   Build → Build Solution (or press **Ctrl+Shift+B**)  

4. **Run**  
   Start the simulation with **F5** (debugger) or **Ctrl+F5** (without debugger)  
   An SDL window should open showing the space simulation  

---

## Unit Tests

The `Space-Simulation-UnitTest` project contains tests for parts of the math/logic used by the main simulation.

To run the tests:

1. Set `Space-Simulation-UnitTest` as the Startup Project  
2. Build and run the project  
3. Alternatively, use Visual Studio’s **Test Explorer** to run tests individually  

---

## Course / Assignment Documents

This repository also includes the original assignment and evaluation documents:

- **Assignment (Opdracht):** `LINAL_Assessment_2020-11-13.pdf`  
- **Grading (Beoordeling):** `Beoordeling LINAL Assessment 2020-11-13.pdf`  

These describe:
- The goals of the course  
- The requirements of the final assignment  
- The criteria used for grading this project  

---

## Linear Algebra Concepts

The project demonstrates several core linear algebra topics common in games and simulations:

- **Vectors & Points**  
  Positions and directions in space, vector addition/subtraction, normalization  

- **Matrices**  
  Representing transformations, matrix multiplication to combine transformations  

- **Transformations**  
  Translation, scaling, rotation in 2D and 3D  

- **Dot Product & Cross Product**  
  Dot product for angles/projections, cross product for normals/orientation in 3D  

- **Geometry & Intersections**  
  Distances between objects, basic collision detection, lines/planes/intersection logic  

---

## Notes

- This repository serves primarily as an archive of a school assignment  
- No explicit open-source license file is included — contact the author before reuse  
- The course description/context are originally in Dutch  
- This README is written in English for broader accessibility  

---

## Author

**Ferran Hendriks**  
Creator of the IIIN-LINAL space simulation final assignment  
Implemented using **C++** and **SDL**  

If you have questions about the project, the course, or the code, feel free to open an issue or contact the author.
```
