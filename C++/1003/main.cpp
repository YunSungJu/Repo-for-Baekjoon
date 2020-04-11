#include <iostream>
#include <vector>

void fibo(std::pair<int,int> Zero_One[], unsigned int N) {

    std::pair<int,int> pair;
    for (unsigned int i=0; i<N; i++){
        if (i==0){
            pair.first = 1;
            pair.second = 0;
            Zero_One[0] = pair;
        }else if (i==1){
            pair.first = 0;
            pair.second = 1;
            Zero_One[1] = pair;
        }else{
            pair.first  = Zero_One[i-2].first + Zero_One[i-1].first;
            pair.second = Zero_One[i-2].second + Zero_One[i-1].second;
            Zero_One[i] = pair;
        }
    }

}

int main() {
    unsigned int T, N;
    int max = 0;

    std::cin >> T;
    int* result = new int[T]();


    for (unsigned int i=0; i < T; i++){
        std::cin >> N;
        result[i] = N;
        if (max < N){
            max = N;
        }
    }
    std::pair<int,int>* Zero_One = new std::pair<int,int>[max+1]();
    fibo(Zero_One, max+1);

    for (unsigned int i=0; i<T; i++){
        std::cout << Zero_One[result[i]].first << " " << Zero_One[result[i]].second << std::endl;
    }

    delete[] result;
    delete[] Zero_One;
    return 0;
}