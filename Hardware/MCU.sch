EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 7 7
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Timer_RTC:DS3231MZ U?
U 1 1 6093CB43
P 1950 1450
F 0 "U?" H 1450 1100 50  0000 C CNN
F 1 "DS3231MZ" H 1600 1000 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 1950 950 50  0001 C CNN
F 3 "http://datasheets.maximintegrated.com/en/ds/DS3231M.pdf" H 1950 850 50  0001 C CNN
	1    1950 1450
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 6093D4D5
P 1950 1850
F 0 "#PWR?" H 1950 1600 50  0001 C CNN
F 1 "GND" H 1955 1677 50  0000 C CNN
F 2 "" H 1950 1850 50  0001 C CNN
F 3 "" H 1950 1850 50  0001 C CNN
	1    1950 1850
	1    0    0    -1  
$EndComp
Text GLabel 1350 1350 0    50   Input ~ 0
HW_I2C_SDA
Text GLabel 1350 1250 0    50   Input ~ 0
HW_I2C_SCL
Wire Wire Line
	1350 1250 1450 1250
Wire Wire Line
	1350 1350 1450 1350
$Comp
L power:+BATT #PWR?
U 1 1 60948F3B
P 1850 900
F 0 "#PWR?" H 1850 750 50  0001 C CNN
F 1 "+BATT" H 1800 1050 50  0000 C CNN
F 2 "" H 1850 900 50  0001 C CNN
F 3 "" H 1850 900 50  0001 C CNN
	1    1850 900 
	1    0    0    -1  
$EndComp
$Comp
L Device:C C?
U 1 1 6094B691
P 2000 900
F 0 "C?" V 1748 900 50  0000 C CNN
F 1 "C" V 1839 900 50  0000 C CNN
F 2 "" H 2038 750 50  0001 C CNN
F 3 "~" H 2000 900 50  0001 C CNN
	1    2000 900 
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 6094BBF4
P 2150 900
F 0 "#PWR?" H 2150 650 50  0001 C CNN
F 1 "GND" V 2155 772 50  0000 R CNN
F 2 "" H 2150 900 50  0001 C CNN
F 3 "" H 2150 900 50  0001 C CNN
	1    2150 900 
	0    -1   -1   0   
$EndComp
NoConn ~ 2450 1250
NoConn ~ 1450 1650
Text Label 2900 1550 2    50   ~ 0
RTC_INT
Wire Wire Line
	2900 1550 2450 1550
Wire Wire Line
	2150 1050 1950 1050
Wire Wire Line
	1850 900  1850 1050
Wire Wire Line
	2150 900  2150 1050
Connection ~ 2150 900 
Connection ~ 1850 900 
$EndSCHEMATC
