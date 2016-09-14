#include "queue.h"
#include "gtest/gtest.h"

#include <iostream>

class QueueFixtureTest : public ::testing::Test {
  protected:
    virtual void SetUp() {
      q0.addLast(1);
      q0.addLast(2);
    }

    Queue<int> q0;
};

TEST_F(QueueFixtureTest, AddLast) {
  EXPECT_EQ(1, q0.getFirst());
}

TEST_F(QueueFixtureTest, DeleteFirst) {
  EXPECT_EQ(1, q0.deleteFirst());
}

TEST_F(QueueFixtureTest, SizeT) {
  EXPECT_EQ(2, q0.size());
}

TEST_F(QueueFixtureTest, GetFirst) {
  EXPECT_EQ(1, q0.getFirst());
}

TEST(ReadTest, IsEmpty) {
  Queue<int> q0;
  EXPECT_TRUE(q0.isEmpty());
  q0.addLast(1);
  EXPECT_FALSE(q0.isEmpty());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
