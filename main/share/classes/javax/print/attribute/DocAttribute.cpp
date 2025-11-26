#include <javax/print/attribute/DocAttribute.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Attribute = ::javax::print::attribute::Attribute;

namespace javax {
	namespace print {
		namespace attribute {

$ClassInfo _DocAttribute_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.attribute.DocAttribute",
	nullptr,
	"javax.print.attribute.Attribute"
};

$Object* allocate$DocAttribute($Class* clazz) {
	return $of($alloc(DocAttribute));
}

$Class* DocAttribute::load$($String* name, bool initialize) {
	$loadClass(DocAttribute, name, initialize, &_DocAttribute_ClassInfo_, allocate$DocAttribute);
	return class$;
}

$Class* DocAttribute::class$ = nullptr;

		} // attribute
	} // print
} // javax