//*************************************************************************************************
//
//  BITTAILOR.CH
//
//*************************************************************************************************

#include <unity.h>

#include "Cmp/Two/ClassC.h"

namespace Cmp {
namespace Two {

TEST_CASE("Just a dummy test", "[Cmp::Two]")
{

   ClassC* c = new ClassC{};
   TEST_ASSERT(c != nullptr);
   delete c;
}


} // namespace One
} // namespace Cmp
