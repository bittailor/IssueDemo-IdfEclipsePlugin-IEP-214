//*************************************************************************************************
//
//  BITTAILOR.CH - Cmp::One::ClassA
//
//*************************************************************************************************

#include "Cmp/One/ClassA.h"

#include <iostream>
#include <nvs_flash.h>

namespace Cmp {
namespace One {

ClassA::ClassA() {
   std::cout << __PRETTY_FUNCTION__ << std::endl;
}

ClassA::~ClassA() {
   std::cout << __PRETTY_FUNCTION__ << std::endl;
}

} // namespace One
} // namespace Cmp
