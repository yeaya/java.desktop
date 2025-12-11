#include <javax/swing/text/html/AccessibleHTML$TableElementInfo$TableRowElementInfo.h>

#include <java/lang/Math.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleTable.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$TableElementInfo$TableAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML$TableElementInfo$TableCellElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$TableElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <jcpp.h>

#undef TD
#undef TH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleTable = ::javax::accessibility::AccessibleTable;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $AccessibleHTML$ElementInfo = ::javax::swing::text::html::AccessibleHTML$ElementInfo;
using $AccessibleHTML$TableElementInfo = ::javax::swing::text::html::AccessibleHTML$TableElementInfo;
using $AccessibleHTML$TableElementInfo$TableAccessibleContext = ::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableAccessibleContext;
using $AccessibleHTML$TableElementInfo$TableCellElementInfo = ::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableCellElementInfo;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML$TableElementInfo$TableRowElementInfo_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/AccessibleHTML$TableElementInfo;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$TableElementInfo$TableRowElementInfo, this$1)},
	{"parent", "Ljavax/swing/text/html/AccessibleHTML$TableElementInfo;", nullptr, $PRIVATE, $field(AccessibleHTML$TableElementInfo$TableRowElementInfo, parent)},
	{"rowNumber", "I", nullptr, $PRIVATE, $field(AccessibleHTML$TableElementInfo$TableRowElementInfo, rowNumber)},
	{}
};

$MethodInfo _AccessibleHTML$TableElementInfo$TableRowElementInfo_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML$TableElementInfo;Ljavax/swing/text/Element;Ljavax/swing/text/html/AccessibleHTML$TableElementInfo;I)V", nullptr, 0, $method(static_cast<void(AccessibleHTML$TableElementInfo$TableRowElementInfo::*)($AccessibleHTML$TableElementInfo*,$Element*,$AccessibleHTML$TableElementInfo*,int32_t)>(&AccessibleHTML$TableElementInfo$TableRowElementInfo::init$))},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getColumnCount", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(AccessibleHTML$TableElementInfo$TableRowElementInfo::*)(int32_t)>(&AccessibleHTML$TableElementInfo$TableRowElementInfo::getColumnCount))},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"invalidate", "(Z)V", nullptr, $PROTECTED},
	{"loadChildren", "(Ljavax/swing/text/Element;)V", nullptr, $PROTECTED},
	{"updateGrid", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(AccessibleHTML$TableElementInfo$TableRowElementInfo::*)(int32_t)>(&AccessibleHTML$TableElementInfo$TableRowElementInfo::updateGrid))},
	{}
};

$InnerClassInfo _AccessibleHTML$TableElementInfo$TableRowElementInfo_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$TableElementInfo", "javax.swing.text.html.AccessibleHTML", "TableElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$TableElementInfo$TableRowElementInfo", "javax.swing.text.html.AccessibleHTML$TableElementInfo", "TableRowElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$ElementInfo", "javax.swing.text.html.AccessibleHTML", "ElementInfo", $PRIVATE},
	{}
};

$ClassInfo _AccessibleHTML$TableElementInfo$TableRowElementInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.AccessibleHTML$TableElementInfo$TableRowElementInfo",
	"javax.swing.text.html.AccessibleHTML$ElementInfo",
	nullptr,
	_AccessibleHTML$TableElementInfo$TableRowElementInfo_FieldInfo_,
	_AccessibleHTML$TableElementInfo$TableRowElementInfo_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML$TableElementInfo$TableRowElementInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML"
};

$Object* allocate$AccessibleHTML$TableElementInfo$TableRowElementInfo($Class* clazz) {
	return $of($alloc(AccessibleHTML$TableElementInfo$TableRowElementInfo));
}

void AccessibleHTML$TableElementInfo$TableRowElementInfo::init$($AccessibleHTML$TableElementInfo* this$1, $Element* e, $AccessibleHTML$TableElementInfo* parent, int32_t rowNumber) {
	$set(this, this$1, this$1);
	$AccessibleHTML$ElementInfo::init$(this$1->this$0, e, parent);
	$set(this, parent, parent);
	this->rowNumber = rowNumber;
}

void AccessibleHTML$TableElementInfo$TableRowElementInfo::loadChildren($Element* e) {
	$useLocalCurrentObjectStackCache();
	for (int32_t x = 0; x < $nc(e)->getElementCount(); ++x) {
		$var($AttributeSet, attrs, $nc($(e->getElement(x)))->getAttributes());
		$init($StyleConstants);
		$init($HTML$Tag);
		if ($equals($nc(attrs)->getAttribute($StyleConstants::NameAttribute), $HTML$Tag::TH)) {
			$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, headerElementInfo, $new($AccessibleHTML$TableElementInfo$TableCellElementInfo, this->this$1, $(e->getElement(x)), this, true));
			addChild(headerElementInfo);
			$var($AccessibleTable, at, $nc($($nc(this->parent)->getAccessibleContext()))->getAccessibleTable());
			$var($AccessibleHTML$TableElementInfo$TableAccessibleContext, tableElement, $cast($AccessibleHTML$TableElementInfo$TableAccessibleContext, at));
			$nc(tableElement)->addRowHeader(headerElementInfo, this->rowNumber);
		} else {
			if ($equals(attrs->getAttribute($StyleConstants::NameAttribute), $HTML$Tag::TD)) {
				addChild($$new($AccessibleHTML$TableElementInfo$TableCellElementInfo, this->this$1, $(e->getElement(x)), this, false));
			}
		}
	}
}

int32_t AccessibleHTML$TableElementInfo$TableRowElementInfo::getRowCount() {
	$useLocalCurrentObjectStackCache();
	int32_t rowCount = 1;
	if (validateIfNecessary()) {
		for (int32_t counter = 0; counter < getChildCount(); ++counter) {
			$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, cell, $cast($AccessibleHTML$TableElementInfo$TableCellElementInfo, getChild(counter)));
			if ($nc(cell)->validateIfNecessary()) {
				rowCount = $Math::max(rowCount, cell->getRowCount());
			}
		}
	}
	return rowCount;
}

int32_t AccessibleHTML$TableElementInfo$TableRowElementInfo::getColumnCount() {
	$useLocalCurrentObjectStackCache();
	int32_t colCount = 0;
	if (validateIfNecessary()) {
		for (int32_t counter = 0; counter < getChildCount(); ++counter) {
			$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, cell, $cast($AccessibleHTML$TableElementInfo$TableCellElementInfo, getChild(counter)));
			if ($nc(cell)->validateIfNecessary()) {
				colCount += cell->getColumnCount();
			}
		}
	}
	return colCount;
}

void AccessibleHTML$TableElementInfo$TableRowElementInfo::invalidate(bool first) {
	$AccessibleHTML$ElementInfo::invalidate(first);
	$nc($(getParent()))->invalidate(true);
}

void AccessibleHTML$TableElementInfo$TableRowElementInfo::updateGrid(int32_t row) {
	$useLocalCurrentObjectStackCache();
	if (validateIfNecessary()) {
		bool emptyRow = false;
		while (!emptyRow) {
			for (int32_t counter = 0; counter < $nc($nc(this->this$1->grid)->get(row))->length; ++counter) {
				if ($nc($nc(this->this$1->grid)->get(row))->get(counter) == nullptr) {
					emptyRow = true;
					break;
				}
			}
			if (!emptyRow) {
				++row;
			}
		}
		{
			int32_t col = 0;
			int32_t counter = 0;
			for (; counter < getChildCount(); ++counter) {
				$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, cell, $cast($AccessibleHTML$TableElementInfo$TableCellElementInfo, getChild(counter)));
				while ($nc($nc(this->this$1->grid)->get(row))->get(col) != nullptr) {
					++col;
				}
				for (int32_t rowCount = $nc(cell)->getRowCount() - 1; rowCount >= 0; --rowCount) {
					for (int32_t colCount = cell->getColumnCount() - 1; colCount >= 0; --colCount) {
						$nc($nc(this->this$1->grid)->get(row + rowCount))->set(col + colCount, cell);
					}
				}
				col += cell->getColumnCount();
			}
		}
	}
}

int32_t AccessibleHTML$TableElementInfo$TableRowElementInfo::getColumnCount(int32_t rowspan) {
	$useLocalCurrentObjectStackCache();
	if (validateIfNecessary()) {
		int32_t cols = 0;
		for (int32_t counter = 0; counter < getChildCount(); ++counter) {
			$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, cell, $cast($AccessibleHTML$TableElementInfo$TableCellElementInfo, getChild(counter)));
			if ($nc(cell)->getRowCount() >= rowspan) {
				cols += cell->getColumnCount();
			}
		}
		return cols;
	}
	return 0;
}

AccessibleHTML$TableElementInfo$TableRowElementInfo::AccessibleHTML$TableElementInfo$TableRowElementInfo() {
}

$Class* AccessibleHTML$TableElementInfo$TableRowElementInfo::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML$TableElementInfo$TableRowElementInfo, name, initialize, &_AccessibleHTML$TableElementInfo$TableRowElementInfo_ClassInfo_, allocate$AccessibleHTML$TableElementInfo$TableRowElementInfo);
	return class$;
}

$Class* AccessibleHTML$TableElementInfo$TableRowElementInfo::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax