#include "pch.h"
//calculate测试
TEST(Calculate, add) {
	test c;
	EXPECT_EQ(3, c.add(1,2));//这条语句失败之后会接着运行
	EXPECT_EQ(4, c.add(2, 2));
	EXPECT_NE(5, c.add(2, 2));
	//EXPECT_TRUE(true);
	//ASSERT_EQ();若不是相等，之后的程序则不会运行
}
TEST(Calculate, sub) {
	test c;
	EXPECT_EQ(-1, c.sub(1, 2));
	EXPECT_EQ(0, c.sub(2, 2));
	EXPECT_NE(1, c.sub(2, 2));
}
TEST(Calculate, mul) {
	test c;
	EXPECT_EQ(2, c.mul(1, 2));
	EXPECT_EQ(4, c.mul(2, 2));
	EXPECT_NE(3, c.mul(2, 2));
}
TEST(Calculate, div) {
	test c;
	EXPECT_EQ(0.5, c.div(1, 2));
	EXPECT_EQ(1, c.div(2, 2));
	EXPECT_NE(1.5, c.div(2, 2));
}
//判断素数测试
TEST(Judge, is_prime) {
	test c;
	EXPECT_TRUE(c.is_prime(17));
	EXPECT_TRUE(c.is_prime(23));
	EXPECT_FALSE(c.is_prime(40));
}