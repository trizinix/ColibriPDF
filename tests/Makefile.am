## Process this file with automake to produce Makefile.in

TESTS = check_colibri check_arith
check_PROGRAMS = check_colibri check_arith

check_colibri_SOURCES = check_colibri.c $(top_builddir)/src/colibri.h
check_colibri_CFLAGS = @CHECK_CFLAGS@
check_colibri_LDADD = $(top_builddir)/src/libcolibri.la @CHECK_LIBS@

check_arith_SOURCES = check_arith.c $(top_builddir)/src/arith.h $(top_builddir)/src/arith.c
check_arith_CFLAGS = @CHECK_CFLAGS@
check_arith_LDADD = @CHECK_LIBS@
