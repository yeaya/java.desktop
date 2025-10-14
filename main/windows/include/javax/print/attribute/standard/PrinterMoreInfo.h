#ifndef _javax_print_attribute_standard_PrinterMoreInfo_h_
#define _javax_print_attribute_standard_PrinterMoreInfo_h_
//$ class javax.print.attribute.standard.PrinterMoreInfo
//$ extends javax.print.attribute.URISyntax
//$ implements javax.print.attribute.PrintServiceAttribute

#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/URISyntax.h>

namespace java {
	namespace net {
		class URI;
	}
}

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import PrinterMoreInfo : public ::javax::print::attribute::URISyntax, public ::javax::print::attribute::PrintServiceAttribute {
	$class(PrinterMoreInfo, $NO_CLASS_INIT, ::javax::print::attribute::URISyntax, ::javax::print::attribute::PrintServiceAttribute)
public:
	PrinterMoreInfo();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::net::URI* uri);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x3F39A171AD72FF4E;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_PrinterMoreInfo_h_