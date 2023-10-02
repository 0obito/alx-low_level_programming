#!/bin/bash
#!/bin/bash
for source_file in *.c
do
  object_file="${source_file%.c}.o"
  gcc -c "$source_file" -o "$object_file"
done
gcc -c *.c -o *.o
ar rcs liball.a *.o
