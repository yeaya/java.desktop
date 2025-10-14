#ifndef _sun_awt_windows_WFileDialogPeer$1_h_
#define _sun_awt_windows_WFileDialogPeer$1_h_
//$ class sun.awt.windows.WFileDialogPeer$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class FileDialog;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WFileDialogPeer;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WFileDialogPeer$1 : public ::java::lang::Runnable {
	$class(WFileDialogPeer$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	WFileDialogPeer$1();
	void init$(::sun::awt::windows::WFileDialogPeer* this$0, ::java::awt::FileDialog* val$fileDialog);
	virtual void run() override;
	::sun::awt::windows::WFileDialogPeer* this$0 = nullptr;
	::java::awt::FileDialog* val$fileDialog = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WFileDialogPeer$1_h_