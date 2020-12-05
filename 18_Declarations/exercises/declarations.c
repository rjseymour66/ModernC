/************************************
 * Storage classes: auto            *
 *                  static          *
 *                  extern          *
 *                  register        *
 * **********************************/


/************************************
 * Type qualifiers: const           *
 *                  volatile        *
 * **********************************/


/************************************
 * Type specifiers: void            *
 *                  char            *
 *                  short           *
 *                  int             *
 *                  long            *
 *                  float           *
 *                  double          *
 *                  signed          *
 *                  unsigned        *
 * **********************************/

/*************************************************************
 * Initializers: anything on the right side of the '=' sign  *
 * ***********************************************************/

/*************************************************************************************************
 * 3) 
 * Duration (static or automatic), scope (block or file), linkage (internal, external, none)
 * 
 * extern float a:  static
 *                  file
 *                  external
 * 
 * register double b:   static
 *                      block
 *                      none
 * 
 * static int c:    automatic
 *                  block
 *                  none
 * 
 * auto char d:     auto
 *                  block
 *                  none
 ***************************************************************************************************/


/****************************************************
 * 5
 * (a) true
 * (b) false
 * (c) true
 * (d) false
 * **************************************************/

/****************************************************
 * 8
 * (a) A function that takes an int as an argument and returns 
 *     an array of pointers that point to strings
 * (b) An array of 5 pointers that point to ints
 * (c) 
 * **************************************************/

/*********************************************************
 * 10
 * (a) char *p(char *)
 * (b) void * (f(*p struct *name, long n))
 * (c) void (*f(void)[4])
 * (d) struct t *b[10](int a, int b)