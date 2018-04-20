# ---------------------------- SOUND SENSOR PROJECT --------------------------

This project is meant to collect sound level at a proximity of a Rasberry Pi 
device. The RPI is equipped with a USB sound card (C-Media Electronic, Inc. Audio Adapter) 
and a microphone. The sound is recored at 1600HZ sample rate and every second will produce 
80 pieces of RMS value as a bar-diagram. In the sound file, 8 pieces of data will be printed 
out by a .php file to a .txt file

table of content
1. Configuration
	a. RASBERRY-Pi model 3
	b. 16GB SD card
	c. Power cable
	d. USB sound-CAD
	e. Straight-through RJ45 cable
	f. Microphone with 3.5mm jack
	g. Interner accsess
2. Installation
	a. Connect SD card, RJ46 cable, sound-CAD usb to RASPBERRY-Pi
	b. Connect the power cable with PC usb port in order to give RASBERRY power supply
	c. Use IP address to log in by putty for remote access (The IP address will be sent by mail)
	c. Change settings -> translation to UTF-8 in order to able the sound bar 
3. Operation
	a. Using the putty terminal to access the raspi
	b. Log in by using the user name : pi and your password that have been set since the setting process
	c. Open the folder devapp by using command "cd"
	e. Use command make to compile 
	f. Run command "./sound.a" to start the project
4. Manifest (list of files and short description of their roles)
	a. main.c
		The root file which contains all the function of other *.c file.
	b. sound.c (sound.h is a header file)
		Display the information from the header file and the bar-diagram of the recorder file.
	c. screen.c (screen.h is a header file)
		This file is made to display the sound wave when the sound is recorded
	d. comm.c (comm.h is a header file)
		Let Ras-pi send the data of sound recorded to the school server
	e. makefile
		Compile all the files to run the project
	f. sound.php
		Stored the data of sound export to txt file put on sever
5. License
	Raspberry Pi foundation © in UK. The project in this Raspberry Pi was made by 
	Tran Minh Chuong with the assistance of DR.Gao Chao
	Raspberry pi model 3 was use to created this project. The name of the device is 
	"ChuongTran1303"
6. Contact information
 Name: Tran Minh Chuong
 Student number: e1700692
 Tel: +358 465 211 820 
 Address: 60B Palosaarentie, 65200, Vaasa, Finland
 Homepage: http://www.cc.puv.fi/~e1700692
 Email: chuongtran130399@gmail.com or e1700692@edu.vamk.fi
 
