#include <stdlib.h>
#include <check.h>
#include "../src/arith.h"

START_TEST (test_arith_maximum)
{
    ck_assert_int_eq (Arith_max(4,5), 5);
    ck_assert_int_eq (Arith_max(-1, 3), 3);
    ck_assert_int_eq (Arith_max(3, -1), 3);
    ck_assert_int_eq (Arith_max(-2, -3), -2);
}
END_TEST

START_TEST (test_arith_minimum)
{
    ck_assert_int_eq (Arith_min(4,5), 4);
    ck_assert_int_eq (Arith_min(-1, 3), -1);
    ck_assert_int_eq (Arith_min(3, -1), -1);
    ck_assert_int_eq (Arith_min(-2, -3), -3);
}
END_TEST

START_TEST (test_arith_div)
{
    ck_assert_int_eq (Arith_div(10, 5), 2);
    ck_assert_int_eq (Arith_div(-10, -5), 2);
    ck_assert_int_eq (Arith_div(-10, 5), -2);
     
    ck_assert_int_eq (Arith_div(13, 5), 2);
    ck_assert_int_eq (Arith_div(-13, -5), 2);
     
    ck_assert_int_eq (Arith_div(-13, 5), -3);
    ck_assert_int_eq (Arith_div(13, -5), -3);
}
END_TEST

START_TEST (test_arith_mod)
{
    ck_assert_int_eq (Arith_mod(10, 5), 0);
    ck_assert_int_eq (Arith_mod(13, 5), 3);

    ck_assert_int_eq (Arith_mod(-13, -5), -3);
    ck_assert_int_eq (Arith_mod(-13, 5), 2);    
}
END_TEST

START_TEST (test_arith_floor)
{
    ck_assert_int_eq (Arith_floor(13, 5), 2);
    ck_assert_int_eq (Arith_floor(10, 5), 2);
}
END_TEST

START_TEST (test_arith_ceil)
{
    ck_assert_int_eq (Arith_ceiling(13, 5), 3);
    ck_assert_int_eq (Arith_ceiling(10, 5), 2);
}
END_TEST


/*

START_TEST (test_money_create)
{
  ck_assert_int_eq (money_amount (five_dollars), 5);
  ck_assert_str_eq (money_currency (five_dollars), "USD");
}
END_TEST

START_TEST (test_money_create_neg)
{
  Money *m = money_create (-1, "USD");
  ck_assert_msg (m == NULL,
	       "NULL should be returned on attempt to create with "
	       "a negative amount");
}
END_TEST

START_TEST (test_money_create_zero)
{
  Money *m = money_create (0, "USD");
  if(money_amount (m) != 0)
  {
    ck_abort_msg("Zero is a valid amount of money");
  }
}
END_TEST
*/

Suite *
arith_suite (void)
{
  Suite *s = suite_create ("Arithmetik");

  /* Core test case */
  TCase *tc_core = tcase_create ("Core");
  //tcase_add_checked_fixture (tc_core, setup, teardown);
  tcase_add_test (tc_core, test_arith_maximum);
  tcase_add_test (tc_core, test_arith_minimum);
  tcase_add_test (tc_core, test_arith_div);
  tcase_add_test (tc_core, test_arith_mod);
  tcase_add_test (tc_core, test_arith_floor);
  tcase_add_test (tc_core, test_arith_ceil);

  suite_add_tcase (s, tc_core);

  /* Limits test case */
  //TCase *tc_limits = tcase_create ("Limits");
  //tcase_add_test (tc_limits, test_money_create_neg);
  //tcase_add_test (tc_limits, test_money_create_zero);
  //suite_add_tcase (s, tc_limits);

  return s;
}

int
main (void)
{
  int number_failed;
  Suite *s = arith_suite ();
  SRunner *sr = srunner_create (s);
  srunner_run_all (sr, CK_NORMAL);
  number_failed = srunner_ntests_failed (sr);
  srunner_free (sr);
  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}

