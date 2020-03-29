 #ifndef ENTRY_POINT_HPP_INCLUDED
 #define ENTRY_POINT_HPP_INCLUDED

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
    Hazel::Log::Init();

    auto app = Hazel::CreateApplication();
    app->Run();

    delete app;
}

#endif //  ENTRY_POINT_HPP_INCLUDED