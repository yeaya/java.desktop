#include <javax/print/attribute/DocAttributeSet.h>

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

$MethodInfo _DocAttributeSet_MethodInfo_[] = {
	{"add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DocAttributeSet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.print.attribute.DocAttributeSet",
	nullptr,
	"javax.print.attribute.AttributeSet",
	nullptr,
	_DocAttributeSet_MethodInfo_
};

$Object* allocate$DocAttributeSet($Class* clazz) {
	return $of($alloc(DocAttributeSet));
}

$Class* DocAttributeSet::load$($String* name, bool initialize) {
	$loadClass(DocAttributeSet, name, initialize, &_DocAttributeSet_ClassInfo_, allocate$DocAttributeSet);
	return class$;
}

$Class* DocAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax