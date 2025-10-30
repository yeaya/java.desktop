#include <javax/swing/text/TableView$TableRow.h>

#include <java/awt/Rectangle.h>
#include <java/util/BitSet.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/TableView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef EMPTY
#undef MAX_VALUE
#undef X_AXIS
#undef Y_AXIS

using $ViewArray = $Array<::javax::swing::text::View>;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $BitSet = ::java::util::BitSet;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $TableView = ::javax::swing::text::TableView;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _TableView$TableRow_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/TableView;", nullptr, $FINAL | $SYNTHETIC, $field(TableView$TableRow, this$0)},
	{"fillColumns", "Ljava/util/BitSet;", nullptr, 0, $field(TableView$TableRow, fillColumns)},
	{"row", "I", nullptr, 0, $field(TableView$TableRow, row)},
	{}
};

$MethodInfo _TableView$TableRow_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/TableView;Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(TableView$TableRow::*)($TableView*,$Element*)>(&TableView$TableRow::init$))},
	{"calculateMajorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"clearFilledColumns", "()V", nullptr, 0},
	{"fillColumn", "(I)V", nullptr, 0},
	{"getColumnCount", "()I", nullptr, 0},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"getResizeWeight", "(I)I", nullptr, $PUBLIC},
	{"getRow", "()I", nullptr, 0},
	{"getViewAtPosition", "(ILjava/awt/Rectangle;)Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"isFilled", "(I)Z", nullptr, 0},
	{"layoutMajorAxis", "(II[I[I)V", nullptr, $PROTECTED},
	{"layoutMinorAxis", "(II[I[I)V", nullptr, $PROTECTED},
	{"replace", "(II[Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"setRow", "(I)V", nullptr, 0},
	{}
};

$InnerClassInfo _TableView$TableRow_InnerClassesInfo_[] = {
	{"javax.swing.text.TableView$TableRow", "javax.swing.text.TableView", "TableRow", $PUBLIC},
	{}
};

$ClassInfo _TableView$TableRow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.TableView$TableRow",
	"javax.swing.text.BoxView",
	nullptr,
	_TableView$TableRow_FieldInfo_,
	_TableView$TableRow_MethodInfo_,
	nullptr,
	nullptr,
	_TableView$TableRow_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.TableView"
};

$Object* allocate$TableView$TableRow($Class* clazz) {
	return $of($alloc(TableView$TableRow));
}

void TableView$TableRow::init$($TableView* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$BoxView::init$(elem, $View::X_AXIS);
	$set(this, fillColumns, $new($BitSet));
}

void TableView$TableRow::clearFilledColumns() {
	$init($TableView);
	$nc(this->fillColumns)->and$($TableView::EMPTY);
}

void TableView$TableRow::fillColumn(int32_t col) {
	$nc(this->fillColumns)->set(col);
}

bool TableView$TableRow::isFilled(int32_t col) {
	return $nc(this->fillColumns)->get(col);
}

int32_t TableView$TableRow::getRow() {
	return this->row;
}

void TableView$TableRow::setRow(int32_t row) {
	this->row = row;
}

int32_t TableView$TableRow::getColumnCount() {
	int32_t nfill = 0;
	int32_t n = $nc(this->fillColumns)->size();
	for (int32_t i = 0; i < n; ++i) {
		if ($nc(this->fillColumns)->get(i)) {
			++nfill;
		}
	}
	return getViewCount() + nfill;
}

void TableView$TableRow::replace(int32_t offset, int32_t length, $ViewArray* views) {
	$BoxView::replace(offset, length, views);
	this->this$0->invalidateGrid();
}

$SizeRequirements* TableView$TableRow::calculateMajorAxisRequirements(int32_t axis, $SizeRequirements* r) {
	$var($SizeRequirements, req, $new($SizeRequirements));
	req->minimum = $nc(this->this$0->totalColumnRequirements)->minimum;
	req->maximum = $nc(this->this$0->totalColumnRequirements)->maximum;
	req->preferred = $nc(this->this$0->totalColumnRequirements)->preferred;
	req->alignment = 0.0f;
	return req;
}

float TableView$TableRow::getMinimumSpan(int32_t axis) {
	float value = 0.0;
	if (axis == $View::X_AXIS) {
		int32_t var$0 = $nc(this->this$0->totalColumnRequirements)->minimum + getLeftInset();
		value = (float)(var$0 + getRightInset());
	} else {
		value = $BoxView::getMinimumSpan(axis);
	}
	return value;
}

float TableView$TableRow::getMaximumSpan(int32_t axis) {
	float value = 0.0;
	if (axis == $View::X_AXIS) {
		value = (float)$Integer::MAX_VALUE;
	} else {
		value = $BoxView::getMaximumSpan(axis);
	}
	return value;
}

float TableView$TableRow::getPreferredSpan(int32_t axis) {
	float value = 0.0;
	if (axis == $View::X_AXIS) {
		int32_t var$0 = $nc(this->this$0->totalColumnRequirements)->preferred + getLeftInset();
		value = (float)(var$0 + getRightInset());
	} else {
		value = $BoxView::getPreferredSpan(axis);
	}
	return value;
}

void TableView$TableRow::layoutMajorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	$useLocalCurrentObjectStackCache();
	int32_t col = 0;
	int32_t ncells = getViewCount();
	for (int32_t cell = 0; cell < ncells; ++cell, ++col) {
		$var($View, cv, getView(cell));
		for (; isFilled(col); ++col) {
		}
		int32_t colSpan = this->this$0->getColumnsOccupied(cv);
		$nc(spans)->set(cell, $nc(this->this$0->columnSpans)->get(col));
		$nc(offsets)->set(cell, $nc(this->this$0->columnOffsets)->get(col));
		if (colSpan > 1) {
			int32_t n = $nc(this->this$0->columnSpans)->length;
			for (int32_t j = 1; j < colSpan; ++j) {
				if ((col + j) < n) {
					(*spans)[cell] += $nc(this->this$0->columnSpans)->get(col + j);
				}
			}
			col += colSpan - 1;
		}
	}
}

void TableView$TableRow::layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	$useLocalCurrentObjectStackCache();
	$BoxView::layoutMinorAxis(targetSpan, axis, offsets, spans);
	int32_t col = 0;
	int32_t ncells = getViewCount();
	for (int32_t cell = 0; cell < ncells; ++cell, ++col) {
		$var($View, cv, getView(cell));
		for (; isFilled(col); ++col) {
		}
		int32_t colSpan = this->this$0->getColumnsOccupied(cv);
		int32_t rowSpan = this->this$0->getRowsOccupied(cv);
		if (rowSpan > 1) {
			for (int32_t j = 1; j < rowSpan; ++j) {
				int32_t row = getRow() + j;
				if (row < this->this$0->getViewCount()) {
					int32_t span = this->this$0->getSpan($View::Y_AXIS, getRow() + j);
					(*$nc(spans))[cell] += span;
				}
			}
		}
		if (colSpan > 1) {
			col += colSpan - 1;
		}
	}
}

int32_t TableView$TableRow::getResizeWeight(int32_t axis) {
	return 1;
}

$View* TableView$TableRow::getViewAtPosition(int32_t pos, $Rectangle* a) {
	$useLocalCurrentObjectStackCache();
	int32_t n = getViewCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		int32_t p0 = $nc(v)->getStartOffset();
		int32_t p1 = v->getEndOffset();
		if ((pos >= p0) && (pos < p1)) {
			if (a != nullptr) {
				childAllocation(i, a);
			}
			return v;
		}
	}
	if (pos == getEndOffset()) {
		$var($View, v, getView(n - 1));
		if (a != nullptr) {
			this->childAllocation(n - 1, a);
		}
		return v;
	}
	return nullptr;
}

TableView$TableRow::TableView$TableRow() {
}

$Class* TableView$TableRow::load$($String* name, bool initialize) {
	$loadClass(TableView$TableRow, name, initialize, &_TableView$TableRow_ClassInfo_, allocate$TableView$TableRow);
	return class$;
}

$Class* TableView$TableRow::class$ = nullptr;

		} // text
	} // swing
} // javax