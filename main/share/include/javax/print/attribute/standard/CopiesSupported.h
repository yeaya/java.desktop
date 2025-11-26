#ifndef _javax_print_attribute_standard_CopiesSupported_h_
#define _javax_print_attribute_standard_CopiesSupported_h_
//$ class javax.print.attribute.standard.CopiesSupported
//$ extends javax.print.attribute.SetOfIntegerSyntax
//$ implements javax.print.attribute.SupportedValuesAttribute

#include <javax/print/attribute/SetOfIntegerSyntax.h>
#include <javax/print/attribute/SupportedValuesAttribute.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import CopiesSupported : public ::javax::print::attribute::SetOfIntegerSyntax, public ::javax::print::attribute::SupportedValuesAttribute {
	$class(CopiesSupported, $NO_CLASS_INIT, ::javax::print::attribute::SetOfIntegerSyntax, ::javax::print::attribute::SupportedValuesAttribute)
public:
	CopiesSupported();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t member);
	void init$(int32_t lowerBound, int32_t upperBound);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x60242D132408BB31;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_CopiesSupported_h_