#include <stdint.h>
#include <math.h>

uint16_t arr[3] = {1};

uint16_t operation(uint16_t a, uint16_t b, uint16_t c) {
    return cbrt(a * b * c);
}

uint16_t stack_push(uint16_t a) {
    arr[2] = arr[1];
    arr[1] = arr[0];
    arr[0] = a;
    return (uint16_t)operation(arr[0], arr[1], arr[2]);
}
