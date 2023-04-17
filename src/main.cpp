/* Copyright (C) 2023 Harry Clark */

/* SEGA Mega Drive Raspberry Pi Pico Interface */

#ifndef MAIN
#define MAIN

#include "controller.h"

int main(int argc, char** argv)
{
	MEGA_DRIVE_INIT();
	return 0;
}

#endif