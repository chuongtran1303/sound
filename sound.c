#include <stdio.h>
#include "sound.h"
//function difinition of displayBar()
//this function open the "test.wav" file and read the 2nd part (data) of the file and the sample should be in S16_LE format, and there are 1600 of them
//the function processes every 200 samples and calculate their RMS value
void displayBar(char filename[]){
	int i;
	FILE *fp;
	short int sample[SAMPLERATE];
	WAVHeader myhdr;
	fp = fopen(filename, "r");
	if(fp == NULL){
		printf("Error opening the file!\n");
		return;
}
	fread(&myhder, sizeof(WAVHeader), 1, fp);
	fread(&samples, sizeof(short), SAMPLERATE, fp);
	
	for(i=0; i<80; i++){
	}
}
//function definition of displayWAVheader
void displayWAVheader(char filename[]){
	WAVHeader myhdr;
	FILE *fp;
	fp = fopen(filename, "r");
	if(fp == NULL){
		printf("ERROR of opening file!\n");
		return;
	}
	fread(&myhdr, sizeof(WAVHeader), 1, fp);
	printID(myhdr.chunkID);
	printf("chunk size: %d\n", myhdr.chunkSize);
	printID(myhdr.format);
	printID(myhdr.subchunk1ID);
	printf("subchunk 1 size: %d\n", myhdr.subchunk1Size);
	printf("audio format: %d\n", myhdr.audioFormat);
	printf("number of channels: %d\n", myhdr.numChannels);
	printf("sample rate: %d\n", myhdr.sampleRate);
	printf("byte rare: %d\n", myhdr.byteRate);
	printf("block align: %d\n", myhdr.blockAlign);
	printf("bits per sample: %d\n", myhdr.bitsPerSample);
	printID(myhdr.subchunk2ID);
	printf("Sub chunk 2 size: %d\n", myhdr.subchunk2Size);
	
// there are more fields to be displayed
		
}
void printID(char id[]){
	int i;
	for(i=0; i<4; i++){
	printf("%c", id[i]);
	}	
		printf("\n");
	}
