#include <Windows.h>

// Global Callback Declaration
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow)
{
    // Variable Declarations
    static TCHAR szClassName[] = TEXT("CPA_CPP_24");
    static TCHAR szWindowName[] = TEXT("Atharv Natu : Win32 Window 3");

    WNDCLASSEX wndclass;
    HWND hwnd = NULL;
    MSG msg;

    // Code
    memset((void*)&wndclass, 0, sizeof(wndclass));
    memset((void*)&msg, 0, sizeof(msg));

    wndclass.cbSize = sizeof(WNDCLASSEX);
    wndclass.cbClsExtra = 0;
    wndclass.cbWndExtra = 0;
    wndclass.hInstance = hInstance;
    wndclass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wndclass.style = CS_HREDRAW | CS_VREDRAW;
    wndclass.lpfnWndProc = WndProc;
    wndclass.lpszClassName = szClassName;
    wndclass.lpszMenuName = NULL;
    wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
    wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wndclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);

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
