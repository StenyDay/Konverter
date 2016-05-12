# include "ctest.h"
#include "../Functions/functions.h"

const float t = 10;

CTEST(total, n_1) {
    // When
    float  res_t = distance(1, 1, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_2){
    //When
    float res_t = distance(1, 2, t);
    //Then
    const float ex = 10000;
    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_3) {
    // When
    float  res_t = distance(1, 3, t);
    // Then
    const float ex = 100000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_4) {
    // When
    float  res_t = distance(1, 4, t);
    // Then
    const float ex = 1000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_5) {
    // When
    float  res_t = distance(1, 5, t);
    // Then
    const float ex = 10000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_6) {
    // When
    float  res_t = distance(1, 6, t);
    // Then
    const float ex = 32810;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_7) {
    // When
    float  res_t = distance(1, 7, t);
    // Then
    const float ex = 10940;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_8) {
    // When
    float  res_t = distance(2, 1, t);
    // Then
    const float ex = 0.01;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_9) {
    // When
    float  res_t = distance(2, 2, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_10) {
    // When
    float  res_t = distance(2, 3, t);
    // Then
    const float ex = 100;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_11) {
    // When
    float  res_t = distance(2, 4, t);
    // Then
    const float ex = 1000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_12) {
    // When
    float  res_t = distance(2, 5, t);
    // Then
    const float ex = 10000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_13) {
    // When
    float  res_t = distance(2, 6, t);
    // Then
    const float ex = 32.81;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_14) {
    // When
    float  res_t = distance(2, 7, t);
    // Then
    const float ex = 10.94;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_15) {
    // When
    float  res_t = distance(3, 1, t);
    // Then
    const float ex = 0.001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_16) {
    // When
    float  res_t = distance(3, 2, t);
    // Then
    const float ex = 1;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_17) {
    // When
    float  res_t = distance(3, 3, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_18) {
    // When
    float  res_t = distance(3, 4, t);
    // Then
    const float ex = 100;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_19) {
    // When
    float  res_t = distance(3, 5, t);
    // Then
    const float ex = 1000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_20) {
    // When
    float  res_t = distance(3, 6, t);
    // Then
    const float ex = 3.28083989501;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_21) {
    // When
    float  res_t = distance(3, 7, t);
    // Then
    const float ex = 1.09361329834;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_22) {
    // When
    float  res_t = distance(4, 1, t);
    // Then
    const float ex = 0.0001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_23) {
    // When
    float  res_t = distance(4, 2, t);
    // Then
    const float ex = 0.1;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_24) {
    // When
    float  res_t = distance(4, 3, t);
    // Then
    const float ex = 1;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_25) {
    // When
    float  res_t = distance(4, 4, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_26) {
    // When
    float  res_t = distance(4, 5, t);
    // Then
    const float ex = 100;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_27) {
    // When
    float  res_t = distance(4, 6, t);
    // Then
    const float ex = 0.3280839895;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_28) {
    // When
    float  res_t = distance(4, 7, t);
    // Then
    const float ex = 0.10936132983;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_29) {
    // When
    float  res_t = distance(5, 1, t);
    // Then
    const float ex = 0.00001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_30) {
    // When
    float  res_t = distance(5, 2, t);
    // Then
    const float ex = 0.01;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_31) {
    // When
    float  res_t = distance(5, 3, t);
    // Then
    const float ex = 0.1;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_32) {
    // When
    float  res_t = distance(5, 4, t);
    // Then
    const float ex = 1;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_33) {
    // When
    float  res_t = distance(5, 5, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_34) {
    // When
    float  res_t = distance(5, 6, t);
    // Then
    const float ex = 0.03280839895;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_35) {
    // When
    float  res_t = distance(5, 7, t);
    // Then
    const float ex = 0.01093613298;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_36) {
    // When
    float  res_t = distance(6, 1, t);
    // Then
    const float ex = 0.00304785126;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_37) {
    // When
    float  res_t = distance(6, 2, t);
    // Then
    const float ex = 3.04785126486;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_38) {
    // When
    float  res_t = distance(6, 3, t);
    // Then
    const float ex = 30.487804878;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_39) {
    // When
    float  res_t = distance(6, 4, t);
    // Then
    const float ex = 30480;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_40) {
    // When
    float  res_t = distance(6, 5, t);
    // Then
    const float ex = 3048;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_41) {
    // When
    float  res_t = distance(6, 6, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_42) {
    // When
    float  res_t = distance(6, 7, t);
    // Then
    const float ex = 3.33333;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_43) {
    // When
    float  res_t = distance(7, 1, t);
    // Then
    const float ex = 0.00914076782;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_44) {
    // When
    float  res_t = distance(7, 2, t);
    // Then
    const float ex = 9.1407678245;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_45) {
    // When
    float  res_t = distance(7, 3, t);
    // Then
    const float ex = 91.7431192661;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_46) {
    // When
    float  res_t = distance(7, 4, t);
    // Then
    const float ex = 914.4;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_47) {
    // When
    float  res_t = distance(7, 5, t);
    // Then
    const float ex = 9144;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_48) {
    // When
    float  res_t = distance(7, 6, t);
    // Then
    const float ex = 30;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n_49) {
    // When
    float  res_t = distance(7, 7, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_1) {
    // When
    float  res_t = objem(1, 1, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_2) {
    // When
    float  res_t = objem(1, 2, t);
    // Then
    const float ex = 10000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_3) {
    // When
    float  res_t = objem(1, 3, t);
    // Then
    const float ex = 10000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_4) {
    // When
    float  res_t = objem(1, 4, t);
    // Then
    const float ex = 10000000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_5) {
    // When
    float  res_t = objem(1, 5, t);
    // Then
    const float ex = 10000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_6) {
    // When
    float  res_t = objem(2, 1, t);
    // Then
    const float ex = 0.01;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_7) {
    // When
    float  res_t = objem(2, 2, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_8) {
    // When
    float  res_t = objem(2, 3, t);
    // Then
    const float ex = 10000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_9) {
    // When
    float  res_t = objem(2, 4, t);
    // Then
    const float ex = 10000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_10) {
    // When
    float  res_t = objem(2, 5, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_11) {
    // When
    float  res_t = objem(3, 1, t);
    // Then
    const float ex = 0.00001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_12) {
    // When
    float  res_t = objem(3, 2, t);
    // Then
    const float ex = 0.01;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_13) {
    // When
    float  res_t = objem(3, 3, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_14) {
    // When
    float  res_t = objem(3, 4, t);
    // Then
    const float ex = 10000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_15) {
    // When
    float  res_t = objem(3, 5, t);
    // Then
    const float ex = 0.01;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_16) {
    // When
    float  res_t = objem(4, 1, t);
    // Then
    const float ex = 0.00001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_17) {
    // When
    float  res_t = objem(4, 2, t);
    // Then
    const float ex = 0.0001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_18) {
    // When
    float  res_t = objem(4, 3, t);
    // Then
    const float ex = 0.01;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_19) {
    // When
    float  res_t = objem(4, 4, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_20) {
    // When
    float  res_t = objem(4, 5, t);
    // Then
    const float ex = 0.00001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_21) {
    // When
    float  res_t = objem(5, 1, t);
    // Then
    const float ex = 0.01;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_22) {
    // When
    float  res_t = objem(5, 2, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_23) {
    // When
    float  res_t = objem(5, 3, t);
    // Then
    const float ex = 10000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_24) {
    // When
    float  res_t = objem(5, 4, t);
    // Then
    const float ex = 10000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n2_25) {
    // When
    float  res_t = objem(5, 5, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_1) {
    // When
    float  res_t = speed(1, 1, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_2) {
    // When
    float  res_t = speed(1, 2, t);
    // Then
    const float ex = 10000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_3) {
    // When
    float  res_t = speed(1, 3, t);
    // Then
    const float ex = 36000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_4) {
    // When
    float  res_t = speed(1, 4, t);
    // Then
    const float ex = 600000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_5) {
    // When
    float  res_t = speed(2, 1, t);
    // Then
    const float ex = 0.01;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_6) {
    // When
    float  res_t = speed(2, 2, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_7) {
    // When
    float  res_t = speed(2, 3, t);
    // Then
    const float ex = 36;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_8) {
    // When
    float  res_t = speed(2, 4, t);
    // Then
    const float ex = 600;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_9) {
    // When
    float  res_t = speed(3, 1, t);
    // Then
    const float ex = 0.00277;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_10) {
    // When
    float  res_t = speed(3, 2, t);
    // Then
    const float ex = 2.778;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_11) {
    // When
    float  res_t = speed(3, 3, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_12) {
    // When
    float  res_t = speed(3, 4, t);
    // Then
    const float ex = 166.7;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_13) {
    // When
    float  res_t = speed(4, 1, t);
    // Then
    const float ex = 0.000166;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_14) {
    // When
    float  res_t = speed(4, 2, t);
    // Then
    const float ex = 0.16666;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_15) {
    // When
    float  res_t = speed(4, 3, t);
    // Then
    const float ex = 0.6;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n3_16) {
    // When
    float  res_t = speed(4, 4, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_1) {
    // When
    float  res_t = square(1, 1, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_2){
    //When
    float res_t = square(1, 2, t);
    //Then
    const float ex = 1000;
    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_3) {
    // When
    float  res_t = square(1, 3, t);
    // Then
    const float ex = 10000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_4) {
    // When
    float  res_t = square(1, 4, t);
    // Then
    const float ex = 100000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_5) {
    // When
    float  res_t = square(1, 5, t);
    // Then
    const float ex = 10000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_6) {
    // When
    float  res_t = square(1, 6, t);
    // Then
    const float ex = 10000000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_7) {
    // When
    float  res_t = square(1, 7, t);
    // Then
    const float ex = 1000000000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_8) {
    // When
    float  res_t = square(2, 1, t);
    // Then
    const float ex = 0.1;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_9) {
    // When
    float  res_t = square(2, 2, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_10) {
    // When
    float  res_t = square(2, 3, t);
    // Then
    const float ex = 100;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_11) {
    // When
    float  res_t = square(2, 4, t);
    // Then
    const float ex = 1000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_12) {
    // When
    float  res_t = square(2, 5, t);
    // Then
    const float ex = 100000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_13) {
    // When
    float  res_t = square(2, 6, t);
    // Then
    const float ex = 1000000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_14) {
    // When
    float  res_t = square(2, 7, t);
    // Then
    const float ex = 100000000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_15) {
    // When
    float  res_t = square(3, 1, t);
    // Then
    const float ex = 0.01;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_16) {
    // When
    float  res_t = square(3, 2, t);
    // Then
    const float ex = 1;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_17) {
    // When
    float  res_t = square(3, 3, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_18) {
    // When
    float  res_t = square(3, 4, t);
    // Then
    const float ex = 100;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_19) {
    // When
    float  res_t = square(3, 5, t);
    // Then
    const float ex = 10000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_20) {
    // When
    float  res_t = square(3, 6, t);
    // Then
    const float ex = 100000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_21) {
    // When
    float  res_t = square(3, 7, t);
    // Then
    const float ex = 10000000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_22) {
    // When
    float  res_t = square(4, 1, t);
    // Then
    const float ex = 0.001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_23) {
    // When
    float  res_t = square(4, 2, t);
    // Then
    const float ex = 0.1;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_24) {
    // When
    float  res_t = square(4, 3, t);
    // Then
    const float ex = 1;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_25) {
    // When
    float  res_t = square(4, 4, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_26) {
    // When
    float  res_t = square(4, 5, t);
    // Then
    const float ex = 1000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_27) {
    // When
    float  res_t = square(4, 6, t);
    // Then
    const float ex = 10000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_28) {
    // When
    float  res_t = square(4, 7, t);
    // Then
    const float ex = 1000000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_29) {
    // When
    float  res_t = square(5, 1, t);
    // Then
    const float ex = 0.00001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_30) {
    // When
    float  res_t = square(5, 2, t);
    // Then
    const float ex = 0.001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_31) {
    // When
    float  res_t = square(5, 3, t);
    // Then
    const float ex = 0.01;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_32) {
    // When
    float  res_t = square(5, 4, t);
    // Then
    const float ex = 0.1;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_33) {
    // When
    float  res_t = square(5, 5, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_34) {
    // When
    float  res_t = square(5, 6, t);
    // Then
    const float ex = 100000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_35) {
    // When
    float  res_t = square(5, 7, t);
    // Then
    const float ex = 10000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_36) {
    // When
    float  res_t = square(6, 1, t);
    // Then
    const float ex = 0.00000001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_37) {
    // When
    float  res_t = square(6, 2, t);
    // Then
    const float ex = 0.0000001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_38) {
    // When
    float  res_t = square(6, 3, t);
    // Then
    const float ex = 0.000001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_39) {
    // When
    float  res_t = square(6, 4, t);
    // Then
    const float ex = 0.00001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_40) {
    // When
    float  res_t = square(6, 5, t);
    // Then
    const float ex = 0.001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_41) {
    // When
    float  res_t = square(6, 6, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_42) {
    // When
    float  res_t = square(6, 7, t);
    // Then
    const float ex = 1000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_43) {
    // When
    float  res_t = square(7, 1, t);
    // Then
    const float ex = 0.00000000001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_44) {
    // When
    float  res_t = square(7, 2, t);
    // Then
    const float ex = 0.000000001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_45) {
    // When
    float  res_t = square(7, 3, t);
    // Then
    const float ex = 0.00000001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_46) {
    // When
    float  res_t = square(7, 4, t);
    // Then
    const float ex = 0.0000001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_47) {
    // When
    float  res_t = square(7, 5, t);
    // Then
    const float ex = 0.00001;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_48) {
    // When
    float  res_t = square(7, 6, t);
    // Then
    const float ex = 0.01;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n4_49) {
    // When
    float  res_t = square(7, 7, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}
