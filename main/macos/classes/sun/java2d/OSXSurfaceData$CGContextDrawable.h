#ifndef _sun_java2d_OSXSurfaceData$CGContextDrawable_h_
#define _sun_java2d_OSXSurfaceData$CGContextDrawable_h_
//$ interface sun.java2d.OSXSurfaceData$CGContextDrawable
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {

class OSXSurfaceData$CGContextDrawable : public ::java::lang::Object {
	$interface(OSXSurfaceData$CGContextDrawable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void drawIntoCGContext(int64_t cgContext) {}
};

	} // java2d
} // sun

#endif // _sun_java2d_OSXSurfaceData$CGContextDrawable_h_