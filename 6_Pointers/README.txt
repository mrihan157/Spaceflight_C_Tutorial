The main.c source file in this directory includes some examples of working pointer assignments and
manipulation. Try to follow what is going on through each step.

The structures section at the end of main() will demonstrate structure access through a pointer to
a structure. You will find this is often used in large structures because passing them as a value
to a function would require too much overhead. By passing a pointer, you are just saying 'I've
created a structure, now go and look for it here'.

Due to this reduction in overhead, this method is often used in configuration structures to pass to
external libraries, so pay attention if a library function asks for a pointer to a data type or
structure rather than it's value directly!

An example of this in the groundstation tracking scheduler can be found in:
https://github.com/khoohuibo/groundstation-tracking-scheduler/blob/master/config.c

The config_load function specifies a structure pointer (config_t *config) as one of its inputs. If
you check out the corresponding config.h file, you can see just how huge that structure is due to
its many elements and character arrays.

There is also a task for this section in a separate task.c file. This can be compiled on its own,
and is kept separate for simplicity.
