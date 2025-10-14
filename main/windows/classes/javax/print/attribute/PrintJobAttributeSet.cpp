#include <javax/print/attribute/PrintJobAttributeSet.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::print::attribute::AttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$MethodInfo _PrintJobAttributeSet_MethodInfo_[] = {
	{"add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PrintJobAttributeSet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.attribute.PrintJobAttributeSet",
	nullptr,
	"javax.print.attribute.AttributeSet",
	nullptr,
	_PrintJobAttributeSet_MethodInfo_
};

$Object* allocate$PrintJobAttributeSet($Class* clazz) {
	return $of($alloc(PrintJobAttributeSet));
}

$Class* PrintJobAttributeSet::load$($String* name, bool initialize) {
	$loadClass(PrintJobAttributeSet, name, initialize, &_PrintJobAttributeSet_ClassInfo_, allocate$PrintJobAttributeSet);
	return class$;
}

$Class* PrintJobAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax