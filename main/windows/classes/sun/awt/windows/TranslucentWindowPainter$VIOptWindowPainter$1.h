#ifndef _sun_awt_windows_TranslucentWindowPainter$VIOptWindowPainter$1_h_
#define _sun_awt_windows_TranslucentWindowPainter$VIOptWindowPainter$1_h_
//$ class sun.awt.windows.TranslucentWindowPainter$VIOptWindowPainter$1
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace windows {
			class TranslucentWindowPainter$VIOptWindowPainter;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {
				class AccelSurface;
			}
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class TranslucentWindowPainter$VIOptWindowPainter$1 : public ::java::lang::Runnable {
	$class(TranslucentWindowPainter$VIOptWindowPainter$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	TranslucentWindowPainter$VIOptWindowPainter$1();
	void init$(::sun::awt::windows::TranslucentWindowPainter$VIOptWindowPainter* this$0, ::sun::java2d::pipe::hw::AccelSurface* val$as, $booleans* val$arr, int32_t val$w, int32_t val$h);
	virtual void run() override;
	::sun::awt::windows::TranslucentWindowPainter$VIOptWindowPainter* this$0 = nullptr;
	int32_t val$h = 0;
	int32_t val$w = 0;
	$booleans* val$arr = nullptr;
	::sun::java2d::pipe::hw::AccelSurface* val$as = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_TranslucentWindowPainter$VIOptWindowPainter$1_h_