cmake_minimum_required(VERSION 2.8)

add_subdirectory(piotr_fhog)

set(KCF_LIB_SRC kcf.cpp kcf.h complexmat.hpp adjust.cpp adjust.h)

add_library(kcf STATIC ${KCF_LIB_SRC})
target_link_libraries(kcf ${OpenCV_LIBS} fhog)
set_target_properties(kcf PROPERTIES VERSION 1.0.0 SOVERSION 1)
