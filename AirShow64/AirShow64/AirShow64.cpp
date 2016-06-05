// AirShow64.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DemoSDK.h"

int main(int argC, char* argV)
{
	// Vars
	Demo *AirShow;

		// App init
		AirShow = new(Demo);
	
		// Demo init	
		AirShow = new(Demo);
		AirShow->init("AirShow", 6min);
		AirShow->reqs(64bit, 1GB, GPU);

			// Config
			AirShow->preload("airshow.dat");
			AirShow->splash(5);
			AirShow->config(argC, argV);

			// Setup
			AirShow->setup(FullHD, Surround);

			// Storyline
			AirShow->intro(45);
			AirShow->scene(0, "eagle", 30s);
			AirShow->scene(1, "clouds", 45s);
			AirShow->scene(2, "dogfight", 60s);
			AirShow->scene(3, "redarrows", 30s);
			AirShow->scene(4, "blueangels", 45s);
			AirShow->scene(5, "lz-129", 45s);
			AirShow->scene(6, "shuttle", 30s);
			AirShow->scene(7, "airone", 30s);
			AirShow->scene(8, "wtc", 45s);
			AirShow->scene(9, "nuke", 30s);
			AirShow->credits(30s);

			// Main loop
			AirShow->loop();
		
		// Demo shutdown
		AirShow->shut();
	
	// App exit
	return 0;
}

