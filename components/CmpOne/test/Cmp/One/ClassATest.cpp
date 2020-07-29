//*************************************************************************************************
//
//  BITTAILOR.CH
//
//*************************************************************************************************

#include <unity.h>

#include "Cmp/One/ClassA.h"

namespace Cmp {
namespace One {

TEST_CASE("Just a dummy test", "[Cmp::One]")
{
   ClassA* a = new ClassA{};
   TEST_ASSERT(a != nullptr);
   delete a;
}

} // namespace One
} // namespace Cmp
