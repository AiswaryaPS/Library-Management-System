#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#define PROJECT_NAME    "LMS"
#include<Library.h>

void test_login(void);


int main() {

  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
  CU_add_test(suite, "login", testlogin);

  CU_basic_set_mode(CU_BRM_VERBOSE);


  CU_basic_run_tests();


  CU_cleanup_registry();

  return 0;
}

void test_login(void) {
  CU_ASSERT(1 == login("pass"));
  CU_ASSERT(1 == login("wrong"));//dummy fail case
}

