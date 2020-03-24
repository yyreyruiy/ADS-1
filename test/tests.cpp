#include "gtest/gtest.h"
int cbinsearch(int *arr, int size, int value);


TEST(lab1,task1_1)
{
    int arr[]={1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
    int count=cbinsearch(arr,15,3);
    EXPECT_EQ(3,count);
}
