///////////////////////////////////////////////////////////////////////////////////////////////////
// OpenGL Mathematics Copyright (c) 2005 - 2011 G-Truc Creation (www.g-truc.net)
///////////////////////////////////////////////////////////////////////////////////////////////////
// Created : 2011-04-26
// Updated : 2011-04-26
// Licence : This source is under MIT licence
// File    : test/gtx/ulp.cpp
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <glm/glm.hpp>
#include <glm/gtx/ulp.hpp>
#include <iostream>

int test_ulp_float()
{
    double Temp = nextafter(0.02, 0.01);
    std::cout << Temp << " 0.01, 0.02" << std::endl;
    
	std::size_t A = glm::ulp(0.01, 0.02);
	std::size_t B = glm::ulp(glm::vec2(0.01), glm::vec2(0.02));
	std::size_t C = glm::ulp(glm::vec3(0.01), glm::vec3(0.02));
	std::size_t D = glm::ulp(glm::vec4(0.01), glm::vec4(0.02));
	std::cout << "glm::ulp test: " << A << std::endl;
	std::cout << "glm::ulp test: " << B << std::endl;
	std::cout << "glm::ulp test: " << C << std::endl;
	std::cout << "glm::ulp test: " << D << std::endl;
	return 0;
}

int main()
{
    std::cout << "Test 76" << std::endl;
	test_ulp_float();
}


