﻿#include <fast_io.h>
#include <fast_io_driver/timer.h>

int main()
{
	fast_io::timer t(BENCH_VECTOR_COMMENT_STRING);
	for (std::size_t j{}; j != 50; ++j)
	{
		test::vector<std::int_least32_t> vec1;
		test::vector<char32_t> vec2;
		test::vector<double> vec3;
		test::vector<float> vec4;
		test::vector<char> vec5;
		test::vector<unsigned char> vec6;
		test::vector<size_t> vec7;
		test::vector<int8_t> vec8;
		test::vector<uint8_t> vec9;
		test::vector<char8_t> vec10;
		test::vector<char16_t> vec11;
		test::vector<wchar_t> vec12;
		test::vector<char32_t> vec13;
		for (std::size_t i{}; i != 100000; ++i)
		{
			vec1.push_back(42);
			vec2.push_back(42);
			vec3.push_back(43);
			vec4.push_back(43);
			vec5.push_back(43);
			vec6.push_back(43);
			vec7.push_back(42);
			vec8.push_back(42);
			vec9.push_back(43);
			vec10.push_back(43);
			vec11.push_back(43);
			vec12.push_back(43);
			vec13.push_back(44);
			vec1.push_back(42);
			vec2.push_back(42);
			vec3.push_back(43);
			vec4.push_back(43);
			vec5.push_back(43);
			vec6.push_back(43);
			vec7.push_back(42);
			vec8.push_back(42);
			vec9.push_back(43);
			vec10.push_back(43);
			vec11.push_back(43);
			vec12.push_back(43);
			vec13.push_back(44);
			vec1.push_back(42);
			vec2.push_back(42);
			vec3.push_back(43);
			vec4.push_back(43);
			vec5.push_back(43);
			vec6.push_back(43);
			vec7.push_back(42);
			vec8.push_back(42);
			vec9.push_back(43);
			vec10.push_back(43);
			vec11.push_back(43);
			vec12.push_back(43);
			vec13.push_back(44);
			vec1.push_back(42);
			vec2.push_back(42);
			vec3.push_back(43);
			vec4.push_back(43);
			vec5.push_back(43);
			vec6.push_back(43);
			vec7.push_back(42);
			vec8.push_back(42);
			vec9.push_back(43);
			vec10.push_back(43);
			vec11.push_back(43);
			vec12.push_back(43);
			vec13.push_back(44);
			vec1.push_back(42);
			vec2.push_back(42);
			vec3.push_back(43);
			vec4.push_back(43);
			vec5.push_back(43);
			vec6.push_back(43);
			vec7.push_back(42);
			vec8.push_back(42);
			vec9.push_back(43);
			vec10.push_back(43);
			vec11.push_back(43);
			vec12.push_back(43);
			vec13.push_back(44);
			vec1.push_back(42);
			vec2.push_back(42);
			vec3.push_back(43);
			vec4.push_back(43);
			vec5.push_back(43);
			vec6.push_back(43);
			vec7.push_back(42);
			vec8.push_back(42);
			vec9.push_back(43);
			vec10.push_back(43);
			vec11.push_back(43);
			vec12.push_back(43);
			vec13.push_back(44);
			vec1.push_back(42);
			vec2.push_back(42);
			vec3.push_back(43);
			vec4.push_back(43);
			vec5.push_back(43);
			vec6.push_back(43);
			vec7.push_back(42);
			vec8.push_back(42);
			vec9.push_back(43);
			vec10.push_back(43);
			vec11.push_back(43);
			vec12.push_back(43);
			vec13.push_back(44);
			vec1.push_back(42);
			vec2.push_back(42);
			vec3.push_back(43);
			vec4.push_back(43);
			vec5.push_back(43);
			vec6.push_back(43);
			vec7.push_back(42);
			vec8.push_back(42);
			vec9.push_back(43);
			vec10.push_back(43);
			vec11.push_back(43);
			vec12.push_back(43);
			vec13.push_back(44);
		}
	}
}