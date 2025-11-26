#include <javax/accessibility/AccessibleText.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/text/AttributeSet.h>
#include <jcpp.h>

#undef CHARACTER
#undef SENTENCE
#undef WORD

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;

namespace javax {
	namespace accessibility {

$FieldInfo _AccessibleText_FieldInfo_[] = {
	{"CHARACTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccessibleText, CHARACTER)},
	{"WORD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccessibleText, WORD)},
	{"SENTENCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(AccessibleText, SENTENCE)},
	{}
};

$MethodInfo _AccessibleText_MethodInfo_[] = {
	{"getAfterIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAtIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBeforeIndex", "(II)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCaretPosition", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharacterAttribute", "(I)Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCharacterBounds", "(I)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getIndexAtPoint", "(Ljava/awt/Point;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectedText", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectionEnd", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getSelectionStart", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AccessibleText_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.accessibility.AccessibleText",
	nullptr,
	nullptr,
	_AccessibleText_FieldInfo_,
	_AccessibleText_MethodInfo_
};

$Object* allocate$AccessibleText($Class* clazz) {
	return $of($alloc(AccessibleText));
}

$Class* AccessibleText::load$($String* name, bool initialize) {
	$loadClass(AccessibleText, name, initialize, &_AccessibleText_ClassInfo_, allocate$AccessibleText);
	return class$;
}

$Class* AccessibleText::class$ = nullptr;

	} // accessibility
} // javax