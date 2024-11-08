// Documentation
/**
 * file: low-pass-filtering.c
 * author: Christian Sorto
 * co-authors: Timmy Huy Xuan Ngo, 
 * description: program to TODO
 */

// Link
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define CUTOFF_FREQUENCY 20.0   

// Function to parse sampling rate from .hea file
float get_sampling_rate(const char *header_file) {
    FILE *file = fopen(header_file, "r"); 
    if (!file) {
        perror("Error opening .hea file");
        exit(EXIT_FAILURE);
    }
    float sample_rate = 0.0;
    fscanf(file, "%*s %*d %f", &sample_rate);  // Assume sample rate is on the first line
    fclose(file);
    return sample_rate;
}

// Low-pass filter parameters and function
float low_pass_filter(float input_signal, float *prev_output, float alpha) {
    float output = alpha * input_signal + (1 - alpha) * (*prev_output);
    *prev_output = output;  
    return output;
}

// Main function to read data, filter it, and save the output
void process_ecg_data(const char *data_file, const char *header_file) {
    float sample_rate = get_sampling_rate(header_file);
    float alpha = CUTOFF_FREQUENCY / (sample_rate + CUTOFF_FREQUENCY);

    FILE *file = fopen(data_file, "rb");
    if (!file) {
        perror("Error opening .DAT file");
        exit(EXIT_FAILURE);
    }

    int16_t sample;
    float prev_output = 0.0;

    printf("Filtered ECG Signal:\n");
    while (fread(&sample, sizeof(int16_t), 1, file) == 1) {
        float filtered_sample = low_pass_filter((float)sample, &prev_output, alpha);
        printf("%f\n", filtered_sample); 
    }

    fclose(file);
}

int main() {
    const char *data_file = "100.dat"; //selected dataset
    const char *header_file = "100.hea";

    process_ecg_data(data_file, header_file);
    return 0;
}


// Definition

// Global Declaration

// Function
// TODO@christianSrto