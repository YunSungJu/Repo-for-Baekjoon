#include <iostream>

float distance(int x1, int x2, int y1, int y2){
    return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}

int location(int x1, int y1, int r1, int x2, int y2, int r2){
    if (x1==x2 && y1==y2 && r1==r2){
        return -1;
    }else if ( distance(x1,x2,y1,y2) >  (r1+r2)*(r1+r2) ){
        return 0;
    }else if ( distance(x1,x2,y1,y2) == (r1+r2)*(r1+r2) ) {
        return 1;
        //두원이 곂치지 않는 경우
    }else if ( distance(x1,x2,y1,y2) == (r1-r2)*(r1-r2) ) {
        return 1;
    }else if ( distance(x1,x2,y1,y2) <  (r1-r2)*(r1-r2) ){
        return 0;
    }else {
        return 2;
    }
}

int main() {
    unsigned int N;
    int x1, y1, r1, x2, y2, r2;

    std::cin >> N;

    for (unsigned int i=0; i<N; i++) {

        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2 ;
        std::cout << location(x1,y1,r1,x2,y2,r2) << std::endl;
    }

    return 0;
}