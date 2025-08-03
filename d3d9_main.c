/*
 * dxvk-faked3d9
 *
 * A dummy d3d9.dll to fix launching problems for some d3d10 and d3d11 games
 * running with DXVK.
 *
 * Written in 2022 by Thamatip Chitpong <tangaming123456@outlook.com>
 *
 * To the extent possible under law, the author(s) have dedicated all copyright
 * and related and neighboring rights to this software to the public domain
 * worldwide. This software is distributed without any warranty.
 *
 * You should have received a copy of the CC0 Public Domain Dedication along
 * with this software. If not, see
 * <http://creativecommons.org/publicdomain/zero/1.0/>.
 */

#include <windows.h>
#include <d3d9.h>

IDirect3D9* WINAPI Direct3DCreate9(UINT nSDKVersion)
{
    return NULL;
}

HRESULT WINAPI Direct3DCreate9Ex(UINT nSDKVersion, IDirect3D9Ex **ppDirect3D9Ex)
{
    return D3DERR_NOTAVAILABLE;
}

int WINAPI D3DPERF_BeginEvent(D3DCOLOR col, LPCWSTR wszName)
{
    return 0;
}

int WINAPI D3DPERF_EndEvent(void)
{
    return 0;
}

DWORD WINAPI D3DPERF_GetStatus(void)
{
    return 0;
}

BOOL WINAPI D3DPERF_QueryRepeatFrame(void)
{
    return FALSE;
}

void WINAPI D3DPERF_SetMarker(D3DCOLOR col, LPCWSTR wszName) { }

void WINAPI D3DPERF_SetOptions(DWORD dwOptions) { }

void WINAPI D3DPERF_SetRegion(D3DCOLOR col, LPCWSTR wszName) { }

