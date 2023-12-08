#include "dxp.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    DxLib_Init();
    ChangeWindowMode(true);
    SetDrawScreen(DX_SCREEN_BACK);

    int var = 0;

    while (!ProcessMessage() && !key[KEY_INPUT_ESCAPE])
    {
        GetKey();
        ClearDrawScreen();

        DrawBox(var, var, var + 10, var + 10, GetColor(255, 0, 0), true);
        var++;

        if (isPress(KEY_INPUT_SPACE)) var = 0;

        ScreenFlip();
    }

    DxLib_End();

    return 0;
}