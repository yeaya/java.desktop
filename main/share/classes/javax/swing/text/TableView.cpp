#include <javax/swing/text/TableView.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/Math.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/BitSet.h>
#include <java/util/Vector.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/TableView$TableCell.h>
#include <javax/swing/text/TableView$TableRow.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <jcpp.h>

#undef COLSPAN
#undef EMPTY
#undef MAX_VALUE
#undef ROWSPAN
#undef Y_AXIS

using $SizeRequirementsArray = $Array<::javax::swing::SizeRequirements>;
using $ViewArray = $Array<::javax::swing::text::View>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $BitSet = ::java::util::BitSet;
using $Vector = ::java::util::Vector;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $TableView$TableCell = ::javax::swing::text::TableView$TableCell;
using $TableView$TableRow = ::javax::swing::text::TableView$TableRow;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;

namespace javax {
	namespace swing {
		namespace text {

$CompoundAttribute _TableView_MethodAnnotations_createTableCell6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _TableView_FieldInfo_[] = {
	{"columnSpans", "[I", nullptr, 0, $field(TableView, columnSpans)},
	{"columnOffsets", "[I", nullptr, 0, $field(TableView, columnOffsets)},
	{"totalColumnRequirements", "Ljavax/swing/SizeRequirements;", nullptr, 0, $field(TableView, totalColumnRequirements)},
	{"columnRequirements", "[Ljavax/swing/SizeRequirements;", nullptr, 0, $field(TableView, columnRequirements)},
	{"rows", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/TableView$TableRow;>;", 0, $field(TableView, rows)},
	{"gridValid", "Z", nullptr, 0, $field(TableView, gridValid)},
	{"EMPTY", "Ljava/util/BitSet;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TableView, EMPTY)},
	{}
};

$MethodInfo _TableView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(TableView::*)($Element*)>(&TableView::init$))},
	{"addFill", "(II)V", nullptr, 0},
	{"calculateColumnRequirements", "(I)V", nullptr, 0},
	{"calculateMinorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"checkMultiColumnCell", "(IIILjavax/swing/text/View;)V", nullptr, 0},
	{"checkSingleColumnCell", "(IILjavax/swing/text/View;)V", nullptr, 0},
	{"createTableCell", "(Ljavax/swing/text/Element;)Ljavax/swing/text/TableView$TableCell;", nullptr, $PROTECTED | $DEPRECATED, nullptr, nullptr, nullptr, _TableView_MethodAnnotations_createTableCell6},
	{"createTableRow", "(Ljavax/swing/text/Element;)Ljavax/swing/text/TableView$TableRow;", nullptr, $PROTECTED},
	{"forwardUpdate", "(Ljavax/swing/event/DocumentEvent$ElementChange;Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED},
	{"getColumnCount", "()I", nullptr, 0},
	{"getColumnSpan", "(I)I", nullptr, 0},
	{"getColumnsOccupied", "(Ljavax/swing/text/View;)I", nullptr, 0},
	{"getRow", "(I)Ljavax/swing/text/TableView$TableRow;", nullptr, 0},
	{"getRowCount", "()I", nullptr, 0},
	{"getRowSpan", "(I)I", nullptr, 0},
	{"getRowsOccupied", "(Ljavax/swing/text/View;)I", nullptr, 0},
	{"getViewAtPosition", "(ILjava/awt/Rectangle;)Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"invalidateGrid", "()V", nullptr, 0},
	{"layoutColumns", "(I[I[I[Ljavax/swing/SizeRequirements;)V", nullptr, $PROTECTED},
	{"layoutMinorAxis", "(II[I[I)V", nullptr, $PROTECTED},
	{"replace", "(II[Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"updateGrid", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _TableView_InnerClassesInfo_[] = {
	{"javax.swing.text.TableView$GridCell", "javax.swing.text.TableView", "GridCell", $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.text.TableView$TableCell", "javax.swing.text.TableView", "TableCell", $PUBLIC},
	{"javax.swing.text.TableView$TableRow", "javax.swing.text.TableView", "TableRow", $PUBLIC},
	{}
};

$ClassInfo _TableView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.TableView",
	"javax.swing.text.BoxView",
	nullptr,
	_TableView_FieldInfo_,
	_TableView_MethodInfo_,
	nullptr,
	nullptr,
	_TableView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.TableView$GridCell,javax.swing.text.TableView$TableCell,javax.swing.text.TableView$TableRow"
};

$Object* allocate$TableView($Class* clazz) {
	return $of($alloc(TableView));
}

$BitSet* TableView::EMPTY = nullptr;

void TableView::init$($Element* elem) {
	$BoxView::init$(elem, $View::Y_AXIS);
	$set(this, rows, $new($Vector));
	this->gridValid = false;
	$set(this, totalColumnRequirements, $new($SizeRequirements));
}

$TableView$TableRow* TableView::createTableRow($Element* elem) {
	return $new($TableView$TableRow, this, elem);
}

$TableView$TableCell* TableView::createTableCell($Element* elem) {
	return $new($TableView$TableCell, this, elem);
}

int32_t TableView::getColumnCount() {
	return $nc(this->columnSpans)->length;
}

int32_t TableView::getColumnSpan(int32_t col) {
	return $nc(this->columnSpans)->get(col);
}

int32_t TableView::getRowCount() {
	return $nc(this->rows)->size();
}

int32_t TableView::getRowSpan(int32_t row) {
	$var($View, rv, getRow(row));
	if (rv != nullptr) {
		return $cast(int32_t, rv->getPreferredSpan($View::Y_AXIS));
	}
	return 0;
}

$TableView$TableRow* TableView::getRow(int32_t row) {
	if (row < $nc(this->rows)->size()) {
		return $cast($TableView$TableRow, $nc(this->rows)->elementAt(row));
	}
	return nullptr;
}

int32_t TableView::getColumnsOccupied($View* v) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, a, $nc($($nc(v)->getElement()))->getAttributes());
	$init($HTML$Attribute);
	$var($String, s, $cast($String, $nc(a)->getAttribute($HTML$Attribute::COLSPAN)));
	if (s != nullptr) {
		try {
			return $Integer::parseInt(s);
		} catch ($NumberFormatException& nfe) {
		}
	}
	return 1;
}

int32_t TableView::getRowsOccupied($View* v) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeSet, a, $nc($($nc(v)->getElement()))->getAttributes());
	$init($HTML$Attribute);
	$var($String, s, $cast($String, $nc(a)->getAttribute($HTML$Attribute::ROWSPAN)));
	if (s != nullptr) {
		try {
			return $Integer::parseInt(s);
		} catch ($NumberFormatException& nfe) {
		}
	}
	return 1;
}

void TableView::invalidateGrid() {
	this->gridValid = false;
}

void TableView::forwardUpdate($DocumentEvent$ElementChange* ec, $DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	$BoxView::forwardUpdate(ec, e, a, f);
	if (a != nullptr) {
		$var($Component, c, getContainer());
		if (c != nullptr) {
			$var($Rectangle, alloc, ($instanceOf($Rectangle, a)) ? $cast($Rectangle, a) : a->getBounds());
			c->repaint($nc(alloc)->x, alloc->y, alloc->width, alloc->height);
		}
	}
}

void TableView::replace(int32_t offset, int32_t length, $ViewArray* views) {
	$BoxView::replace(offset, length, views);
	invalidateGrid();
}

void TableView::updateGrid() {
	$useLocalCurrentObjectStackCache();
	if (!this->gridValid) {
		$nc(this->rows)->removeAllElements();
		int32_t n = getViewCount();
		for (int32_t i = 0; i < n; ++i) {
			$var($View, v, getView(i));
			if ($instanceOf($TableView$TableRow, v)) {
				$nc(this->rows)->addElement($cast($TableView$TableRow, v));
				$var($TableView$TableRow, rv, $cast($TableView$TableRow, v));
				$nc(rv)->clearFilledColumns();
				rv->setRow(i);
			}
		}
		int32_t maxColumns = 0;
		int32_t nrows = $nc(this->rows)->size();
		for (int32_t row = 0; row < nrows; ++row) {
			$var($TableView$TableRow, rv, getRow(row));
			int32_t col = 0;
			for (int32_t cell = 0; cell < $nc(rv)->getViewCount(); ++cell, ++col) {
				$var($View, cv, rv->getView(cell));
				for (; rv->isFilled(col); ++col) {
				}
				int32_t rowSpan = getRowsOccupied(cv);
				int32_t colSpan = getColumnsOccupied(cv);
				if ((colSpan > 1) || (rowSpan > 1)) {
					int32_t rowLimit = row + rowSpan;
					int32_t colLimit = col + colSpan;
					for (int32_t i = row; i < rowLimit; ++i) {
						for (int32_t j = col; j < colLimit; ++j) {
							if (i != row || j != col) {
								addFill(i, j);
							}
						}
					}
					if (colSpan > 1) {
						col += colSpan - 1;
					}
				}
			}
			maxColumns = $Math::max(maxColumns, col);
		}
		$set(this, columnSpans, $new($ints, maxColumns));
		$set(this, columnOffsets, $new($ints, maxColumns));
		$set(this, columnRequirements, $new($SizeRequirementsArray, maxColumns));
		for (int32_t i = 0; i < maxColumns; ++i) {
			$nc(this->columnRequirements)->set(i, $$new($SizeRequirements));
		}
		this->gridValid = true;
	}
}

void TableView::addFill(int32_t row, int32_t col) {
	$var($TableView$TableRow, rv, getRow(row));
	if (rv != nullptr) {
		rv->fillColumn(col);
	}
}

void TableView::layoutColumns(int32_t targetSpan, $ints* offsets, $ints* spans, $SizeRequirementsArray* reqs) {
	$SizeRequirements::calculateTiledPositions(targetSpan, nullptr, reqs, offsets, spans);
}

void TableView::layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	$useLocalCurrentObjectStackCache();
	updateGrid();
	int32_t n = getRowCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($TableView$TableRow, row, getRow(i));
		$nc(row)->layoutChanged(axis);
	}
	layoutColumns(targetSpan, this->columnOffsets, this->columnSpans, this->columnRequirements);
	$BoxView::layoutMinorAxis(targetSpan, axis, offsets, spans);
}

$SizeRequirements* TableView::calculateMinorAxisRequirements(int32_t axis, $SizeRequirements* r$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SizeRequirements, r, r$renamed);
	updateGrid();
	calculateColumnRequirements(axis);
	if (r == nullptr) {
		$assign(r, $new($SizeRequirements));
	}
	int64_t min = 0;
	int64_t pref = 0;
	int64_t max = 0;
	{
		$var($SizeRequirementsArray, arr$, this->columnRequirements);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($SizeRequirements, req, arr$->get(i$));
			{
				min += $nc(req)->minimum;
				pref += req->preferred;
				max += req->maximum;
			}
		}
	}
	$nc(r)->minimum = (int32_t)min;
	r->preferred = (int32_t)pref;
	r->maximum = (int32_t)max;
	r->alignment = (float)0;
	$nc(this->totalColumnRequirements)->minimum = r->minimum;
	$nc(this->totalColumnRequirements)->preferred = r->preferred;
	$nc(this->totalColumnRequirements)->maximum = r->maximum;
	return r;
}

void TableView::calculateColumnRequirements(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	{
		$var($SizeRequirementsArray, arr$, this->columnRequirements);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($SizeRequirements, req, arr$->get(i$));
			{
				$nc(req)->minimum = 0;
				req->preferred = 0;
				req->maximum = $Integer::MAX_VALUE;
			}
		}
	}
	bool hasMultiColumn = false;
	int32_t nrows = getRowCount();
	for (int32_t i = 0; i < nrows; ++i) {
		$var($TableView$TableRow, row, getRow(i));
		int32_t col = 0;
		int32_t ncells = $nc(row)->getViewCount();
		for (int32_t cell = 0; cell < ncells; ++cell, ++col) {
			$var($View, cv, row->getView(cell));
			for (; row->isFilled(col); ++col) {
			}
			int32_t rowSpan = getRowsOccupied(cv);
			int32_t colSpan = getColumnsOccupied(cv);
			if (colSpan == 1) {
				checkSingleColumnCell(axis, col, cv);
			} else {
				hasMultiColumn = true;
				col += colSpan - 1;
			}
		}
	}
	if (hasMultiColumn) {
		for (int32_t i = 0; i < nrows; ++i) {
			$var($TableView$TableRow, row, getRow(i));
			int32_t col = 0;
			int32_t ncells = $nc(row)->getViewCount();
			for (int32_t cell = 0; cell < ncells; ++cell, ++col) {
				$var($View, cv, row->getView(cell));
				for (; row->isFilled(col); ++col) {
				}
				int32_t colSpan = getColumnsOccupied(cv);
				if (colSpan > 1) {
					checkMultiColumnCell(axis, col, colSpan, cv);
					col += colSpan - 1;
				}
			}
		}
	}
}

void TableView::checkSingleColumnCell(int32_t axis, int32_t col, $View* v) {
	$var($SizeRequirements, req, $nc(this->columnRequirements)->get(col));
	$nc(req)->minimum = $Math::max($cast(int32_t, $nc(v)->getMinimumSpan(axis)), req->minimum);
	req->preferred = $Math::max($cast(int32_t, $nc(v)->getPreferredSpan(axis)), req->preferred);
	req->maximum = $Math::max($cast(int32_t, $nc(v)->getMaximumSpan(axis)), req->maximum);
}

void TableView::checkMultiColumnCell(int32_t axis, int32_t col, int32_t ncols, $View* v) {
	$useLocalCurrentObjectStackCache();
	int64_t min = 0;
	int64_t pref = 0;
	int64_t max = 0;
	for (int32_t i = 0; i < ncols; ++i) {
		$var($SizeRequirements, req, $nc(this->columnRequirements)->get(col + i));
		min += $nc(req)->minimum;
		pref += req->preferred;
		max += req->maximum;
	}
	int32_t cmin = $cast(int32_t, $nc(v)->getMinimumSpan(axis));
	if (cmin > min) {
		$var($SizeRequirementsArray, reqs, $new($SizeRequirementsArray, ncols));
		for (int32_t i = 0; i < ncols; ++i) {
			$var($SizeRequirements, r, reqs->set(i, $nc(this->columnRequirements)->get(col + i)));
			$nc(r)->maximum = $Math::max(r->maximum, $cast(int32_t, v->getMaximumSpan(axis)));
		}
		$var($ints, spans, $new($ints, ncols));
		$var($ints, offsets, $new($ints, ncols));
		$SizeRequirements::calculateTiledPositions(cmin, nullptr, reqs, offsets, spans);
		for (int32_t i = 0; i < ncols; ++i) {
			$var($SizeRequirements, req, reqs->get(i));
			$nc(req)->minimum = $Math::max(spans->get(i), req->minimum);
			req->preferred = $Math::max(req->minimum, req->preferred);
			req->maximum = $Math::max(req->preferred, req->maximum);
		}
	}
	int32_t cpref = $cast(int32_t, v->getPreferredSpan(axis));
	if (cpref > pref) {
		$var($SizeRequirementsArray, reqs, $new($SizeRequirementsArray, ncols));
		for (int32_t i = 0; i < ncols; ++i) {
			$var($SizeRequirements, r, reqs->set(i, $nc(this->columnRequirements)->get(col + i)));
		}
		$var($ints, spans, $new($ints, ncols));
		$var($ints, offsets, $new($ints, ncols));
		$SizeRequirements::calculateTiledPositions(cpref, nullptr, reqs, offsets, spans);
		for (int32_t i = 0; i < ncols; ++i) {
			$var($SizeRequirements, req, reqs->get(i));
			$nc(req)->preferred = $Math::max(spans->get(i), req->preferred);
			req->maximum = $Math::max(req->preferred, req->maximum);
		}
	}
}

$View* TableView::getViewAtPosition(int32_t pos, $Rectangle* a) {
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

void clinit$TableView($Class* class$) {
	$assignStatic(TableView::EMPTY, $new($BitSet));
}

TableView::TableView() {
}

$Class* TableView::load$($String* name, bool initialize) {
	$loadClass(TableView, name, initialize, &_TableView_ClassInfo_, clinit$TableView, allocate$TableView);
	return class$;
}

$Class* TableView::class$ = nullptr;

		} // text
	} // swing
} // javax