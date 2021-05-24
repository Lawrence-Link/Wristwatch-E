EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 6
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Sheet
S 1750 1950 2300 1450
U 60686A21
F0 "ECG" 50
F1 "ECG.sch" 50
$EndSheet
$Sheet
S 4700 1950 2150 1450
U 60686A8D
F0 "Sensors via SPI" 50
F1 "Sensor_SPI.sch" 50
$EndSheet
$Sheet
S 4700 4150 2150 1400
U 60686BF9
F0 "PowerManaging" 50
F1 "PowerMan.sch" 50
F2 "HW_I2C_SCK" I R 6850 4550 50 
F3 "HW_I2C_SDA" I R 6850 4400 50 
F4 "PMU_IRQ" I R 6850 4700 50 
F5 "USB_DM" I R 6850 4850 50 
F6 "USB_DP" I R 6850 5000 50 
$EndSheet
$Sheet
S 7450 1950 2150 1450
U 60686CF3
F0 "Sensors via I2C" 50
F1 "Sensor_I2C.sch" 50
$EndSheet
$Sheet
S 1750 4150 2300 1350
U 60686E1F
F0 "Other Passive Component" 50
F1 "PassiveComponent.sch" 50
$EndSheet
$Comp
L Timer_RTC:DS3231MZ U?
U 1 1 60A105A5
P 8600 5000
AR Path="/60686D72/60A105A5" Ref="U?"  Part="1" 
AR Path="/60A105A5" Ref="U1"  Part="1" 
F 0 "U1" H 8100 4650 50  0000 C CNN
F 1 "DS3231MZ" H 8250 4550 50  0000 C CNN
F 2 "Package_SO:SOIC-8_3.9x4.9mm_P1.27mm" H 8600 4500 50  0001 C CNN
F 3 "http://datasheets.maximintegrated.com/en/ds/DS3231M.pdf" H 8600 4400 50  0001 C CNN
	1    8600 5000
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 60A105AB
P 8600 5400
AR Path="/60686D72/60A105AB" Ref="#PWR?"  Part="1" 
AR Path="/60A105AB" Ref="#PWR0101"  Part="1" 
F 0 "#PWR0101" H 8600 5150 50  0001 C CNN
F 1 "GND" H 8605 5227 50  0000 C CNN
F 2 "" H 8600 5400 50  0001 C CNN
F 3 "" H 8600 5400 50  0001 C CNN
	1    8600 5400
	1    0    0    -1  
$EndComp
Text GLabel 8000 4900 0    50   Input ~ 0
HW_I2C_SDA
Text GLabel 8000 4800 0    50   Input ~ 0
HW_I2C_SCL
Wire Wire Line
	8000 4800 8100 4800
Wire Wire Line
	8000 4900 8100 4900
$Comp
L power:+BATT #PWR?
U 1 1 60A105B5
P 8500 4450
AR Path="/60686D72/60A105B5" Ref="#PWR?"  Part="1" 
AR Path="/60A105B5" Ref="#PWR0102"  Part="1" 
F 0 "#PWR0102" H 8500 4300 50  0001 C CNN
F 1 "+BATT" H 8450 4600 50  0000 C CNN
F 2 "" H 8500 4450 50  0001 C CNN
F 3 "" H 8500 4450 50  0001 C CNN
	1    8500 4450
	1    0    0    -1  
$EndComp
$Comp
L Device:C C?
U 1 1 60A105BB
P 8650 4450
AR Path="/60686D72/60A105BB" Ref="C?"  Part="1" 
AR Path="/60A105BB" Ref="C1"  Part="1" 
F 0 "C1" V 8398 4450 50  0000 C CNN
F 1 "C" V 8489 4450 50  0000 C CNN
F 2 "" H 8688 4300 50  0001 C CNN
F 3 "~" H 8650 4450 50  0001 C CNN
	1    8650 4450
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 60A105C1
P 8800 4450
AR Path="/60686D72/60A105C1" Ref="#PWR?"  Part="1" 
AR Path="/60A105C1" Ref="#PWR0103"  Part="1" 
F 0 "#PWR0103" H 8800 4200 50  0001 C CNN
F 1 "GND" V 8805 4322 50  0000 R CNN
F 2 "" H 8800 4450 50  0001 C CNN
F 3 "" H 8800 4450 50  0001 C CNN
	1    8800 4450
	0    -1   -1   0   
$EndComp
NoConn ~ 9100 4800
NoConn ~ 8100 5200
Text Label 9550 5100 2    50   ~ 0
RTC_INT
Wire Wire Line
	9550 5100 9100 5100
Wire Wire Line
	8800 4600 8600 4600
Wire Wire Line
	8500 4450 8500 4600
Wire Wire Line
	8800 4450 8800 4600
Connection ~ 8800 4450
Connection ~ 8500 4450
$EndSCHEMATC
