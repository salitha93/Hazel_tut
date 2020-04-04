 #ifndef APPLICATION_HPP_INCLUDED
 #define APPLICATION_HPP_INCLUDED

#include "Core.hpp"

namespace Hazel
{
    class HAZEL_API Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();

    }; 

    //To be defined in client
    Application* CreateApplication();
} //namespace Hazel

#endif //  APPLICATION_HPP_INCLUDED