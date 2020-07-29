//*************************************************************************************************
//
//  BITTAILOR.CH - Cmp::Two::ClassC
//
//*************************************************************************************************

#ifndef INC__Cmp_Two_ClassC__h
#define INC__Cmp_Two_ClassC__h

#include <Cmp/One/ClassA.h>

namespace Cmp {
namespace Two {

class ClassC : public One::ClassA
{
   public:
      ClassC();
      ClassC(const ClassC&) = delete;
      ClassC& operator=(const ClassC&) = delete;
      ~ClassC();

   private:
      
};

} // namespace Two
} // namespace Cmp

#endif // INC__Cmp_Two_ClassC__h
