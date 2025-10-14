#ifndef _javax_print_attribute_standard_PrinterResolution_h_
#define _javax_print_attribute_standard_PrinterResolution_h_
//$ class javax.print.attribute.standard.PrinterResolution
//$ extends javax.print.attribute.ResolutionSyntax
//$ implements javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute

#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/ResolutionSyntax.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export PrinterResolution : public ::javax::print::attribute::ResolutionSyntax, public ::javax::print::attribute::DocAttribute, public ::javax::print::attribute::PrintRequestAttribute, public ::javax::print::attribute::PrintJobAttribute {
	$class(PrinterResolution, $NO_CLASS_INIT, ::javax::print::attribute::ResolutionSyntax, ::javax::print::attribute::DocAttribute, ::javax::print::attribute::PrintRequestAttribute, ::javax::print::attribute::PrintJobAttribute)
public:
	PrinterResolution();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t crossFeedResolution, int32_t feedResolution, int32_t units);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	using ::javax::print::attribute::ResolutionSyntax::toString;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x002E8190809323FE;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_PrinterResolution_h_