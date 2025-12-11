#ifndef _sun_lwawt_macosx_CPrinterJobDialog_h_
#define _sun_lwawt_macosx_CPrinterJobDialog_h_
//$ class sun.lwawt.macosx.CPrinterJobDialog
//$ extends sun.lwawt.macosx.CPrinterDialog

#include <sun/lwawt/macosx/CPrinterDialog.h>

namespace java {
	namespace awt {
		class Frame;
	}
}
namespace java {
	namespace awt {
		namespace print {
			class Pageable;
		}
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

class CPrinterJobDialog : public ::sun::lwawt::macosx::CPrinterDialog {
	$class(CPrinterJobDialog, $NO_CLASS_INIT, ::sun::lwawt::macosx::CPrinterDialog)
public:
	CPrinterJobDialog();
	using ::sun::lwawt::macosx::CPrinterDialog::add;
	using ::sun::lwawt::macosx::CPrinterDialog::getMousePosition;
	void init$(::java::awt::Frame* parent, ::sun::lwawt::macosx::CPrinterJob* printerJob, ::java::awt::print::Pageable* doc, bool allowPrintToFile);
	using ::sun::lwawt::macosx::CPrinterDialog::show;
	using ::sun::lwawt::macosx::CPrinterDialog::isFocusCycleRoot;
	using ::sun::lwawt::macosx::CPrinterDialog::remove;
	using ::sun::lwawt::macosx::CPrinterDialog::list;
	virtual bool showDialog() override;
	::java::awt::print::Pageable* fPageable = nullptr;
	bool fAllowPrintToFile = false;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPrinterJobDialog_h_