/* This file is part of pr-downloader (GPL v2 or later), see the LICENSE file */

#ifndef LOGGER_H
#define LOGGER_H

#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif
/**
*	plain log output
*/
void LOG(const char* format, ...);
/**
*	output log level info
*/
void LOG_INFO(const char* format, ...);
/**
*	output log level error
*/
void LOG_ERROR(const char* format, ...);

/**
*	output progress bar
*/
void LOG_DOWNLOAD(const char* filename);

void LOG_PROGRESS(long done, long total);

#ifdef __cplusplus
}
#endif

#ifdef DEBUG
#define LOG_DEBUG(fmt, ...) \
		printf( "%s:%d:%s(): " fmt "\n", __FILE__, \
									__LINE__, __FUNCTION__, ##__VA_ARGS__);
#else
#define	LOG_DEBUG(fmt, ...)
#endif

#endif
