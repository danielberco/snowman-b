#include "snowman.hpp"
#include "doctest.h"
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

using namespace ariel;

TEST_CASE("Good snowman code") {
    CHECK(snowman(11111111) == string("       \n _===_ \n (.,.) \n<( : )>\n ( : ) "));
    CHECK(snowman(11114411) == string("       \n _===_ \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(12222212) == string("       \n _===_ \n\\(o.o)/\n ( : ) \n (\" \") "));
    CHECK(snowman(33232124) == string("   _   \n  /_\\  \n\\(o_O) \n (] [)>\n (   ) "));
    CHECK(snowman(32443333) == string("   _   \n  /_\\  \n (-.-) \n/(> <)\\\n (___) "));
    CHECK(snowman(44444432) == string("  ___  \n (_*_) \n (- -) \n (> <) \n (\" \") "));
    CHECK(snowman(44242123) == string("  ___  \n (_*_) \n\\(o -) \n (] [)>\n (___) "));
    CHECK(snowman(41341144) == string("  ___  \n (_*_) \n (O,-) \n<(   )>\n (   ) "));
    CHECK(snowman(22222222) == string("  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" \") "));
    CHECK(snowman(33333333) == string("   _   \n  /_\\  \n (O_O) \n/(> <)\\\n (___) "));
    CHECK(snowman(44444444) == string("  ___  \n (_*_) \n (- -) \n (   ) \n (   ) "));
}


TEST_CASE("Bad snowman input num") {
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(123456789));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(12345679));
    CHECK_THROWS(snowman(66666666));
    CHECK_THROWS(snowman(43214325));
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(2));
    CHECK_THROWS(snowman(90909090));
    
}

