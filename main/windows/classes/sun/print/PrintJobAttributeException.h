#ifndef _sun_print_PrintJobAttributeException_h_
#define _sun_print_PrintJobAttributeException_h_
//$ class sun.print.PrintJobAttributeException
//$ extends javax.print.PrintException
//$ implements javax.print.AttributeException

#include <java/lang/Array.h>
#include <javax/print/AttributeException.h>
#include <javax/print/PrintException.h>

namespace javax {
	namespace print {
		namespace attribute {
			class Attribute;
		}
	}
}

namespace sun {
	namespace print {

class PrintJobAttributeException : public ::javax::print::PrintException, public ::javax::print::AttributeException {
	$class(PrintJobAttributeException, $NO_CLASS_INIT, ::javax::print::PrintException, ::javax::print::AttributeException)
public:
	PrintJobAttributeException();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* s, $Class* cat, ::javax::print::attribute::Attribute* attrval);
	virtual $ClassArray* getUnsupportedAttributes() override;
	virtual $Array<::javax::print::attribute::Attribute>* getUnsupportedValues() override;
	virtual $String* toString() override;
	::javax::print::attribute::Attribute* attr = nullptr;
	$Class* category = nullptr;
	PrintJobAttributeException(const PrintJobAttributeException& e);
	PrintJobAttributeException wrapper$();
	virtual void throwWrapper$() override;
};

	} // print
} // sun

#endif // _sun_print_PrintJobAttributeException_h_