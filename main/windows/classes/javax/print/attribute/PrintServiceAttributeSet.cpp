#include <javax/print/attribute/PrintServiceAttributeSet.h>

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

$MethodInfo _PrintServiceAttributeSet_MethodInfo_[] = {
	{"add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PrintServiceAttributeSet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.attribute.PrintServiceAttributeSet",
	nullptr,
	"javax.print.attribute.AttributeSet",
	nullptr,
	_PrintServiceAttributeSet_MethodInfo_
};

$Object* allocate$PrintServiceAttributeSet($Class* clazz) {
	return $of($alloc(PrintServiceAttributeSet));
}

$Class* PrintServiceAttributeSet::load$($String* name, bool initialize) {
	$loadClass(PrintServiceAttributeSet, name, initialize, &_PrintServiceAttributeSet_ClassInfo_, allocate$PrintServiceAttributeSet);
	return class$;
}

$Class* PrintServiceAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax