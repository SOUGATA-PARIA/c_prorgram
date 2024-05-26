#include <stdio.h>
int main(){
    int student;
    printf("please enter the number of students : ");
    scanf("%d",&student);

    int arr[student][2];

    for(int i = 0;i<student;i++){
        for(int j = 0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i = 0;i<student;i++){
        for(int j = 0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}