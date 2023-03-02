// omok.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "framework.h"
#include "omok.h"

LRESULT CALLBACK DIGPROC(HWND hwnd, UINT msg, WPARAM wParme,LPARAM IParam) 
{

    if (msg == WM_PAINT) {

    }
    else if (msg == WM_CLOSE) {
        DestroyWindow(hwnd);
    }

    return 0;
}

//윈도우 전용 메인함수
int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)

    {
        DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, DigProc);
        return 0;
    }

