﻿/* -*- coding: utf-8-with-signature; indent-tabs-mode: t; tab-width: 4; c-basic-offset: 4; -*- */

/*
 * Suika 2
 * Copyright (C) 2001-2016, TABATA Keiichi. All rights reserved.
 */

/*
 * [Changes]
 *  - 2021/08/03 作成
 */

#ifndef SUIKA_D3D_H
#define SUIKA_D3D_H

#include "suika.h"

#include <windows.h>

BOOL D3DInitialize(HWND hWnd);
VOID D3DCleanup(void);
BOOL D3DLockTexture(int width, int height, pixel_t *pixels,
					pixel_t **locked_pixels, void **texture);
VOID D3DUnlockTexture(int width, int height, pixel_t *pixels,
					  pixel_t **locked_pixels, void **texture);
VOID D3DDestroyTexture(void *texture);
VOID D3DStartFrame(void);
VOID D3DEndFrame(void);
VOID D3DRenderImage(int dst_left, int dst_top,
					struct image * RESTRICT src_image, int width, int height,
					int src_left, int src_top, int alpha, int bt);
VOID D3DRenderImageMask(int dst_left, int dst_top,
						struct image * RESTRICT src_image, int width,
						int height, int src_left, int src_top, int mask);
VOID D3DRenderClear(int left, int top, int width, int height, pixel_t color);

#endif