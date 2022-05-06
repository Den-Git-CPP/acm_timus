cmake_minimum_required(VERSION 3.5)

project(acm_timus)

add_executable(1409 1409.cpp)
add_executable(1877 1877.cpp)
add_executable(2001 2001.cpp)
add_executable(1264 1264.cpp)
add_executable(1787 1264.cpp)

set_target_properties(1409 1877 2001 1264 1787
    PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
)

if (MSVC)
    target_compile_options(1409 PRIVATE
    /TP /MT /EHsc /GL /O2 /W3 /Za /std:c++latest /D "ONLINE_JUDGE" %1
    )
    target_compile_options(1877 PRIVATE
    /TP /MT /EHsc /GL /O2 /W3 /Za /std:c++latest /D "ONLINE_JUDGE" %1
    )
    target_compile_options(2001 PRIVATE
    /TP /MT /EHsc /GL /O2 /W3 /Za /std:c++latest /D "ONLINE_JUDGE" %1
    )
    target_compile_options(1264 PRIVATE
    /TP /MT /EHsc /GL /O2 /W3 /Za /std:c++latest /D "ONLINE_JUDGE" %1
    )
    target_compile_options(1787 PRIVATE
    /TP /MT /EHsc /GL /O2 /W3 /Za /std:c++latest /D "ONLINE_JUDGE" %1
    )
else ()
    target_compile_options(1409 PRIVATE
        -Wall -Wextra -pedantic -Werror
    -x c++ -std=c++2a -O2 -fno-strict-aliasing -march=native
    -DONLINE_JUDGE -Wl,-s,-static,-lm,--stack=67108864  
    )
    target_compile_options(1877 PRIVATE
    -Wall -Wextra -pedantic -Werror
    -x c++ -std=c++2a -O2 -fno-strict-aliasing -march=native
    -DONLINE_JUDGE -Wl,-s,-static,-lm,--stack=67108864
    )
    target_compile_options(2001 PRIVATE
    -Wall -Wextra -pedantic -Werror
    -x c++ -std=c++2a -O2 -fno-strict-aliasing -march=native
    -DONLINE_JUDGE -Wl,-s,-static,-lm,--stack=67108864
    )
    target_compile_options(1264 PRIVATE
    -Wall -Wextra -pedantic -Werror
    -x c++ -std=c++2a -O2 -fno-strict-aliasing -march=native
    -DONLINE_JUDGE -Wl,-s,-static,-lm,--stack=67108864
    )
    target_compile_options(1787 PRIVATE
    -Wall -Wextra -pedantic -Werror
    -x c++ -std=c++2a -O2 -fno-strict-aliasing -march=native
    -DONLINE_JUDGE -Wl,-s,-static,-lm,--stack=67108864
    )
endif()