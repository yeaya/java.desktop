#ifndef _javax_print_attribute_AttributeSetUtilities_h_
#define _javax_print_attribute_AttributeSetUtilities_h_
//$ class javax.print.attribute.AttributeSetUtilities
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace print {
		namespace attribute {
			class Attribute;
			class AttributeSet;
			class DocAttributeSet;
			class PrintJobAttributeSet;
			class PrintRequestAttributeSet;
			class PrintServiceAttributeSet;
		}
	}
}

namespace javax {
	namespace print {
		namespace attribute {

class $export AttributeSetUtilities : public ::java::lang::Object {
	$class(AttributeSetUtilities, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AttributeSetUtilities();
	void init$();
	static ::javax::print::attribute::AttributeSet* synchronizedView(::javax::print::attribute::AttributeSet* attributeSet);
	static ::javax::print::attribute::DocAttributeSet* synchronizedView(::javax::print::attribute::DocAttributeSet* attributeSet);
	static ::javax::print::attribute::PrintRequestAttributeSet* synchronizedView(::javax::print::attribute::PrintRequestAttributeSet* attributeSet);
	static ::javax::print::attribute::PrintJobAttributeSet* synchronizedView(::javax::print::attribute::PrintJobAttributeSet* attributeSet);
	static ::javax::print::attribute::PrintServiceAttributeSet* synchronizedView(::javax::print::attribute::PrintServiceAttributeSet* attributeSet);
	static ::javax::print::attribute::AttributeSet* unmodifiableView(::javax::print::attribute::AttributeSet* attributeSet);
	static ::javax::print::attribute::DocAttributeSet* unmodifiableView(::javax::print::attribute::DocAttributeSet* attributeSet);
	static ::javax::print::attribute::PrintRequestAttributeSet* unmodifiableView(::javax::print::attribute::PrintRequestAttributeSet* attributeSet);
	static ::javax::print::attribute::PrintJobAttributeSet* unmodifiableView(::javax::print::attribute::PrintJobAttributeSet* attributeSet);
	static ::javax::print::attribute::PrintServiceAttributeSet* unmodifiableView(::javax::print::attribute::PrintServiceAttributeSet* attributeSet);
	static $Class* verifyAttributeCategory(Object$* object, $Class* interfaceName);
	static ::javax::print::attribute::Attribute* verifyAttributeValue(Object$* object, $Class* interfaceName);
	static void verifyCategoryForValue($Class* category, ::javax::print::attribute::Attribute* attribute);
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_AttributeSetUtilities_h_