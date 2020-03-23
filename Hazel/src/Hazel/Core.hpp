 #ifndef CORE_HPP_INCLUDED
 #define CORE_HPP_INCLUDED

#ifdef HZ_PLATFORM_WINDOWS
    #ifdef HAZEL_BUILD_DLL
        #define HAZEL_API __declspec(dllexport)
    #else
        #define HAZEL_API __declspec(dllimport)
    #endif
#else
    //#error Hazel Only Suuport Windows
#endif 

#endif //  CORE_HPP_INCLUDED