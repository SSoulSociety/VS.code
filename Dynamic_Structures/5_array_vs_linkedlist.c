/*Arrays versus Linked Lists

Linked lists provide several advantages:
• A linked list’s length can increase or decrease as necessary. Arrays are fixed-size.
• An array may contain more elements than needed, but this can waste memory.
Using linked lists can save memory, however, the pointers in a list’s nodes require
additional memory and memory allocation incurs the overhead of function calls.
• Fixed-size arrays can become full. Linked lists become full only when the system
has insufficient memory to satisfy dynamic storage-allocation requests.
• Linked lists can be maintained in sorted order by inserting each new element at
the appropriate point in the list. Inserting into and deleting from a sorted array
can be time-consuming—all elements following the inserted or deleted element
must be shifted appropriately.

Arrays Are Faster for Direct Element Access:
• Array elements are contiguous in memory and can be accessed
directly by index
• Linked lists do not afford such immediate access to their elements

*/