#ifndef _sun_lwawt_macosx_CPrinterPageDialog_h_
#define _sun_lwawt_macosx_CPrinterPageDialog_h_
//$ class sun.lwawt.macosx.CPrinterPageDialog
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
			class PageFormat;
			class Printable;
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

class CPrinterPageDialog : public ::sun::lwawt::macosx::CPrinterDialog {
	$class(CPrinterPageDialog, $NO_CLASS_INIT, ::sun::lwawt::macosx::CPrinterDialog)
public:
	CPrinterPageDialog();
	using ::sun::lwawt::macosx::CPrinterDialog::add;
	using ::sun::lwawt::macosx::CPrinterDialog::getMousePosition;
	void init$(::java::awt::Frame* parent, ::sun::lwawt::macosx::CPrinterJob* printerJob, ::java::awt::print::PageFormat* page, ::java::awt::print::Printable* painter);
	using ::sun::lwawt::macosx::CPrinterDialog::show;
	using ::sun::lwawt::macosx::CPrinterDialog::isFocusCycleRoot;
	using ::sun::lwawt::macosx::CPrinterDialog::remove;
	using ::sun::lwawt::macosx::CPrinterDialog::list;
	virtual bool showDialog() override;
	::java::awt::print::PageFormat* fPage = nullptr;
	::java::awt::print::Printable* fPainter = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CPrinterPageDialog_h_