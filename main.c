#include <stdint.h>

#define ECG_LENGTH 10000

// Declarada en ecg_signal_array.c
extern int16_t ecg_signal[ECG_LENGTH];

// Puntero que usaremos para ver los valores en la Watch Window
volatile int16_t *debug_ptr = ecg_signal;

void main() {
    volatile int i;
    volatile int16_t sample;

    for (i = 0; i < ECG_LENGTH; i++) {
        sample = ecg_signal[i];         // Tomamos un valor
        debug_ptr = &ecg_signal[i];     // Apuntamos a ese valor

        // Aquí puedes poner un breakpoint o usar Step Over (F10)
    }

    while (1); // Para dejar el DSP parado al final
}

