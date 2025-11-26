#ifndef _javax_print_attribute_standard_NumberUpSupported_h_
#define _javax_print_attribute_standard_NumberUpSupported_h_
//$ class javax.print.attribute.standard.NumberUpSupported
//$ extends javax.print.attribute.SetOfIntegerSyntax
//$ implements javax.print.attribute.SupportedValuesAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/SetOfIntegerSyntax.h>
#include <javax/print/attribute/SupportedValuesAttribute.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import NumberUpSupported : public ::javax::print::attribute::SetOfIntegerSyntax, public ::javax::print::attribute::SupportedValuesAttribute {
	$class(NumberUpSupported, $NO_CLASS_INIT, ::javax::print::attribute::SetOfIntegerSyntax, ::javax::print::attribute::SupportedValuesAttribute)
public:
	NumberUpSupported();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($Array<int32_t, 2>* members);
	void init$(int32_t member);
	void init$(int32_t lowerBound, int32_t upperBound);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xF18B9683DA476C53;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_NumberUpSupported_h_