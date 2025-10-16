# include<stdio.h>

int main() {
    int num = 0;
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", num);
            num++;
        }
        printf("\n");
    }


    int n = 0;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}
