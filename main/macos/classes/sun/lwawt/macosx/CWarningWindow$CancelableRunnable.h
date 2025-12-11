#ifndef _sun_lwawt_macosx_CWarningWindow$CancelableRunnable_h_
#define _sun_lwawt_macosx_CWarningWindow$CancelableRunnable_h_
//$ class sun.lwawt.macosx.CWarningWindow$CancelableRunnable
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace lwawt {
		namespace macosx {

class CWarningWindow$CancelableRunnable : public ::java::lang::Runnable {
	$class(CWarningWindow$CancelableRunnable, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CWarningWindow$CancelableRunnable();
	void init$();
	void cancel();
	virtual void perform() {}
	virtual void run() override;
	$volatile(bool) perform$ = false;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CWarningWindow$CancelableRunnable_h_