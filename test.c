#include <stdio.h>
#include "FID_Algorithm_Tuning.c"

const uint16_t altitude_test_without_noise[100] = {
    0, 15, 30, 45, 60, 75, 90, 105, 120, 135,
    150, 165, 180, 195, 210, 225, 240, 255, 270, 285,
    300, 315, 330, 345, 360, 375, 390, 405, 420, 435,
    450, 465, 480, 495, 510, 525, 540, 555, 570, 585,
    600, 615, 630, 645, 660, 675, 690, 705, 720, 735,
    750, 765, 780, 795, 810, 825, 840, 855, 870, 885,
    900, 915, 930, 945, 960, 975, 990, 1005, 1020, 1035,
    1050, 1065, 1080, 1095, 1110, 1125, 1140, 1155, 1170, 1185,
    1200, 1215, 1230, 1245, 1260, 1275, 1290, 1305, 1320, 1335
};

int main() {
    for (int i = 0; i < 100; i++) {
        uint16_t filteration = stack_push(altitude_test_without_noise[i]);
        printf("Input: %u, Filtered output: %u\n", altitude_test_without_noise[i], filteration);
    }
    return 0;
}
