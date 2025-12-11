#ifndef _sun_java2d_MacOSFlags_h_
#define _sun_java2d_MacOSFlags_h_
//$ class sun.java2d.MacOSFlags
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		class MacOSFlags$PropertyState;
	}
}

namespace sun {
	namespace java2d {

class MacOSFlags : public ::java::lang::Object {
	$class(MacOSFlags, 0, ::java::lang::Object)
public:
	MacOSFlags();
	void init$();
	static ::sun::java2d::MacOSFlags$PropertyState* getBooleanProp($String* p, ::sun::java2d::MacOSFlags$PropertyState* defaultVal);
	static void initJavaFlags();
	static bool isBooleanPropTrueVerbose($String* p);
	static bool isMetalEnabled();
	static bool isMetalVerbose();
	static bool isOGLEnabled();
	static bool isOGLVerbose();
	static $Object* lambda$initJavaFlags$0();
	static bool oglEnabled;
	static bool oglVerbose;
	static bool metalEnabled;
	static bool metalVerbose;
};

	} // java2d
} // sun

#endif // _sun_java2d_MacOSFlags_h_