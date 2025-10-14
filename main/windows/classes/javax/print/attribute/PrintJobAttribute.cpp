#include <javax/print/attribute/PrintJobAttribute.h>

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

$ClassInfo _PrintJobAttribute_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.attribute.PrintJobAttribute",
	nullptr,
	"javax.print.attribute.Attribute"
};

$Object* allocate$PrintJobAttribute($Class* clazz) {
	return $of($alloc(PrintJobAttribute));
}

$Class* PrintJobAttribute::load$($String* name, bool initialize) {
	$loadClass(PrintJobAttribute, name, initialize, &_PrintJobAttribute_ClassInfo_, allocate$PrintJobAttribute);
	return class$;
}

$Class* PrintJobAttribute::class$ = nullptr;

		} // attribute
	} // print
} // javax