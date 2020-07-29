#include <iostream>

#include <unity.h>


extern "C" void app_main(void) {

   std::cout << "Running all the registered tests" << std::endl;

   UNITY_BEGIN();
     unity_run_all_tests();
   UNITY_END();
}
