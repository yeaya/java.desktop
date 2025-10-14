#include <javax/accessibility/AccessibleEditableText.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleText = ::javax::accessibility::AccessibleText;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibleEditableText_MethodInfo_[] = {
	{"cut", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"delete", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getTextRange", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"insertTextAtIndex", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"paste", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"replaceText", "(IILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"selectText", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setAttributes", "(IILjavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTextContents", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleEditableText_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleEditableText",
	nullptr,
	"javax.accessibility.AccessibleText",
	nullptr,
	_AccessibleEditableText_MethodInfo_
};

$Object* allocate$AccessibleEditableText($Class* clazz) {
	return $of($alloc(AccessibleEditableText));
}

$Class* AccessibleEditableText::load$($String* name, bool initialize) {
	$loadClass(AccessibleEditableText, name, initialize, &_AccessibleEditableText_ClassInfo_, allocate$AccessibleEditableText);
	return class$;
}

$Class* AccessibleEditableText::class$ = nullptr;

	} // accessibility
} // javax