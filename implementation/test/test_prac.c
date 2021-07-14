#include "prac.h"
#include "unity.h"

void setUp() {}


void tearDown() {}


void test_inputs(void)
{
     int max=100000;
      int a[max];
      for(int i=0;i<max;i++)
      {
          a[i]=0;
      }
      
      int key=78200;
    TEST_ASSERT_EQUAL(1,search(a,&key,&max));
   


}


int main(void)
{
  /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

  /* Run Test functions */
  RUN_TEST(test_inputs);
 
  /* Close the Unity Test Framework */
  return UNITY_END();
}