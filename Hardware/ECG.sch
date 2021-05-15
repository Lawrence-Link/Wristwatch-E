EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr User 7874 5906
encoding utf-8
Sheet 2 7
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
L BMD101:BMD101 IC?
U 1 1 606871C1
P 2500 1900
F 0 "IC?" H 3100 2165 50  0000 C CNN
F 1 "BMD101" H 3100 2074 50  0000 C CNN
F 2 "SON65P300X300X60-9N" H 3550 2000 50  0001 L CNN
F 3 "http://m5.img.dxcdn.com/CDDriver/CD/sku.241178.pdf" H 3550 1900 50  0001 L CNN
F 4 "High Performance Bio-Signal System-on-Chip (SoC), SON-8" H 3550 1800 50  0001 L CNN "Description"
F 5 "0.6" H 3550 1700 50  0001 L CNN "Height"
F 6 "NeuroSky" H 3550 1600 50  0001 L CNN "Manufacturer_Name"
F 7 "BMD101" H 3550 1500 50  0001 L CNN "Manufacturer_Part_Number"
F 8 "" H 3550 1400 50  0001 L CNN "Mouser Part Number"
F 9 "" H 3550 1300 50  0001 L CNN "Mouser Price/Stock"
F 10 "" H 3550 1200 50  0001 L CNN "Arrow Part Number"
F 11 "" H 3550 1100 50  0001 L CNN "Arrow Price/Stock"
	1    2500 1900
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 6094EC2E
P 4150 2000
F 0 "#PWR?" H 4150 1750 50  0001 C CNN
F 1 "GND" H 4200 1850 50  0000 C CNN
F 2 "" H 4150 2000 50  0001 C CNN
F 3 "" H 4150 2000 50  0001 C CNN
	1    4150 2000
	1    0    0    -1  
$EndComp
Wire Wire Line
	3700 2000 4150 2000
Text GLabel 2500 2200 0    50   Input ~ 0
UART1_TX
Text GLabel 3700 2200 2    50   Input ~ 0
UART1_TX
NoConn ~ 3100 2700
$Comp
L Mechanical:MountingHole_Pad H?
U 1 1 60937813
P 1850 1800
F 0 "H?" V 2100 2100 50  0000 C CNN
F 1 "Electrode" V 2000 2000 50  0000 C CNN
F 2 "" H 1850 1800 50  0001 C CNN
F 3 "~" H 1850 1800 50  0001 C CNN
	1    1850 1800
	0    -1   -1   0   
$EndComp
$Comp
L Mechanical:MountingHole_Pad H?
U 1 1 60938B6A
P 1850 2100
F 0 "H?" V 1800 2400 50  0000 C CNN
F 1 "Electrode" V 1700 2300 50  0000 C CNN
F 2 "" H 1850 2100 50  0001 C CNN
F 3 "~" H 1850 2100 50  0001 C CNN
	1    1850 2100
	0    -1   -1   0   
$EndComp
Wire Wire Line
	1950 1800 2050 1800
Wire Wire Line
	2200 1800 2200 2000
Wire Wire Line
	2200 2000 2500 2000
Wire Wire Line
	1950 2100 2050 2100
NoConn ~ 3700 2100
$Comp
L power:+VDD_ECG #PWR?
U 1 1 60943A84
P 3700 1850
F 0 "#PWR?" H 3700 1850 50  0001 C CNN
F 1 "+VDD_ECG" H 3700 2023 50  0000 C CNN
F 2 "" H 3700 1850 50  0001 C CNN
F 3 "" H 3700 1850 50  0001 C CNN
	1    3700 1850
	1    0    0    -1  
$EndComp
$Comp
L Device:R R?
U 1 1 609441B1
P 2500 1750
F 0 "R?" H 2650 1750 50  0000 R CNN
F 1 "0" V 2500 1800 50  0000 R CNN
F 2 "" V 2430 1750 50  0001 C CNN
F 3 "~" H 2500 1750 50  0001 C CNN
	1    2500 1750
	-1   0    0    1   
$EndComp
$Comp
L power:+VDD_ECG #PWR?
U 1 1 60944B92
P 2500 1600
F 0 "#PWR?" H 2500 1600 50  0001 C CNN
F 1 "+VDD_ECG" H 2500 1773 50  0000 C CNN
F 2 "" H 2500 1600 50  0001 C CNN
F 3 "" H 2500 1600 50  0001 C CNN
	1    2500 1600
	1    0    0    -1  
$EndComp
$Comp
L Device:C C?
U 1 1 609455C3
P 3950 1850
F 0 "C?" V 3698 1850 50  0000 C CNN
F 1 "C" V 3789 1850 50  0000 C CNN
F 2 "" H 3988 1700 50  0001 C CNN
F 3 "~" H 3950 1850 50  0001 C CNN
	1    3950 1850
	0    1    1    0   
$EndComp
Wire Wire Line
	3700 1900 3700 1850
Wire Wire Line
	3800 1850 3700 1850
Connection ~ 3700 1850
Wire Wire Line
	4150 1850 4150 2000
Connection ~ 4150 2000
Wire Wire Line
	4100 1850 4150 1850
$Comp
L Diode:ESD9B3.3ST5G D?
U 1 1 60946C17
P 2050 1950
F 0 "D?" V 2000 1750 50  0000 L CNN
F 1 "ESD9B3.3ST5G" V 2100 1300 50  0000 L CNN
F 2 "Diode_SMD:D_SOD-923" H 2050 1950 50  0001 C CNN
F 3 "https://www.onsemi.com/pub/Collateral/ESD9B-D.PDF" H 2050 1950 50  0001 C CNN
	1    2050 1950
	0    1    1    0   
$EndComp
Connection ~ 2050 2100
Wire Wire Line
	2050 2100 2500 2100
Connection ~ 2050 1800
Wire Wire Line
	2050 1800 2200 1800
$EndSCHEMATC
