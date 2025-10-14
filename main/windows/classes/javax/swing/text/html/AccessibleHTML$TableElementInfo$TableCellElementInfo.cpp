#include <javax/swing/text/html/AccessibleHTML$TableElementInfo$TableCellElementInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$TableElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <jcpp.h>

#undef COLSPAN
#undef ROWSPAN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;
using $AccessibleHTML$ElementInfo = ::javax::swing::text::html::AccessibleHTML$ElementInfo;
using $AccessibleHTML$TableElementInfo = ::javax::swing::text::html::AccessibleHTML$TableElementInfo;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML$TableElementInfo$TableCellElementInfo_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/AccessibleHTML$TableElementInfo;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$TableElementInfo$TableCellElementInfo, this$1)},
	{"accessible", "Ljavax/accessibility/Accessible;", nullptr, $PRIVATE, $field(AccessibleHTML$TableElementInfo$TableCellElementInfo, accessible)},
	{"isHeaderCell", "Z", nullptr, $PRIVATE, $field(AccessibleHTML$TableElementInfo$TableCellElementInfo, isHeaderCell$)},
	{}
};

$MethodInfo _AccessibleHTML$TableElementInfo$TableCellElementInfo_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML$TableElementInfo;Ljavax/swing/text/Element;Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)V", nullptr, 0, $method(static_cast<void(AccessibleHTML$TableElementInfo$TableCellElementInfo::*)($AccessibleHTML$TableElementInfo*,$Element*,$AccessibleHTML$ElementInfo*)>(&AccessibleHTML$TableElementInfo$TableCellElementInfo::init$))},
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML$TableElementInfo;Ljavax/swing/text/Element;Ljavax/swing/text/html/AccessibleHTML$ElementInfo;Z)V", nullptr, 0, $method(static_cast<void(AccessibleHTML$TableElementInfo$TableCellElementInfo::*)($AccessibleHTML$TableElementInfo*,$Element*,$AccessibleHTML$ElementInfo*,bool)>(&AccessibleHTML$TableElementInfo$TableCellElementInfo::init$))},
	{"getAccessible", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessible", "(Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)V", nullptr, $PRIVATE, $method(static_cast<void(AccessibleHTML$TableElementInfo$TableCellElementInfo::*)($AccessibleHTML$ElementInfo*)>(&AccessibleHTML$TableElementInfo$TableCellElementInfo::getAccessible))},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"invalidate", "(Z)V", nullptr, $PROTECTED},
	{"isHeaderCell", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AccessibleHTML$TableElementInfo$TableCellElementInfo_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$TableElementInfo", "javax.swing.text.html.AccessibleHTML", "TableElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$TableElementInfo$TableCellElementInfo", "javax.swing.text.html.AccessibleHTML$TableElementInfo", "TableCellElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$ElementInfo", "javax.swing.text.html.AccessibleHTML", "ElementInfo", $PRIVATE},
	{}
};

$ClassInfo _AccessibleHTML$TableElementInfo$TableCellElementInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.AccessibleHTML$TableElementInfo$TableCellElementInfo",
	"javax.swing.text.html.AccessibleHTML$ElementInfo",
	nullptr,
	_AccessibleHTML$TableElementInfo$TableCellElementInfo_FieldInfo_,
	_AccessibleHTML$TableElementInfo$TableCellElementInfo_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML$TableElementInfo$TableCellElementInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML"
};

$Object* allocate$AccessibleHTML$TableElementInfo$TableCellElementInfo($Class* clazz) {
	return $of($alloc(AccessibleHTML$TableElementInfo$TableCellElementInfo));
}

void AccessibleHTML$TableElementInfo$TableCellElementInfo::init$($AccessibleHTML$TableElementInfo* this$1, $Element* e, $AccessibleHTML$ElementInfo* parent) {
	$set(this, this$1, this$1);
	$AccessibleHTML$ElementInfo::init$(this$1->this$0, e, parent);
	this->isHeaderCell$ = false;
}

void AccessibleHTML$TableElementInfo$TableCellElementInfo::init$($AccessibleHTML$TableElementInfo* this$1, $Element* e, $AccessibleHTML$ElementInfo* parent, bool isHeaderCell) {
	$set(this, this$1, this$1);
	$AccessibleHTML$ElementInfo::init$(this$1->this$0, e, parent);
	this->isHeaderCell$ = isHeaderCell;
}

bool AccessibleHTML$TableElementInfo$TableCellElementInfo::isHeaderCell() {
	return this->isHeaderCell$;
}

$Accessible* AccessibleHTML$TableElementInfo$TableCellElementInfo::getAccessible() {
	$set(this, accessible, nullptr);
	getAccessible(this);
	return this->accessible;
}

void AccessibleHTML$TableElementInfo$TableCellElementInfo::getAccessible($AccessibleHTML$ElementInfo* elementInfo) {
	if ($instanceOf($Accessible, elementInfo)) {
		$set(this, accessible, $cast($Accessible, elementInfo));
	} else {
		for (int32_t i = 0; i < $nc(elementInfo)->getChildCount(); ++i) {
			getAccessible($(elementInfo->getChild(i)));
		}
	}
}

int32_t AccessibleHTML$TableElementInfo$TableCellElementInfo::getRowCount() {
	if (validateIfNecessary()) {
		$init($HTML$Attribute);
		return $Math::max(1, getIntAttr($(getAttributes()), $HTML$Attribute::ROWSPAN, 1));
	}
	return 0;
}

int32_t AccessibleHTML$TableElementInfo$TableCellElementInfo::getColumnCount() {
	if (validateIfNecessary()) {
		$init($HTML$Attribute);
		return $Math::max(1, getIntAttr($(getAttributes()), $HTML$Attribute::COLSPAN, 1));
	}
	return 0;
}

void AccessibleHTML$TableElementInfo$TableCellElementInfo::invalidate(bool first) {
	$AccessibleHTML$ElementInfo::invalidate(first);
	$nc($(getParent()))->invalidate(true);
}

AccessibleHTML$TableElementInfo$TableCellElementInfo::AccessibleHTML$TableElementInfo$TableCellElementInfo() {
}

$Class* AccessibleHTML$TableElementInfo$TableCellElementInfo::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML$TableElementInfo$TableCellElementInfo, name, initialize, &_AccessibleHTML$TableElementInfo$TableCellElementInfo_ClassInfo_, allocate$AccessibleHTML$TableElementInfo$TableCellElementInfo);
	return class$;
}

$Class* AccessibleHTML$TableElementInfo$TableCellElementInfo::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax