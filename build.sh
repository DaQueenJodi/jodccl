#!/bin/sh


set -xe

CFLAGS="-Wextra -Wall -Wpedantic -ggdb"

clang $CFLAGS example.c -o example
