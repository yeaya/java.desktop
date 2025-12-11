#include <javax/swing/text/AttributeSet$ColorAttribute.h>

#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace javax {
	namespace swing {
		namespace text {

$InnerClassInfo _AttributeSet$ColorAttribute_InnerClassesInfo_[] = {
	{"javax.swing.text.AttributeSet$ColorAttribute", "javax.swing.text.AttributeSet", "ColorAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AttributeSet$ColorAttribute_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.AttributeSet$ColorAttribute",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_AttributeSet$ColorAttribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AttributeSet"
};

$Object* allocate$AttributeSet$ColorAttribute($Class* clazz) {
	return $of($alloc(AttributeSet$ColorAttribute));
}

$Class* AttributeSet$ColorAttribute::load$($String* name, bool initialize) {
	$loadClass(AttributeSet$ColorAttribute, name, initialize, &_AttributeSet$ColorAttribute_ClassInfo_, allocate$AttributeSet$ColorAttribute);
	return class$;
}

$Class* AttributeSet$ColorAttribute::class$ = nullptr;

		} // text
	} // swing
} // javax