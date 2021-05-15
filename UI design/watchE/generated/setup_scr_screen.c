/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_screen(lv_ui *ui){

	//Write codes screen
	ui->screen = lv_obj_create(NULL, NULL);

	//Write codes screen_Wallpaper
	ui->screen_Wallpaper = lv_img_create(ui->screen, NULL);
	lv_obj_set_pos(ui->screen_Wallpaper, 0, 0);
	lv_obj_set_size(ui->screen_Wallpaper, 240, 240);
	lv_obj_set_click(ui->screen_Wallpaper, true);
	lv_img_set_src(ui->screen_Wallpaper,&_desktop_alpha_240x240);
	lv_img_set_pivot(ui->screen_Wallpaper, 0,0);
	lv_img_set_angle(ui->screen_Wallpaper, 0);

	//Write codes screen_MainScreenTime
	ui->screen_MainScreenTime = lv_label_create(ui->screen, NULL);
	lv_label_set_text(ui->screen_MainScreenTime, "12:00");
	lv_label_set_long_mode(ui->screen_MainScreenTime, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen_MainScreenTime, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen_MainScreenTime
	static lv_style_t style_screen_MainScreenTime_main;
	lv_style_init(&style_screen_MainScreenTime_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_MainScreenTime_main
	lv_style_set_radius(&style_screen_MainScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_MainScreenTime_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_MainScreenTime_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_MainScreenTime_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_MainScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_screen_MainScreenTime_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_MainScreenTime_main, LV_STATE_DEFAULT, &lv_font_segoeui_38);
	lv_style_set_text_letter_space(&style_screen_MainScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_screen_MainScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen_MainScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen_MainScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen_MainScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_MainScreenTime, LV_LABEL_PART_MAIN, &style_screen_MainScreenTime_main);
	lv_obj_set_pos(ui->screen_MainScreenTime, 125, 5);
	lv_obj_set_size(ui->screen_MainScreenTime, 100, 0);

	//Write codes screen_MainScreenDate
	ui->screen_MainScreenDate = lv_label_create(ui->screen, NULL);
	lv_label_set_text(ui->screen_MainScreenDate, "2021-4-28 Wednesday");
	lv_label_set_long_mode(ui->screen_MainScreenDate, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen_MainScreenDate, LV_LABEL_ALIGN_RIGHT);

	//Write style LV_LABEL_PART_MAIN for screen_MainScreenDate
	static lv_style_t style_screen_MainScreenDate_main;
	lv_style_init(&style_screen_MainScreenDate_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_MainScreenDate_main
	lv_style_set_radius(&style_screen_MainScreenDate_main, LV_STATE_DEFAULT, 4);
	lv_style_set_bg_color(&style_screen_MainScreenDate_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_MainScreenDate_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_MainScreenDate_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_MainScreenDate_main, LV_STATE_DEFAULT, 50);
	lv_style_set_text_color(&style_screen_MainScreenDate_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_MainScreenDate_main, LV_STATE_DEFAULT, &lv_font_segoeui_14);
	lv_style_set_text_letter_space(&style_screen_MainScreenDate_main, LV_STATE_DEFAULT, 1);
	lv_style_set_pad_left(&style_screen_MainScreenDate_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen_MainScreenDate_main, LV_STATE_DEFAULT, 5);
	lv_style_set_pad_top(&style_screen_MainScreenDate_main, LV_STATE_DEFAULT, 4);
	lv_style_set_pad_bottom(&style_screen_MainScreenDate_main, LV_STATE_DEFAULT, 4);
	lv_obj_add_style(ui->screen_MainScreenDate, LV_LABEL_PART_MAIN, &style_screen_MainScreenDate_main);
	lv_obj_set_pos(ui->screen_MainScreenDate, 53, 50);
	lv_obj_set_size(ui->screen_MainScreenDate, 182, 0);

	//Write codes screen_BLE
	ui->screen_BLE = lv_imgbtn_create(ui->screen, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen_BLE
	static lv_style_t style_screen_BLE_main;
	lv_style_init(&style_screen_BLE_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_BLE_main
	lv_style_set_text_color(&style_screen_BLE_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen_BLE_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen_BLE_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen_BLE_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_BLE, LV_IMGBTN_PART_MAIN, &style_screen_BLE_main);
	lv_obj_set_pos(ui->screen_BLE, 5, 3);
	lv_obj_set_size(ui->screen_BLE, 20, 20);
	lv_imgbtn_set_src(ui->screen_BLE,LV_BTN_STATE_RELEASED,&_bluetooth_alpha_20x20);
	lv_imgbtn_set_src(ui->screen_BLE,LV_BTN_STATE_PRESSED,&_bluetooth_alpha_20x20);
	lv_imgbtn_set_checkable(ui->screen_BLE, true);

	//Write codes screen_BATT_Left
	ui->screen_BATT_Left = lv_img_create(ui->screen, NULL);

	//Write style LV_IMG_PART_MAIN for screen_BATT_Left
	static lv_style_t style_screen_BATT_Left_main;
	lv_style_init(&style_screen_BATT_Left_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_BATT_Left_main
	lv_style_set_image_recolor(&style_screen_BATT_Left_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen_BATT_Left_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen_BATT_Left_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_BATT_Left, LV_IMG_PART_MAIN, &style_screen_BATT_Left_main);
	lv_obj_set_pos(ui->screen_BATT_Left, 27, 216);
	lv_obj_set_size(ui->screen_BATT_Left, 24, 24);
	lv_obj_set_click(ui->screen_BATT_Left, true);
	lv_img_set_src(ui->screen_BATT_Left,&_full_battery_alpha_24x24);
	lv_img_set_pivot(ui->screen_BATT_Left, 0,0);
	lv_img_set_angle(ui->screen_BATT_Left, 900);

	//Write codes screen_PowerLeftPercent
	ui->screen_PowerLeftPercent = lv_label_create(ui->screen, NULL);
	lv_label_set_text(ui->screen_PowerLeftPercent, "97%");
	lv_label_set_long_mode(ui->screen_PowerLeftPercent, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen_PowerLeftPercent, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen_PowerLeftPercent
	static lv_style_t style_screen_PowerLeftPercent_main;
	lv_style_init(&style_screen_PowerLeftPercent_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_PowerLeftPercent_main
	lv_style_set_radius(&style_screen_PowerLeftPercent_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_PowerLeftPercent_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_PowerLeftPercent_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_PowerLeftPercent_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_PowerLeftPercent_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_screen_PowerLeftPercent_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_PowerLeftPercent_main, LV_STATE_DEFAULT, &lv_font_segoeui_12);
	lv_style_set_text_letter_space(&style_screen_PowerLeftPercent_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_screen_PowerLeftPercent_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen_PowerLeftPercent_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen_PowerLeftPercent_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen_PowerLeftPercent_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_PowerLeftPercent, LV_LABEL_PART_MAIN, &style_screen_PowerLeftPercent_main);
	lv_obj_set_pos(ui->screen_PowerLeftPercent, 28, 221);
	lv_obj_set_size(ui->screen_PowerLeftPercent, 30, 0);

	//Write codes screen_WEATHER_ICON
	ui->screen_WEATHER_ICON = lv_imgbtn_create(ui->screen, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen_WEATHER_ICON
	static lv_style_t style_screen_WEATHER_ICON_main;
	lv_style_init(&style_screen_WEATHER_ICON_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_WEATHER_ICON_main
	lv_style_set_text_color(&style_screen_WEATHER_ICON_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen_WEATHER_ICON_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen_WEATHER_ICON_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen_WEATHER_ICON_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_WEATHER_ICON, LV_IMGBTN_PART_MAIN, &style_screen_WEATHER_ICON_main);
	lv_obj_set_pos(ui->screen_WEATHER_ICON, 86, 4);
	lv_obj_set_size(ui->screen_WEATHER_ICON, 40, 40);
	lv_imgbtn_set_src(ui->screen_WEATHER_ICON,LV_BTN_STATE_RELEASED,&_rainy_night_alpha_40x40);
	lv_imgbtn_set_checkable(ui->screen_WEATHER_ICON, true);

	//Write codes screen_MESSAGES
	ui->screen_MESSAGES = lv_imgbtn_create(ui->screen, NULL);

	//Write style LV_IMGBTN_PART_MAIN for screen_MESSAGES
	static lv_style_t style_screen_MESSAGES_main;
	lv_style_init(&style_screen_MESSAGES_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_MESSAGES_main
	lv_style_set_text_color(&style_screen_MESSAGES_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor(&style_screen_MESSAGES_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_screen_MESSAGES_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_screen_MESSAGES_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->screen_MESSAGES, LV_IMGBTN_PART_MAIN, &style_screen_MESSAGES_main);
	lv_obj_set_pos(ui->screen_MESSAGES, 176, 206);
	lv_obj_set_size(ui->screen_MESSAGES, 30, 30);
	lv_imgbtn_set_src(ui->screen_MESSAGES,LV_BTN_STATE_RELEASED,&_sms_alpha_30x30);
	lv_imgbtn_set_checkable(ui->screen_MESSAGES, true);

	//Write codes screen_SMS_COUNT
	ui->screen_SMS_COUNT = lv_label_create(ui->screen, NULL);
	lv_label_set_text(ui->screen_SMS_COUNT, "13");
	lv_label_set_long_mode(ui->screen_SMS_COUNT, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->screen_SMS_COUNT, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for screen_SMS_COUNT
	static lv_style_t style_screen_SMS_COUNT_main;
	lv_style_init(&style_screen_SMS_COUNT_main);

	//Write style state: LV_STATE_DEFAULT for style_screen_SMS_COUNT_main
	lv_style_set_radius(&style_screen_SMS_COUNT_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_screen_SMS_COUNT_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_SMS_COUNT_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_SMS_COUNT_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_screen_SMS_COUNT_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_screen_SMS_COUNT_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_screen_SMS_COUNT_main, LV_STATE_DEFAULT, &lv_font_segoeui_16);
	lv_style_set_text_letter_space(&style_screen_SMS_COUNT_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_screen_SMS_COUNT_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_screen_SMS_COUNT_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_screen_SMS_COUNT_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_screen_SMS_COUNT_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->screen_SMS_COUNT, LV_LABEL_PART_MAIN, &style_screen_SMS_COUNT_main);
	lv_obj_set_pos(ui->screen_SMS_COUNT, 204, 212);
	lv_obj_set_size(ui->screen_SMS_COUNT, 26, 0);
}