This is a simple example of header files (the method for linking source split over several source
files for different parts of the project) in C.

Most of the code from the previous section now resides in shapes.c and shapes.h. You could think of
this as a 'shapes library' that we want to include in out main code in main.c

By typing #include "shapes.h" in main.c, we add everything defined in the header (.h) for use in
the main code. This includes structures (why we are able to use the rectancle structure Rect to
declare testRect). This acts similarly to 'import' in python, so it is also used for generic system
libraries for extra functionality like <stdio.h> (note that the <> symbols are used to include
generic libraries in a location defined by the compiler itself. "" is used to search the current
directory and can also be used to define paths relative to the current directory with dots, for
example: "../UpperDir/anotherheader.h").

The function declarations (the single line descriptions of inputs and outputs) for functions in
shapes.c are also included in shapes.h. This means the main source is also able to access the
function print_rectangle_details(), despite its contents being defined in shapes.c.

Remember that any file that needs access to these elements must also include the header file. This
includes the source file for shapes.c itself.

Finally, note the include guards at the top and bottom of the header (#ifdef SHAPES_H...). These
are used to make sure the details in the header are included only once by the compiler. Just make
sure they are there if you are writing files from scratch (most IDEs will create this for you when
you create a header).

COMPILING: now we've got two source files! The headers are included automatically, so our new
	compilation command is now:

	gcc shapes.c main.c -o main.exe

	(or whatever your executable name is instead of main.exe)

TASK: If you want to have a go messing with the header, add your triangle printing function to the
shapes.c source file, your triangle structure to the shapes.h header, and then try to add code to
main.c in the main function to create a Triangle instance to feed to your function. The include
should allow the code across the 3 files to work together.

