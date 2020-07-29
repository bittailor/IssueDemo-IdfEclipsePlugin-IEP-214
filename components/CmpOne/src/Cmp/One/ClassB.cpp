//*************************************************************************************************
//
//  BITTAILOR.CH - Cmp::One::ClassB
//
//*************************************************************************************************

#include "Cmp/One/ClassB.h"

#include <mutex>
#include <iostream>

#include <esp_log.h>

constexpr const char* TAG = "Cmp::One::ClassB";

namespace Cmp {
namespace One {
namespace {
   std::once_flag sNvs;
}

ClassB::ClassB() {
   std::cout << __PRETTY_FUNCTION__ << std::endl;
   std::call_once(sNvs,[]() {
      esp_err_t rc = nvs_flash_init();
      if (rc == ESP_ERR_NVS_NO_FREE_PAGES || rc == ESP_ERR_NVS_NEW_VERSION_FOUND) {
         ESP_LOGI(TAG, "nvs_flash_init failed %s => nvs_flash_erase", esp_err_to_name(rc));
         ESP_ERROR_CHECK(nvs_flash_erase());
         rc = nvs_flash_init();
      }
      ESP_ERROR_CHECK(rc);
      ESP_LOGI(TAG, "call_once => nvs_flash_init success");
   });
   ESP_ERROR_CHECK(::nvs_open("sClassB", NVS_READWRITE, &mHandle));
}

ClassB::~ClassB() {
   std::cout << __PRETTY_FUNCTION__ << std::endl;
   ::nvs_close(mHandle);
}

} // namespace One
} // namespace Cmp
