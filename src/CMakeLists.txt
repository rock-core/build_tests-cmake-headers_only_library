rock_library(headers_only_library
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(headers_only_library_bin Main.cpp
    DEPS headers_only_library)

