#include <Windows.h>

// Global Callback Declaration
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

// Entry Point Function
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow)
{
    // Variable Declarations 
    static TCHAR szClassName[] = TEXT("CPA_CPP_24");
    static TCHAR szWindowName[] = TEXT("Atharv Natu : Win32 Window 1");

    WNDCLASSEX wndclass;
    MSG msg;
    HWND hwnd = NULL;

    // Code
    memset((void*)&msg, 0, sizeof(msg));
    memset((void*)&wndclass, 0, sizeof(wndclass));

    wndclass.hInstance = hInstance;
    wndclass.cbSize = sizeof(WNDCLASSEX);
    wndclass.cbClsExtra = 0;
    wndclass.cbWndExtra = 0;
    wndclass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wndclass.lpfnWndProc = WndProc;
    wndclass.lpszClassName = szClassName;
    wndclass.lpszMenuName = NULL;
    wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
    wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wndclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
    wndclass.style = CS_HREDRAW | CS_VREDRAW;

    RegisterClassEx(&wndclass);

    hwnd = CreateWindowEx(
        WS_EX_APPWINDOW,
        szClassName,
        szWindowName,
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        NULL,
        NULL,
        hInstance,
        NULL
    );

    ShowWindow(hwnd, iCmdShow);
    UpdateWindow(hwnd);

    // Message Loop
    while(GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int)msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
    // Code
    switch(iMsg)
    {
        case WM_DESTROY:
            PostQuitMessage(0);
        break;
    }

    return DefWindowProc(hwnd, iMsg, wParam, lParam);
}

