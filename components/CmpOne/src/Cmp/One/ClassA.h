//*************************************************************************************************
//
//  BITTAILOR.CH - Cmp::One::ClassA
//
//*************************************************************************************************

#ifndef INC__Cmp_One_ClassA__h
#define INC__Cmp_One_ClassA__h

namespace Cmp {
namespace One {

class ClassA
{
   public:
      ClassA();
      ClassA(const ClassA&) = delete;
      ClassA& operator=(const ClassA&) = delete;
      ~ClassA();

   private:
      
};

} // namespace One
} // namespace Cmp

#endif // INC__Cmp_One_ClassA__h
