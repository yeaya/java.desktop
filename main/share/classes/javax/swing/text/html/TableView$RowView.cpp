#include <javax/swing/text/html/TableView$RowView.h>

#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Math.h>
#include <java/util/BitSet.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/StyleSheet$BoxPainter.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <javax/swing/text/html/TableView$CellView.h>
#include <javax/swing/text/html/TableView.h>
#include <jcpp.h>

#undef EMPTY
#undef MAX_VALUE
#undef X_AXIS

using $ViewArray = $Array<::javax::swing::text::View>;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BitSet = ::java::util::BitSet;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $StyleSheet$BoxPainter = ::javax::swing::text::html::StyleSheet$BoxPainter;
using $TableView = ::javax::swing::text::html::TableView;
using $TableView$CellView = ::javax::swing::text::html::TableView$CellView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _TableView$RowView_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/TableView;", nullptr, $FINAL | $SYNTHETIC, $field(TableView$RowView, this$0)},
	{"painter", "Ljavax/swing/text/html/StyleSheet$BoxPainter;", nullptr, $PRIVATE, $field(TableView$RowView, painter)},
	{"attr", "Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE, $field(TableView$RowView, attr)},
	{"fillColumns", "Ljava/util/BitSet;", nullptr, 0, $field(TableView$RowView, fillColumns)},
	{"rowIndex", "I", nullptr, 0, $field(TableView$RowView, rowIndex)},
	{"viewIndex", "I", nullptr, 0, $field(TableView$RowView, viewIndex)},
	{"multiRowCells", "Z", nullptr, 0, $field(TableView$RowView, multiRowCells)},
	{}
};

$MethodInfo _TableView$RowView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/TableView;Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(TableView$RowView::*)($TableView*,$Element*)>(&TableView$RowView::init$))},
	{"calculateMajorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"calculateMinorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"clearFilledColumns", "()V", nullptr, 0},
	{"fillColumn", "(I)V", nullptr, 0},
	{"findViewAtPoint", "(IILjava/awt/Rectangle;)Ljavax/swing/text/View;", nullptr, 0},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getColumnCount", "()I", nullptr, 0},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"getResizeWeight", "(I)I", nullptr, $PUBLIC},
	{"getStyleSheet", "()Ljavax/swing/text/html/StyleSheet;", nullptr, $PROTECTED},
	{"getViewAtPosition", "(ILjava/awt/Rectangle;)Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"isFilled", "(I)Z", nullptr, 0},
	{"layoutMajorAxis", "(II[I[I)V", nullptr, $PROTECTED},
	{"layoutMinorAxis", "(II[I[I)V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"preferenceChanged", "(Ljavax/swing/text/View;ZZ)V", nullptr, $PUBLIC},
	{"replace", "(II[Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"setPropertiesFromAttributes", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _TableView$RowView_InnerClassesInfo_[] = {
	{"javax.swing.text.html.TableView$RowView", "javax.swing.text.html.TableView", "RowView", $PUBLIC},
	{}
};

$ClassInfo _TableView$RowView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.TableView$RowView",
	"javax.swing.text.BoxView",
	nullptr,
	_TableView$RowView_FieldInfo_,
	_TableView$RowView_MethodInfo_,
	nullptr,
	nullptr,
	_TableView$RowView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.TableView"
};

$Object* allocate$TableView$RowView($Class* clazz) {
	return $of($alloc(TableView$RowView));
}

void TableView$RowView::init$($TableView* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$BoxView::init$(elem, $View::X_AXIS);
	$set(this, fillColumns, $new($BitSet));
	this->setPropertiesFromAttributes();
}

void TableView$RowView::clearFilledColumns() {
	$init($TableView);
	$nc(this->fillColumns)->and$($TableView::EMPTY);
}

void TableView$RowView::fillColumn(int32_t col) {
	$nc(this->fillColumns)->set(col);
}

bool TableView$RowView::isFilled(int32_t col) {
	return $nc(this->fillColumns)->get(col);
}

int32_t TableView$RowView::getColumnCount() {
	int32_t nfill = 0;
	int32_t n = $nc(this->fillColumns)->size();
	for (int32_t i = 0; i < n; ++i) {
		if ($nc(this->fillColumns)->get(i)) {
			++nfill;
		}
	}
	return getViewCount() + nfill;
}

$AttributeSet* TableView$RowView::getAttributes() {
	return this->attr;
}

$View* TableView$RowView::findViewAtPoint(int32_t x, int32_t y, $Rectangle* alloc) {
	$useLocalCurrentObjectStackCache();
	int32_t n = getViewCount();
	for (int32_t i = 0; i < n; ++i) {
		if ($nc($(getChildAllocation(i, alloc)))->contains((double)x, (double)y)) {
			childAllocation(i, alloc);
			return getView(i);
		}
	}
	return nullptr;
}

$StyleSheet* TableView$RowView::getStyleSheet() {
	$var($HTMLDocument, doc, $cast($HTMLDocument, getDocument()));
	return $nc(doc)->getStyleSheet();
}

void TableView$RowView::preferenceChanged($View* child, bool width, bool height) {
	$useLocalCurrentObjectStackCache();
	$BoxView::preferenceChanged(child, width, height);
	if (this->this$0->multiRowCells && height) {
		for (int32_t i = this->rowIndex - 1; i >= 0; --i) {
			$var(TableView$RowView, rv, this->this$0->getRow(i));
			if ($nc(rv)->multiRowCells) {
				rv->preferenceChanged(nullptr, false, true);
				break;
			}
		}
	}
}

$SizeRequirements* TableView$RowView::calculateMajorAxisRequirements(int32_t axis, $SizeRequirements* r) {
	$var($SizeRequirements, req, $new($SizeRequirements));
	req->minimum = $nc(this->this$0->totalColumnRequirements)->minimum;
	req->maximum = $nc(this->this$0->totalColumnRequirements)->maximum;
	req->preferred = $nc(this->this$0->totalColumnRequirements)->preferred;
	req->alignment = 0.0f;
	return req;
}

float TableView$RowView::getMinimumSpan(int32_t axis) {
	float value = 0.0;
	if (axis == $View::X_AXIS) {
		int32_t var$0 = $nc(this->this$0->totalColumnRequirements)->minimum + getLeftInset();
		value = (float)(var$0 + getRightInset());
	} else {
		value = $BoxView::getMinimumSpan(axis);
	}
	return value;
}

float TableView$RowView::getMaximumSpan(int32_t axis) {
	float value = 0.0;
	if (axis == $View::X_AXIS) {
		value = (float)$Integer::MAX_VALUE;
	} else {
		value = $BoxView::getMaximumSpan(axis);
	}
	return value;
}

float TableView$RowView::getPreferredSpan(int32_t axis) {
	float value = 0.0;
	if (axis == $View::X_AXIS) {
		int32_t var$0 = $nc(this->this$0->totalColumnRequirements)->preferred + getLeftInset();
		value = (float)(var$0 + getRightInset());
	} else {
		value = $BoxView::getPreferredSpan(axis);
	}
	return value;
}

void TableView$RowView::changedUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$BoxView::changedUpdate(e, a, f);
	int32_t pos = $nc(e)->getOffset();
	bool var$0 = pos <= getStartOffset();
	if (var$0) {
		int32_t var$1 = (pos + e->getLength());
		var$0 = var$1 >= getEndOffset();
	}
	if (var$0) {
		this->setPropertiesFromAttributes();
	}
}

void TableView$RowView::paint($Graphics* g, $Shape* allocation) {
	$var($Rectangle, a, $cast($Rectangle, allocation));
	$nc(this->painter)->paint(g, (float)$nc(a)->x, (float)a->y, (float)a->width, (float)a->height, this);
	$BoxView::paint(g, a);
}

void TableView$RowView::replace(int32_t offset, int32_t length, $ViewArray* views) {
	$BoxView::replace(offset, length, views);
	this->this$0->invalidateGrid();
}

$SizeRequirements* TableView$RowView::calculateMinorAxisRequirements(int32_t axis, $SizeRequirements* r$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SizeRequirements, r, r$renamed);
	int64_t min = 0;
	int64_t pref = 0;
	int64_t max = 0;
	this->multiRowCells = false;
	int32_t n = getViewCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		if (this->this$0->getRowsOccupied(v) > 1) {
			this->multiRowCells = true;
			max = $Math::max((int64_t)$cast(int32_t, $nc(v)->getMaximumSpan(axis)), max);
		} else {
			min = $Math::max((int64_t)$cast(int32_t, $nc(v)->getMinimumSpan(axis)), min);
			pref = $Math::max((int64_t)$cast(int32_t, $nc(v)->getPreferredSpan(axis)), pref);
			max = $Math::max((int64_t)$cast(int32_t, $nc(v)->getMaximumSpan(axis)), max);
		}
	}
	if (r == nullptr) {
		$assign(r, $new($SizeRequirements));
		r->alignment = 0.5f;
	}
	$nc(r)->preferred = (int32_t)pref;
	r->minimum = (int32_t)min;
	r->maximum = (int32_t)max;
	return r;
}

void TableView$RowView::layoutMajorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	$useLocalCurrentObjectStackCache();
	int32_t col = 0;
	int32_t ncells = getViewCount();
	for (int32_t cell = 0; cell < ncells; ++cell) {
		$var($View, cv, getView(cell));
		if (this->this$0->skipComments && !($instanceOf($TableView$CellView, cv))) {
			continue;
		}
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
					(*spans)[cell] += this->this$0->cellSpacing;
				}
			}
			col += colSpan - 1;
		}
		++col;
	}
}

void TableView$RowView::layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
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
			int32_t row0 = this->rowIndex;
			int32_t row1 = $Math::min(this->rowIndex + rowSpan - 1, this->this$0->getRowCount() - 1);
			$nc(spans)->set(cell, this->this$0->getMultiRowSpan(row0, row1));
		}
		if (colSpan > 1) {
			col += colSpan - 1;
		}
	}
}

int32_t TableView$RowView::getResizeWeight(int32_t axis) {
	return 1;
}

$View* TableView$RowView::getViewAtPosition(int32_t pos, $Rectangle* a) {
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

void TableView$RowView::setPropertiesFromAttributes() {
	$var($StyleSheet, sheet, getStyleSheet());
	$set(this, attr, $nc(sheet)->getViewAttributes(this));
	$set(this, painter, sheet->getBoxPainter(this->attr));
}

TableView$RowView::TableView$RowView() {
}

$Class* TableView$RowView::load$($String* name, bool initialize) {
	$loadClass(TableView$RowView, name, initialize, &_TableView$RowView_ClassInfo_, allocate$TableView$RowView);
	return class$;
}

$Class* TableView$RowView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax