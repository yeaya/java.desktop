#include <javax/swing/text/html/TableView$ColumnIterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS$LayoutIterator.h>
#include <javax/swing/text/html/CSS$LengthValue.h>
#include <javax/swing/text/html/TableView$RowView.h>
#include <javax/swing/text/html/TableView.h>
#include <jcpp.h>

#undef WIDTH

using $SizeRequirementsArray = $Array<::javax::swing::SizeRequirements>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $CompositeView = ::javax::swing::text::CompositeView;
using $View = ::javax::swing::text::View;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSS$LayoutIterator = ::javax::swing::text::html::CSS$LayoutIterator;
using $CSS$LengthValue = ::javax::swing::text::html::CSS$LengthValue;
using $TableView = ::javax::swing::text::html::TableView;
using $TableView$RowView = ::javax::swing::text::html::TableView$RowView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _TableView$ColumnIterator_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/TableView;", nullptr, $FINAL | $SYNTHETIC, $field(TableView$ColumnIterator, this$0)},
	{"col", "I", nullptr, $PRIVATE, $field(TableView$ColumnIterator, col)},
	{"percentages", "[I", nullptr, $PRIVATE, $field(TableView$ColumnIterator, percentages)},
	{"adjustmentWeights", "[I", nullptr, $PRIVATE, $field(TableView$ColumnIterator, adjustmentWeights)},
	{"offsets", "[I", nullptr, $PRIVATE, $field(TableView$ColumnIterator, offsets)},
	{"spans", "[I", nullptr, $PRIVATE, $field(TableView$ColumnIterator, spans)},
	{}
};

$MethodInfo _TableView$ColumnIterator_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/TableView;)V", nullptr, 0, $method(static_cast<void(TableView$ColumnIterator::*)($TableView*)>(&TableView$ColumnIterator::init$))},
	{"disablePercentages", "()V", nullptr, 0},
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
	{"setLayoutArrays", "([I[II)V", nullptr, $PUBLIC},
	{"setOffset", "(I)V", nullptr, $PUBLIC},
	{"setSpan", "(I)V", nullptr, $PUBLIC},
	{"updatePercentagesAndAdjustmentWeights", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(TableView$ColumnIterator::*)(int32_t)>(&TableView$ColumnIterator::updatePercentagesAndAdjustmentWeights))},
	{}
};

$InnerClassInfo _TableView$ColumnIterator_InnerClassesInfo_[] = {
	{"javax.swing.text.html.TableView$ColumnIterator", "javax.swing.text.html.TableView", "ColumnIterator", 0},
	{"javax.swing.text.html.CSS$LayoutIterator", "javax.swing.text.html.CSS", "LayoutIterator", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TableView$ColumnIterator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.TableView$ColumnIterator",
	"java.lang.Object",
	"javax.swing.text.html.CSS$LayoutIterator",
	_TableView$ColumnIterator_FieldInfo_,
	_TableView$ColumnIterator_MethodInfo_,
	nullptr,
	nullptr,
	_TableView$ColumnIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.TableView"
};

$Object* allocate$TableView$ColumnIterator($Class* clazz) {
	return $of($alloc(TableView$ColumnIterator));
}

void TableView$ColumnIterator::init$($TableView* this$0) {
	$set(this, this$0, this$0);
}

void TableView$ColumnIterator::disablePercentages() {
	$set(this, percentages, nullptr);
}

void TableView$ColumnIterator::updatePercentagesAndAdjustmentWeights(int32_t span) {
	$set(this, adjustmentWeights, $new($ints, $nc(this->this$0->columnRequirements)->length));
	for (int32_t i = 0; i < $nc(this->this$0->columnRequirements)->length; ++i) {
		$nc(this->adjustmentWeights)->set(i, 0);
	}
	if (this->this$0->relativeCells) {
		$set(this, percentages, $new($ints, $nc(this->this$0->columnRequirements)->length));
	} else {
		$set(this, percentages, nullptr);
	}
	int32_t nrows = this->this$0->getRowCount();
	for (int32_t rowIndex = 0; rowIndex < nrows; ++rowIndex) {
		$var($TableView$RowView, row, this->this$0->getRow(rowIndex));
		int32_t col = 0;
		int32_t ncells = $nc(row)->getViewCount();
		for (int32_t cell = 0; cell < ncells; ++cell, ++col) {
			$var($View, cv, row->getView(cell));
			for (; row->isFilled(col); ++col) {
			}
			int32_t rowSpan = this->this$0->getRowsOccupied(cv);
			int32_t colSpan = this->this$0->getColumnsOccupied(cv);
			$var($AttributeSet, a, $nc(cv)->getAttributes());
			$init($CSS$Attribute);
			$var($CSS$LengthValue, lv, $cast($CSS$LengthValue, $nc(a)->getAttribute($CSS$Attribute::WIDTH)));
			if (lv != nullptr) {
				int32_t len = $cast(int32_t, (lv->getValue((float)span) / colSpan + 0.5f));
				for (int32_t i = 0; i < colSpan; ++i) {
					if (lv->isPercentage()) {
						$nc(this->percentages)->set(col + i, $Math::max($nc(this->percentages)->get(col + i), len));
						$nc(this->adjustmentWeights)->set(col + i, $Math::max($nc(this->adjustmentWeights)->get(col + i), $CSS$LayoutIterator::WorstAdjustmentWeight));
					} else {
						$nc(this->adjustmentWeights)->set(col + i, $Math::max($nc(this->adjustmentWeights)->get(col + i), $CSS$LayoutIterator::WorstAdjustmentWeight - 1));
					}
				}
			}
			col += colSpan - 1;
		}
	}
}

void TableView$ColumnIterator::setLayoutArrays($ints* offsets, $ints* spans, int32_t targetSpan) {
	$set(this, offsets, offsets);
	$set(this, spans, spans);
	updatePercentagesAndAdjustmentWeights(targetSpan);
}

int32_t TableView$ColumnIterator::getCount() {
	return $nc(this->this$0->columnRequirements)->length;
}

void TableView$ColumnIterator::setIndex(int32_t i) {
	this->col = i;
}

void TableView$ColumnIterator::setOffset(int32_t offs) {
	$nc(this->offsets)->set(this->col, offs);
}

int32_t TableView$ColumnIterator::getOffset() {
	return $nc(this->offsets)->get(this->col);
}

void TableView$ColumnIterator::setSpan(int32_t span) {
	$nc(this->spans)->set(this->col, span);
}

int32_t TableView$ColumnIterator::getSpan() {
	return $nc(this->spans)->get(this->col);
}

float TableView$ColumnIterator::getMinimumSpan(float parentSpan) {
	return (float)$nc($nc(this->this$0->columnRequirements)->get(this->col))->minimum;
}

float TableView$ColumnIterator::getPreferredSpan(float parentSpan) {
	if ((this->percentages != nullptr) && ($nc(this->percentages)->get(this->col) != 0)) {
		return (float)$Math::max($nc(this->percentages)->get(this->col), $nc($nc(this->this$0->columnRequirements)->get(this->col))->minimum);
	}
	return (float)$nc($nc(this->this$0->columnRequirements)->get(this->col))->preferred;
}

float TableView$ColumnIterator::getMaximumSpan(float parentSpan) {
	return (float)$nc($nc(this->this$0->columnRequirements)->get(this->col))->maximum;
}

float TableView$ColumnIterator::getBorderWidth() {
	return (float)this->this$0->borderWidth;
}

float TableView$ColumnIterator::getLeadingCollapseSpan() {
	return (float)this->this$0->cellSpacing;
}

float TableView$ColumnIterator::getTrailingCollapseSpan() {
	return (float)this->this$0->cellSpacing;
}

int32_t TableView$ColumnIterator::getAdjustmentWeight() {
	return $nc(this->adjustmentWeights)->get(this->col);
}

TableView$ColumnIterator::TableView$ColumnIterator() {
}

$Class* TableView$ColumnIterator::load$($String* name, bool initialize) {
	$loadClass(TableView$ColumnIterator, name, initialize, &_TableView$ColumnIterator_ClassInfo_, allocate$TableView$ColumnIterator);
	return class$;
}

$Class* TableView$ColumnIterator::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax