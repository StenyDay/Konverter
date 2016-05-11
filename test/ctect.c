# include "ctest.h"
#include "../Functions/functions.h" 

const float a = 567.391;

CTEST(total, n_1) {    
    // When
    float  res_a = distance(1, 1, a);
    // Then
    const float s = 567.391;
       
    ASSERT_DBL_NEAR(s, res_a);
}
