#ifndef _javax_print_ServiceUI_h_
#define _javax_print_ServiceUI_h_
//$ class javax.print.ServiceUI
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
	}
}
namespace javax {
	namespace print {
		class DocFlavor;
		class PrintService;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class AttributeSet;
			class PrintRequestAttributeSet;
		}
	}
}

namespace javax {
	namespace print {

class $import ServiceUI : public ::java::lang::Object {
	$class(ServiceUI, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ServiceUI();
	void init$();
	static ::javax::print::PrintService* printDialog(::java::awt::GraphicsConfiguration* gc, int32_t x, int32_t y, $Array<::javax::print::PrintService>* services, ::javax::print::PrintService* defaultService, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::PrintRequestAttributeSet* attributes);
	static void removeUnsupportedAttributes(::javax::print::PrintService* ps, ::javax::print::DocFlavor* flavor, ::javax::print::attribute::AttributeSet* aset);
};

	} // print
} // javax

#endif // _javax_print_ServiceUI_h_