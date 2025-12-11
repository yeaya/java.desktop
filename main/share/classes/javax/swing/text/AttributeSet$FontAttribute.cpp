#include <javax/swing/text/AttributeSet$FontAttribute.h>

#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace javax {
	namespace swing {
		namespace text {

$InnerClassInfo _AttributeSet$FontAttribute_InnerClassesInfo_[] = {
	{"javax.swing.text.AttributeSet$FontAttribute", "javax.swing.text.AttributeSet", "FontAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AttributeSet$FontAttribute_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.AttributeSet$FontAttribute",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_AttributeSet$FontAttribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AttributeSet"
};

$Object* allocate$AttributeSet$FontAttribute($Class* clazz) {
	return $of($alloc(AttributeSet$FontAttribute));
}

$Class* AttributeSet$FontAttribute::load$($String* name, bool initialize) {
	$loadClass(AttributeSet$FontAttribute, name, initialize, &_AttributeSet$FontAttribute_ClassInfo_, allocate$AttributeSet$FontAttribute);
	return class$;
}

$Class* AttributeSet$FontAttribute::class$ = nullptr;

		} // text
	} // swing
} // javax