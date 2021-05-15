/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *Lock;
	lv_obj_t *Lock_cont1;
	lv_obj_t *Lock_LockScreenTime;
	lv_obj_t *Lock_LockScreenDate;
	lv_obj_t *Lock_LockScreenDayLeft;
	lv_obj_t *Lock_img4;
	lv_obj_t *Lock_img4_5;
	lv_obj_t *Lock_btn6;
	lv_obj_t *Lock_btn6_label;
	lv_obj_t *screen;
	lv_obj_t *screen_Wallpaper;
	lv_obj_t *screen_MainScreenTime;
	lv_obj_t *screen_MainScreenDate;
	lv_obj_t *screen_BLE;
	lv_obj_t *screen_BLE_label;
	lv_obj_t *screen_BATT_Left;
	lv_obj_t *screen_PowerLeftPercent;
	lv_obj_t *screen_WEATHER_ICON;
	lv_obj_t *screen_WEATHER_ICON_label;
	lv_obj_t *screen_MESSAGES;
	lv_obj_t *screen_MESSAGES_label;
	lv_obj_t *screen_SMS_COUNT;
	lv_obj_t *Programs;
	lv_obj_t *Tileview;
	lv_obj_t *tileview_0;
	lv_obj_t *Programs_Wallpaper;
	lv_obj_t *Programs_MainScreenTime;
	lv_obj_t *Programs_BATT_Left;
	lv_obj_t *tileview_1;
	lv_obj_t *Programs3_Wallpaper;
}lv_ui;

void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_Lock(lv_ui *ui);
void setup_scr_screen(lv_ui *ui);
void setup_scr_Programs(lv_ui *ui);
LV_IMG_DECLARE(_sms_alpha_30x30);
LV_IMG_DECLARE(_bluetooth_alpha_20x20);
LV_IMG_DECLARE(_rainy_night_alpha_40x40);
LV_IMG_DECLARE(_desktop_alpha_240x240);
LV_IMG_DECLARE(_full_moon_alpha_20x20);
LV_IMG_DECLARE(_sunrise_alpha_20x20);
LV_IMG_DECLARE(_full_battery_alpha_24x24);

#ifdef __cplusplus
}
#endif
#endif