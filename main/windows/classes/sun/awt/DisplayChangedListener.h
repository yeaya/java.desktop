#ifndef _sun_awt_DisplayChangedListener_h_
#define _sun_awt_DisplayChangedListener_h_
//$ interface sun.awt.DisplayChangedListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace sun {
	namespace awt {

class $export DisplayChangedListener : public ::java::util::EventListener {
	$interface(DisplayChangedListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void displayChanged() {}
	virtual void paletteChanged() {}
};

	} // awt
} // sun

#endif // _sun_awt_DisplayChangedListener_h_