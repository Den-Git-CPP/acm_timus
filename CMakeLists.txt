cmake_minimum_required(VERSION 3.5)

project(acm_timus)

add_executable(1409 1409.cpp)

set_target_properties(1409
    PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
)

if (MSVC)
    target_compile_options(1409 PRIVATE
    /TP /MT /EHsc /GL /O2 /W3 /Za /std:c++latest /D "ONLINE_JUDGE" %1
    )
    
else ()
    target_compile_options(1409 PRIVATE
        -Wall -Wextra -pedantic -Werror
    -x c++ -std=c++2a -O2 -fno-strict-aliasing -march=native
    -DONLINE_JUDGE -Wl,-s,-static,-lm,--stack=67108864  
    )
    
endif()