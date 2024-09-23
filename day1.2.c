#include<stdio.h>
int main(){
    int i;
    float sum=0;
    float age[10];
    printf("enter your age \n");
    for(i=0; i<10; i++){
        printf("enter the age of %d student : ", i+1);
        scanf("%f", &age[i]);
        sum+=age[i];
    }
    printf("\n avg of age is : %f ", (sum/10));
return 0;
}