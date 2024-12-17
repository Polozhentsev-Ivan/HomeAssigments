/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
sixth homework project
*/
#include "Class1.hpp"
#include "Class2.hpp"
#include "Class3.hpp"
#include "Templ.hpp"
#include <gtest/gtest.h>


TEST(Class1Test, ReturnTrue) {
    Templ<Class1> tpl(5, {});
    EXPECT_TRUE(tpl.foo());
}

TEST(Class1Test, ReturnFalse) {
    Templ<Class1> tpl(-1, {});
    EXPECT_FALSE(tpl.foo());
}


TEST(Class2Test, ReturnTrue) {
    Templ<Class2> tpl(0, {1.0f});
    EXPECT_TRUE(tpl.foo());
}

TEST(Class2Test, ReturnFalse) {
    Templ<Class2> tpl(0, {});
    EXPECT_FALSE(tpl.foo());
}


TEST(Class3Test, ReturnTrue) {
    Templ<Class3> tpl(-3, {0.1f, 0.2f, 0.3f});
    EXPECT_TRUE(tpl.foo());
}

TEST(Class3Test, ReturnFalse) {
    Templ<Class3> tpl(-1, {0.1f, 0.2f, 0.3f});
    EXPECT_FALSE(tpl.foo());
}


TEST(SpecializationTest, IntTrue) {
    Templ<int> tpl(0, {});
    EXPECT_TRUE(tpl.foo());
}

TEST(SpecializationTest, DoubleFalse) {
    Templ<double> tpl(0, {});
    EXPECT_FALSE(tpl.foo());
}
