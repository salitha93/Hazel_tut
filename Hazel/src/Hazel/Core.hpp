 #ifndef CORE_HPP_INCLUDED
 #define CORE_HPP_INCLUDED

#ifdef _WIN32
    #ifdef Hazel_EXPORTS
        #define HAZEL_API __declspec(dllexport)
    #else
        #define HAZEL_API __declspec(dllimport)
    #endif
#else
    #define HAZEL_API
#endif 

#endif //  CORE_HPP_INCLUDED