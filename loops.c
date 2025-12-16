// Online C compiler to run C program online
#include <stdio.h>
/*int fibo(){
    for(int i=0;i<=10;i++){
        printf("%d \n", i);
    }
}*/

/*int sum(){
    int a,sum=0;
    printf("Enter the Number:\n");
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        sum=sum+i;
    }
    printf("%d\n", sum);
}*/

void factorial(){
    int a;
    long long sum=1;
    printf("Enter a number:\n");
    scanf("%d", &a);
    for(int i=a;i>=1;i--){
        sum=sum*i;
    }
    printf("sum: %d", sum);
}

int main() {
    // Write C code here
    // fibo();
    //sum();
    factorial();
    return 0;
}
