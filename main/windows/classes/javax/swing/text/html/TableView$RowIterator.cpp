#include <javax/swing/text/html/TableView$RowIterator.h>

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
#include <java/util/Vector.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/TableView$RowView.h>
#include <javax/swing/text/html/TableView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $View = ::javax::swing::text::View;
using $CSS$LayoutIterator = ::javax::swing::text::html::CSS$LayoutIterator;
using $TableView = ::javax::swing::text::html::TableView;
using $TableView$RowView = ::javax::swing::text::html::TableView$RowView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _TableView$RowIterator_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/TableView;", nullptr, $FINAL | $SYNTHETIC, $field(TableView$RowIterator, this$0)},
	{"row", "I", nullptr, $PRIVATE, $field(TableView$RowIterator, row)},
	{"adjustments", "[I", nullptr, $PRIVATE, $field(TableView$RowIterator, adjustments)},
	{"offsets", "[I", nullptr, $PRIVATE, $field(TableView$RowIterator, offsets)},
	{"spans", "[I", nullptr, $PRIVATE, $field(TableView$RowIterator, spans)},
	{}
};

$MethodInfo _TableView$RowIterator_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/TableView;)V", nullptr, 0, $method(static_cast<void(TableView$RowIterator::*)($TableView*)>(&TableView$RowIterator::init$))},
	{"adjustMultiRowSpan", "(III)V", nullptr, 0},
	{"getAdjustmentWeight", "()I", nullptr, $PUBLIC},
	{"getBorderWidth", "()F", nullptr, $PUBLIC},
	{"getCount", "()I", nullptr, $PUBLIC},
	{"getLeadingCollapseSpan", "()F", nullptr, $PUBLIC},
	{"getMaximumSpan", "(F)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(F)F", nullptr, $PUBLIC},
	{"getOffset", "()I", nullptr, $PUBLIC},
	{"getPreferredSpan", "(F)F", nullptr, $PUBLIC},
	{"getSpan", "()I", nullptr, $PUBLIC},
	{"getTrailingCollapseSpan", "()F", nullptr, $PUBLIC},
	{"setIndex", "(I)V", nullptr, $PUBLIC},
	{"setLayoutArrays", "([I[I)V", nullptr, 0},
	{"setOffset", "(I)V", nullptr, $PUBLIC},
	{"setSpan", "(I)V", nullptr, $PUBLIC},
	{"updateAdjustments", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _TableView$RowIterator_InnerClassesInfo_[] = {
	{"javax.swing.text.html.TableView$RowIterator", "javax.swing.text.html.TableView", "RowIterator", 0},
	{"javax.swing.text.html.CSS$LayoutIterator", "javax.swing.text.html.CSS", "LayoutIterator", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TableView$RowIterator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.TableView$RowIterator",
	"java.lang.Object",
	"javax.swing.text.html.CSS$LayoutIterator",
	_TableView$RowIterator_FieldInfo_,
	_TableView$RowIterator_MethodInfo_,
	nullptr,
	nullptr,
	_TableView$RowIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.TableView"
};

$Object* allocate$TableView$RowIterator($Class* clazz) {
	return $of($alloc(TableView$RowIterator));
}

void TableView$RowIterator::init$($TableView* this$0) {
	$set(this, this$0, this$0);
}

void TableView$RowIterator::updateAdjustments() {
	int32_t axis = 1;
	if (this->this$0->multiRowCells) {
		int32_t n = this->this$0->getRowCount();
		$set(this, adjustments, $new($ints, n));
		for (int32_t i = 0; i < n; ++i) {
			$var($TableView$RowView, rv, this->this$0->getRow(i));
			if ($nc(rv)->multiRowCells == true) {
				int32_t ncells = rv->getViewCount();
				for (int32_t j = 0; j < ncells; ++j) {
					$var($View, v, rv->getView(j));
					int32_t nrows = this->this$0->getRowsOccupied(v);
					if (nrows > 1) {
						int32_t spanNeeded = $cast(int32_t, $nc(v)->getPreferredSpan(axis));
						adjustMultiRowSpan(spanNeeded, nrows, i);
					}
				}
			}
		}
	} else {
		$set(this, adjustments, nullptr);
	}
}

void TableView$RowIterator::adjustMultiRowSpan(int32_t spanNeeded, int32_t nrows, int32_t rowIndex) {
	if ((rowIndex + nrows) > getCount()) {
		nrows = getCount() - rowIndex;
		if (nrows < 1) {
			return;
		}
	}
	int32_t span = 0;
	for (int32_t i = 0; i < nrows; ++i) {
		$var($TableView$RowView, rv, this->this$0->getRow(rowIndex + i));
		span += $nc(rv)->getPreferredSpan(1);
	}
	if (spanNeeded > span) {
		int32_t adjust = (spanNeeded - span);
		int32_t rowAdjust = $div(adjust, nrows);
		int32_t firstAdjust = rowAdjust + (adjust - (rowAdjust * nrows));
		$var($TableView$RowView, rv, this->this$0->getRow(rowIndex));
		$nc(this->adjustments)->set(rowIndex, $Math::max($nc(this->adjustments)->get(rowIndex), firstAdjust));
		for (int32_t i = 1; i < nrows; ++i) {
			$nc(this->adjustments)->set(rowIndex + i, $Math::max($nc(this->adjustments)->get(rowIndex + i), rowAdjust));
		}
	}
}

void TableView$RowIterator::setLayoutArrays($ints* offsets, $ints* spans) {
	$set(this, offsets, offsets);
	$set(this, spans, spans);
}

void TableView$RowIterator::setOffset(int32_t offs) {
	$var($TableView$RowView, rv, this->this$0->getRow(this->row));
	if (rv != nullptr) {
		$nc(this->offsets)->set(rv->viewIndex, offs);
	}
}

int32_t TableView$RowIterator::getOffset() {
	$var($TableView$RowView, rv, this->this$0->getRow(this->row));
	if (rv != nullptr) {
		return $nc(this->offsets)->get(rv->viewIndex);
	}
	return 0;
}

void TableView$RowIterator::setSpan(int32_t span) {
	$var($TableView$RowView, rv, this->this$0->getRow(this->row));
	if (rv != nullptr) {
		$nc(this->spans)->set(rv->viewIndex, span);
	}
}

int32_t TableView$RowIterator::getSpan() {
	$var($TableView$RowView, rv, this->this$0->getRow(this->row));
	if (rv != nullptr) {
		return $nc(this->spans)->get(rv->viewIndex);
	}
	return 0;
}

int32_t TableView$RowIterator::getCount() {
	return $nc(this->this$0->rows)->size();
}

void TableView$RowIterator::setIndex(int32_t i) {
	this->row = i;
}

float TableView$RowIterator::getMinimumSpan(float parentSpan) {
	return getPreferredSpan(parentSpan);
}

float TableView$RowIterator::getPreferredSpan(float parentSpan) {
	$var($TableView$RowView, rv, this->this$0->getRow(this->row));
	if (rv != nullptr) {
		int32_t adjust = (this->adjustments != nullptr) ? $nc(this->adjustments)->get(this->row) : 0;
		return rv->getPreferredSpan(this->this$0->getAxis()) + adjust;
	}
	return (float)0;
}

float TableView$RowIterator::getMaximumSpan(float parentSpan) {
	return getPreferredSpan(parentSpan);
}

float TableView$RowIterator::getBorderWidth() {
	return (float)this->this$0->borderWidth;
}

float TableView$RowIterator::getLeadingCollapseSpan() {
	return (float)this->this$0->cellSpacing;
}

float TableView$RowIterator::getTrailingCollapseSpan() {
	return (float)this->this$0->cellSpacing;
}

int32_t TableView$RowIterator::getAdjustmentWeight() {
	return 0;
}

TableView$RowIterator::TableView$RowIterator() {
}

$Class* TableView$RowIterator::load$($String* name, bool initialize) {
	$loadClass(TableView$RowIterator, name, initialize, &_TableView$RowIterator_ClassInfo_, allocate$TableView$RowIterator);
	return class$;
}

$Class* TableView$RowIterator::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax