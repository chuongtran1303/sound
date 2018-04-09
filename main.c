#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include "sound.h"
int main(void){
	int ret;
    while(1){
	// record one sec of sound into test.wav
	ret = system("arecord -r16000 -c1 -f S16_LE -d1 test.wav");
	if(WIFSIGNALED(ret) && (WTERMSIG(ret)==SIGINT)) break;
	// open the wav file and read sample
	displayWAVheader("test.wav");
	// display necessary information(duration, wav header etc)
	// calculate fast dBs
	// send fast dBs to web (php program on www.cc.puv.fi)
	//break; // for testting, just run the loop once	
	displayBar("test.wav");	
	}
}

