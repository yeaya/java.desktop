#include <javax/swing/text/html/AccessibleHTML$TableElementInfo.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$HTMLAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML$TableElementInfo$TableAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML$TableElementInfo$TableCellElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$TableElementInfo$TableRowElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <jcpp.h>

#undef CAPTION
#undef TR

using $AccessibleHTML$TableElementInfo$TableCellElementInfoArray = $Array<::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableCellElementInfo>;
using $AccessibleHTML$TableElementInfo$TableCellElementInfoArray2 = $Array<::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableCellElementInfo, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;
using $AccessibleHTML$ElementInfo = ::javax::swing::text::html::AccessibleHTML$ElementInfo;
using $AccessibleHTML$HTMLAccessibleContext = ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext;
using $AccessibleHTML$TableElementInfo$TableAccessibleContext = ::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableAccessibleContext;
using $AccessibleHTML$TableElementInfo$TableCellElementInfo = ::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableCellElementInfo;
using $AccessibleHTML$TableElementInfo$TableRowElementInfo = ::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableRowElementInfo;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML$TableElementInfo_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/AccessibleHTML;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$TableElementInfo, this$0)},
	{"caption", "Ljavax/swing/text/html/AccessibleHTML$ElementInfo;", nullptr, $PROTECTED, $field(AccessibleHTML$TableElementInfo, caption)},
	{"grid", "[[Ljavax/swing/text/html/AccessibleHTML$TableElementInfo$TableCellElementInfo;", nullptr, $PRIVATE, $field(AccessibleHTML$TableElementInfo, grid)},
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PRIVATE, $field(AccessibleHTML$TableElementInfo, accessibleContext)},
	{}
};

$MethodInfo _AccessibleHTML$TableElementInfo_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML;Ljavax/swing/text/Element;Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)V", nullptr, 0, $method(static_cast<void(AccessibleHTML$TableElementInfo::*)($AccessibleHTML*,$Element*,$AccessibleHTML$ElementInfo*)>(&AccessibleHTML$TableElementInfo::init$))},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getCaptionInfo", "()Ljavax/swing/text/html/AccessibleHTML$ElementInfo;", nullptr, $PUBLIC},
	{"getCell", "(II)Ljavax/swing/text/html/AccessibleHTML$TableElementInfo$TableCellElementInfo;", nullptr, $PUBLIC},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getColumnExtentAt", "(II)I", nullptr, $PUBLIC},
	{"getRow", "(I)Ljavax/swing/text/html/AccessibleHTML$TableElementInfo$TableRowElementInfo;", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getRowExtentAt", "(II)I", nullptr, $PUBLIC},
	{"loadChildren", "(Ljavax/swing/text/Element;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateGrid", "()V", nullptr, $PRIVATE, $method(static_cast<void(AccessibleHTML$TableElementInfo::*)()>(&AccessibleHTML$TableElementInfo::updateGrid))},
	{"validate", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AccessibleHTML$TableElementInfo_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$TableElementInfo", "javax.swing.text.html.AccessibleHTML", "TableElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$ElementInfo", "javax.swing.text.html.AccessibleHTML", "ElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$TableElementInfo$TableCellElementInfo", "javax.swing.text.html.AccessibleHTML$TableElementInfo", "TableCellElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$TableElementInfo$TableRowElementInfo", "javax.swing.text.html.AccessibleHTML$TableElementInfo", "TableRowElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$TableElementInfo$TableAccessibleContext", "javax.swing.text.html.AccessibleHTML$TableElementInfo", "TableAccessibleContext", $PUBLIC},
	{}
};

$ClassInfo _AccessibleHTML$TableElementInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.AccessibleHTML$TableElementInfo",
	"javax.swing.text.html.AccessibleHTML$ElementInfo",
	"javax.accessibility.Accessible",
	_AccessibleHTML$TableElementInfo_FieldInfo_,
	_AccessibleHTML$TableElementInfo_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML$TableElementInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML"
};

$Object* allocate$AccessibleHTML$TableElementInfo($Class* clazz) {
	return $of($alloc(AccessibleHTML$TableElementInfo));
}

int32_t AccessibleHTML$TableElementInfo::hashCode() {
	 return this->$AccessibleHTML$ElementInfo::hashCode();
}

bool AccessibleHTML$TableElementInfo::equals(Object$* arg0) {
	 return this->$AccessibleHTML$ElementInfo::equals(arg0);
}

$Object* AccessibleHTML$TableElementInfo::clone() {
	 return this->$AccessibleHTML$ElementInfo::clone();
}

$String* AccessibleHTML$TableElementInfo::toString() {
	 return this->$AccessibleHTML$ElementInfo::toString();
}

void AccessibleHTML$TableElementInfo::finalize() {
	this->$AccessibleHTML$ElementInfo::finalize();
}

void AccessibleHTML$TableElementInfo::init$($AccessibleHTML* this$0, $Element* e, $AccessibleHTML$ElementInfo* parent) {
	$set(this, this$0, this$0);
	$AccessibleHTML$ElementInfo::init$(this$0, e, parent);
}

$AccessibleHTML$ElementInfo* AccessibleHTML$TableElementInfo::getCaptionInfo() {
	return this->caption;
}

void AccessibleHTML$TableElementInfo::validate() {
	$AccessibleHTML$ElementInfo::validate();
	updateGrid();
}

void AccessibleHTML$TableElementInfo::loadChildren($Element* e) {
	for (int32_t counter = 0; counter < $nc(e)->getElementCount(); ++counter) {
		$var($Element, child, e->getElement(counter));
		$var($AttributeSet, attrs, $nc(child)->getAttributes());
		$init($StyleConstants);
		$init($HTML$Tag);
		if ($equals($nc(attrs)->getAttribute($StyleConstants::NameAttribute), $HTML$Tag::TR)) {
			addChild($$new($AccessibleHTML$TableElementInfo$TableRowElementInfo, this, child, this, counter));
		} else {
			if ($equals(attrs->getAttribute($StyleConstants::NameAttribute), $HTML$Tag::CAPTION)) {
				$set(this, caption, this->this$0->createElementInfo(child, this));
			}
		}
	}
}

void AccessibleHTML$TableElementInfo::updateGrid() {
	int32_t delta = 0;
	int32_t maxCols = 0;
	int32_t rows = 0;
	for (int32_t counter = 0; counter < getChildCount(); ++counter) {
		$var($AccessibleHTML$TableElementInfo$TableRowElementInfo, row, getRow(counter));
		int32_t prev = 0;
		for (int32_t y = 0; y < delta; ++y) {
			prev = $Math::max(prev, $nc($(getRow(counter - y - 1)))->getColumnCount(y + 2));
		}
		delta = $Math::max($nc(row)->getRowCount(), delta);
		--delta;
		maxCols = $Math::max(maxCols, $nc(row)->getColumnCount() + prev);
	}
	rows = getChildCount() + delta;
	$set(this, grid, $new($AccessibleHTML$TableElementInfo$TableCellElementInfoArray2, rows));
	for (int32_t counter = 0; counter < rows; ++counter) {
		$nc(this->grid)->set(counter, $$new($AccessibleHTML$TableElementInfo$TableCellElementInfoArray, maxCols));
	}
	for (int32_t counter = 0; counter < rows; ++counter) {
		$nc($(getRow(counter)))->updateGrid(counter);
	}
}

$AccessibleHTML$TableElementInfo$TableRowElementInfo* AccessibleHTML$TableElementInfo::getRow(int32_t index) {
	return $cast($AccessibleHTML$TableElementInfo$TableRowElementInfo, getChild(index));
}

$AccessibleHTML$TableElementInfo$TableCellElementInfo* AccessibleHTML$TableElementInfo::getCell(int32_t r, int32_t c) {
	if (validateIfNecessary() && r < $nc(this->grid)->length && c < $nc($nc(this->grid)->get(0))->length) {
		return $nc($nc(this->grid)->get(r))->get(c);
	}
	return nullptr;
}

int32_t AccessibleHTML$TableElementInfo::getRowExtentAt(int32_t r, int32_t c) {
	$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, cell, getCell(r, c));
	if (cell != nullptr) {
		int32_t rows = cell->getRowCount();
		int32_t delta = 1;
		while ((r - delta) >= 0 && $nc($nc(this->grid)->get(r - delta))->get(c) == cell) {
			++delta;
		}
		return rows - delta + 1;
	}
	return 0;
}

int32_t AccessibleHTML$TableElementInfo::getColumnExtentAt(int32_t r, int32_t c) {
	$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, cell, getCell(r, c));
	if (cell != nullptr) {
		int32_t cols = cell->getColumnCount();
		int32_t delta = 1;
		while ((c - delta) >= 0 && $nc($nc(this->grid)->get(r))->get(c - delta) == cell) {
			++delta;
		}
		return cols - delta + 1;
	}
	return 0;
}

int32_t AccessibleHTML$TableElementInfo::getRowCount() {
	if (validateIfNecessary()) {
		return $nc(this->grid)->length;
	}
	return 0;
}

int32_t AccessibleHTML$TableElementInfo::getColumnCount() {
	if (validateIfNecessary() && $nc(this->grid)->length > 0) {
		return $nc($nc(this->grid)->get(0))->length;
	}
	return 0;
}

$AccessibleContext* AccessibleHTML$TableElementInfo::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($AccessibleHTML$TableElementInfo$TableAccessibleContext, this, this));
	}
	return this->accessibleContext;
}

AccessibleHTML$TableElementInfo::AccessibleHTML$TableElementInfo() {
}

$Class* AccessibleHTML$TableElementInfo::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML$TableElementInfo, name, initialize, &_AccessibleHTML$TableElementInfo_ClassInfo_, allocate$AccessibleHTML$TableElementInfo);
	return class$;
}

$Class* AccessibleHTML$TableElementInfo::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax