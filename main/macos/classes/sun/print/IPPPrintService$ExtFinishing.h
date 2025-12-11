#ifndef _sun_print_IPPPrintService$ExtFinishing_h_
#define _sun_print_IPPPrintService$ExtFinishing_h_
//$ class sun.print.IPPPrintService$ExtFinishing
//$ extends javax.print.attribute.standard.Finishings

#include <java/lang/Array.h>
#include <javax/print/attribute/standard/Finishings.h>

namespace javax {
	namespace print {
		namespace attribute {
			class EnumSyntax;
		}
	}
}
namespace sun {
	namespace print {
		class IPPPrintService;
	}
}

namespace sun {
	namespace print {

class IPPPrintService$ExtFinishing : public ::javax::print::attribute::standard::Finishings {
	$class(IPPPrintService$ExtFinishing, $NO_CLASS_INIT, ::javax::print::attribute::standard::Finishings)
public:
	IPPPrintService$ExtFinishing();
	void init$(::sun::print::IPPPrintService* this$0, int32_t value);
	virtual $Array<::javax::print::attribute::EnumSyntax>* getAll();
	::sun::print::IPPPrintService* this$0 = nullptr;
};

	} // print
} // sun

#endif // _sun_print_IPPPrintService$ExtFinishing_h_