#ifndef _sun_awt_windows_WPrintDialog_h_
#define _sun_awt_windows_WPrintDialog_h_
//$ class sun.awt.windows.WPrintDialog
//$ extends java.awt.Dialog

#include <java/awt/Dialog.h>

namespace java {
	namespace awt {
		class Frame;
		class PrintJob;
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ComponentPeer;
		}
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PrinterJob;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WPrintDialog : public ::java::awt::Dialog {
	$class(WPrintDialog, 0, ::java::awt::Dialog)
public:
	WPrintDialog();
	using ::java::awt::Dialog::isFocusCycleRoot;
	using ::java::awt::Dialog::add;
	using ::java::awt::Dialog::getMousePosition;
	using ::java::awt::Dialog::list;
	void init$(::java::awt::Frame* parent, ::java::awt::print::PrinterJob* control);
	void init$(::java::awt::Dialog* parent, ::java::awt::print::PrinterJob* control);
	virtual void addNotify() override;
	bool getRetVal();
	static void initIDs();
	using ::java::awt::Dialog::remove;
	void setPeer(::java::awt::peer::ComponentPeer* p);
	void setRetVal(bool ret);
	using ::java::awt::Dialog::show;
	::java::awt::PrintJob* job = nullptr;
	::java::awt::print::PrinterJob* pjob = nullptr;
	bool retval = false;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WPrintDialog_h_