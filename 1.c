/*#include <stdio.h>
int main(){
    int factoril=1;
    for(int i=1; i<=5; i++){
        factoril *= i;
    }
    printf("factoril is =%d", factoril);
    }*/
/*#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        printf("Enter a array: ");
    scanf("%d", &arr[i]);
    }
}*/
/*include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);  // Takes a single word input

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 1;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<arr[n]; i++){
        printf("Print the array =%d", arr[i]);
    }
    return 0;
}