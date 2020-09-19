#include "unity.h"
#include "calculator.h"

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME    "calculator"

/* Prototypes for all the test functions */
void test_addition(void);
void test_subtraction(void);
void test_multiplication(void);
void test_division(void);
void test_sine(void);
void test_cosine(void);
void test_tangent(void);
void test_sineh(void);
void test_cosineh(void);
void test_tangenth(void);
void test_logten(void;
void test_squareroot(void);
void test_exponent(void);
void test_power(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "addition", test_addition);
  CU_add_test(suite, "subtraction", test_subtraction);
  CU_add_test(suite, "multiplication", test_multiplication);
  CU_add_test(suite, "division", test_division);
  CU_add_test(suite, "sine", test_sine);
  CU_add_test(suite, "cosine", test_cosine);
  CU_add_test(suite, "tangent", test_tangent);
  CU_add_test(suite, "sineh", test_sineh);
  CU_add_test(suite, "cosineh", test_cosineh);
  CU_add_test(suite, "tangenth", test_tangenth);
  CU_add_test(suite, "logten", test_logten);
  CU_add_test(suite, "squareroot", test_squareroot);
  CU_add_test(suite, "exponent", exponent);
  CU_add_test(suite, "power", test_power);



/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */
void test_addition(void) {
  CU_ASSERT(30.000000 == addition(10, 20));

  /* Dummy fail*/
 CU_ASSERT(8250.000000 == addition(750, 7500));
}

void test_subtraction(void) {
  CU_ASSERT(-3.000000 == subtraction(0, 3));

  /* Dummy fail*/
CU_ASSERT(100.000000 == subtraction(1000, 900));
}

void test_multiplication(void) {
  CU_ASSERT(0.000000 == multiplication(1, 0));

  /* Dummy fail*/
  CU_ASSERT(10.000000 == multiplication(2, 5));
}

void test_division(void) {
  CU_ASSERT(-1.000000 == division(1, 0));

  /* Dummy fail*/
  CU_ASSERT(3.000000== division(2, 2));
}
void test_sine(void) {
  CU_ASSERT(0.866025 == sine(60));

  /* Dummy fail*/
  CU_ASSERT(1.000000 == sine(90));
}
void test_cosine(void) {
  CU_ASSERT(0.500000 == cosine(60));

  /* Dummy fail*/
  CU_ASSERT(0.000000 == cosine(90));
}
void test_tangent(void) {
  CU_ASSERT(1.732050== tangent(60));

  /* Dummy fail*/
  CU_ASSERT(0.577350 == (30));
}
void test_sineh(void) {
  CU_ASSERT(5.343237 == sineh(30));

  /* Dummy fail*/
  CU_ASSERT(5.710036== sineh(60));
}
void test_cosineh(void) {
  CU_ASSERT(5.343237 == cosineh(30));

  /* Dummy fail*/
  CU_ASSERT(5.710036 == cosineh(60));
}
void test_tangenth(void) {
  CU_ASSERT(0.000000 == tangenth(0));

  /* Dummy fail*/
  CU_ASSERT(1.000000 == tangenth(30));
}
void test_logten(void) {
  CU_ASSERT(0.301029 == logten(2));

}
void test_squareroot(void) {
  CU_ASSERT(2.000000 == squareroot(4));

}
void test_exponent(void) {
  CU_ASSERT(20.085536 == exponent(3));
}
void test_power(void) {
  CU_ASSERT(8.000000 == power(2,3));

}





