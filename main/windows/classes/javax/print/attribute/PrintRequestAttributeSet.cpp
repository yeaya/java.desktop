#include <javax/print/attribute/PrintRequestAttributeSet.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::print::attribute::AttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$MethodInfo _PrintRequestAttributeSet_MethodInfo_[] = {
	{"add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PrintRequestAttributeSet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.attribute.PrintRequestAttributeSet",
	nullptr,
	"javax.print.attribute.AttributeSet",
	nullptr,
	_PrintRequestAttributeSet_MethodInfo_
};

$Object* allocate$PrintRequestAttributeSet($Class* clazz) {
	return $of($alloc(PrintRequestAttributeSet));
}

$Class* PrintRequestAttributeSet::load$($String* name, bool initialize) {
	$loadClass(PrintRequestAttributeSet, name, initialize, &_PrintRequestAttributeSet_ClassInfo_, allocate$PrintRequestAttributeSet);
	return class$;
}

$Class* PrintRequestAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax