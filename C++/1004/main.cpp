#include <iostream>

int main() {
    unsigned int T, n, r, result=0;
    int x1, x2, y1, y2, cx, cy, d1, d2;

    std::cin >> T;

    for (unsigned int i=0; i<T; i++){
        std::cin >> x1 >> y1 >> x2 >> y2;
        std::cin >> n;
        for (unsigned int j=0; j<n; j++){
            std::cin >> cx >> cy >> r;
            d1 = (x1-cx)*(x1-cx)+(y1-cy)*(y1-cy);
            d2 = (x2-cx)*(x2-cx)+(y2-cy)*(y2-cy);
            if ( (d1 < r*r &&  d2 > r*r) || (d1 > r*r &&  d2 < r*r) ){
                result++;
            }
        }
        std::cout << result << std::endl;
        result = 0;
    }




    return 0;
}