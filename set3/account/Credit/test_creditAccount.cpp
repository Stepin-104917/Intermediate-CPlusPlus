#include "creditAccount.h"
#include <gtest/gtest.h>

TEST(CreditAccount, Empty_Cosnstructor) {
    CreditAccount B1;
  EXPECT_EQ(0, B1.getbalance());
}
TEST(CreditAccount, Cosnstructor) {
    CreditAccount B1("Midula","99003311",1000);
    B1.credit(120);
    B1.debit(10);
  EXPECT_EQ(1110, B1.getbalance());
}
