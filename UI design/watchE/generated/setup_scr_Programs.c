/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_Programs(lv_ui *ui){

	//Write codes Programs
	ui->Programs = lv_obj_create(NULL, NULL);

	//Write codes Tileview
	ui->Tileview = lv_tileview_create(ui->Programs, NULL);
	static lv_point_t null_valid_pos[] = {{0, 0},{0, 1},};
	lv_tileview_set_valid_positions(ui->Tileview, null_valid_pos, 2);
	lv_tileview_set_edge_flash(ui->Tileview, true);
	lv_tileview_set_anim_time(ui->Tileview, 400);

	//Write codes tileview_0
	ui->tileview_0 = lv_obj_create(ui->Tileview, NULL);
	lv_obj_set_style_local_bg_opa(ui->tileview_0, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 0);
	lv_obj_set_style_local_border_width(ui->tileview_0, LV_OBJ_PART_MAIN, LV_STATE_FOCUSED, 0);
	lv_obj_set_pos(ui->tileview_0, 0, 0*LV_VER_RES);
	lv_obj_set_size(ui->tileview_0, LV_HOR_RES, LV_VER_RES);
	lv_tileview_add_element(ui->Tileview, ui->tileview_0);

	//Write codes Programs_Wallpaper
	ui->Programs_Wallpaper = lv_img_create(ui->tileview_0, NULL);

	//Write style LV_IMG_PART_MAIN for Programs_Wallpaper
	static lv_style_t style_Programs_Wallpaper_main;
	lv_style_init(&style_Programs_Wallpaper_main);

	//Write style state: LV_STATE_DEFAULT for style_Programs_Wallpaper_main
	lv_style_set_image_recolor(&style_Programs_Wallpaper_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_Programs_Wallpaper_main, LV_STATE_DEFAULT, 80);
	lv_style_set_image_opa(&style_Programs_Wallpaper_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Programs_Wallpaper, LV_IMG_PART_MAIN, &style_Programs_Wallpaper_main);
	lv_obj_set_pos(ui->Programs_Wallpaper, 0, 0);
	lv_obj_set_size(ui->Programs_Wallpaper, 240, 240);
	lv_obj_set_click(ui->Programs_Wallpaper, true);
	lv_tileview_add_element(ui->Tileview, ui->Programs_Wallpaper);
	lv_img_set_src(ui->Programs_Wallpaper,&_desktop_alpha_240x240);
	lv_img_set_pivot(ui->Programs_Wallpaper, 0,0);
	lv_img_set_angle(ui->Programs_Wallpaper, 0);

	//Write codes Programs_MainScreenTime
	ui->Programs_MainScreenTime = lv_label_create(ui->tileview_0, NULL);
	lv_label_set_text(ui->Programs_MainScreenTime, "12:00");
	lv_label_set_long_mode(ui->Programs_MainScreenTime, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Programs_MainScreenTime, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Programs_MainScreenTime
	static lv_style_t style_Programs_MainScreenTime_main;
	lv_style_init(&style_Programs_MainScreenTime_main);

	//Write style state: LV_STATE_DEFAULT for style_Programs_MainScreenTime_main
	lv_style_set_radius(&style_Programs_MainScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Programs_MainScreenTime_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Programs_MainScreenTime_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Programs_MainScreenTime_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Programs_MainScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Programs_MainScreenTime_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_Programs_MainScreenTime_main, LV_STATE_DEFAULT, &lv_font_segoeui_14);
	lv_style_set_text_letter_space(&style_Programs_MainScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_left(&style_Programs_MainScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Programs_MainScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Programs_MainScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Programs_MainScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Programs_MainScreenTime, LV_LABEL_PART_MAIN, &style_Programs_MainScreenTime_main);
	lv_obj_set_pos(ui->Programs_MainScreenTime, 70, 5);
	lv_obj_set_size(ui->Programs_MainScreenTime, 100, 0);
	lv_tileview_add_element(ui->Tileview, ui->Programs_MainScreenTime);

	//Write codes Programs_BATT_Left
	ui->Programs_BATT_Left = lv_img_create(ui->tileview_0, NULL);

	//Write style LV_IMG_PART_MAIN for Programs_BATT_Left
	static lv_style_t style_Programs_BATT_Left_main;
	lv_style_init(&style_Programs_BATT_Left_main);

	//Write style state: LV_STATE_DEFAULT for style_Programs_BATT_Left_main
	lv_style_set_image_recolor(&style_Programs_BATT_Left_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Programs_BATT_Left_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Programs_BATT_Left_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Programs_BATT_Left, LV_IMG_PART_MAIN, &style_Programs_BATT_Left_main);
	lv_obj_set_pos(ui->Programs_BATT_Left, 28, 0);
	lv_obj_set_size(ui->Programs_BATT_Left, 24, 24);
	lv_obj_set_click(ui->Programs_BATT_Left, true);
	lv_tileview_add_element(ui->Tileview, ui->Programs_BATT_Left);
	lv_img_set_src(ui->Programs_BATT_Left,&_full_battery_alpha_24x24);
	lv_img_set_pivot(ui->Programs_BATT_Left, 0,0);
	lv_img_set_angle(ui->Programs_BATT_Left, 900);

	//Write codes tileview_1
	ui->tileview_1 = lv_obj_create(ui->Tileview, NULL);
	lv_obj_set_style_local_bg_opa(ui->tileview_1, LV_OBJ_PART_MAIN, LV_STATE_DEFAULT, 0);
	lv_obj_set_style_local_border_width(ui->tileview_1, LV_OBJ_PART_MAIN, LV_STATE_FOCUSED, 0);
	lv_obj_set_pos(ui->tileview_1, 0, 1*LV_VER_RES);
	lv_obj_set_size(ui->tileview_1, LV_HOR_RES, LV_VER_RES);
	lv_tileview_add_element(ui->Tileview, ui->tileview_1);

	//Write codes Programs3_Wallpaper
	ui->Programs3_Wallpaper = lv_img_create(ui->tileview_1, NULL);

	//Write style LV_IMG_PART_MAIN for Programs3_Wallpaper
	static lv_style_t style_Programs3_Wallpaper_main;
	lv_style_init(&style_Programs3_Wallpaper_main);

	//Write style state: LV_STATE_DEFAULT for style_Programs3_Wallpaper_main
	lv_style_set_image_recolor(&style_Programs3_Wallpaper_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_image_recolor_opa(&style_Programs3_Wallpaper_main, LV_STATE_DEFAULT, 80);
	lv_style_set_image_opa(&style_Programs3_Wallpaper_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Programs3_Wallpaper, LV_IMG_PART_MAIN, &style_Programs3_Wallpaper_main);
	lv_obj_set_pos(ui->Programs3_Wallpaper, 0, 0);
	lv_obj_set_size(ui->Programs3_Wallpaper, 240, 240);
	lv_obj_set_click(ui->Programs3_Wallpaper, true);
	lv_tileview_add_element(ui->Tileview, ui->Programs3_Wallpaper);
	lv_img_set_src(ui->Programs3_Wallpaper,&_desktop_alpha_240x240);
	lv_img_set_pivot(ui->Programs3_Wallpaper, 0,0);
	lv_img_set_angle(ui->Programs3_Wallpaper, 0);
}