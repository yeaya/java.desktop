#ifndef _sun_awt_windows_WWindowPeer$ActiveWindowListener_h_
#define _sun_awt_windows_WWindowPeer$ActiveWindowListener_h_
//$ class sun.awt.windows.WWindowPeer$ActiveWindowListener
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WWindowPeer$ActiveWindowListener : public ::java::beans::PropertyChangeListener {
	$class(WWindowPeer$ActiveWindowListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	WWindowPeer$ActiveWindowListener();
	void init$();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WWindowPeer$ActiveWindowListener_h_