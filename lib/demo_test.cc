
#include "demo.h"

#include <gtest/gtest.h>

namespace demo_lib {

TEST(DemoTest, first) { ASSERT_EQ(7, sum(3, 4)); }

}  // namespace demo_lib
