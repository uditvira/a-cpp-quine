# A C++ Quine

[Quines](https://en.wikipedia.org/wiki/Quine_(computing)) are self-copying programs. They take zero arguments but reproduce their own source-code.

This is a simple C++ quine with a lot of magic numbers that I hope to clean up at some point...

Compile with g++:

```
>> g++ a_cpp_quine.cpp -o a.out
>> ./a.out

Warning ~ This is a self-replicating program!

>> diff a_cpp_quine.cpp another_cpp_quine.cpp
```
