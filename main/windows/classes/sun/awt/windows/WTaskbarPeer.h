#ifndef _sun_awt_windows_WTaskbarPeer_h_
#define _sun_awt_windows_WTaskbarPeer_h_
//$ class sun.awt.windows.WTaskbarPeer
//$ extends java.awt.peer.TaskbarPeer

#include <java/awt/peer/TaskbarPeer.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Image;
		class Taskbar$Feature;
		class Taskbar$State;
		class Window;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WWindowPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WTaskbarPeer : public ::java::awt::peer::TaskbarPeer {
	$class(WTaskbarPeer, 0, ::java::awt::peer::TaskbarPeer)
public:
	WTaskbarPeer();
	void init$();
	void flashWindow(int64_t hWnd);
	static $ints* imageToArray(::java::awt::Image* image);
	static void init();
	virtual bool isSupported(::java::awt::Taskbar$Feature* feature) override;
	static bool isTaskbarSupported();
	static ::java::lang::Boolean* lambda$init$0();
	$Object* lambda$setWindowIconBadge$1(::sun::awt::windows::WWindowPeer* wp, $ints* buffer, ::java::awt::Image* image);
	$Object* lambda$setWindowProgressState$3(::sun::awt::windows::WWindowPeer* wp, ::java::awt::Taskbar$State* state);
	$Object* lambda$setWindowProgressValue$2(::sun::awt::windows::WWindowPeer* wp, int32_t value);
	static bool nativeInit();
	virtual void requestWindowUserAttention(::java::awt::Window* window) override;
	void setOverlayIcon(int64_t hwnd, $ints* badge, int32_t width, int32_t height);
	void setProgressState(int64_t hwnd, ::java::awt::Taskbar$State* state);
	using ::java::awt::peer::TaskbarPeer::setProgressValue;
	void setProgressValue(int64_t hwnd, int32_t value);
	virtual void setWindowIconBadge(::java::awt::Window* window, ::java::awt::Image* image) override;
	virtual void setWindowProgressState(::java::awt::Window* window, ::java::awt::Taskbar$State* state) override;
	virtual void setWindowProgressValue(::java::awt::Window* window, int32_t value) override;
	static bool supported;
	static bool initExecuted;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WTaskbarPeer_h_