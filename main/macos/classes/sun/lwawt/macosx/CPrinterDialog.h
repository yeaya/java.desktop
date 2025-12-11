#ifndef _sun_lwawt_macosx_CPrinterDialog_h_
#define _sun_lwawt_macosx_CPrinterDialog_h_
//$ class sun.lwawt.macosx.CPrinterDialog
//$ extends java.awt.Dialog

#include <java/awt/Dialog.h>

namespace java {
	namespace awt {
		class Frame;
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CPrinterJob;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPrinterDialog : public ::java::awt::Dialog {
	$class(CPrinterDialog, $NO_CLASS_INIT, ::java::awt::Dialog)
public:
	CPrinterDialog();
	using ::java::awt::Dialog::add;
	using ::java::awt::Dialog::getMousePosition;
	void init$(::java::awt::Frame* parent, ::sun::lwawt::macosx::CPrinterJob* printerJob);
	virtual bool getRetVal();
	using ::java::awt::Dialog::isFocusCycleRoot;
	using ::java::awt::Dialog::remove;
	using ::java::awt::Dialog::list;
	virtual void setRetVal(bool ret);
	using ::java::awt::Dialog::show;
	virtual bool showDialog() {return false;}
	::sun::lwawt::macosx::CPrinterJob* fPrinterJob = nullptr;
	bool retval = false;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPrinterDialog_h_