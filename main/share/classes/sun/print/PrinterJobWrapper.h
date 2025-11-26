#ifndef _sun_print_PrinterJobWrapper_h_
#define _sun_print_PrinterJobWrapper_h_
//$ class sun.print.PrinterJobWrapper
//$ extends javax.print.attribute.PrintRequestAttribute

#include <javax/print/attribute/PrintRequestAttribute.h>

namespace java {
	namespace awt {
		namespace print {
			class PrinterJob;
		}
	}
}

namespace sun {
	namespace print {

class PrinterJobWrapper : public ::javax::print::attribute::PrintRequestAttribute {
	$class(PrinterJobWrapper, $NO_CLASS_INIT, ::javax::print::attribute::PrintRequestAttribute)
public:
	PrinterJobWrapper();
	void init$(::java::awt::print::PrinterJob* job);
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual ::java::awt::print::PrinterJob* getPrinterJob();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x85FC196A93E2D29B;
	::java::awt::print::PrinterJob* job = nullptr;
};

	} // print
} // sun

#endif // _sun_print_PrinterJobWrapper_h_