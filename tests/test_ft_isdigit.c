#include "unity.h"
#include "../src/ft_isdigit.c"

void setUp(void) {
    // Set up code if needed
}

void tearDown(void) {
    // Tear down code if needed
}

void test_ft_isdigit_with_digit_characters()
{
    for (int i = '0'; i <= '9'; i++) {
        TEST_ASSERT_TRUE(ft_isdigit(i));
    }
}

void test_ft_isdigit_with_non_digit_characters()
{
    char non_digits[] = {'a', 'z', 'A', 'Z', '!', '@', ' ', '\n', '\0'};
    for (int i = 0; i < sizeof(non_digits) / sizeof(non_digits[0]); i++) {
        TEST_ASSERT_FALSE(ft_isdigit(non_digits[i]));
    }
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_ft_isdigit_with_digit_characters);
    RUN_TEST(test_ft_isdigit_with_non_digit_characters);
    return UNITY_END();
}