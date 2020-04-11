#include <stdio.h>
#include <stdlib.h>

void makestar(int **stars,int x, int y,int h);

int main(int argc, const char * argv[]) {
    
    int n,cnt;
    scanf("%d",&n);
    cnt = n*2-1; //바닥 별 개수 + 공백 개수


    int **stars = NULL;
    int height=n,width=cnt;
    stars = (int **) calloc (height, sizeof(int *));
    stars[0] = (int *) calloc (width*height, sizeof(int) );


    for( int i=1; i<height; i++){
        stars[i] = stars[ i-1 ] + width;
    }
    makestar(stars,0,cnt/2,n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<cnt; j++) {
            if(stars[i][j]==1)
                printf("*");
            else {
                printf(" ");
            }
        }
        if(i != cnt-1)
            printf("\n");
    }
    free(stars[0]);
    free(stars);
    return 0;
}
void makestar(int **stars,int height, int width, int h) {
    if(h==3) {
        stars[height][width] = 1;
        stars[height+1][width-1] = 1;
        stars[height+1][width+1] = 1;
        for(int i=0; i<5;i++) {
            stars[height+2][width-2+i] = 1;
        }
    }
    else {
        makestar(stars, height, width, h/2);
        makestar(stars,height+h/2,width-h/2,h/2);
        makestar(stars, height+h/2, width+h/2, h/2);
    }
}
