#include "Application.hpp"

#include <iostream>

namespace Hazel
{
    Application::Application()
    {
    }

    Application::~Application()
    {
    }

    void Application::Run()
    {
        std::cout << "The application is running" << std::endl;
        while (true);
        
    }
} 