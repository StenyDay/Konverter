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
    const float ex = 10000
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
