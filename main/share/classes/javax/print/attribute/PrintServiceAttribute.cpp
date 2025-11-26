#include <javax/print/attribute/PrintServiceAttribute.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Attribute = ::javax::print::attribute::Attribute;

namespace javax {
	namespace print {
		namespace attribute {

$ClassInfo _PrintServiceAttribute_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.attribute.PrintServiceAttribute",
	nullptr,
	"javax.print.attribute.Attribute"
};

$Object* allocate$PrintServiceAttribute($Class* clazz) {
	return $of($alloc(PrintServiceAttribute));
}

$Class* PrintServiceAttribute::load$($String* name, bool initialize) {
	$loadClass(PrintServiceAttribute, name, initialize, &_PrintServiceAttribute_ClassInfo_, allocate$PrintServiceAttribute);
	return class$;
}

$Class* PrintServiceAttribute::class$ = nullptr;

		} // attribute
	} // print
} // javax