/*
Pointer Arithtmetic
• The following arithmetic operations are allowed for pointers:
• incrementing (++) or decrementing (--)
• adding an integer to a pointer (+ or +=)
• subtracting an integer from a pointer (- or -=)
• subtracting one pointer from another—meaningful only when both pointers point into the same array.
• Pointer arithmetic on pointers that do not refer to array elements is alogic error.

Assigning Pointers to One Another
• Pointers of the same type may be assigned to one another
• This rule’s exception is a pointer to void (i.e., void *)—a generic pointer that can represent any pointer type
•All pointer types can be assigned to a void *, and a void * can be assigned a pointer of any type (including another void *)
•A pointer to void cannot be dereferenced, dereferencing a void * pointer is a syntax error 
•A void * contains a memory location for an unknown typeNumber of bytes to which the pointer refers is not known
•The compiler must know the type to determine the number of bytes that represent the referenced value
*/

// •bPtr = b; same bPtr = &b[0];