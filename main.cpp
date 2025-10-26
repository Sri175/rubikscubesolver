//
// Created by Lakshya Mittal on 17-12-2021.
//

#include <bits/stdc++.h>
#include <sstream>
#include <map>
#include <chrono>
#include <algorithm>
//#include "Model/RubiksCube3dArray.cpp"
//#include "Model/RubiksCube1dArray.cpp"
//#include "Model/RubiksCubeBitboard.cpp"
#include "Solver/DFSSolver.h"
#include "Solver/BFSSolver.h"
#include "Solver/IDDFSSolver.h"
#include "Solver/IDAstarSolver.h"
//#include "PatternDatabases/CornerPatternDatabase.h"
#include "PatternDatabases/CornerDBMaker.h"

using namespace std;

int main() {
//    RubiksCube3dArray object3DArray;
//    RubiksCube1dArray object1dArray;
//    RubiksCubeBitboard objectBitboard;
//
//    object3DArray.print();
//
//    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (object1dArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (objectBitboard.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    objectBitboard.u();
//    object3DArray.u();
//    object1dArray.u();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.l();
//    object3DArray.l();
//    object1dArray.l();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.f();
//    object3DArray.f();
//    object1dArray.f();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.r();
//    object3DArray.r();
//    object1dArray.r();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.b();
//    object3DArray.b();
//    object1dArray.b();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.d();
//    object3DArray.d();
//    object1dArray.d();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (object1dArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (objectBitboard.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    objectBitboard.dPrime();
//    object3DArray.dPrime();
//    object1dArray.dPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.bPrime();
//    object3DArray.bPrime();
//    object1dArray.bPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.rPrime();
//    object3DArray.rPrime();
//    object1dArray.rPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.fPrime();
//    object3DArray.fPrime();
//    object1dArray.fPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.lPrime();
//    object3DArray.lPrime();
//    object1dArray.lPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.uPrime();
//    object3DArray.uPrime();
//    object1dArray.uPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (object1dArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (objectBitboard.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";

    // Create two Cubes ------------------------------------------------------------------------------------------

//    RubiksCube3dArray cube1;
//    RubiksCube3dArray cube2;

//    RubiksCube1dArray cube1;
//    RubiksCube1dArray cube2;

//    RubiksCubeBitboard cube1;
//    RubiksCubeBitboard cube2;


//  Equality and assignment of cubes --------------------------------------------------------------------------

//    if(cube1 == cube2) cout << "Is equal\n";
//    else cout << "Not Equal\n";
//
//    cube1.randomShuffleCube(1);
//
//    if(cube1 == cube2) cout << "Is equal\n";
//    else cout << "Not Equal\n";
//
//    cube2 = cube1;
//
//    if(cube1 == cube2) cout << "Is equal\n";
//    else cout << "Not Equal\n";


//  Unordered_map of Cubes  ------------------------------------------------------------------------------------


//    unordered_map<RubiksCube3dArray, bool, Hash3d> mp1;

//    unordered_map<RubiksCube1dArray, bool, Hash1d> mp1;

//    unordered_map<RubiksCubeBitboard, bool, HashBitboard> mp1;
//
//    mp1[cube1] = true;
//    cube2.randomShuffleCube(8);
//    if (mp1[cube1]) cout << "Cube1 is present\n";
//    else cout << "Cube1 is not present\n";
//
//    if (mp1[cube2]) cout << "Cube2 is present\n";
//    else cout << "Cube2 is not present\n";
//

// DFS Solver Testing __________________________________________________________________________________________
//    RubiksCube3dArray cube;
//    cube.print();
//
//    vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(6);
//    for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    cube.print();
//
//    DFSSolver<RubiksCube3dArray, Hash3d> dfsSolver(cube, 8);
//    vector<RubiksCube::MOVE> solve_moves = dfsSolver.solve();
//
//    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    dfsSolver.rubiksCube.print();


//BFS Solver -----------------------------------------------------------------------------------------------------
//    RubiksCubeBitboard cube;
//    cube.print();
//
//    vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(6);
//    for(auto move: shuffle_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    cube.print();
//
//    BFSSolver<RubiksCubeBitboard, HashBitboard> bfsSolver(cube);
//    vector<RubiksCube::MOVE> solve_moves = bfsSolver.solve();
//
//    for(auto move: solve_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    bfsSolver.rubiksCube.print();

// IDDFS Solver ----------------------------------------------------------------------------------------------------
//    RubiksCubeBitboard cube;
//    cube.print();
//
//    vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(7);
//    for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    cube.print();
//
//    IDDFSSolver<RubiksCubeBitboard, HashBitboard> iddfsSolver(cube, 7);
//    vector<RubiksCube::MOVE> solve_moves = iddfsSolver.solve();
//
//    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    iddfsSolver.rubiksCube.print();

// IDA* SOLVER ---------------------------------------------------------------------------------------------------
//    RubiksCubeBitboard cube;
//    cube.print();
//
//    vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(5);
//    for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    cube.print();
//
//    IDAstarSolver<RubiksCubeBitboard, HashBitboard> idAstarSolver(cube);
//    vector<RubiksCube::MOVE> solve_moves = idAstarSolver.solve();
//    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
//    cout << "\n";
//    idAstarSolver.rubiksCube.print();

// CornerPatternDatabase Testing ---------------------------------------------------------------------------------

//    CornerPatternDatabase cornerDB;
//    RubiksCubeBitboard cube;
//    cube.print();
//
//    cout << (int)cornerDB.getNumMoves(cube) << "\n";
//
//    cornerDB.setNumMoves(cube, 5);
//
//    cout << (int)cornerDB.getNumMoves(cube) << "\n";
//
//    cube.randomShuffleCube(1);
//    cube.print();
//    cout << (int)cornerDB.getNumMoves(cube) << "\n";
//
//    cornerDB.setNumMoves(cube, 6);
//
//    cout << (int)cornerDB.getNumMoves(cube) << "\n";


// CornerDBMaker Testing --------------------------------------------------------------------------
    string fileName = "Databases/cornerDepth5V1.txt";

//    Code to create Corner Database
//    CornerDBMaker dbMaker(fileName, 0x99);
//    dbMaker.bfsAndStore();

    RubiksCubeBitboard cube;
    
    cout << "=== Rubik's Cube Solver ===" << endl;
    cout << "Choose input method:" << endl;
    cout << "1. Random scramble" << endl;
    cout << "2. Enter custom scramble" << endl;
    cout << "3. Manual moves" << endl;
    cout << "4. Batch test (multiple random scrambles)" << endl;
    cout << "5. Deep scramble test (100+ moves with debugging)" << endl;
    cout << "Enter choice (1-5): ";
    
    int choice;
    cin >> choice;
    
    vector<RubiksCube::MOVE> shuffleMoves;
    
    if (choice == 1) {
        cout << "Enter number of random moves (1-500): ";
        int numMoves;
        cin >> numMoves;
        shuffleMoves = cube.randomShuffleCube(numMoves);
        cout << "\nGenerated scramble: ";
        for (auto move: shuffleMoves) cout << cube.getMove(move) << " ";
        cout << "\n\n";
    }
    else if (choice == 2) {
        cout << "Enter scramble (space-separated moves like: F R U R' U' F'):" << endl;
        cout << "Available moves: F, R, U, D, L, B (add ' for counter-clockwise, 2 for double)" << endl;
        cout << "Scramble: ";
        
        cin.ignore(); // Clear the newline from previous input
        string scrambleLine;
        getline(cin, scrambleLine);
        
        // Parse the scramble string
        istringstream iss(scrambleLine);
        string moveStr;
        
        map<string, RubiksCube::MOVE> moveMap = {
            {"F", RubiksCube::MOVE::F}, {"F'", RubiksCube::MOVE::FPRIME}, {"F2", RubiksCube::MOVE::F2},
            {"R", RubiksCube::MOVE::R}, {"R'", RubiksCube::MOVE::RPRIME}, {"R2", RubiksCube::MOVE::R2},
            {"U", RubiksCube::MOVE::U}, {"U'", RubiksCube::MOVE::UPRIME}, {"U2", RubiksCube::MOVE::U2},
            {"D", RubiksCube::MOVE::D}, {"D'", RubiksCube::MOVE::DPRIME}, {"D2", RubiksCube::MOVE::D2},
            {"L", RubiksCube::MOVE::L}, {"L'", RubiksCube::MOVE::LPRIME}, {"L2", RubiksCube::MOVE::L2},
            {"B", RubiksCube::MOVE::B}, {"B'", RubiksCube::MOVE::BPRIME}, {"B2", RubiksCube::MOVE::B2}
        };
        
        while (iss >> moveStr) {
            if (moveMap.find(moveStr) != moveMap.end()) {
                cube.move(moveMap[moveStr]);
                shuffleMoves.push_back(moveMap[moveStr]);
            } else {
                cout << "Warning: Unknown move '" << moveStr << "' ignored." << endl;
            }
        }
        
        cout << "\nApplied scramble: ";
        for (auto move: shuffleMoves) cout << cube.getMove(move) << " ";
        cout << "\n\n";
    }
    else if (choice == 3) {
        cout << "Manual mode - enter moves one by one (type 'done' to finish):" << endl;
        cout << "Available moves: F, R, U, D, L, B (add ' for counter-clockwise, 2 for double)" << endl;
        
        map<string, RubiksCube::MOVE> moveMap = {
            {"F", RubiksCube::MOVE::F}, {"F'", RubiksCube::MOVE::FPRIME}, {"F2", RubiksCube::MOVE::F2},
            {"R", RubiksCube::MOVE::R}, {"R'", RubiksCube::MOVE::RPRIME}, {"R2", RubiksCube::MOVE::R2},
            {"U", RubiksCube::MOVE::U}, {"U'", RubiksCube::MOVE::UPRIME}, {"U2", RubiksCube::MOVE::U2},
            {"D", RubiksCube::MOVE::D}, {"D'", RubiksCube::MOVE::DPRIME}, {"D2", RubiksCube::MOVE::D2},
            {"L", RubiksCube::MOVE::L}, {"L'", RubiksCube::MOVE::LPRIME}, {"L2", RubiksCube::MOVE::L2},
            {"B", RubiksCube::MOVE::B}, {"B'", RubiksCube::MOVE::BPRIME}, {"B2", RubiksCube::MOVE::B2}
        };
        
        string moveStr;
        while (true) {
            cout << "Enter move (or 'done'): ";
            cin >> moveStr;
            
            if (moveStr == "done" || moveStr == "DONE") break;
            
            if (moveMap.find(moveStr) != moveMap.end()) {
                cube.move(moveMap[moveStr]);
                shuffleMoves.push_back(moveMap[moveStr]);
                cout << "Applied: " << moveStr << endl;
                cube.print();
            } else {
                cout << "Invalid move. Try again." << endl;
            }
        }
        
        cout << "\nFinal scramble sequence: ";
        for (auto move: shuffleMoves) cout << cube.getMove(move) << " ";
        cout << "\n\n";
    }
    else if (choice == 4) {
        cout << "Batch Testing Mode" << endl;
        cout << "Enter number of test cases (1-1000): ";
        int numTests;
        cin >> numTests;
        
        cout << "Enter scramble length for each test (1-500): ";
        int scrambleLength;
        cin >> scrambleLength;
        
        cout << "Enter timeout per solve in seconds (10-300, 0 for no timeout): ";
        int timeoutSeconds;
        cin >> timeoutSeconds;
        
        cout << "\n=== Starting Batch Test ===" << endl;
        cout << "Testing " << numTests << " scrambles with " << scrambleLength << " moves each...\n" << endl;
        
        int successCount = 0;
        int totalMoves = 0;
        int minMoves = INT_MAX;
        int maxMoves = 0;
        vector<int> solutionLengths;
        
        auto startTime = chrono::high_resolution_clock::now();
        
        for (int i = 1; i <= numTests; i++) {
            RubiksCubeBitboard testCube;
            vector<RubiksCube::MOVE> testScramble = testCube.randomShuffleCube(scrambleLength);
            
            cout << "Test " << i << "/" << numTests << " - Scramble: ";
            for (auto move: testScramble) cout << testCube.getMove(move) << " ";
            cout << "-> ";
            
            try {
                cout << "Solving..." << flush;
                auto solveStartTime = chrono::high_resolution_clock::now();
                
                IDAstarSolver<RubiksCubeBitboard, HashBitboard> testSolver(testCube, fileName);
                auto solution = testSolver.solve();
                
                auto solveEndTime = chrono::high_resolution_clock::now();
                auto solveDuration = chrono::duration_cast<chrono::milliseconds>(solveEndTime - solveStartTime);
                
                // Verify solution works
                RubiksCubeBitboard verifyCube = testCube;
                for (auto move : solution) {
                    verifyCube.move(move);
                }
                
                if (verifyCube.isSolved()) {
                    successCount++;
                    int solutionLength = solution.size();
                    totalMoves += solutionLength;
                    solutionLengths.push_back(solutionLength);
                    minMoves = min(minMoves, solutionLength);
                    maxMoves = max(maxMoves, solutionLength);
                    
                    cout << "SOLVED (" << solutionLength << " moves, " << solveDuration.count() << "ms): ";
                    for (auto move: solution) cout << testCube.getMove(move) << " ";
                    cout << endl;
                } else {
                    cout << "FAILED - Solution doesn't work!" << endl;
                }
            } catch (const exception& e) {
                cout << "ERROR - " << e.what() << endl;
            }
        }
        
        auto endTime = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::milliseconds>(endTime - startTime);
        
        cout << "\n=== Batch Test Results ===" << endl;
        cout << "Total Tests: " << numTests << endl;
        cout << "Successful Solves: " << successCount << " (" << (100.0 * successCount / numTests) << "%)" << endl;
        cout << "Failed Solves: " << (numTests - successCount) << endl;
        cout << "Total Time: " << duration.count() << " ms" << endl;
        cout << "Average Time per Solve: " << (duration.count() / (double)numTests) << " ms" << endl;
        
        if (successCount > 0) {
            cout << "Solution Length Stats:" << endl;
            cout << "  - Average: " << (totalMoves / (double)successCount) << " moves" << endl;
            cout << "  - Minimum: " << minMoves << " moves" << endl;
            cout << "  - Maximum: " << maxMoves << " moves" << endl;
            
            // Calculate median
            sort(solutionLengths.begin(), solutionLengths.end());
            double median = solutionLengths.size() % 2 == 0 ? 
                (solutionLengths[solutionLengths.size()/2 - 1] + solutionLengths[solutionLengths.size()/2]) / 2.0 :
                solutionLengths[solutionLengths.size()/2];
            cout << "  - Median: " << median << " moves" << endl;
        }
        
        return 0; // Exit after batch test
    }
    else if (choice == 5) {
        cout << "Deep Scramble Test Mode" << endl;
        cout << "WARNING: Scrambles over 20 moves can take VERY long to solve!" << endl;
        cout << "Recommended: Start with 15-20 moves, then increase gradually." << endl;
        cout << "Enter scramble length (10-1000): ";
        int deepScrambleLength;
        cin >> deepScrambleLength;
        
        if (deepScrambleLength > 25) {
            cout << "WARNING: " << deepScrambleLength << " moves may take hours to solve!" << endl;
            cout << "Continue? (y/n): ";
            char confirm;
            cin >> confirm;
            if (confirm != 'y' && confirm != 'Y') {
                cout << "Cancelled. Try a smaller scramble length." << endl;
                return 0;
            }
        }
        
        cout << "\n=== Deep Scramble Test ===" << endl;
        cout << "Creating " << deepScrambleLength << " move scramble..." << endl;
        
        RubiksCubeBitboard deepCube;
        auto deepScramble = deepCube.randomShuffleCube(deepScrambleLength);
        
        cout << "Scramble created! First 20 moves: ";
        for (int i = 0; i < min(20, (int)deepScramble.size()); i++) {
            cout << deepCube.getMove(deepScramble[i]) << " ";
        }
        if (deepScramble.size() > 20) cout << "... (+" << (deepScramble.size() - 20) << " more)";
        cout << "\n" << endl;
        
        cout << "Scrambled cube state:" << endl;
        deepCube.print();
        
        cout << "Starting solve with debugging..." << endl;
        cout << "Note: This may take several minutes for very long scrambles!" << endl;
        cout << "Working..." << endl;
        cout.flush(); // Force output immediately
        
        auto solveStart = chrono::high_resolution_clock::now();
        
        try {
            cout << "Creating solver..." << endl;
            cout.flush();
            
            IDAstarSolver<RubiksCubeBitboard, HashBitboard> deepSolver(deepCube, fileName);
            
            cout << "Solver created, starting search..." << endl;
            cout.flush();
            
            auto solution = deepSolver.solve();
            
            auto solveEnd = chrono::high_resolution_clock::now();
            auto solveDuration = chrono::duration_cast<chrono::milliseconds>(solveEnd - solveStart);
            
            cout << "\n\nSOLVED!" << endl;
            cout << "Scramble length: " << deepScrambleLength << " moves" << endl;
            cout << "Solution length: " << solution.size() << " moves" << endl;
            cout << "Solve time: " << solveDuration.count() << " ms (" << (solveDuration.count() / 1000.0) << " seconds)" << endl;
            
            cout << "\nSolution: ";
            for (auto move: solution) cout << deepCube.getMove(move) << " ";
            cout << endl;
            
            // Verify solution
            RubiksCubeBitboard verifyCube = deepCube;
            for (auto move : solution) {
                verifyCube.move(move);
            }
            
            cout << "\nVerification: " << (verifyCube.isSolved() ? "PASSED ✓" : "FAILED ✗") << endl;
            
        } catch (const exception& e) {
            auto solveEnd = chrono::high_resolution_clock::now();
            auto solveDuration = chrono::duration_cast<chrono::milliseconds>(solveEnd - solveStart);
            cout << "\nERROR after " << solveDuration.count() << "ms: " << e.what() << endl;
        }
        
        return 0; // Exit after deep test
    }
    else {
        cout << "Invalid choice. Using random scramble with 13 moves." << endl;
        shuffleMoves = cube.randomShuffleCube(13);
    }
    
    cout << "Scrambled cube state:" << endl;
    cube.print();
    
    cout << "Solving cube..." << endl;
    IDAstarSolver<RubiksCubeBitboard, HashBitboard> idaStarSolver(cube, fileName);
    auto moves = idaStarSolver.solve();

    cout << "Solved cube state:" << endl;
    idaStarSolver.rubiksCube.print();
    
    cout << "Solution (" << moves.size() << " moves): ";
    for (auto move: moves) cout << cube.getMove(move) << " ";
    cout << "\n";


    return 0;
}