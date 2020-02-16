#include <iostream>

int numSolved = 0;

void printGrid(int grid[9][9], int num){
    std::cout << "Solved Sudoku, possibility " << num << ":" << std::endl;
    for(int i = 0; i < 9; ++i){
        for(int j = 0; j < 9; ++j){
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

bool possible(int y, int x, int n, int grid[9][9]){

    // Check if number is in column
    for(int i = 0; i < 9; ++i){
        if(grid[y][i] == n){
            return false;
        }
    }

    // Check if number is in row
    for(int i = 0; i < 9; ++i){
        if(grid[i][x] == n){
            return false;
        }
    }

    // Check current 3x3 grid
    int x0 = ((x / 3) * 3);
    int y0 = ((y / 3) * 3);
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            if(grid[y0+i][x0+j] == n){
                return false;
            }
        }
    }
    return true;
}

void solve(int grid[9][9]){
    for(int y = 0; y < 9; ++y){
        for(int x = 0; x < 9; ++x){
            if(grid[y][x] == 0){
                for(int n = 1; n < 10; ++n){
                    if(possible(y, x, n, grid)){
                        grid[y][x] = n;
                        solve(grid);
                        grid[y][x] = 0;
                    }
                }
                return;
            }
        }
    }
    ++numSolved;
    printGrid(grid, numSolved);
}

int main() {
    int grid[9][9]/* = {
            {5, 3, 0, 0, 7, 0, 0, 0, 0},
            {6, 0, 0, 1, 9, 5, 0, 0, 0},
            {0, 9, 8, 0, 0, 0, 0, 6, 0},
            {8, 0, 0, 0, 6, 0, 0, 0, 3},
            {4, 0, 0, 8, 0, 3, 0, 0, 1},
            {7, 0, 0, 0, 2, 0, 0, 0, 6},
            {0, 6, 0, 0, 0, 0, 2, 8, 0},
            {0, 0, 0, 4, 1, 9, 0, 0, 5},
            {0, 0, 0, 0, 8, 0, 0, 0, 0}
    }*/;
    for(int i = 0; i < 9; ++i){ // TODO: Fix this block to input correctly
        char line[9];
        std::cin >> line;
        for(int j = 0; j < 9; ++j){
            try{
                grid[i][j] = (int)line[j];
            }
            catch(const std::exception&){
                return -1;
            }
        }
    }
    printGrid(grid, 0);
    solve(grid);

    return 0;
}

