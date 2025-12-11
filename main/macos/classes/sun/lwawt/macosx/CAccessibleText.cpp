#include <sun/lwawt/macosx/CAccessibleText.h>

#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/Callable.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleEditableText.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/lwawt/macosx/CAccessibility.h>
#include <sun/lwawt/macosx/CAccessible.h>
#include <sun/lwawt/macosx/CAccessibleText$1.h>
#include <sun/lwawt/macosx/CAccessibleText$10.h>
#include <sun/lwawt/macosx/CAccessibleText$11.h>
#include <sun/lwawt/macosx/CAccessibleText$12.h>
#include <sun/lwawt/macosx/CAccessibleText$13.h>
#include <sun/lwawt/macosx/CAccessibleText$14.h>
#include <sun/lwawt/macosx/CAccessibleText$2.h>
#include <sun/lwawt/macosx/CAccessibleText$3.h>
#include <sun/lwawt/macosx/CAccessibleText$4.h>
#include <sun/lwawt/macosx/CAccessibleText$5.h>
#include <sun/lwawt/macosx/CAccessibleText$6.h>
#include <sun/lwawt/macosx/CAccessibleText$7.h>
#include <sun/lwawt/macosx/CAccessibleText$8.h>
#include <sun/lwawt/macosx/CAccessibleText$9.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Callable = ::java::util::concurrent::Callable;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleEditableText = ::javax::accessibility::AccessibleEditableText;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $CAccessibility = ::sun::lwawt::macosx::CAccessibility;
using $CAccessible = ::sun::lwawt::macosx::CAccessible;
using $CAccessibleText$1 = ::sun::lwawt::macosx::CAccessibleText$1;
using $CAccessibleText$10 = ::sun::lwawt::macosx::CAccessibleText$10;
using $CAccessibleText$11 = ::sun::lwawt::macosx::CAccessibleText$11;
using $CAccessibleText$12 = ::sun::lwawt::macosx::CAccessibleText$12;
using $CAccessibleText$13 = ::sun::lwawt::macosx::CAccessibleText$13;
using $CAccessibleText$14 = ::sun::lwawt::macosx::CAccessibleText$14;
using $CAccessibleText$2 = ::sun::lwawt::macosx::CAccessibleText$2;
using $CAccessibleText$3 = ::sun::lwawt::macosx::CAccessibleText$3;
using $CAccessibleText$4 = ::sun::lwawt::macosx::CAccessibleText$4;
using $CAccessibleText$5 = ::sun::lwawt::macosx::CAccessibleText$5;
using $CAccessibleText$6 = ::sun::lwawt::macosx::CAccessibleText$6;
using $CAccessibleText$7 = ::sun::lwawt::macosx::CAccessibleText$7;
using $CAccessibleText$8 = ::sun::lwawt::macosx::CAccessibleText$8;
using $CAccessibleText$9 = ::sun::lwawt::macosx::CAccessibleText$9;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CAccessibleText_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CAccessibleText::*)()>(&CAccessibleText::init$))},
	{"getAccessibleEditableText", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljavax/accessibility/AccessibleEditableText;", nullptr, $STATIC, $method(static_cast<$AccessibleEditableText*(*)($Accessible*,$Component*)>(&CAccessibleText::getAccessibleEditableText))},
	{"getBoundsForRange", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;II)[D", nullptr, $STATIC, $method(static_cast<$doubles*(*)($Accessible*,$Component*,int32_t,int32_t)>(&CAccessibleText::getBoundsForRange))},
	{"getCharacterIndexAtPosition", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Accessible*,$Component*,int32_t,int32_t)>(&CAccessibleText::getCharacterIndexAtPosition))},
	{"getLineNumberForIndex", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Accessible*,$Component*,int32_t)>(&CAccessibleText::getLineNumberForIndex))},
	{"getLineNumberForIndex", "(Ljavax/accessibility/Accessible;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Accessible*,int32_t)>(&CAccessibleText::getLineNumberForIndex))},
	{"getLineNumberForInsertionPoint", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Accessible*,$Component*)>(&CAccessibleText::getLineNumberForInsertionPoint))},
	{"getLineNumberForInsertionPoint", "(Ljavax/accessibility/Accessible;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Accessible*)>(&CAccessibleText::getLineNumberForInsertionPoint))},
	{"getRangeForIndex", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;I)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)($Accessible*,$Component*,int32_t)>(&CAccessibleText::getRangeForIndex))},
	{"getRangeForLine", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;I)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)($Accessible*,$Component*,int32_t)>(&CAccessibleText::getRangeForLine))},
	{"getRangeForLine", "(Ljavax/accessibility/Accessible;I)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)($Accessible*,int32_t)>(&CAccessibleText::getRangeForLine))},
	{"getSelectedText", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($Accessible*,$Component*)>(&CAccessibleText::getSelectedText))},
	{"getSelectedTextRange", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)($Accessible*,$Component*)>(&CAccessibleText::getSelectedTextRange))},
	{"getStringForRange", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;II)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($Accessible*,$Component*,int32_t,int32_t)>(&CAccessibleText::getStringForRange))},
	{"getTextRange", "(Ljavax/accessibility/AccessibleEditableText;IILjava/awt/Component;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($AccessibleEditableText*,int32_t,int32_t,$Component*)>(&CAccessibleText::getTextRange))},
	{"getVisibleCharacterRange", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)($Accessible*,$Component*)>(&CAccessibleText::getVisibleCharacterRange))},
	{"getVisibleCharacterRange", "(Ljavax/accessibility/Accessible;)[I", nullptr, $STATIC, $method(static_cast<$ints*(*)($Accessible*)>(&CAccessibleText::getVisibleCharacterRange))},
	{"setSelectedText", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;Ljava/lang/String;)V", nullptr, $STATIC, $method(static_cast<void(*)($Accessible*,$Component*,$String*)>(&CAccessibleText::setSelectedText))},
	{"setSelectedTextRange", "(Ljavax/accessibility/Accessible;Ljava/awt/Component;II)V", nullptr, $STATIC, $method(static_cast<void(*)($Accessible*,$Component*,int32_t,int32_t)>(&CAccessibleText::setSelectedTextRange))},
	{}
};

$InnerClassInfo _CAccessibleText_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CAccessibleText$14", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibleText$13", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibleText$12", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibleText$11", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibleText$10", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibleText$9", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibleText$8", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibleText$7", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibleText$6", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibleText$5", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibleText$4", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibleText$3", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibleText$2", nullptr, nullptr, 0},
	{"sun.lwawt.macosx.CAccessibleText$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CAccessibleText_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CAccessibleText",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CAccessibleText_MethodInfo_,
	nullptr,
	nullptr,
	_CAccessibleText_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CAccessibleText$14,sun.lwawt.macosx.CAccessibleText$13,sun.lwawt.macosx.CAccessibleText$12,sun.lwawt.macosx.CAccessibleText$11,sun.lwawt.macosx.CAccessibleText$10,sun.lwawt.macosx.CAccessibleText$9,sun.lwawt.macosx.CAccessibleText$8,sun.lwawt.macosx.CAccessibleText$7,sun.lwawt.macosx.CAccessibleText$6,sun.lwawt.macosx.CAccessibleText$5,sun.lwawt.macosx.CAccessibleText$4,sun.lwawt.macosx.CAccessibleText$3,sun.lwawt.macosx.CAccessibleText$2,sun.lwawt.macosx.CAccessibleText$1"
};

$Object* allocate$CAccessibleText($Class* clazz) {
	return $of($alloc(CAccessibleText));
}

void CAccessibleText::init$() {
}

$AccessibleEditableText* CAccessibleText::getAccessibleEditableText($Accessible* a, $Component* c) {
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($AccessibleEditableText, $CAccessibility::invokeAndWait($$new($CAccessibleText$1, a), c));
}

$String* CAccessibleText::getSelectedText($Accessible* a, $Component* c) {
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($String, $CAccessibility::invokeAndWait($$new($CAccessibleText$2, a), c));
}

void CAccessibleText::setSelectedText($Accessible* a, $Component* c, $String* newText) {
	if (a == nullptr) {
		return;
	}
	$CAccessibility::invokeLater($$new($CAccessibleText$3, a, newText), c);
}

void CAccessibleText::setSelectedTextRange($Accessible* a, $Component* c, int32_t startIndex, int32_t endIndex) {
	if (a == nullptr) {
		return;
	}
	$CAccessibility::invokeLater($$new($CAccessibleText$4, a, startIndex, endIndex), c);
}

$String* CAccessibleText::getTextRange($AccessibleEditableText* aet, int32_t start, int32_t stop, $Component* c) {
	if (aet == nullptr) {
		return nullptr;
	}
	return $cast($String, $CAccessibility::invokeAndWait($$new($CAccessibleText$5, aet, start, stop), c));
}

int32_t CAccessibleText::getCharacterIndexAtPosition($Accessible* a, $Component* c, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		return 0;
	}
	return $nc(($cast($Integer, $($CAccessibility::invokeAndWait($$new($CAccessibleText$6, a, x, y), c)))))->intValue();
}

$ints* CAccessibleText::getSelectedTextRange($Accessible* a, $Component* c) {
	if (a == nullptr) {
		return $new($ints, 2);
	}
	return $cast($ints, $CAccessibility::invokeAndWait($$new($CAccessibleText$7, a), c));
}

$ints* CAccessibleText::getVisibleCharacterRange($Accessible* a, $Component* c) {
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($ints, $CAccessibility::invokeAndWait($$new($CAccessibleText$8, a), c));
}

int32_t CAccessibleText::getLineNumberForIndex($Accessible* a, $Component* c, int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		return 0;
	}
	return $nc(($cast($Integer, $($CAccessibility::invokeAndWait($$new($CAccessibleText$9, a, index), c)))))->intValue();
}

int32_t CAccessibleText::getLineNumberForInsertionPoint($Accessible* a, $Component* c) {
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		return 0;
	}
	return $nc(($cast($Integer, $($CAccessibility::invokeAndWait($$new($CAccessibleText$10, a), c)))))->intValue();
}

$ints* CAccessibleText::getRangeForLine($Accessible* a, $Component* c, int32_t line) {
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($ints, $CAccessibility::invokeAndWait($$new($CAccessibleText$11, a, line), c));
}

$ints* CAccessibleText::getRangeForIndex($Accessible* a, $Component* c, int32_t index) {
	if (a == nullptr) {
		return $new($ints, 2);
	}
	return $cast($ints, $CAccessibility::invokeAndWait($$new($CAccessibleText$12, a, index), c));
}

$doubles* CAccessibleText::getBoundsForRange($Accessible* a, $Component* c, int32_t location, int32_t length) {
	$useLocalCurrentObjectStackCache();
	$var($doubles, ret, $new($doubles, 4));
	if (a == nullptr) {
		return ret;
	}
	return $cast($doubles, $CAccessibility::invokeAndWait($$new($CAccessibleText$13, a, ret, location, length), c));
}

$String* CAccessibleText::getStringForRange($Accessible* a, $Component* c, int32_t location, int32_t length) {
	if (a == nullptr) {
		return nullptr;
	}
	return $cast($String, $CAccessibility::invokeAndWait($$new($CAccessibleText$14, a, location, length), c));
}

$ints* CAccessibleText::getVisibleCharacterRange($Accessible* a) {
	$useLocalCurrentObjectStackCache();
	$var($Accessible, sa, $CAccessible::getSwingAccessible(a));
	if (!($instanceOf($JTextComponent, sa))) {
		return nullptr;
	}
	$var($JTextComponent, jc, $cast($JTextComponent, sa));
	$var($Rectangle, rect, $nc(jc)->getVisibleRect());
	$var($Point, topLeft, $new($Point, $nc(rect)->x, rect->y));
	$var($Point, topRight, $new($Point, $nc(rect)->x + rect->width, rect->y));
	$var($Point, bottomLeft, $new($Point, $nc(rect)->x, rect->y + rect->height));
	$var($Point, bottomRight, $new($Point, $nc(rect)->x + rect->width, rect->y + rect->height));
	int32_t var$0 = jc->viewToModel(topLeft);
	int32_t start = $Math::min(var$0, jc->viewToModel(topRight));
	int32_t var$1 = jc->viewToModel(bottomLeft);
	int32_t end = $Math::max(var$1, jc->viewToModel(bottomRight));
	if (start < 0) {
		start = 0;
	}
	if (end < 0) {
		end = 0;
	}
	return $new($ints, {
		start,
		end
	});
}

int32_t CAccessibleText::getLineNumberForIndex($Accessible* a, int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($Accessible, sa, $CAccessible::getSwingAccessible(a));
	if (!($instanceOf($JTextComponent, sa))) {
		return -1;
	}
	$var($JTextComponent, jc, $cast($JTextComponent, sa));
	$var($Element, root, $nc($($nc(jc)->getDocument()))->getDefaultRootElement());
	if (index == -1) {
		index = jc->getCaretPosition();
	}
	return $nc(root)->getElementIndex(index);
}

int32_t CAccessibleText::getLineNumberForInsertionPoint($Accessible* a) {
	return getLineNumberForIndex(a, -1);
}

$ints* CAccessibleText::getRangeForLine($Accessible* a, int32_t lineIndex) {
	$useLocalCurrentObjectStackCache();
	$var($Accessible, sa, $CAccessible::getSwingAccessible(a));
	if (!($instanceOf($JTextComponent, sa))) {
		return nullptr;
	}
	$var($JTextComponent, jc, $cast($JTextComponent, sa));
	$var($Element, root, $nc($($nc(jc)->getDocument()))->getDefaultRootElement());
	$var($Element, line, $nc(root)->getElement(lineIndex));
	if (line == nullptr) {
		return nullptr;
	}
	return $new($ints, {
		$nc(line)->getStartOffset(),
		line->getEndOffset()
	});
}

CAccessibleText::CAccessibleText() {
}

$Class* CAccessibleText::load$($String* name, bool initialize) {
	$loadClass(CAccessibleText, name, initialize, &_CAccessibleText_ClassInfo_, allocate$CAccessibleText);
	return class$;
}

$Class* CAccessibleText::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun