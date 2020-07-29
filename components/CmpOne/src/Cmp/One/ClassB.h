//*************************************************************************************************
//
//  BITTAILOR.CH - Cmp::One::ClassB
//
//*************************************************************************************************

#ifndef INC__Cmp_One_ClassB__h
#define INC__Cmp_One_ClassB__h

#include <nvs_flash.h>

namespace Cmp {
namespace One {

class ClassB
{
   public:
      ClassB();
      ClassB(const ClassB&) = delete;
      ClassB& operator=(const ClassB&) = delete;
      ~ClassB();

   private:
      nvs_handle mHandle;
      
};

} // namespace One
} // namespace Cmp

#endif // INC__Cmp_One_ClassB__h
