#include <stdio.h>

void main (void) {

    /* The while loop allows you to keep executing statements while a condition is true */
    int i = 0;
    char letters[] = "ABCD";                /* Character array */
    while (letters[i] != 'C') {             /* Keep printing letters until 'C' is found */
        printf("While loop, letter is %c\n", letters[i]);       /* Print current letter */
        i++;                                                    /* Increment counter */
    }

    /* A 'do while' loop will execute the statements inside and check the condition afterwards,
        meaning that it will always execute at least once, no matter what the condition is */
    do {
        printf("\n\nInside do while loop\n\n");     /* This will execute */
    } while (1==0);                                 /* Despite this evaluating false */
    
    /* The for loop allows more control. There are 3 statements separated by ';':
        1) Executed before any looping, usually used to set counters to 0
        2) Condition for loop to run. When this becomes false, looping stops
        3) Executed at the end of each loop, usually used to increment / decrement a counter
        */
    for (i=0; i<10; i++) {      /* i is set to 0, incremented by 1 every loop until it is 10 */
        printf("For loop, i=%i\n", i);
    }

    /* A case statement is an efficient way of grouping code to be executed for different values
        of a given variable */
    printf("Input a number for the switch statement:"); 
    scanf("%i",&i);                                         /* Get user input (try a few values) */
    switch (i) {
        case 1:                             /* This case will be executed if i is 1 */
            printf("The value was 1\n");
            break;                          /* The break causes it to exit the switch statement. This is
                                                a MUST, or lower cases WILL be executed no matter what i is */
        case 2:
            printf("The value was 2\n");
            break;
        case 3:                                 /* Values can be grouped. Because there is no break, the case 4 is
                                                    executed even if i is 3. */
        case 4:
            printf("The value was 3 or 4\n");
            break;
        default:                                        /* This will be executed if no other cases were */
            printf("The value was not in range 1-4\n");
            break;
    }

    /* TASK: write any loop to sum the elements of the array below, and each time the loop runs print out the
        current array element along with the running total. */
    
    int int_array[10] = {34,25,12,42,23,67,3,22,21,33};
}