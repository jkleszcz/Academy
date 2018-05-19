#include "gtest/gtest.h"
#include "example.hpp"
#include "list.h"
#include "roots.h"
#include <cmath>

TEST(RootsTest, PositiveDelta){
    solution S=roots(1, -3, 2);
    double x1=std::min(S.x1, S.x2);
    double x2=std::max(S.x1, S.x2);
    ASSERT_EQ(S.count , 2);
    EXPECT_DOUBLE_EQ(x1, 1.0);
    EXPECT_DOUBLE_EQ(x2, 2.0);
    EXPECT_FALSE(S.identity);
}

TEST(RootsTest, ZeroDelta){
    solution s=roots(1,-2, 1);
    ASSERT_EQ(s.count, 1);
    EXPECT_DOUBLE_EQ(s.x1, 1.0);
    EXPECT_FALSE(s.identity);
}

TEST(RootsTest, NegativeDelta){
    solution s=roots(1,0,1);
    ASSERT_EQ(s.count, 0);
    EXPECT_FALSE(s.identity);
}

TEST(RootsTest, ZeroA){
    solution s=roots(0,1,0);
    ASSERT_EQ(s.count, 1);
    EXPECT_EQ(s.x1, 0.0 );
    EXPECT_FALSE(s.identity);
}

TEST(RootsTest, ZeroAB){
    solution s=roots(0,0,-1);
    ASSERT_EQ(s.count, 0);
    EXPECT_FALSE(s.identity);
}

TEST(RootsTest, ZeroABC){
    solution s=roots(0,0,0);
    ASSERT_TRUE(s.identity);
}

/*TEST(ExampleTest, StringComparisonWorks) {
  EXPECT_STREQ("Ala", "Ala");
  EXPECT_STRNE("Ala", "kot");
}

TEST(ExampleTest, BrokenTest) {
    const char* text = "Ala";
    char buf[sizeof(text)];
    strcpy(buf, text);
    EXPECT_EQ(*text, *buf);
}

TEST(ExampleTest, FiveReturnsFive) {
    EXPECT_EQ(five(), 5);
}

TEST(ExampleTest, ElementAdded) {

    List * emptylist= new List;
    int a=5;
    emptylist->insert(a);
    EXPECT_EQ(emptylist->elemCount(), 1);
    EXPECT_TRUE(emptylist->contains(a));
}

TEST(ExampleTest, InitFromArray){
    int tab[10];
    for(int i=0;i<10;i++){
        tab[i]=2*i+5;
    }
    List * lista;
    lista=List::fromArray(tab,10);
    EXPECT_EQ(lista->elemCount(),10);
    for(int i=0;i<10;i++)
        EXPECT_TRUE(lista->contains(tab[i]));
}

TEST(ExampleTest, EmptyListReversed) {
    List emptylist;
    emptylist.reverse();
    EXPECT_EQ(emptylist.elemCount(),0);

}

TEST(ExampleTest, ListReversed) {
    int tab[10];
    for(int i=0;i<10;i++){
        tab[i]=2*i+5;
    }
    List * lista;
    lista=List::fromArray(tab,10);
    lista->reverse();
    EXPECT_EQ(lista->elemCount(),10);
    for(int i=0;i<10;i++)
        EXPECT_TRUE(lista->contains(tab[i]));

}
*/


