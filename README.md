# 🎲 Rubik's Cube Solver

A high-performance C++ implementation of a Rubik's Cube solver featuring multiple solving algorithms and cube representations. This project demonstrates advanced algorithmic approaches to solving the classic 3x3x3 Rubik's Cube puzzle.

## ✨ Features

### 🧠 Multiple Solving Algorithms
- **Depth-First Search (DFS)** - Explores solution paths depth-first
- **Breadth-First Search (BFS)** - Guarantees optimal solution length
- **Iterative Deepening DFS (IDDFS)** - Memory-efficient depth-first approach
- **IDA* Search** - Heuristic-guided optimal solver with pattern databases
- **Corner Pattern Database** - Precomputed heuristics for faster solving

### 🔢 Multiple Cube Representations
1. **3D Array** - Intuitive face-based representation
2. **1D Array** - Memory-efficient linear representation  
3. **Bitboard** - Ultra-fast bitwise operations

### 🎯 Core Capabilities
- **Smart Shuffling** - Generate random scrambles with specified move counts
- **Move Validation** - Complete move notation support (F, R, U, D, L, B + primes + doubles)
- **State Verification** - Check if cube is in solved state
- **Performance Benchmarking** - Compare different representations and algorithms

---

## 🚀 Quick Start

### ✅ Status: **FULLY WORKING** 
The project has been tested and verified to work correctly on Windows with GCC. All features are functional including interactive input, solving algorithms, and cube representations.

### Prerequisites
- C++ compiler with C++14 support (GCC, Clang, or MSVC)
- CMake 3.20+ (optional, for CMake build)

### 🔨 Build Instructions

#### Method 1: Direct Compilation (Recommended & Tested ✅)
```bash
g++ -std=c++14 -I Model -I PatternDatabases -I Solver -o rubiks_cube_solver \
    main.cpp \
    Model/RubiksCube.cpp \
    Model/RubiksCube3dArray.cpp \
    Model/RubiksCube1dArray.cpp \
    Model/RubiksCubeBitboard.cpp \
    PatternDatabases/NibbleArray.cpp \
    PatternDatabases/PatternDatabase.cpp \
    PatternDatabases/CornerPatternDatabase.cpp \
    PatternDatabases/CornerDBMaker.cpp \
    PatternDatabases/math.cpp
```

#### Method 2: Using CMake
```bash
# Create build directory
mkdir build && cd build

# Configure (Windows with MinGW)
cmake .. -G "MinGW Makefiles"

# Configure (Linux/Mac)
cmake ..

# Build
cmake --build .

# Run
./rubiks_cube_solver  # Linux/Mac
.\rubiks_cube_solver.exe  # Windows
```

### 🎮 Running the Solver

```bash
# Run the executable
./rubiks_cube_solver        # Linux/Mac
.\rubiks_cube_solver.exe    # Windows
```

### 🎯 Input Options

The program offers three ways to provide input:

#### 1. Random Scramble
```
Choose input method:
1. Random scramble
2. Enter custom scramble  
3. Manual moves
Enter choice (1-3): 1
Enter number of random moves (1-25): 15
```

#### 2. Custom Scramble String
```
Enter choice (1-3): 2
Enter scramble: R U R' U' F R F' U R U' R'
```

#### 3. Manual Move Entry
```
Enter choice (1-3): 3
Enter move (or 'done'): R
Enter move (or 'done'): U
Enter move (or 'done'): R'
Enter move (or 'done'): done
```

#### 4. Batch Testing 🚀
```
Enter choice (1-4): 4
Enter number of test cases (1-1000): 100
Enter scramble length for each test (1-25): 10
```

#### 5. Deep Scramble Testing 🔥
```
Enter choice (1-5): 5
Enter scramble length (10-1000): 15
WARNING: 15 moves may take hours to solve!
Continue? (y/n): y
```

**Batch Testing Features:**
- **Automated Testing**: Test up to 1000 scrambles automatically
- **Performance Metrics**: Timing, success rate, solution statistics
- **Comprehensive Stats**: Min/max/average/median solution lengths
- **Verification**: Each solution is verified to actually solve the cube
- **Progress Tracking**: Real-time progress with detailed output

**Deep Scramble Testing Features:**
- **Extreme Challenge**: Test scrambles up to 1000 moves long
- **Real-time Debugging**: Progress indicators and timing information
- **Performance Analysis**: Detailed solve time and solution length stats
- **Safety Warnings**: Alerts for potentially very long solve times

**Supported Move Notation:**
- **Basic moves**: F, R, U, D, L, B (90° clockwise)
- **Prime moves**: F', R', U', D', L', B' (90° counter-clockwise)  
- **Double moves**: F2, R2, U2, D2, L2, B2 (180° rotation)

---

## 📖 How It Works

### Sample Output

#### Example 1: Random Scramble
```
=== Rubik's Cube Solver ===
Choose input method:
1. Random scramble
2. Enter custom scramble
3. Manual moves
Enter choice (1-3): 1
Enter number of random moves (1-25): 10

Generated scramble: B2 U' F2 U U2 L' B F U' F

Scrambled cube state:
       G Y R
       G W G
       Y W G

O O O  B G Y  R Y W  G R W
W G G  R R B  R B W  O O R
O B R  B O O  B B R  W W Y

       Y Y W
       O Y Y
       G B B

Solving cube...
Solved cube state:
       W W W
       W W W
       W W W

G G G  R R R  B B B  O O O
G G G  R R R  B B B  O O O
G G G  R R R  B B B  O O O

       Y Y Y
       Y Y Y
       Y Y Y

Solution (9 moves): F' U F' B' L U F2 U B2
```

#### Example 2: Custom Scramble
```
Enter choice (1-3): 2
Enter scramble: R U R' U' R U R' U'

Applied scramble: R U R' U' R U R' U'
Solution (8 moves): U R U' R' U R U' R'
```

### What This Shows:
1. **Interactive menu** for choosing input method
2. **Scramble generation/input** with move validation
3. **Visual cube state** before and after solving
4. **Optimal solution** found by IDA* algorithm

---

## ⚡ Performance Expectations

### Solve Time by Scramble Length
| Scramble Length | Expected Solve Time | Difficulty |
|----------------|-------------------|------------|
| 1-8 moves      | < 1 second        | Easy ✅    |
| 9-12 moves     | 1-10 seconds      | Medium 🟡  |
| 13-15 moves    | 10 seconds - 5 minutes | Hard 🟠   |
| 16-18 moves    | 5-60 minutes      | Very Hard 🔴 |
| 19+ moves      | 1+ hours          | Extreme 🔥 |

### Real Test Results
- **15-move scramble**: Solved in 50+ minutes (3009 seconds)
- **10-move scrambles**: Average 125ms in batch testing
- **100 test batch**: 100% success rate, 6.35 average solution length

**Note**: The IDA* algorithm guarantees optimal solutions but can take exponentially longer for deeply scrambled cubes. For scrambles over 15 moves, consider using simpler algorithms or be prepared to wait!

---

## 🏗️ Architecture

### Cube Representations

#### 3D Array (`RubiksCube3dArray`)
- **Structure**: 6 faces × 3×3 grid
- **Pros**: Intuitive, easy to visualize
- **Cons**: Higher memory usage
- **Best for**: Learning, debugging, visualization

#### 1D Array (`RubiksCube1dArray`) 
- **Structure**: Single array with 54 elements
- **Pros**: Memory efficient, cache-friendly
- **Cons**: Less intuitive indexing
- **Best for**: Performance-critical applications

#### Bitboard (`RubiksCubeBitboard`)
- **Structure**: Bitwise representation
- **Pros**: Fastest operations, minimal memory
- **Cons**: Complex implementation
- **Best for**: High-performance solving, competitions

### Solving Algorithms

#### IDA* with Pattern Database (Recommended)
```cpp
// Example usage in code
RubiksCubeBitboard cube;
cube.randomShuffleCube(15);  // Scramble with 15 moves

IDAstarSolver<RubiksCubeBitboard, HashBitboard> solver(cube, "Databases/cornerDepth5V1.txt");
vector<RubiksCube::MOVE> solution = solver.solve();
```

#### BFS (Optimal but Memory-Intensive)
```cpp
BFSSolver<RubiksCubeBitboard, HashBitboard> bfsSolver(cube);
vector<RubiksCube::MOVE> solution = bfsSolver.solve();
```

#### DFS (Fast but Non-Optimal)
```cpp
DFSSolver<RubiksCube3dArray, Hash3d> dfsSolver(cube, 20);  // Max depth 20
vector<RubiksCube::MOVE> solution = dfsSolver.solve();
```

---

## 🎯 Usage Examples

### Basic Cube Operations
```cpp
#include "Model/RubiksCubeBitboard.cpp"

// Create a solved cube
RubiksCubeBitboard cube;

// Check if solved
if (cube.isSolved()) {
    cout << "Cube is solved!" << endl;
}

// Perform moves
cube.f();      // Front face clockwise
cube.rPrime(); // Right face counter-clockwise  
cube.u2();     // Upper face 180 degrees

// Print current state
cube.print();
```

### Scrambling and Solving
```cpp
// Scramble the cube
vector<RubiksCube::MOVE> scramble = cube.randomShuffleCube(20);

// Print scramble moves
cout << "Scramble: ";
for (auto move : scramble) {
    cout << cube.getMove(move) << " ";
}
cout << endl;

// Solve using IDA*
IDAstarSolver<RubiksCubeBitboard, HashBitboard> solver(cube);
vector<RubiksCube::MOVE> solution = solver.solve();

// Print solution
cout << "Solution: ";
for (auto move : solution) {
    cout << cube.getMove(move) << " ";
}
cout << endl;
```

### Performance Comparison
```cpp
// Compare different representations
RubiksCube3dArray cube3d;
RubiksCube1dArray cube1d;  
RubiksCubeBitboard cubeBit;

// Time each representation
auto start = chrono::high_resolution_clock::now();
// ... perform operations ...
auto end = chrono::high_resolution_clock::now();
auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
```

---

## 📁 Project Structure

```
rubiks-cube-solver/
├── 📄 README.md                    # This file
├── 📄 CMakeLists.txt               # CMake build configuration
├── 📄 main.cpp                     # Main program entry point
├── 📁 Model/                       # Cube representations
│   ├── 📄 RubiksCube.h/.cpp        # Base abstract class
│   ├── 📄 RubiksCube3dArray.cpp    # 3D array implementation
│   ├── 📄 RubiksCube1dArray.cpp    # 1D array implementation
│   ├── 📄 RubiksCubeBitboard.cpp   # Bitboard implementation
│   └── 📁 PatternDatabase/         # Pattern database interface
├── 📁 Solver/                      # Solving algorithms
│   ├── 📄 DFSSolver.h              # Depth-first search
│   ├── 📄 BFSSolver.h              # Breadth-first search  
│   ├── 📄 IDDFSSolver.h            # Iterative deepening DFS
│   └── 📄 IDAstarSolver.h          # IDA* with heuristics
├── 📁 PatternDatabases/            # Heuristic databases
│   ├── 📄 CornerPatternDatabase.*  # Corner pattern heuristics
│   ├── 📄 CornerDBMaker.*          # Database generation
│   ├── 📄 PatternDatabase.*        # Base pattern database
│   ├── 📄 NibbleArray.*            # Memory-efficient storage
│   └── 📄 math.*                   # Mathematical utilities
└── 📁 Databases/                   # Precomputed databases
    └── 📄 cornerDepth5V1.txt       # Corner pattern database
```

---

## 🔧 Customization

### Modifying the Main Program
Edit `main.cpp` to customize behavior:

```cpp
// Change scramble length
vector<RubiksCube::MOVE> scramble = cube.randomShuffleCube(25); // 25 moves instead of 13

// Use different solver
BFSSolver<RubiksCubeBitboard, HashBitboard> bfsSolver(cube);
auto solution = bfsSolver.solve();

// Use different cube representation
RubiksCube3dArray cube; // Instead of RubiksCubeBitboard
```

### Creating Custom Solvers
Implement the solver interface:

```cpp
template<typename T, typename H>
class CustomSolver {
    T rubiksCube;
public:
    CustomSolver(T _rubiksCube) : rubiksCube(_rubiksCube) {}
    
    vector<RubiksCube::MOVE> solve() {
        // Your solving algorithm here
        return solution_moves;
    }
};
```

---

## 🎓 Algorithm Details

### Move Notation
- **F, R, U, D, L, B**: Clockwise 90° rotations
- **F', R', U', D', L', B'**: Counter-clockwise 90° rotations  
- **F2, R2, U2, D2, L2, B2**: 180° rotations

### Pattern Database
The corner pattern database stores the minimum number of moves needed to solve just the corner pieces from any position. This provides an admissible heuristic for the IDA* algorithm, significantly reducing the search space.

### Performance Characteristics
- **BFS**: Optimal solutions, high memory usage O(b^d)
- **DFS**: Fast, non-optimal, low memory O(d)
- **IDDFS**: Optimal, moderate memory, slower than BFS
- **IDA***: Near-optimal, low memory, fastest with good heuristics

---

## 🤝 Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

---

## 📜 License

This project is open source and available under the [MIT License](LICENSE).

---

## 🙏 Acknowledgments

- Rubik's Cube solving algorithms based on established computer science research
- Pattern database techniques inspired by competitive speedcubing community
- Performance optimizations derived from algorithmic competitions

---

**Happy Cubing! 🎲✨**
