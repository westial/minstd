set(HEADER_FILES
        Tuple.h
        ImmutableTuple.hpp
        Array.hpp
        String.h
        )

set(SOURCE_FILES
        Tuple.cpp
        minmath.hpp
        String.cpp
        )

add_library(minstd STATIC ${HEADER_FILES} ${SOURCE_FILES})