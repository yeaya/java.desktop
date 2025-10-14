#include <javax/print/attribute/SupportedValuesAttribute.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Attribute = ::javax::print::attribute::Attribute;

namespace javax {
	namespace print {
		namespace attribute {

$ClassInfo _SupportedValuesAttribute_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.attribute.SupportedValuesAttribute",
	nullptr,
	"javax.print.attribute.Attribute"
};

$Object* allocate$SupportedValuesAttribute($Class* clazz) {
	return $of($alloc(SupportedValuesAttribute));
}

$Class* SupportedValuesAttribute::load$($String* name, bool initialize) {
	$loadClass(SupportedValuesAttribute, name, initialize, &_SupportedValuesAttribute_ClassInfo_, allocate$SupportedValuesAttribute);
	return class$;
}

$Class* SupportedValuesAttribute::class$ = nullptr;

		} // attribute
	} // print
} // javax