# Process this file with autoconf to produce a configure script.

# Prelude.
AC_PREREQ([2.69])
AC_INIT([ColibriPDF],[trunk],[trizinix AT trizinix@gmail.com])

# unique source file --- primitive safety check 
# AC_CONFIG_SRCDIR([src/testfile.c])

AC_CONFIG_MACRO_DIR([m4])

# place to put some extra build scripts installed
AC_CONFIG_AUX_DIR([build-aux])

# fairly severe build strictness
# change foreign to gnu or gnits to comply with gnu standards
AM_INIT_AUTOMAKE([-Wall -Werror foreign 1.9.6])

# Checks for programs.
AC_PROG_CC
LT_INIT

# Checks for libraries.

# This macro is defined in check.m4 and tests if check.h and
# libcheck.a are installed in your system. It sets CHECK_CFLAGS and
# CHECK_LIBS accordingly.  
#  AM_PATH_CHECK([MINIMUM-VERSION,
#                [ACTION-IF-FOUND [, ACTION-IF-NOT-FOUND]]])
AM_PATH_CHECK()

# Checks for header files.
AC_HEADER_STDC
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_FUNC_MALLOC

# Output files
AC_CONFIG_HEADERS([config.h])

AC_CONFIG_FILES([Makefile
                 src/Makefile
                 tests/Makefile])

AC_OUTPUT
