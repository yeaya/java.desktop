#ifndef _sun_awt_windows_WWindowPeer$GuiDisposedListener_h_
#define _sun_awt_windows_WWindowPeer$GuiDisposedListener_h_
//$ class sun.awt.windows.WWindowPeer$GuiDisposedListener
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

class WWindowPeer$GuiDisposedListener : public ::java::beans::PropertyChangeListener {
	$class(WWindowPeer$GuiDisposedListener, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	WWindowPeer$GuiDisposedListener();
	void init$();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WWindowPeer$GuiDisposedListener_h_