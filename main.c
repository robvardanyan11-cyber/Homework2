#include <stdio.h>

//1

// int main(){
//     int N, i;

//     printf("Enter the number)
//     scanf("%d", &N);


//     for (i = 1; i <= N; i++){
//         printf ("%d", i);
//     }

//     return 0;

// }

//2

// int main() {
//     int N, i;
//     int sum = 0;

//     printf("Enter the number");
//     scanf("%d", &N);

//     for (i = 1; i <= N; i++) {
//         sum += i;
//     }

//     printf("%d\n", sum);

//     return 0;
// }

//3

int main(){
    int N, i;

    printf("Enter the number");
    scanf("%d", &N);

    for (i = 1; i <= N; i++){
        if (i % 2 == 0){
            printf("%d", i);
        }
    }
    return 0;
}