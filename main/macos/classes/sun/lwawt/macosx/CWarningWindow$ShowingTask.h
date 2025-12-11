#ifndef _sun_lwawt_macosx_CWarningWindow$ShowingTask_h_
#define _sun_lwawt_macosx_CWarningWindow$ShowingTask_h_
//$ class sun.lwawt.macosx.CWarningWindow$ShowingTask
//$ extends sun.lwawt.macosx.CWarningWindow$CancelableRunnable

#include <sun/lwawt/macosx/CWarningWindow$CancelableRunnable.h>

namespace sun {
	namespace lwawt {
		namespace macosx {
			class CWarningWindow;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CWarningWindow$ShowingTask : public ::sun::lwawt::macosx::CWarningWindow$CancelableRunnable {
	$class(CWarningWindow$ShowingTask, $NO_CLASS_INIT, ::sun::lwawt::macosx::CWarningWindow$CancelableRunnable)
public:
	CWarningWindow$ShowingTask();
	void init$(::sun::lwawt::macosx::CWarningWindow* this$0);
	virtual void perform() override;
	::sun::lwawt::macosx::CWarningWindow* this$0 = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CWarningWindow$ShowingTask_h_