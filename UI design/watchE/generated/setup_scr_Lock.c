/*
 * Copyright 2021 NXP
 * SPDX-License-Identifier: MIT
 */

#include "lvgl/lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"


void setup_scr_Lock(lv_ui *ui){

	//Write codes Lock
	ui->Lock = lv_obj_create(NULL, NULL);

	//Write codes Lock_cont1
	ui->Lock_cont1 = lv_cont_create(ui->Lock, NULL);

	//Write style LV_CONT_PART_MAIN for Lock_cont1
	static lv_style_t style_Lock_cont1_main;
	lv_style_init(&style_Lock_cont1_main);

	//Write style state: LV_STATE_DEFAULT for style_Lock_cont1_main
	lv_style_set_radius(&style_Lock_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Lock_cont1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_color(&style_Lock_cont1_main, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_bg_grad_dir(&style_Lock_cont1_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Lock_cont1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Lock_cont1_main, LV_STATE_DEFAULT, lv_color_make(0x99, 0x99, 0x99));
	lv_style_set_border_width(&style_Lock_cont1_main, LV_STATE_DEFAULT, 1);
	lv_style_set_border_opa(&style_Lock_cont1_main, LV_STATE_DEFAULT, 255);
	lv_style_set_pad_left(&style_Lock_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Lock_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Lock_cont1_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Lock_cont1_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Lock_cont1, LV_CONT_PART_MAIN, &style_Lock_cont1_main);
	lv_obj_set_pos(ui->Lock_cont1, 0, 0);
	lv_obj_set_size(ui->Lock_cont1, 240, 240);
	lv_obj_set_click(ui->Lock_cont1, false);
	lv_cont_set_layout(ui->Lock_cont1, LV_LAYOUT_OFF);
	lv_cont_set_fit(ui->Lock_cont1, LV_FIT_NONE);

	//Write codes Lock_LockScreenTime
	ui->Lock_LockScreenTime = lv_label_create(ui->Lock, NULL);
	lv_label_set_text(ui->Lock_LockScreenTime, "12:00");
	lv_label_set_long_mode(ui->Lock_LockScreenTime, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Lock_LockScreenTime, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Lock_LockScreenTime
	static lv_style_t style_Lock_LockScreenTime_main;
	lv_style_init(&style_Lock_LockScreenTime_main);

	//Write style state: LV_STATE_DEFAULT for style_Lock_LockScreenTime_main
	lv_style_set_radius(&style_Lock_LockScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Lock_LockScreenTime_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Lock_LockScreenTime_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Lock_LockScreenTime_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Lock_LockScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Lock_LockScreenTime_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_Lock_LockScreenTime_main, LV_STATE_DEFAULT, &lv_font_segoeui_34);
	lv_style_set_text_letter_space(&style_Lock_LockScreenTime_main, LV_STATE_DEFAULT, 1);
	lv_style_set_pad_left(&style_Lock_LockScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Lock_LockScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Lock_LockScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Lock_LockScreenTime_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Lock_LockScreenTime, LV_LABEL_PART_MAIN, &style_Lock_LockScreenTime_main);
	lv_obj_set_pos(ui->Lock_LockScreenTime, 55.5, 100);
	lv_obj_set_size(ui->Lock_LockScreenTime, 129, 0);

	//Write codes Lock_LockScreenDate
	ui->Lock_LockScreenDate = lv_label_create(ui->Lock, NULL);
	lv_label_set_text(ui->Lock_LockScreenDate, "April 27 2021 Wed.");
	lv_label_set_long_mode(ui->Lock_LockScreenDate, LV_LABEL_LONG_BREAK);
	lv_label_set_align(ui->Lock_LockScreenDate, LV_LABEL_ALIGN_CENTER);

	//Write style LV_LABEL_PART_MAIN for Lock_LockScreenDate
	static lv_style_t style_Lock_LockScreenDate_main;
	lv_style_init(&style_Lock_LockScreenDate_main);

	//Write style state: LV_STATE_DEFAULT for style_Lock_LockScreenDate_main
	lv_style_set_radius(&style_Lock_LockScreenDate_main, LV_STATE_DEFAULT, 0);
	lv_style_set_bg_color(&style_Lock_LockScreenDate_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Lock_LockScreenDate_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Lock_LockScreenDate_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Lock_LockScreenDate_main, LV_STATE_DEFAULT, 0);
	lv_style_set_text_color(&style_Lock_LockScreenDate_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_text_font(&style_Lock_LockScreenDate_main, LV_STATE_DEFAULT, &lv_font_segoeui_12);
	lv_style_set_text_letter_space(&style_Lock_LockScreenDate_main, LV_STATE_DEFAULT, 1);
	lv_style_set_pad_left(&style_Lock_LockScreenDate_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_right(&style_Lock_LockScreenDate_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_top(&style_Lock_LockScreenDate_main, LV_STATE_DEFAULT, 0);
	lv_style_set_pad_bottom(&style_Lock_LockScreenDate_main, LV_STATE_DEFAULT, 0);
	lv_obj_add_style(ui->Lock_LockScreenDate, LV_LABEL_PART_MAIN, &style_Lock_LockScreenDate_main);
	lv_obj_set_pos(ui->Lock_LockScreenDate, 55.5, 144);
	lv_obj_set_size(ui->Lock_LockScreenDate, 129, 0);

	//Write codes Lock_LockScreenDayLeft
	ui->Lock_LockScreenDayLeft = lv_bar_create(ui->Lock, NULL);

	//Write style LV_BAR_PART_BG for Lock_LockScreenDayLeft
	static lv_style_t style_Lock_LockScreenDayLeft_bg;
	lv_style_init(&style_Lock_LockScreenDayLeft_bg);

	//Write style state: LV_STATE_DEFAULT for style_Lock_LockScreenDayLeft_bg
	lv_style_set_radius(&style_Lock_LockScreenDayLeft_bg, LV_STATE_DEFAULT, 2);
	lv_style_set_bg_color(&style_Lock_LockScreenDayLeft_bg, LV_STATE_DEFAULT, lv_color_make(0x73, 0x73, 0x73));
	lv_style_set_bg_grad_color(&style_Lock_LockScreenDayLeft_bg, LV_STATE_DEFAULT, lv_color_make(0x73, 0x73, 0x73));
	lv_style_set_bg_grad_dir(&style_Lock_LockScreenDayLeft_bg, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Lock_LockScreenDayLeft_bg, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Lock_LockScreenDayLeft, LV_BAR_PART_BG, &style_Lock_LockScreenDayLeft_bg);

	//Write style LV_BAR_PART_INDIC for Lock_LockScreenDayLeft
	static lv_style_t style_Lock_LockScreenDayLeft_indic;
	lv_style_init(&style_Lock_LockScreenDayLeft_indic);

	//Write style state: LV_STATE_DEFAULT for style_Lock_LockScreenDayLeft_indic
	lv_style_set_radius(&style_Lock_LockScreenDayLeft_indic, LV_STATE_DEFAULT, 10);
	lv_style_set_bg_color(&style_Lock_LockScreenDayLeft_indic, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Lock_LockScreenDayLeft_indic, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Lock_LockScreenDayLeft_indic, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Lock_LockScreenDayLeft_indic, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Lock_LockScreenDayLeft, LV_BAR_PART_INDIC, &style_Lock_LockScreenDayLeft_indic);
	lv_obj_set_pos(ui->Lock_LockScreenDayLeft, 55, 83);
	lv_obj_set_size(ui->Lock_LockScreenDayLeft, 130, 7);
	lv_bar_set_anim_time(ui->Lock_LockScreenDayLeft,1000);
	lv_bar_set_value(ui->Lock_LockScreenDayLeft,50,LV_ANIM_OFF);
	lv_bar_set_range(ui->Lock_LockScreenDayLeft,0,100);

	//Write codes Lock_img4
	ui->Lock_img4 = lv_img_create(ui->Lock, NULL);

	//Write style LV_IMG_PART_MAIN for Lock_img4
	static lv_style_t style_Lock_img4_main;
	lv_style_init(&style_Lock_img4_main);

	//Write style state: LV_STATE_DEFAULT for style_Lock_img4_main
	lv_style_set_image_recolor(&style_Lock_img4_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Lock_img4_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Lock_img4_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Lock_img4, LV_IMG_PART_MAIN, &style_Lock_img4_main);
	lv_obj_set_pos(ui->Lock_img4, 170, 55);
	lv_obj_set_size(ui->Lock_img4, 20, 20);
	lv_obj_set_click(ui->Lock_img4, true);
	lv_img_set_src(ui->Lock_img4,&_full_moon_alpha_20x20);
	lv_img_set_pivot(ui->Lock_img4, 0,0);
	lv_img_set_angle(ui->Lock_img4, 0);

	//Write codes Lock_img4_5
	ui->Lock_img4_5 = lv_img_create(ui->Lock, NULL);

	//Write style LV_IMG_PART_MAIN for Lock_img4_5
	static lv_style_t style_Lock_img4_5_main;
	lv_style_init(&style_Lock_img4_5_main);

	//Write style state: LV_STATE_DEFAULT for style_Lock_img4_5_main
	lv_style_set_image_recolor(&style_Lock_img4_5_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_image_recolor_opa(&style_Lock_img4_5_main, LV_STATE_DEFAULT, 0);
	lv_style_set_image_opa(&style_Lock_img4_5_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Lock_img4_5, LV_IMG_PART_MAIN, &style_Lock_img4_5_main);
	lv_obj_set_pos(ui->Lock_img4_5, 52, 55);
	lv_obj_set_size(ui->Lock_img4_5, 20, 20);
	lv_obj_set_click(ui->Lock_img4_5, true);
	lv_img_set_src(ui->Lock_img4_5,&_sunrise_alpha_20x20);
	lv_img_set_pivot(ui->Lock_img4_5, 0,0);
	lv_img_set_angle(ui->Lock_img4_5, 0);

	//Write codes Lock_btn6
	ui->Lock_btn6 = lv_btn_create(ui->Lock, NULL);

	//Write style LV_BTN_PART_MAIN for Lock_btn6
	static lv_style_t style_Lock_btn6_main;
	lv_style_init(&style_Lock_btn6_main);

	//Write style state: LV_STATE_DEFAULT for style_Lock_btn6_main
	lv_style_set_radius(&style_Lock_btn6_main, LV_STATE_DEFAULT, 50);
	lv_style_set_bg_color(&style_Lock_btn6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_Lock_btn6_main, LV_STATE_DEFAULT, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_Lock_btn6_main, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
	lv_style_set_bg_opa(&style_Lock_btn6_main, LV_STATE_DEFAULT, 255);
	lv_style_set_border_color(&style_Lock_btn6_main, LV_STATE_DEFAULT, lv_color_make(0x01, 0xa2, 0xb1));
	lv_style_set_border_width(&style_Lock_btn6_main, LV_STATE_DEFAULT, 2);
	lv_style_set_border_opa(&style_Lock_btn6_main, LV_STATE_DEFAULT, 255);
	lv_style_set_outline_color(&style_Lock_btn6_main, LV_STATE_DEFAULT, lv_color_make(0xd4, 0xd7, 0xd9));
	lv_style_set_outline_opa(&style_Lock_btn6_main, LV_STATE_DEFAULT, 255);
	lv_obj_add_style(ui->Lock_btn6, LV_BTN_PART_MAIN, &style_Lock_btn6_main);
	lv_obj_set_pos(ui->Lock_btn6, 180, 180);
	lv_obj_set_size(ui->Lock_btn6, 50, 50);
	ui->Lock_btn6_label = lv_label_create(ui->Lock_btn6, NULL);
	lv_label_set_text(ui->Lock_btn6_label, "DBG");
	lv_obj_set_style_local_text_color(ui->Lock_btn6_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, lv_color_make(0x00, 0x00, 0x00));
	lv_obj_set_style_local_text_font(ui->Lock_btn6_label, LV_LABEL_PART_MAIN, LV_STATE_DEFAULT, &lv_font_segoeui_12);

	//Init events for screen
	events_init_Lock(ui);
}