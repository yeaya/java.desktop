#ifndef _sun_lwawt_macosx_CWarningWindow$HidingTask_h_
#define _sun_lwawt_macosx_CWarningWindow$HidingTask_h_
//$ class sun.lwawt.macosx.CWarningWindow$HidingTask
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

class CWarningWindow$HidingTask : public ::sun::lwawt::macosx::CWarningWindow$CancelableRunnable {
	$class(CWarningWindow$HidingTask, $NO_CLASS_INIT, ::sun::lwawt::macosx::CWarningWindow$CancelableRunnable)
public:
	CWarningWindow$HidingTask();
	void init$(::sun::lwawt::macosx::CWarningWindow* this$0);
	virtual void perform() override;
	::sun::lwawt::macosx::CWarningWindow* this$0 = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CWarningWindow$HidingTask_h_