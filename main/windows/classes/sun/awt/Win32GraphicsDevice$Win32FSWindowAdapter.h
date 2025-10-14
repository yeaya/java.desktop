#ifndef _sun_awt_Win32GraphicsDevice$Win32FSWindowAdapter_h_
#define _sun_awt_Win32GraphicsDevice$Win32FSWindowAdapter_h_
//$ class sun.awt.Win32GraphicsDevice$Win32FSWindowAdapter
//$ extends java.awt.event.WindowAdapter

#include <java/awt/event/WindowAdapter.h>

namespace java {
	namespace awt {
		class DisplayMode;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class WindowEvent;
		}
	}
}
namespace sun {
	namespace awt {
		class Win32GraphicsDevice;
	}
}

namespace sun {
	namespace awt {

class Win32GraphicsDevice$Win32FSWindowAdapter : public ::java::awt::event::WindowAdapter {
	$class(Win32GraphicsDevice$Win32FSWindowAdapter, $NO_CLASS_INIT, ::java::awt::event::WindowAdapter)
public:
	Win32GraphicsDevice$Win32FSWindowAdapter();
	void init$(::sun::awt::Win32GraphicsDevice* device);
	void setFSWindowsState(::java::awt::Window* other, int32_t state);
	virtual void windowActivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeactivated(::java::awt::event::WindowEvent* e) override;
	virtual void windowDeiconified(::java::awt::event::WindowEvent* e) override;
	virtual void windowIconified(::java::awt::event::WindowEvent* e) override;
	::sun::awt::Win32GraphicsDevice* device = nullptr;
	::java::awt::DisplayMode* dm = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_Win32GraphicsDevice$Win32FSWindowAdapter_h_