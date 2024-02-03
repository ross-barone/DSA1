#include "pch.h"
#include <stdio.h>
#include <stdlib.h>

void assignIntegerArray() {
    int arr[100] = { 0 };

    // 1. Integer Array Assignment
    // Task: Fill the array 'arr' with sequential numbers from 0 to 99.

    // Write your code below to assign values to the array.
    for (int i = 0; i < 100; i++) {
        arr[i] = i;
    }

    // End of your code

    // This loop prints the elements of the array.
    // No modification is needed here.
    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }

    return;
}

void printAlphabet() {
    // 2. Print Alphabet
    // Task: Write code to print the English alphabet using ASCII codes.
    // The alphabet can be in uppercase or lowercase.

    // Write your code below to print the Alphabet.
    int letter = 65;

    for (int i = 0; i < 26; i++) {
        printf("%c ", letter);

        letter++;
    }

    // End of your code
}

void printMultiplesOfSeven() {
    // 3. Modulus Operator
    // Task: Use the modulus operator (%) to print all numbers between 1 and 100
    // that are divisible by 7 without any remainder.
    // For example, numbers like 7, 14, 21, etc.
    int arr[100] = { 0 };
    for (int i = 0; i < 100; i++) {
        arr[i] = i;
    }

    // Write your code below to find and print these numbers.
    for (int i = 1; i < 100; i++) {
        if (arr[i] % 7 == 0) {
            printf("%d ", arr[i]);
        }
    }

    // End of your code
}


int main()
{
    printf("1. Integer Array: \n");
    assignIntegerArray();
    printf("\n\n");
    printf("2. Alphabet: \n");
    printAlphabet();
    printf("\n\n");
    printf("3. Modulus: \n");
    printMultiplesOfSeven();
    printf("\n");

    system("pause");
    return 0;
}