import unittest
import MD5Conversion


#Testing for MD5 conversions - Using different passwords , ensures the MD5 conversion is correct
class MD5Test(unittest.TestCase):
    def test_MD5Conversion1(self):

        userType = ""
        userPass = "topdog45"
        compareString = "328d19e88efd94b99840e5d3b336fac6"

        testPass = MD5Conversion.MD5ConversionFunc(userPass, userType)

        self.assertEqual(testPass, compareString)

    def test_MD5Conversion2(self):

        userType = ""
        userPass = "poodles"
        compareString = "933a294335b2fd42c0d411e86a9dfe17"

        testPass = MD5Conversion.MD5ConversionFunc(userPass, userType)

        self.assertEqual(testPass, compareString)



if __name__ == "__main__":
    unittest.main()