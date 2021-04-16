
#include "unity.h"
#include <record.h>

#define PROJECT_NAME "employee"

/*function prototype*/
void gotoxytest(int xcoordinate,int ycoordinate);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(gotoxytest);
  
  return UNITY_END();
}


void gotoxytest(void){
  TEST_ASSERT_EQUAL(0,gotoxy(30,20));
  TEST_ASSERT_EQUAL(0,gotoxy(30,22));
}


