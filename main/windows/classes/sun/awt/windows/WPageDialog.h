#ifndef _sun_awt_windows_WPageDialog_h_
#define _sun_awt_windows_WPageDialog_h_
//$ class sun.awt.windows.WPageDialog
//$ extends sun.awt.windows.WPrintDialog

#include <sun/awt/windows/WPrintDialog.h>

namespace java {
	namespace awt {
		class Dialog;
		class Frame;
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
			class Printable;
			class PrinterJob;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WPageDialog : public ::sun::awt::windows::WPrintDialog {
	$class(WPageDialog, 0, ::sun::awt::windows::WPrintDialog)
public:
	WPageDialog();
	using ::sun::awt::windows::WPrintDialog::isFocusCycleRoot;
	using ::sun::awt::windows::WPrintDialog::add;
	using ::sun::awt::windows::WPrintDialog::getMousePosition;
	using ::sun::awt::windows::WPrintDialog::list;
	void init$(::java::awt::Frame* parent, ::java::awt::print::PrinterJob* control, ::java::awt::print::PageFormat* page, ::java::awt::print::Printable* painter);
	void init$(::java::awt::Dialog* parent, ::java::awt::print::PrinterJob* control, ::java::awt::print::PageFormat* page, ::java::awt::print::Printable* painter);
	virtual void addNotify() override;
	static void initIDs();
	using ::sun::awt::windows::WPrintDialog::show;
	using ::sun::awt::windows::WPrintDialog::remove;
	::java::awt::print::PageFormat* page = nullptr;
	::java::awt::print::Printable* painter = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WPageDialog_h_