#include <javax/swing/text/AttributeSet$ParagraphAttribute.h>

#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace javax {
	namespace swing {
		namespace text {

$InnerClassInfo _AttributeSet$ParagraphAttribute_InnerClassesInfo_[] = {
	{"javax.swing.text.AttributeSet$ParagraphAttribute", "javax.swing.text.AttributeSet", "ParagraphAttribute", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AttributeSet$ParagraphAttribute_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.AttributeSet$ParagraphAttribute",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_AttributeSet$ParagraphAttribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.AttributeSet"
};

$Object* allocate$AttributeSet$ParagraphAttribute($Class* clazz) {
	return $of($alloc(AttributeSet$ParagraphAttribute));
}

$Class* AttributeSet$ParagraphAttribute::load$($String* name, bool initialize) {
	$loadClass(AttributeSet$ParagraphAttribute, name, initialize, &_AttributeSet$ParagraphAttribute_ClassInfo_, allocate$AttributeSet$ParagraphAttribute);
	return class$;
}

$Class* AttributeSet$ParagraphAttribute::class$ = nullptr;

		} // text
	} // swing
} // javax