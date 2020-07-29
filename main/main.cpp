#include <iostream>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#include <Cmp/One/ClassA.h>
#include <Cmp/One/ClassB.h>
#include <Cmp/Two/ClassC.h>
#include <Cmp/Two/ClassD.h>

extern "C" void app_main(void) {

   std::cout << "demo-indexer-issue\n" << std::endl;

   {
      Cmp::One::ClassA oneA;
      Cmp::One::ClassB oneB;
      Cmp::Two::ClassC twoC;
      Cmp::Two::ClassC twoD;
   }

   while(true) {
      printf("- tick \n");
      vTaskDelay(1000 / portTICK_PERIOD_MS);
   }
}
