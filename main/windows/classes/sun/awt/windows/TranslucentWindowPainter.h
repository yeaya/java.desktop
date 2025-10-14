#ifndef _sun_awt_windows_TranslucentWindowPainter_h_
#define _sun_awt_windows_TranslucentWindowPainter_h_
//$ class sun.awt.windows.TranslucentWindowPainter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Graphics;
		class Image;
		class Window;
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

class TranslucentWindowPainter : public ::java::lang::Object {
	$class(TranslucentWindowPainter, 0, ::java::lang::Object)
public:
	TranslucentWindowPainter();
	void init$(::sun::awt::windows::WWindowPeer* peer);
	static ::java::awt::Image* clearImage(::java::awt::Image* bb);
	static ::sun::awt::windows::TranslucentWindowPainter* createInstance(::sun::awt::windows::WWindowPeer* peer);
	virtual void flush() {}
	virtual ::java::awt::Image* getBackBuffer(bool clear) {return nullptr;}
	virtual ::java::awt::Graphics* getGraphics(bool clear) {return nullptr;}
	virtual bool update(::java::awt::Image* bb) {return false;}
	virtual void updateWindow(bool repaint);
	::java::awt::Window* window = nullptr;
	::sun::awt::windows::WWindowPeer* peer = nullptr;
	static bool forceOpt;
	static bool forceSW;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_TranslucentWindowPainter_h_