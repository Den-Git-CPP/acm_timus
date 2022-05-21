cmake_minimum_required(VERSION 3.10)

project(acm_timus)
file(GLOB SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

foreach(src_file ${SRC_FILES})
    get_filename_component(target ${src_file} NAME_WLE)
    add_executable(${target} ${src_file})
    list(APPEND TARGETS ${target})
    message("target added: ${target}")
endforeach(src_file ${SRC_FILES})

foreach(target ${TARGETS})
    set_target_properties(${target}
    PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
    )

    if (MSVC)
     target_compile_options(${target} PRIVATE
     /TP /MT /EHsc /GL /O2 /W3 /Za /std:c++latest /D "ONLINE_JUDGE" %1
     )
    else ()
     target_compile_options(${target} PRIVATE
     -Wall -Wextra -pedantic -Werror
     -x c++ -std=c++2a -O2 -fno-strict-aliasing -march=native
     -DONLINE_JUDGE -Wl,-s,-static,-lm,--stack=67108864  
     )
    endif()  

endforeach(target ${TARGETS})