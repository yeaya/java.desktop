#ifndef _javax_print_attribute_standard_QueuedJobCount_h_
#define _javax_print_attribute_standard_QueuedJobCount_h_
//$ class javax.print.attribute.standard.QueuedJobCount
//$ extends javax.print.attribute.IntegerSyntax
//$ implements javax.print.attribute.PrintServiceAttribute

#include <javax/print/attribute/IntegerSyntax.h>
#include <javax/print/attribute/PrintServiceAttribute.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import QueuedJobCount : public ::javax::print::attribute::IntegerSyntax, public ::javax::print::attribute::PrintServiceAttribute {
	$class(QueuedJobCount, $NO_CLASS_INIT, ::javax::print::attribute::IntegerSyntax, ::javax::print::attribute::PrintServiceAttribute)
public:
	QueuedJobCount();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t value);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x68145E6771E2C47E;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_QueuedJobCount_h_