// Documentation
/**
 * file: squaring.c
 * authors: Timmy Huy Xuan Ngo, Henry Arboladora
 * co-authors: Christian Sorto, Fairuj Tabassum 
 * description: program to square the current sample of the derivative signal to emphasize higher frequencies.
 */

// Link
#include <stdio.h>
#define BUFFSIZE 600    // The size of the buffers (in samples). Must fit more than 1.66 times an RR interval, 
                        // which typically could be around 1 second.

// Definition
// Aims to remove negative frequencies and emphasize higher frequencies.
// The equation is as follows: y(nT) = [x(nT)]^2. 
// Where x(nT) is the output of the derivative filter for the current sample.

// Global Declaration
int squared[BUFFSIZE];

// Function
void squareFunc(int current, int derivative) {
    // Square the current derivative value and store it in the squared array at the current index
    squared[current] = derivative * derivative;
}
