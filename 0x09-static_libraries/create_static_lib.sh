#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create a static library (liball.a) from the generated object files
ar -rcs liball.a *.o

# Clean up the temporary object files
rm -f *.o

# Display a message indicating the library creation
echo "Static library liball.a has been created."

