/*
 * Author: Thamatip Chitpong, 2022
 *
 * SPDX-License-Identifier: 0BSD
 * License-Filename: LICENSE.txt
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
