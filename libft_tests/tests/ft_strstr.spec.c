char	buf[] = "Ceci n'est pas une pipe.";

UT_ASSERT_EQ(strstr(buf, "une"), ft_strstr(buf, "une"));
UT_ASSERT_EQ(strstr(buf, "C"), ft_strstr(buf, "C"));
UT_ASSERT_EQ(strstr(buf, "."), ft_strstr(buf, "."));
UT_ASSERT_EQ(strstr(buf, ""), ft_strstr(buf, ""));
UT_ASSERT_EQ(strstr(buf, "aaaaa"), ft_strstr(buf, "aaaaa"));
UT_ASSERT_EQ(ft_strstr(buf, "BWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"), NULL);