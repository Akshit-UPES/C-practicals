# include<stdio.h>

int main() {
    int x1, x2, x3, y1, y2, y3;
    printf("Enter coordinates of point 1:");
    scanf("%d, %d", &x1, &y1);

    printf("Enter coordinates of point 2:");
    scanf("%d, %d", &x2, &y2);

    printf("Enter coordinates of point 1:");
    scanf("%d, %d", &x3, &y3);

    int area = x1*(y2 - y3)+x2*(y3 - y1)+y3*(y1 - y2);
    if(area = 0){
        printf("The given points are collinear.");
    }
    else{
        printf("The given points are not collinear.");
    }
    return 0;
}