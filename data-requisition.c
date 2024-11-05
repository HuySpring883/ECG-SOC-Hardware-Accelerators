// Documentation
/**
 * file: data-requisition.c
 * author: Timmy Huy Xuan Ngo
 * co-authors: Fairuj Tabassum, Christian Sorto, Henry Alboradora
 * description: program to extract and modify ECG data for Pan Tompkin's analysis
 */

// Link
#include <stdio.h>

// Definition
#define X 20

// Global Declaration
int sum(int y);

// main()
int main(void) {
    int y = 55;
    printf("Sum: %d", sum(y));
    return 0;
}

// Function X TODO@HuySpring883
int sum(int y) {
    return y + X;
}