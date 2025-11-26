#ifndef _sun_awt_X11_InfoWindow$Balloon$Message_h_
#define _sun_awt_X11_InfoWindow$Balloon$Message_h_
//$ class sun.awt.X11.InfoWindow$Balloon$Message
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace X11 {

class InfoWindow$Balloon$Message : public ::java::lang::Object {
	$class(InfoWindow$Balloon$Message, $NO_CLASS_INIT, ::java::lang::Object)
public:
	InfoWindow$Balloon$Message();
	void init$($String* caption, $String* text, $String* messageType);
	$String* caption = nullptr;
	$String* text = nullptr;
	$String* messageType = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_InfoWindow$Balloon$Message_h_