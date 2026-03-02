/**
 * @file test_placeholder.c
 * @brief Unit tests for placeholder functions using the Check framework.
 */

#include <check.h>
#include "placeholder.h"

START_TEST(test_add)
{
    ck_assert_int_eq(add(2, 3), 5);
    ck_assert_int_eq(add(-1, 1), 0);
    ck_assert_int_eq(add(1, -1), 0);
    ck_assert_int_eq(add(0, 0), 0);
}
END_TEST

START_TEST(test_subtract)
{
    ck_assert_int_eq(subtract(5, 3), 2);
    ck_assert_int_eq(subtract(0, 5), -5);
    ck_assert_int_eq(subtract(-2, -3), 1);
    ck_assert_int_eq(subtract(-3, -2), -1);
}
END_TEST

START_TEST(test_multiply)
{
    ck_assert_int_eq(multiply(3, 4), 12);
    ck_assert_int_eq(multiply(-2, 5), -10);
    ck_assert_int_eq(multiply(0, 100), 0);
    ck_assert_int_eq(multiply(17, 0), 0);
}
END_TEST

START_TEST(test_divide)
{
    ck_assert_int_eq(divide(10, 2), 5);
    ck_assert_int_eq(divide(9, 3), 3);
    ck_assert_int_eq(divide(37, 5), 7);
    ck_assert_int_eq(divide(5, 0), 0);
}
END_TEST

START_TEST(test_remainder)
{
    ck_assert_int_eq(rem(10, 2), 0);
    ck_assert_int_eq(rem(9, 3), 0);
    ck_assert_int_eq(rem(37, 5), 2);
    ck_assert_int_eq(rem(5, 0), 0);
}
END_TEST

Suite *test_suite()
{
    Suite *s = suite_create("Placeholder");
    TCase *tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_add);
    tcase_add_test(tc_core, test_subtract);
    tcase_add_test(tc_core, test_multiply);
    tcase_add_test(tc_core, test_divide);
    tcase_add_test(tc_core, test_remainder);

    suite_add_tcase(s, tc_core);
    return s;
}

int main()
{
    int number_failed;
    Suite *s = test_suite();
    SRunner *sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? 0 : 1;
}