#include <iostream>
#include <string>

int numSolved = 0;

bool is_digits(const std::string &str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}

void printGrid(int grid[9][9], int num){
    if(num != 0) std::cout << "Solved Sudoku, possibility " << num << ":" << std::endl;
    else std::cout << "Unsolved Sudoku:" << std::endl;
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
    int grid[9][9];
    for(int i = 0; i < 9; ++i){
        std::string line;
        std::cout << "Enter line " << i+1 << " : ";
        std::cin >> line;
        if(line.length() != 9){
            std::cerr << "Invalid sudoku grid, exiting...1" << std::endl;
            return -1;
        }
        for(int j = 0; j < 9; ++j){
            try{
                if(!isdigit(((int)(line[j]) - 48))) grid[i][j] = ((int)line[j] - 48);
                else throw std::exception();
            }
            catch(const std::exception& e){
                std::cout << "Invalid sudoku grid, exiting...2" << std::endl;
                return -1;
            }
        }
    }
    printGrid(grid, 0);
    solve(grid);

    return 0;
}

