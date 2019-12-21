ADD_EXECUTABLE (main main.cpp)
TARGET_LINK_LIBRARIES (main PUBLIC algorythm)
ADD_TEST ([01]main main)
