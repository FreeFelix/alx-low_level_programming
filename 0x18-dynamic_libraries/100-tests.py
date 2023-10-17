#!/usr/bin/python3

import random
import ctypes

# Load the shared object containing the C functions
cops = ctypes.CDLL('./100-operations.so')

# Generate random numbers for testing
a = random.randint(-111, 111)
b = random.randint(-111, 111)

# Call the C functions and print the results
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div1(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
