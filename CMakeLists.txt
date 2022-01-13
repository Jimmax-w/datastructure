cmake_minimum_required(VERSION 3.21)
project(datastructure)

set(CMAKE_CXX_STANDARD 17)

include_directories(btree)

add_executable(datastructure
        btree/traverseBtree.cpp
        btree/traverseBtree.h
        btree/btree.cpp
        btree/btree.h
        main.cpp
        sort/maxHeapSort.cpp sort/maxHeapSort.h
        btree/onSideMax.cpp btree/onSideMax.h
        algorithm/singleNumber.cpp algorithm/singleNumber.h
        algorithm/reverseNumber.cpp algorithm/reverseNumber.h
        algorithm/reverseString.cpp algorithm/reverseString.h
        algorithm/countCharacter.cpp algorithm/countCharacter.h
        algorithm/bitcounter.cpp algorithm/bitcounter.h)
