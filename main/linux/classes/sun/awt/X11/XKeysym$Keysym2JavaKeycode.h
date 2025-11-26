#ifndef _sun_awt_X11_XKeysym$Keysym2JavaKeycode_h_
#define _sun_awt_X11_XKeysym$Keysym2JavaKeycode_h_
//$ class sun.awt.X11.XKeysym$Keysym2JavaKeycode
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {

class XKeysym$Keysym2JavaKeycode : public ::java::lang::Object {
	$class(XKeysym$Keysym2JavaKeycode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XKeysym$Keysym2JavaKeycode();
	void init$(int32_t jk, int32_t loc);
	virtual int32_t getJavaKeycode();
	virtual int32_t getKeyLocation();
	int32_t jkeycode = 0;
	int32_t keyLocation = 0;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XKeysym$Keysym2JavaKeycode_h_