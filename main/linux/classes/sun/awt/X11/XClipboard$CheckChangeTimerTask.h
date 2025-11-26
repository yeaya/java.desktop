#ifndef _sun_awt_X11_XClipboard$CheckChangeTimerTask_h_
#define _sun_awt_X11_XClipboard$CheckChangeTimerTask_h_
//$ class sun.awt.X11.XClipboard$CheckChangeTimerTask
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace awt {
		namespace X11 {

class XClipboard$CheckChangeTimerTask : public ::java::lang::Runnable {
	$class(XClipboard$CheckChangeTimerTask, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	XClipboard$CheckChangeTimerTask();
	void init$();
	virtual void run() override;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XClipboard$CheckChangeTimerTask_h_