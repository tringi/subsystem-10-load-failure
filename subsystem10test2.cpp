#include <Windows.h>

#include <cstring>
#include <cwchar>

int main () {
    DWORD n;
    SetLastError (0);

    wchar_t message [128];
    n = _snwprintf (message, 128, L"Hello %I64u\r\n", GetTickCount64 ());

    WriteConsole (GetStdHandle (STD_OUTPUT_HANDLE), message, n, &n, NULL);
    ExitProcess (GetLastError ());
}
