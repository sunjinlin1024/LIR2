// Copyright (C) 2002-2012 Nikolaus Gebhardt
// This file is part of the "Irrlicht Engine".
// For conditions of distribution and use, see copyright notice in irrlicht.h

#ifndef __IRR_CONFIG_H_INCLUDED__
#define __IRR_CONFIG_H_INCLUDED__


//******************************** for irrlicht*****************************************
//#define NO_IRR_COMPILE_WITH_ZIP_ENCRYPTION_
//#define NO__IRR_COMPILE_WITH_ZIP_ARCHIVE_LOADER_
//#define NO_IRR_COMPILE_WITH_LIBJPEG_
#define NO_IRR_COMPILE_WITH_LIBPNG_
#define NO_IRR_COMPILE_WITH_X11_
#define NO_IRR_COMPILE_WITH_JOYSTICK_EVENTS_
#define NO_IRR_COMPILE_WITH_DIRECT3D_9_
#define NO_IRR_COMPILE_WITH_BURNINGSVIDEO_

//some where defined unicode ,need to find out
#if defined(UNICODE)
#undef UNICODE
#endif
//**************************************************************************************

#endif

