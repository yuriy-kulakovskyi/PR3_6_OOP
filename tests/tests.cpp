#include <gtest/gtest.h>
#include <sstream>
#include "../classes/B1.h"

TEST(B1Test, ShowMethod) {
    // Arrange
    B1 obj(10);
    std::ostringstream output;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(output.rdbuf());

    // Act
    obj.show();

    // Restore std::cout
    std::cout.rdbuf(oldCoutBuffer);

    // Assert
    EXPECT_EQ(output.str(), "B1: b1 = 10\n");
}