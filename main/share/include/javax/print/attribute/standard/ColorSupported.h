#ifndef _javax_print_attribute_standard_ColorSupported_h_
#define _javax_print_attribute_standard_ColorSupported_h_
//$ class javax.print.attribute.standard.ColorSupported
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.PrintServiceAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintServiceAttribute.h>

#pragma push_macro("NOT_SUPPORTED")
#undef NOT_SUPPORTED
#pragma push_macro("SUPPORTED")
#undef SUPPORTED

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import ColorSupported : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::PrintServiceAttribute {
	$class(ColorSupported, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::PrintServiceAttribute)
public:
	ColorSupported();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t value);
	virtual $Class* getCategory() override;
	virtual $Array<::javax::print::attribute::EnumSyntax>* getEnumValueTable() override;
	virtual $String* getName() override;
	virtual $StringArray* getStringTable() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xDA85B2FFD46B5607;
	static ::javax::print::attribute::standard::ColorSupported* NOT_SUPPORTED;
	static ::javax::print::attribute::standard::ColorSupported* SUPPORTED;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::ColorSupported>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("NOT_SUPPORTED")
#pragma pop_macro("SUPPORTED")

#endif // _javax_print_attribute_standard_ColorSupported_h_