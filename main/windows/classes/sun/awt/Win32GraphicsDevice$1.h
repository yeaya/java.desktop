#ifndef _sun_awt_Win32GraphicsDevice$1_h_
#define _sun_awt_Win32GraphicsDevice$1_h_
//$ class sun.awt.Win32GraphicsDevice$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Window;
	}
}
namespace sun {
	namespace awt {
		class Win32GraphicsDevice;
	}
}

namespace sun {
	namespace awt {

class Win32GraphicsDevice$1 : public ::java::lang::Runnable {
	$class(Win32GraphicsDevice$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Win32GraphicsDevice$1();
	void init$(::sun::awt::Win32GraphicsDevice* this$0, ::java::awt::Window* val$w);
	virtual void run() override;
	::sun::awt::Win32GraphicsDevice* this$0 = nullptr;
	::java::awt::Window* val$w = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_Win32GraphicsDevice$1_h_