#Assignment 6
## Author
Положенцев Иван Денисович, группа 24.Б82-мм
## Contacts
st130976@student.spbu.ru
## Description
Home assignment 6.
This project implements a templated class Templ<T> along with partial specializations for int and double. In the general case, the foo() method calls bar(int, std::vector<float>&) on a class instance of type T. For the int specialization, foo() always returns true, and for the double specialization, it always returns false.
Additionally, three test classes (Class1, Class2, Class3) demonstrate different conditions for the bar method. Each class is tested using Google Test, ensuring the correct behavior of foo() under various scenarios.
## Build
make
## Run
./templ
## Build Test
make test
## Run Test
Running straight after build
