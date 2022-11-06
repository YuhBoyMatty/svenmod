#ifndef SVENMOD_VERSION_H
#define SVENMOD_VERSION_H

#ifdef _WIN32
#pragma once
#endif

#define SVENMOD_BUILD_TIMESTAMP				__DATE__ " " __TIME__

// Version of API

#define SVENMOD_API_MAJOR_VERSION			( 4 )
#define SVENMOD_API_MINOR_VERSION			( 0 )

#define SVENMOD_API_MAJOR_VERSION_STRING	"4"
#define SVENMOD_API_MINOR_VERSION_STRING	"0"

#define SVENMOD_API_VERSION_STRING			SVENMOD_API_MAJOR_VERSION_STRING "." SVENMOD_API_MINOR_VERSION_STRING

#define SVENMOD_API_VER						{ SVENMOD_API_MAJOR_VERSION, SVENMOD_API_MINOR_VERSION }

// Version of SvenMod

#define SVENMOD_MAJOR_VERSION				"1" // major
#define SVENMOD_MINOR_VERSION				"2" // minor
#define SVENMOD_PATCH_VERSION				"1" // patch

#define SVENMOD_VERSION_STRING				SVENMOD_MAJOR_VERSION "." SVENMOD_MINOR_VERSION "." SVENMOD_PATCH_VERSION
#define SVENMOD_VERSION_STRING_FULL			SVENMOD_MAJOR_VERSION "." SVENMOD_MINOR_VERSION "." SVENMOD_PATCH_VERSION "-" SVENMOD_API_MAJOR_VERSION_STRING "." SVENMOD_API_MINOR_VERSION_STRING
#define SVENMOD_VERSION_FILE				1,2,1,0

// Version of the launcher

#define SVENMOD_LAUNCHER_MAJOR_VERSION		"1" // major
#define SVENMOD_LAUNCHER_MINOR_VERSION		"1" // minor

#define SVENMOD_LAUNCHER_VERSION_STRING		SVENMOD_LAUNCHER_MAJOR_VERSION "." SVENMOD_LAUNCHER_MINOR_VERSION
#define SVENMOD_LAUNCHER_VERSION_FILE		1,1,0,0

#endif
