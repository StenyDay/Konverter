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
    const float ex = 10000000000000;

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

CTEST(total, n5_1) {
    // When
    float  res_t = time(1, 1, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_2){
    //When
    float res_t = time(1, 2, t);
    //Then
    const float ex = 520;
    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_3) {
    // When
    float  res_t = time(1, 3, t);
    // Then
    const float ex = 3650;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_4) {
    // When
    float  res_t = time(1, 4, t);
    // Then
    const float ex = 87660;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_5) {
    // When
    float  res_t = time(1, 5, t);
    // Then
    const float ex = 5260000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_6) {
    // When
    float  res_t = time(1, 6, t);
    // Then
    const float ex = 315600000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_7) {
    // When
    float  res_t = time(2, 1, t);
    // Then
    const float ex = 0.1923076923;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_8) {
    // When
    float  res_t = time(2, 2, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_9) {
    // When
    float  res_t = time(2, 3, t);
    // Then
    const float ex = 70;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_10) {
    // When
    float  res_t = time(2, 4, t);
    // Then
    const float ex = 1680;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_11) {
    // When
    float  res_t = time(2, 5, t);
    // Then
    const float ex = 100800;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_12) {
    // When
    float  res_t = time(2, 6, t);
    // Then
    const float ex = 6048000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_13) {
    // When
    float  res_t = time(3, 1, t);
    // Then
    const float ex =  0.02739726027;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_14) {
    // When
    float  res_t = time(3, 2, t);
    // Then
    const float ex = 1.42857142857;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_15) {
    // When
    float  res_t = time(3, 3, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_16) {
    // When
    float  res_t = time(3, 4, t);
    // Then
    const float ex = 240;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_17) {
    // When
    float  res_t = time(3, 5, t);
    // Then
    const float ex = 1680;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_18) {
    // When
    float  res_t = time(3, 6, t);
    // Then
    const float ex = 100800;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_19) {
    // When
    float  res_t = time(4, 1, t);
    // Then
    const float ex = 0.00114155251;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_20) {
    // When
    float  res_t = time(4, 2, t);
    // Then
    const float ex = 0.05952380952;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_21) {
    // When
    float  res_t = time(4, 3, t);
    // Then
    const float ex = 0.41666;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_22) {
    // When
    float  res_t = time(4, 4, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_23) {
    // When
    float  res_t = time(4, 5, t);
    // Then
    const float ex = 600;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_24) {
    // When
    float  res_t = time(4, 6, t);
    // Then
    const float ex = 36000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_25) {
    // When
    float  res_t = time(5, 1, t);
    // Then
    const float ex = 0.0000190114;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_26) {
    // When
    float  res_t = time(5, 2, t);
    // Then
    const float ex = 0.00099206349;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_27) {
    // When
    float  res_t = time(5, 3, t);
    // Then
    const float ex = 0.00694;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_28) {
    // When
    float  res_t = time(5, 4, t);
    // Then
    const float ex = 0.16666;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_29) {
    // When
    float  res_t = time(5, 5, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_30) {
    // When
    float  res_t = time(5, 6, t);
    // Then
    const float ex = 600;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_31) {
    // When
    float  res_t = time(6, 1, t);
    // Then
    const float ex = 0.00000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_32) {
    // When
    float  res_t = time(6, 2, t);
    // Then
    const float ex = 0.00001653439;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_33) {
    // When
    float  res_t = time(6, 3, t);
    // Then
    const float ex = 0.00011574074;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_34) {
    // When
    float  res_t = time(6, 4, t);
    // Then
    const float ex = 0.00277;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_35) {
    // When
    float  res_t = time(6, 5, t);
    // Then
    const float ex = 0.16666;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n5_36) {
    // When
    float  res_t = time(6, 6, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_1) {
    // When
    float  res_t = vess(1, 1, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_2){
    //When
    float res_t = vess(1, 2, t);
    //Then
    const float ex = 0.01;
    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_3) {
    // When
    float  res_t = vess(1, 3, t);
    // Then
    const float ex = 0.000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_4) {
    // When
    float  res_t = vess(1, 4, t);
    // Then
    const float ex = 0.000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_5) {
    // When
    float  res_t = vess(1, 5, t);
    // Then
    const float ex = 0.000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_6) {
    // When
    float  res_t = vess(1, 6, t);
    // Then
    const float ex = 0.05;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_7) {
    // When
    float  res_t = vess(1, 7, t);
    // Then
    const float ex = 0.000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_8) {
    // When
    float  res_t = vess(1, 8, t);
    // Then
    const float ex = 0.000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_9) {
    // When
    float  res_t = vess(1, 9, t);
    // Then
    const float ex = 0.000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_10) {
    // When
    float  res_t = vess(1, 10, t);
    // Then
    const float ex = 0.0003;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_11) {
    // When
    float  res_t = vess(2, 1, t);
    // Then
    const float ex = 10000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_12) {
    // When
    float  res_t = vess(2, 2, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_13) {
    // When
    float  res_t = vess(2, 3, t);
    // Then
    const float ex = 0.01;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_14) {
    // When
    float  res_t = vess(2, 4, t);
    // Then
    const float ex = 0.000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_15) {
    // When
    float  res_t = vess(2, 5, t);
    // Then
    const float ex = 0.000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_16) {
    // When
    float  res_t = vess(2, 6, t);
    // Then
    const float ex = 50;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_17) {
    // When
    float  res_t = vess(2, 7, t);
    // Then
    const float ex = 0.02442;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_18) {
    // When
    float  res_t = vess(2, 8, t);
    // Then
    const float ex = 0.022;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_19) {
    // When
    float  res_t = vess(2, 9, t);
    // Then
    const float ex = 0.00061;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_20) {
    // When
    float  res_t = vess(2, 10, t);
    // Then
    const float ex = 0.3527;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_21) {
    // When
    float  res_t = vess(3, 1, t);
    // Then
    const float ex = 10000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_22) {
    // When
    float  res_t = vess(3, 2, t);
    // Then
    const float ex = 10000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_23) {
    // When
    float  res_t = vess(3, 3, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_24) {
    // When
    float  res_t = vess(3, 4, t);
    // Then
    const float ex = 0.1;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_25) {
    // When
    float  res_t = vess(3, 5, t);
    // Then
    const float ex = 0.01;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_26) {
    // When
    float  res_t = vess(3, 6, t);
    // Then
    const float ex = 50000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_27) {
    // When
    float  res_t = vess(3, 7, t);
    // Then
    const float ex = 24.42;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_28) {
    // When
    float  res_t = vess(3, 8, t);
    // Then
    const float ex = 22.05;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_29) {
    // When
    float  res_t = vess(3, 9, t);
    // Then
    const float ex = 0.6105;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_30) {
    // When
    float  res_t = vess(3, 10, t);
    // Then
    const float ex = 0.2835;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_31) {
    // When
    float  res_t = vess(4, 1, t);
    // Then
    const float ex = 1000000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_32) {
    // When
    float  res_t = vess(4, 2, t);
    // Then
    const float ex = 1000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_33) {
    // When
    float  res_t = vess(4, 3, t);
    // Then
    const float ex = 1000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_34) {
    // When
    float  res_t = vess(4, 4, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_35) {
    // When
    float  res_t = vess(4, 5, t);
    // Then
    const float ex = 1;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_36) {
    // When
    float  res_t = vess(4, 6, t);
    // Then
    const float ex = 5000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_37) {
    // When
    float  res_t = vess(4, 7, t);
    // Then
    const float ex = 2442;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_38) {
    // When
    float  res_t = vess(4, 8, t);
    // Then
    const float ex = 2205;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_39) {
    // When
    float  res_t = vess(4, 9, t);
    // Then
    const float ex = 61.05;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_40) {
    // When
    float  res_t = vess(4, 10, t);
    // Then
    const float ex = 35270;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_41) {
    // When
    float  res_t = vess(5, 1, t);
    // Then
    const float ex = 10000000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_42) {
    // When
    float  res_t = vess(5, 2, t);
    // Then
    const float ex = 10000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_43) {
    // When
    float  res_t = vess(5, 3, t);
    // Then
    const float ex = 10000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_44) {
    // When
    float  res_t = vess(5, 4, t);
    // Then
    const float ex = 100;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_45) {
    // When
    float  res_t = vess(5, 5, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_46) {
    // When
    float  res_t = vess(5, 6, t);
    // Then
    const float ex = 5000000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_47) {
    // When
    float  res_t = vess(5, 7, t);
    // Then
    const float ex = 24420;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_48) {
    // When
    float  res_t = vess(5, 8, t);
    // Then
    const float ex = 22050;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_49) {
    // When
    float  res_t = vess(5, 9, t);
    // Then
    const float ex = 610.5;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_50) {
    // When
    float  res_t = vess(5, 10, t);
    // Then
    const float ex = 352700;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_51) {
    // When
    float  res_t = vess(6, 1, t);
    // Then
    const float ex = 2000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_52) {
    // When
    float  res_t = vess(6, 2, t);
    // Then
    const float ex = 2;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_53) {
    // When
    float  res_t = vess(6, 3, t);
    // Then
    const float ex = 0.002;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_54) {
    // When
    float  res_t = vess(6, 4, t);
    // Then
    const float ex = 0.000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_55) {
    // When
    float  res_t = vess(6, 5, t);
    // Then
    const float ex = 0.000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_56) {
    // When
    float  res_t = vess(6, 6, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_57) {
    // When
    float  res_t = vess(6, 7, t);
    // Then
    const float ex = 0.004883;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_58) {
    // When
    float  res_t = vess(6, 8, t);
    // Then
    const float ex = 0.004409;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_59) {
    // When
    float  res_t = vess(6, 9, t);
    // Then
    const float ex = 0.00012;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_60) {
    // When
    float  res_t = vess(6, 10, t);
    // Then
    const float ex = 0.0677;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_61) {
    // When
    float  res_t = vess(7, 1, t);
    // Then
    const float ex = 4095000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_62) {
    // When
    float  res_t = vess(7, 2, t);
    // Then
    const float ex = 4095;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_63) {
    // When
    float  res_t = vess(7, 3, t);
    // Then
    const float ex = 4.095;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_64) {
    // When
    float  res_t = vess(7, 4, t);
    // Then
    const float ex = 0.04095;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_65) {
    // When
    float  res_t = vess(7, 5, t);
    // Then
    const float ex = 0.004;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_66) {
    // When
    float  res_t = vess(7, 6, t);
    // Then
    const float ex = 20480;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_67) {
    // When
    float  res_t = vess(7, 7, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_68) {
    // When
    float  res_t = vess(7, 8, t);
    // Then
    const float ex = 9.0252;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_69) {
    // When
    float  res_t = vess(7, 9, t);
    // Then
    const float ex = 0.25;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_70) {
    // When
    float  res_t = vess(7, 10, t);
    // Then
    const float ex = 144.5;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_71) {
    // When
    float  res_t = vess(8, 1, t);
    // Then
    const float ex = 4536000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_72) {
    // When
    float  res_t = vess(8, 2, t);
    // Then
    const float ex = 4536;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_73) {
    // When
    float  res_t = vess(8, 3, t);
    // Then
    const float ex = 4.5351;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_74) {
    // When
    float  res_t = vess(8, 4, t);
    // Then
    const float ex = 0.004535;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_75) {
    // When
    float  res_t = vess(8, 5, t);
    // Then
    const float ex = 0.004535;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_76) {
    // When
    float  res_t = vess(8, 6, t);
    // Then
    const float ex = 22680;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_77) {
    // When
    float  res_t = vess(8, 7, t);
    // Then
    const float ex = 11.08;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_78) {
    // When
    float  res_t = vess(8, 8, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_79) {
    // When
    float  res_t = vess(8, 9, t);
    // Then
    const float ex = 0.2769;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_80) {
    // When
    float  res_t = vess(8, 10, t);
    // Then
    const float ex = 160;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_81) {
    // When
    float  res_t = vess(9, 1, t);
    // Then
    const float ex = 163800000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_82) {
    // When
    float  res_t = vess(9, 2, t);
    // Then
    const float ex = 136800;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_83) {
    // When
    float  res_t = vess(9, 3, t);
    // Then
    const float ex = 163.8;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_84) {
    // When
    float  res_t = vess(9, 4, t);
    // Then
    const float ex = 1.64;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_85) {
    // When
    float  res_t = vess(9, 5, t);
    // Then
    const float ex = 0.164;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_86) {
    // When
    float  res_t = vess(9, 6, t);
    // Then
    const float ex = 819000;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_87) {
    // When
    float  res_t = vess(9, 7, t);
    // Then
    const float ex = 400;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_88) {
    // When
    float  res_t = vess(9, 8, t);
    // Then
    const float ex = 361.1;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_89) {
    // When
    float  res_t = vess(9, 9, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_90) {
    // When
    float  res_t = vess(9, 10, t);
    // Then
    const float ex = 5778;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_91) {
    // When
    float  res_t = vess(10, 1, t);
    // Then
    const float ex = 283500;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_92) {
    // When
    float  res_t = vess(10, 2, t);
    // Then
    const float ex = 283.5;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_93) {
    // When
    float  res_t = vess(10, 3, t);
    // Then
    const float ex = 0.283;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_94) {
    // When
    float  res_t = vess(10, 4, t);
    // Then
    const float ex = 0.002835;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_95) {
    // When
    float  res_t = vess(10, 5, t);
    // Then
    const float ex = 0.00028;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_96) {
    // When
    float  res_t = vess(10, 6, t);
    // Then
    const float ex = 1417;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_97) {
    // When
    float  res_t = vess(10, 7, t);
    // Then
    const float ex = 0.692;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_98) {
    // When
    float  res_t = vess(10, 8, t);
    // Then
    const float ex = 0.625;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_99) {
    // When
    float  res_t = vess(10, 9, t);
    // Then
    const float ex = 0.0173;

    ASSERT_DBL_NEAR(ex, res_t);
}

CTEST(total, n6_100) {
    // When
    float  res_t = vess(10, 10, t);
    // Then
    const float ex = 10;

    ASSERT_DBL_NEAR(ex, res_t);
}

