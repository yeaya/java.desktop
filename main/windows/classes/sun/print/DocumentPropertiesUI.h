#ifndef _sun_print_DocumentPropertiesUI_h_
#define _sun_print_DocumentPropertiesUI_h_
//$ class sun.print.DocumentPropertiesUI
//$ extends java.lang.Object

#include <javax/print/ServiceUIFactory.h>

#pragma push_macro("DOCPROPERTIESCLASSNAME")
#undef DOCPROPERTIESCLASSNAME
#pragma push_macro("DOCUMENTPROPERTIES_ROLE")
#undef DOCUMENTPROPERTIES_ROLE
#pragma push_macro("RESERVED_UIROLE")
#undef RESERVED_UIROLE

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

class DocumentPropertiesUI : public ::java::lang::Object {
	$class(DocumentPropertiesUI, 0, ::java::lang::Object)
public:
	DocumentPropertiesUI();
	void init$();
	virtual ::javax::print::attribute::PrintRequestAttributeSet* showDocumentProperties(::java::awt::print::PrinterJob* job, ::java::awt::Window* owner, ::javax::print::PrintService* service, ::javax::print::attribute::PrintRequestAttributeSet* aset) {return nullptr;}
	static const int32_t DOCUMENTPROPERTIES_ROLE = 199; // ::javax::print::ServiceUIFactory::RESERVED_UIROLE + 100
	static $String* DOCPROPERTIESCLASSNAME;
};

	} // print
} // sun

#pragma pop_macro("DOCPROPERTIESCLASSNAME")
#pragma pop_macro("DOCUMENTPROPERTIES_ROLE")
#pragma pop_macro("RESERVED_UIROLE")

#endif // _sun_print_DocumentPropertiesUI_h_