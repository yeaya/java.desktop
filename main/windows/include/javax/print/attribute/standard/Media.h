#ifndef _javax_print_attribute_standard_Media_h_
#define _javax_print_attribute_standard_Media_h_
//$ class javax.print.attribute.standard.Media
//$ extends javax.print.attribute.EnumSyntax
//$ implements javax.print.attribute.DocAttribute,javax.print.attribute.PrintRequestAttribute,javax.print.attribute.PrintJobAttribute

#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttribute.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import Media : public ::javax::print::attribute::EnumSyntax, public ::javax::print::attribute::DocAttribute, public ::javax::print::attribute::PrintRequestAttribute, public ::javax::print::attribute::PrintJobAttribute {
	$class(Media, $NO_CLASS_INIT, ::javax::print::attribute::EnumSyntax, ::javax::print::attribute::DocAttribute, ::javax::print::attribute::PrintRequestAttribute, ::javax::print::attribute::PrintJobAttribute)
public:
	Media();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t value);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xD8CF3D9B2E605079;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_Media_h_