set (
    SOURCES
    "src/Dice.cpp"
    "include/Dice.hpp"
)

add_library(pellarudo ${SOURCES})
target_include_directories(pellarudo PUBLIC "include")
target_compile_features(pellarudo PUBLIC "cxx_std_14")

install (
    TARGETS pellarudo
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)

add_subdirectory("tests")
