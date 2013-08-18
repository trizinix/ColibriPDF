## Process this file with automake to produce Makefile.in

lib_LTLIBRARIES = libcolibri.la
libcolibri_la_SOURCES = colibri.c colibri.h

noinst_LIBRARIES = libarith.a
libarith_a_SOURCES = arith.h arith.c

bin_PROGRAMS = main
main_SOURCES = main.c
main_LDADD = libcolibri.la
