#ifndef _javax_print_attribute_standard_PDLOverrideSupported_h_
#define _javax_print_attribute_standard_PDLOverrideSupported_h_
//$ class javax.print.attribute.standard.PDLOverrideSupported
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.PrintServiceAttribute

#include <java/lang/Array.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintServiceAttribute.h>

#pragma push_macro("ATTEMPTED")
#undef ATTEMPTED
#pragma push_macro("NOT_ATTEMPTED")
#undef NOT_ATTEMPTED

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import PDLOverrideSupported : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::PrintServiceAttribute {
	$class(PDLOverrideSupported, 0, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::PrintServiceAttribute)
public:
	PDLOverrideSupported();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
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
	static const int64_t serialVersionUID = (int64_t)0xC307FD3E30C745C2;
	static ::javax::print::attribute::standard::PDLOverrideSupported* NOT_ATTEMPTED;
	static ::javax::print::attribute::standard::PDLOverrideSupported* ATTEMPTED;
	static $StringArray* myStringTable;
	static $Array<::javax::print::attribute::standard::PDLOverrideSupported>* myEnumValueTable;
};

			} // standard
		} // attribute
	} // print
} // javax

#pragma pop_macro("ATTEMPTED")
#pragma pop_macro("NOT_ATTEMPTED")

#endif // _javax_print_attribute_standard_PDLOverrideSupported_h_