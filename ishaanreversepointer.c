#include <stdio.h>
int main(){

    int size;
    printf("enter size: ");
    scanf("%d", &size);
    int arr[size];
    int *ptr = &size;
    printf("enter array elements: ");
    for(int i = 0; i<size; i++){
        scanf("%d", ptr+i);
    }

    printf("reverse elements: ");
    for(int i = size-1; i >=0; i--){
        printf("%d ", *(ptr+i));
    }

return 0;
}
