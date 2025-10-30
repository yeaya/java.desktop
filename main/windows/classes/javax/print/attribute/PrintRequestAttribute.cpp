#include <javax/print/attribute/PrintRequestAttribute.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Attribute = ::javax::print::attribute::Attribute;

namespace javax {
	namespace print {
		namespace attribute {

$ClassInfo _PrintRequestAttribute_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.attribute.PrintRequestAttribute",
	nullptr,
	"javax.print.attribute.Attribute"
};

$Object* allocate$PrintRequestAttribute($Class* clazz) {
	return $of($alloc(PrintRequestAttribute));
}

$Class* PrintRequestAttribute::load$($String* name, bool initialize) {
	$loadClass(PrintRequestAttribute, name, initialize, &_PrintRequestAttribute_ClassInfo_, allocate$PrintRequestAttribute);
	return class$;
}

$Class* PrintRequestAttribute::class$ = nullptr;

		} // attribute
	} // print
} // javax