#ifndef _sun_lwawt_macosx_CFileDialog$Task_h_
#define _sun_lwawt_macosx_CFileDialog$Task_h_
//$ class sun.lwawt.macosx.CFileDialog$Task
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace lwawt {
		namespace macosx {
			class CFileDialog;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CFileDialog$Task : public ::java::lang::Runnable {
	$class(CFileDialog$Task, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	CFileDialog$Task();
	void init$(::sun::lwawt::macosx::CFileDialog* this$0);
	virtual void run() override;
	::sun::lwawt::macosx::CFileDialog* this$0 = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CFileDialog$Task_h_