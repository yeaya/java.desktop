#ifndef _sun_print_Win32PrintService$Win32DocumentPropertiesUI_h_
#define _sun_print_Win32PrintService$Win32DocumentPropertiesUI_h_
//$ class sun.print.Win32PrintService$Win32DocumentPropertiesUI
//$ extends sun.print.DocumentPropertiesUI

#include <sun/print/DocumentPropertiesUI.h>

namespace java {
	namespace awt {
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PrinterJob;
		}
	}
}
namespace javax {
	namespace print {
		class PrintService;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class PrintRequestAttributeSet;
		}
	}
}
namespace sun {
	namespace print {
		class Win32PrintService;
	}
}

namespace sun {
	namespace print {

class Win32PrintService$Win32DocumentPropertiesUI : public ::sun::print::DocumentPropertiesUI {
	$class(Win32PrintService$Win32DocumentPropertiesUI, $NO_CLASS_INIT, ::sun::print::DocumentPropertiesUI)
public:
	Win32PrintService$Win32DocumentPropertiesUI();
	void init$(::sun::print::Win32PrintService* s);
	virtual ::javax::print::attribute::PrintRequestAttributeSet* showDocumentProperties(::java::awt::print::PrinterJob* job, ::java::awt::Window* owner, ::javax::print::PrintService* service, ::javax::print::attribute::PrintRequestAttributeSet* aset) override;
	::sun::print::Win32PrintService* service = nullptr;
};

	} // print
} // sun

#endif // _sun_print_Win32PrintService$Win32DocumentPropertiesUI_h_