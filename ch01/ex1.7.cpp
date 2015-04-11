int main()
{
    /* hello /* everyone */ goodbye */
    return 0;
}

// ex1.7.cpp: In function ‘int main()’:
// ex1.7.cpp:3:29: error: ‘goodbye’ was not declared in this scope
//      /* hello /* everyone */ goodbye */
//                              ^
// ex1.7.cpp:3:38: error: expected primary-expression before ‘/’ token
//      /* hello /* everyone */ goodbye */
//                                       ^
// ex1.7.cpp:4:5: error: expected primary-expression before ‘return’
//      return 0;
//      ^
// ex1.7.cpp:4:5: error: expected ‘;’ before ‘return’
