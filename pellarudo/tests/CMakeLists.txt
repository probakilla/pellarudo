set (
    TESTS
    "main.cpp"
    "dice_test.cpp"
)

add_executable(tests ${TESTS})
target_link_libraries(tests pellarudo gtest gmock)
add_test(main_tests tests )
