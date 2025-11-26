#include <javax/swing/text/AttributeSet$CharacterAttribute.h>

#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace javax {
	namespace swing {
		namespace text {

$InnerClassInfo _AttributeSet$CharacterAttribute_InnerClassesInfo_[] = {
	{"javax.swing.text.AttributeSet$CharacterAttribute", "javax.swing.text.AttributeSet", "CharacterAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AttributeSet$CharacterAttribute_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.AttributeSet$CharacterAttribute",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_AttributeSet$CharacterAttribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AttributeSet"
};

$Object* allocate$AttributeSet$CharacterAttribute($Class* clazz) {
	return $of($alloc(AttributeSet$CharacterAttribute));
}

$Class* AttributeSet$CharacterAttribute::load$($String* name, bool initialize) {
	$loadClass(AttributeSet$CharacterAttribute, name, initialize, &_AttributeSet$CharacterAttribute_ClassInfo_, allocate$AttributeSet$CharacterAttribute);
	return class$;
}

$Class* AttributeSet$CharacterAttribute::class$ = nullptr;

		} // text
	} // swing
} // javax