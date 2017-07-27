#include <iostream>
#include <headers_only_library/Dummy.hpp>

int main(int argc, char** argv)
{
    headers_only_library::DummyClass dummyClass;
    dummyClass.welcome();

    return 0;
}
