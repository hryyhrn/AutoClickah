#include <Windows.h>
#include <iostream>

int main(int argc, char const *argv[])
{
    Sleep(10000); // Delay before autoclicker starts (in x ms)
    mouse_event(MOUSEEVENTF_RIGHTDOWN /* the auto clicked vkey. Use vkey hex code to change to any other key */, 0, 0, 0, 0);
    while (1)
    {
        Sleep(200);
        if(GetAsyncKeyState(VK_SPACE /* The autoclicker termination vkey. Use vkey hex code to change to any other key */)) {
            std::cout << "terminated" << std::endl;
            break;
        }
    }

    return 0;
}




