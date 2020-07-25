#include <string.h>
#include <iostream>

char board1[8][8] = {{'W','B','W','B','W','B','W','B'},
                     {'B','W','B','W','B','W','B','W'},
                     {'W','B','W','B','W','B','W','B'},
                     {'B','W','B','W','B','W','B','W'},
                     {'W','B','W','B','W','B','W','B'},
                     {'B','W','B','W','B','W','B','W'},
                     {'W','B','W','B','W','B','W','B'},
                     {'B','W','B','W','B','W','B','W'}};

char board2[8][8] = {{'B','W','B','W','B','W','B','W'},
                     {'W','B','W','B','W','B','W','B'},
                     {'B','W','B','W','B','W','B','W'},
                     {'W','B','W','B','W','B','W','B'},
                     {'B','W','B','W','B','W','B','W'},
                     {'W','B','W','B','W','B','W','B'},
                     {'B','W','B','W','B','W','B','W'},
                     {'W','B','W','B','W','B','W','B'}};

int compare_board(int row, int col, char** input);
int main()
{
    unsigned int N, M, result = 2500, temp;
    char c;

    std::cin >> N >> M;
    
    char** input = new char*[N];
    for (unsigned int i = 0; i < N; i++) {
        input[i] = new char[M];
        memset(input[i], 0, sizeof(char)*M);
    }

    for (unsigned int i = 0; i < N; i++){
        for (unsigned int j = 0; j < M; j++) {
            std::cin >> c;
            input[i][j] = c;
        }
    }

    // std::cout << "N : " << N << "  M : " << M << '\n';
    // for (unsigned int i = 0; i < N; i++){
    //     for (unsigned int j = 0; j < M; j++) {
    //         std::cout << input[i][j];
    //     }
    //     std::cout << '\n';
    // }

    for (unsigned int i = 0; i < N-7; i++) {
        for (unsigned int j = 0; j < M-7; j++) {
            temp = compare_board(i, j, input);
            // std::cout << "temp : " << temp << "  result : " << result << '\n';
            result = result > temp ? temp : result;
        }
    }

    std::cout << result;

    for (unsigned int i = 0; i < N; i++) {
        delete[] input[i];
    }
    delete[] input;

    return 0;
}

int compare_board(int row, int col, char** input) {
    int result1 = 0, result2 = 0;

    for (unsigned int i = 0; i < 8; i++) {
        for (unsigned int j = 0; j < 8; j++) {
            if (board1[i][j] != input[row+i][col+j]) {
                result1++;
            }
        }
    }

    for (unsigned int i = 0; i < 8; i++) {
        for (unsigned int j = 0; j < 8; j++) {
            if (board2[i][j] != input[row+i][col+j]) {
                result2++;
            }
        }
    }

    return result1 > result2 ? result2 : result1;
}
