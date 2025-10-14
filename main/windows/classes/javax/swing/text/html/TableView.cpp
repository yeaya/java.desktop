#include <javax/swing/text/html/TableView.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/BitSet.h>
#include <java/util/Vector.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/ParagraphView.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/html/BlockView.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS$LayoutIterator.h>
#include <javax/swing/text/html/CSS$LengthValue.h>
#include <javax/swing/text/html/CSS.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/HTML$Tag.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/ParagraphView.h>
#include <javax/swing/text/html/StyleSheet$BoxPainter.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <javax/swing/text/html/TableView$CellView.h>
#include <javax/swing/text/html/TableView$ColumnIterator.h>
#include <javax/swing/text/html/TableView$RowIterator.h>
#include <javax/swing/text/html/TableView$RowView.h>
#include <jcpp.h>

#undef BORDER_SPACING
#undef BORDER_TOP_WIDTH
#undef BOTTOM
#undef CAPTION
#undef CAPTION_SIDE
#undef COLSPAN
#undef EMPTY
#undef LEFT
#undef MAX_VALUE
#undef RIGHT
#undef ROWSPAN
#undef TD
#undef TEXT_ALIGN
#undef TH
#undef TOP
#undef TR
#undef WIDTH
#undef Y_AXIS

using $SizeRequirementsArray = $Array<::javax::swing::SizeRequirements>;
using $ViewArray = $Array<::javax::swing::text::View>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Arrays = ::java::util::Arrays;
using $BitSet = ::java::util::BitSet;
using $Vector = ::java::util::Vector;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $SwingConstants = ::javax::swing::SwingConstants;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $FlowView = ::javax::swing::text::FlowView;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $1ParagraphView = ::javax::swing::text::ParagraphView;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $BlockView = ::javax::swing::text::html::BlockView;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $CSS$LayoutIterator = ::javax::swing::text::html::CSS$LayoutIterator;
using $CSS$LengthValue = ::javax::swing::text::html::CSS$LengthValue;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $HTML$Tag = ::javax::swing::text::html::HTML$Tag;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $ParagraphView = ::javax::swing::text::html::ParagraphView;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $StyleSheet$BoxPainter = ::javax::swing::text::html::StyleSheet$BoxPainter;
using $TableView$CellView = ::javax::swing::text::html::TableView$CellView;
using $TableView$ColumnIterator = ::javax::swing::text::html::TableView$ColumnIterator;
using $TableView$RowIterator = ::javax::swing::text::html::TableView$RowIterator;
using $TableView$RowView = ::javax::swing::text::html::TableView$RowView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _TableView_FieldInfo_[] = {
	{"attr", "Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE, $field(TableView, attr)},
	{"painter", "Ljavax/swing/text/html/StyleSheet$BoxPainter;", nullptr, $PRIVATE, $field(TableView, painter)},
	{"cellSpacing", "I", nullptr, $PRIVATE, $field(TableView, cellSpacing)},
	{"borderWidth", "I", nullptr, $PRIVATE, $field(TableView, borderWidth)},
	{"captionIndex", "I", nullptr, $PRIVATE, $field(TableView, captionIndex)},
	{"relativeCells", "Z", nullptr, $PRIVATE, $field(TableView, relativeCells)},
	{"multiRowCells", "Z", nullptr, $PRIVATE, $field(TableView, multiRowCells)},
	{"columnSpans", "[I", nullptr, 0, $field(TableView, columnSpans)},
	{"columnOffsets", "[I", nullptr, 0, $field(TableView, columnOffsets)},
	{"totalColumnRequirements", "Ljavax/swing/SizeRequirements;", nullptr, 0, $field(TableView, totalColumnRequirements)},
	{"columnRequirements", "[Ljavax/swing/SizeRequirements;", nullptr, 0, $field(TableView, columnRequirements)},
	{"rowIterator", "Ljavax/swing/text/html/TableView$RowIterator;", nullptr, 0, $field(TableView, rowIterator)},
	{"colIterator", "Ljavax/swing/text/html/TableView$ColumnIterator;", nullptr, 0, $field(TableView, colIterator)},
	{"rows", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/html/TableView$RowView;>;", 0, $field(TableView, rows)},
	{"skipComments", "Z", nullptr, 0, $field(TableView, skipComments)},
	{"gridValid", "Z", nullptr, 0, $field(TableView, gridValid)},
	{"EMPTY", "Ljava/util/BitSet;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TableView, EMPTY)},
	{}
};

$MethodInfo _TableView_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(TableView::*)($Element*)>(&TableView::init$))},
	{"addFill", "(II)V", nullptr, 0},
	{"calculateColumnRequirements", "(I)V", nullptr, 0},
	{"calculateMajorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"calculateMinorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"checkMultiColumnCell", "(IIILjavax/swing/text/View;)V", nullptr, 0},
	{"checkSingleColumnCell", "(IILjavax/swing/text/View;)V", nullptr, 0},
	{"create", "(Ljavax/swing/text/Element;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"createTableRow", "(Ljavax/swing/text/Element;)Ljavax/swing/text/html/TableView$RowView;", nullptr, $PROTECTED},
	{"forwardUpdate", "(Ljavax/swing/event/DocumentEvent$ElementChange;Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getColumnCount", "()I", nullptr, $PUBLIC},
	{"getColumnSpan", "(I)I", nullptr, $PUBLIC},
	{"getColumnsOccupied", "(Ljavax/swing/text/View;)I", nullptr, $PROTECTED},
	{"getMultiRowSpan", "(II)I", nullptr, $PUBLIC},
	{"getRow", "(I)Ljavax/swing/text/html/TableView$RowView;", nullptr, 0},
	{"getRowCount", "()I", nullptr, $PUBLIC},
	{"getRowSpan", "(I)I", nullptr, $PUBLIC},
	{"getRowsOccupied", "(Ljavax/swing/text/View;)I", nullptr, $PROTECTED},
	{"getStyleSheet", "()Ljavax/swing/text/html/StyleSheet;", nullptr, $PROTECTED},
	{"getViewAtPoint", "(IILjava/awt/Rectangle;)Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"getViewAtPosition", "(ILjava/awt/Rectangle;)Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"invalidateGrid", "()V", nullptr, $PROTECTED},
	{"layoutColumns", "(I[I[I[Ljavax/swing/SizeRequirements;)V", nullptr, $PROTECTED},
	{"layoutMajorAxis", "(II[I[I)V", nullptr, $PROTECTED},
	{"layoutMinorAxis", "(II[I[I)V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"replace", "(II[Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"setPropertiesFromAttributes", "()V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateGrid", "()V", nullptr, 0},
	{"updateInsets", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _TableView_InnerClassesInfo_[] = {
	{"javax.swing.text.html.TableView$CellView", "javax.swing.text.html.TableView", "CellView", 0},
	{"javax.swing.text.html.TableView$RowView", "javax.swing.text.html.TableView", "RowView", $PUBLIC},
	{"javax.swing.text.html.TableView$RowIterator", "javax.swing.text.html.TableView", "RowIterator", 0},
	{"javax.swing.text.html.TableView$ColumnIterator", "javax.swing.text.html.TableView", "ColumnIterator", 0},
	{}
};

$ClassInfo _TableView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.TableView",
	"javax.swing.text.BoxView",
	"javax.swing.text.ViewFactory",
	_TableView_FieldInfo_,
	_TableView_MethodInfo_,
	nullptr,
	nullptr,
	_TableView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.html.TableView$CellView,javax.swing.text.html.TableView$RowView,javax.swing.text.html.TableView$RowIterator,javax.swing.text.html.TableView$ColumnIterator"
};

$Object* allocate$TableView($Class* clazz) {
	return $of($alloc(TableView));
}

int32_t TableView::hashCode() {
	 return this->$BoxView::hashCode();
}

bool TableView::equals(Object$* arg0) {
	 return this->$BoxView::equals(arg0);
}

$Object* TableView::clone() {
	 return this->$BoxView::clone();
}

$String* TableView::toString() {
	 return this->$BoxView::toString();
}

void TableView::finalize() {
	this->$BoxView::finalize();
}

$BitSet* TableView::EMPTY = nullptr;

void TableView::init$($Element* elem) {
	$BoxView::init$(elem, $View::Y_AXIS);
	$set(this, rowIterator, $new($TableView$RowIterator, this));
	$set(this, colIterator, $new($TableView$ColumnIterator, this));
	this->skipComments = false;
	$set(this, rows, $new($Vector));
	this->gridValid = false;
	this->captionIndex = -1;
	$set(this, totalColumnRequirements, $new($SizeRequirements));
}

$TableView$RowView* TableView::createTableRow($Element* elem) {
	$init($StyleConstants);
	$var($Object, o, $nc($($nc(elem)->getAttributes()))->getAttribute($StyleConstants::NameAttribute));
	$init($HTML$Tag);
	if ($equals(o, $HTML$Tag::TR)) {
		return $new($TableView$RowView, this, elem);
	}
	return nullptr;
}

int32_t TableView::getColumnCount() {
	return $nc(this->columnSpans)->length;
}

int32_t TableView::getColumnSpan(int32_t col) {
	if (col < $nc(this->columnSpans)->length) {
		return $nc(this->columnSpans)->get(col);
	}
	return 0;
}

int32_t TableView::getRowCount() {
	return $nc(this->rows)->size();
}

int32_t TableView::getMultiRowSpan(int32_t row0, int32_t row1) {
	$var($TableView$RowView, rv0, getRow(row0));
	$var($TableView$RowView, rv1, getRow(row1));
	if ((rv0 != nullptr) && (rv1 != nullptr)) {
		int32_t index0 = rv0->viewIndex;
		int32_t index1 = rv1->viewIndex;
		int32_t var$1 = getOffset($View::Y_AXIS, index1);
		int32_t var$0 = var$1 - getOffset($View::Y_AXIS, index0);
		int32_t span = var$0 + getSpan($View::Y_AXIS, index1);
		return span;
	}
	return 0;
}

int32_t TableView::getRowSpan(int32_t row) {
	$var($TableView$RowView, rv, getRow(row));
	if (rv != nullptr) {
		return getSpan($View::Y_AXIS, rv->viewIndex);
	}
	return 0;
}

$TableView$RowView* TableView::getRow(int32_t row) {
	if (row < $nc(this->rows)->size()) {
		return $cast($TableView$RowView, $nc(this->rows)->elementAt(row));
	}
	return nullptr;
}

$View* TableView::getViewAtPoint(int32_t x, int32_t y, $Rectangle* alloc) {
	int32_t n = getViewCount();
	$var($View, v, nullptr);
	$var($Rectangle, allocation, $new($Rectangle));
	for (int32_t i = 0; i < n; ++i) {
		allocation->setBounds(alloc);
		childAllocation(i, allocation);
		$assign(v, getView(i));
		if ($instanceOf($TableView$RowView, v)) {
			$assign(v, $nc(($cast($TableView$RowView, v)))->findViewAtPoint(x, y, allocation));
			if (v != nullptr) {
				$nc(alloc)->setBounds(allocation);
				return v;
			}
		}
	}
	return $BoxView::getViewAtPoint(x, y, alloc);
}

int32_t TableView::getColumnsOccupied($View* v) {
	$var($AttributeSet, a, $nc($($nc(v)->getElement()))->getAttributes());
	$init($HTML$Attribute);
	if ($nc(a)->isDefined($HTML$Attribute::COLSPAN)) {
		$var($String, s, $cast($String, a->getAttribute($HTML$Attribute::COLSPAN)));
		if (s != nullptr) {
			try {
				return $Integer::parseInt(s);
			} catch ($NumberFormatException&) {
				$catch();
			}
		}
	}
	return 1;
}

int32_t TableView::getRowsOccupied($View* v) {
	$var($AttributeSet, a, $nc($($nc(v)->getElement()))->getAttributes());
	$init($HTML$Attribute);
	if ($nc(a)->isDefined($HTML$Attribute::ROWSPAN)) {
		$var($String, s, $cast($String, a->getAttribute($HTML$Attribute::ROWSPAN)));
		if (s != nullptr) {
			try {
				return $Integer::parseInt(s);
			} catch ($NumberFormatException&) {
				$catch();
			}
		}
	}
	return 1;
}

void TableView::invalidateGrid() {
	this->gridValid = false;
}

$StyleSheet* TableView::getStyleSheet() {
	$var($HTMLDocument, doc, $cast($HTMLDocument, getDocument()));
	return $nc(doc)->getStyleSheet();
}

void TableView::updateInsets() {
	int16_t top = $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::TOP, this));
	int16_t bottom = $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::BOTTOM, this));
	if (this->captionIndex != -1) {
		$var($View, caption, getView(this->captionIndex));
		int16_t h = $cast(int16_t, $nc(caption)->getPreferredSpan($View::Y_AXIS));
		$var($AttributeSet, a, caption->getAttributes());
		$init($CSS$Attribute);
		$var($Object, align, $nc(a)->getAttribute($CSS$Attribute::CAPTION_SIDE));
		if ((align != nullptr) && ($of(align)->equals("bottom"_s))) {
			bottom += h;
		} else {
			top += h;
		}
	}
	int16_t var$0 = top;
	int16_t var$1 = $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::LEFT, this));
	int16_t var$2 = bottom;
	setInsets(var$0, var$1, var$2, $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::RIGHT, this)));
}

void TableView::setPropertiesFromAttributes() {
	$var($StyleSheet, sheet, getStyleSheet());
	$set(this, attr, $nc(sheet)->getViewAttributes(this));
	$set(this, painter, sheet->getBoxPainter(this->attr));
	if (this->attr != nullptr) {
		int16_t var$0 = $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::TOP, this));
		int16_t var$1 = $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::LEFT, this));
		int16_t var$2 = $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::BOTTOM, this));
		setInsets(var$0, var$1, var$2, $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::RIGHT, this)));
		$init($CSS$Attribute);
		$var($CSS$LengthValue, lv, $cast($CSS$LengthValue, $nc(this->attr)->getAttribute($CSS$Attribute::BORDER_SPACING)));
		if (lv != nullptr) {
			this->cellSpacing = $cast(int32_t, lv->getValue());
		} else {
			this->cellSpacing = 2;
		}
		$assign(lv, $cast($CSS$LengthValue, $nc(this->attr)->getAttribute($CSS$Attribute::BORDER_TOP_WIDTH)));
		if (lv != nullptr) {
			this->borderWidth = $cast(int32_t, lv->getValue());
		} else {
			this->borderWidth = 0;
		}
	}
}

void TableView::updateGrid() {
	if (!this->gridValid) {
		this->relativeCells = false;
		this->multiRowCells = false;
		this->captionIndex = -1;
		$nc(this->rows)->removeAllElements();
		int32_t n = getViewCount();
		for (int32_t i = 0; i < n; ++i) {
			$var($View, v, getView(i));
			if ($instanceOf($TableView$RowView, v)) {
				$nc(this->rows)->addElement($cast($TableView$RowView, v));
				$var($TableView$RowView, rv, $cast($TableView$RowView, v));
				$nc(rv)->clearFilledColumns();
				rv->rowIndex = $nc(this->rows)->size() - 1;
				rv->viewIndex = i;
			} else {
				$init($StyleConstants);
				$var($Object, o, $nc($($nc($($nc(v)->getElement()))->getAttributes()))->getAttribute($StyleConstants::NameAttribute));
				if ($instanceOf($HTML$Tag, o)) {
					$var($HTML$Tag, kind, $cast($HTML$Tag, o));
					$init($HTML$Tag);
					if (kind == $HTML$Tag::CAPTION) {
						this->captionIndex = i;
					}
				}
			}
		}
		int32_t maxColumns = 0;
		int32_t nrows = $nc(this->rows)->size();
		for (int32_t row = 0; row < nrows; ++row) {
			$var($TableView$RowView, rv, getRow(row));
			int32_t col = 0;
			for (int32_t cell = 0; cell < $nc(rv)->getViewCount(); ++cell, ++col) {
				$var($View, cv, rv->getView(cell));
				if (!this->relativeCells) {
					$var($AttributeSet, a, $nc(cv)->getAttributes());
					$init($CSS$Attribute);
					$var($CSS$LengthValue, lv, $cast($CSS$LengthValue, $nc(a)->getAttribute($CSS$Attribute::WIDTH)));
					if ((lv != nullptr) && (lv->isPercentage())) {
						this->relativeCells = true;
					}
				}
				for (; rv->isFilled(col); ++col) {
				}
				int32_t rowSpan = getRowsOccupied(cv);
				if (rowSpan > 1) {
					this->multiRowCells = true;
				}
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
			$nc($nc(this->columnRequirements)->get(i))->maximum = $Integer::MAX_VALUE;
		}
		this->gridValid = true;
	}
}

void TableView::addFill(int32_t row, int32_t col) {
	$var($TableView$RowView, rv, getRow(row));
	if (rv != nullptr) {
		rv->fillColumn(col);
	}
}

void TableView::layoutColumns(int32_t targetSpan, $ints* offsets, $ints* spans, $SizeRequirementsArray* reqs) {
	$Arrays::fill(offsets, 0);
	$Arrays::fill(spans, 0);
	$nc(this->colIterator)->setLayoutArrays(offsets, spans, targetSpan);
	$CSS::calculateTiledLayout(this->colIterator, targetSpan);
}

void TableView::calculateColumnRequirements(int32_t axis) {
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
	$var($Container, host, getContainer());
	if (host != nullptr) {
		if ($instanceOf($JTextComponent, host)) {
			this->skipComments = !$nc(($cast($JTextComponent, host)))->isEditable();
		} else {
			this->skipComments = true;
		}
	}
	bool hasMultiColumn = false;
	int32_t nrows = getRowCount();
	for (int32_t i = 0; i < nrows; ++i) {
		$var($TableView$RowView, row, getRow(i));
		int32_t col = 0;
		int32_t ncells = $nc(row)->getViewCount();
		for (int32_t cell = 0; cell < ncells; ++cell) {
			$var($View, cv, row->getView(cell));
			if (this->skipComments && !($instanceOf($TableView$CellView, cv))) {
				continue;
			}
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
			++col;
		}
	}
	if (hasMultiColumn) {
		for (int32_t i = 0; i < nrows; ++i) {
			$var($TableView$RowView, row, getRow(i));
			int32_t col = 0;
			int32_t ncells = $nc(row)->getViewCount();
			for (int32_t cell = 0; cell < ncells; ++cell) {
				$var($View, cv, row->getView(cell));
				if (this->skipComments && !($instanceOf($TableView$CellView, cv))) {
					continue;
				}
				for (; row->isFilled(col); ++col) {
				}
				int32_t colSpan = getColumnsOccupied(cv);
				if (colSpan > 1) {
					checkMultiColumnCell(axis, col, colSpan, cv);
					col += colSpan - 1;
				}
				++col;
			}
		}
	}
}

void TableView::checkSingleColumnCell(int32_t axis, int32_t col, $View* v) {
	$var($SizeRequirements, req, $nc(this->columnRequirements)->get(col));
	$nc(req)->minimum = $Math::max($cast(int32_t, $nc(v)->getMinimumSpan(axis)), req->minimum);
	req->preferred = $Math::max($cast(int32_t, $nc(v)->getPreferredSpan(axis)), req->preferred);
}

void TableView::checkMultiColumnCell(int32_t axis, int32_t col, int32_t ncols, $View* v) {
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
			reqs->set(i, $nc(this->columnRequirements)->get(col + i));
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
			reqs->set(i, $nc(this->columnRequirements)->get(col + i));
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

$SizeRequirements* TableView::calculateMinorAxisRequirements(int32_t axis, $SizeRequirements* r$renamed) {
	$var($SizeRequirements, r, r$renamed);
	updateGrid();
	calculateColumnRequirements(axis);
	if (r == nullptr) {
		$assign(r, $new($SizeRequirements));
	}
	int64_t min = 0;
	int64_t pref = 0;
	int32_t n = $nc(this->columnRequirements)->length;
	for (int32_t i = 0; i < n; ++i) {
		$var($SizeRequirements, req, $nc(this->columnRequirements)->get(i));
		min += $nc(req)->minimum;
		pref += req->preferred;
	}
	int32_t adjust = (n + 1) * this->cellSpacing + 2 * this->borderWidth;
	min += adjust;
	pref += adjust;
	$nc(r)->minimum = (int32_t)min;
	r->preferred = (int32_t)pref;
	r->maximum = (int32_t)pref;
	$var($AttributeSet, attr, getAttributes());
	$init($CSS$Attribute);
	$var($CSS$LengthValue, cssWidth, $cast($CSS$LengthValue, $nc(attr)->getAttribute($CSS$Attribute::WIDTH)));
	if ($BlockView::spanSetFromAttributes(axis, r, cssWidth, nullptr)) {
		if (r->minimum < (int32_t)min) {
			r->maximum = (r->minimum = (r->preferred = (int32_t)min));
		}
	}
	$nc(this->totalColumnRequirements)->minimum = r->minimum;
	$nc(this->totalColumnRequirements)->preferred = r->preferred;
	$nc(this->totalColumnRequirements)->maximum = r->maximum;
	$var($Object, o, attr->getAttribute($CSS$Attribute::TEXT_ALIGN));
	if (o != nullptr) {
		$var($String, ta, $of(o)->toString());
		if ($nc(ta)->equals("left"_s)) {
			r->alignment = (float)0;
		} else if (ta->equals("center"_s)) {
			r->alignment = 0.5f;
		} else if (ta->equals("right"_s)) {
			r->alignment = (float)1;
		} else {
			r->alignment = (float)0;
		}
	} else {
		r->alignment = (float)0;
	}
	return r;
}

$SizeRequirements* TableView::calculateMajorAxisRequirements(int32_t axis, $SizeRequirements* r$renamed) {
	$var($SizeRequirements, r, r$renamed);
	updateInsets();
	$nc(this->rowIterator)->updateAdjustments();
	$assign(r, $CSS::calculateTiledRequirements(this->rowIterator, r));
	$nc(r)->maximum = r->preferred;
	return r;
}

void TableView::layoutMinorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	updateGrid();
	int32_t n = getRowCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($TableView$RowView, row, getRow(i));
		$nc(row)->layoutChanged(axis);
	}
	layoutColumns(targetSpan, this->columnOffsets, this->columnSpans, this->columnRequirements);
	$BoxView::layoutMinorAxis(targetSpan, axis, offsets, spans);
}

void TableView::layoutMajorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	$nc(this->rowIterator)->setLayoutArrays(offsets, spans);
	$CSS::calculateTiledLayout(this->rowIterator, targetSpan);
	if (this->captionIndex != -1) {
		$var($View, caption, getView(this->captionIndex));
		int32_t h = $cast(int32_t, $nc(caption)->getPreferredSpan($View::Y_AXIS));
		$nc(spans)->set(this->captionIndex, h);
		int16_t boxBottom = $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::BOTTOM, this));
		if (boxBottom != getBottomInset()) {
			$nc(offsets)->set(this->captionIndex, targetSpan + boxBottom);
		} else {
			$nc(offsets)->set(this->captionIndex, -getTopInset());
		}
	}
}

$View* TableView::getViewAtPosition(int32_t pos, $Rectangle* a) {
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

$AttributeSet* TableView::getAttributes() {
	if (this->attr == nullptr) {
		$var($StyleSheet, sheet, getStyleSheet());
		$set(this, attr, $nc(sheet)->getViewAttributes(this));
	}
	return this->attr;
}

void TableView::paint($Graphics* g, $Shape* allocation) {
	$var($Rectangle, a, $nc(allocation)->getBounds());
	setSize((float)$nc(a)->width, (float)a->height);
	if (this->captionIndex != -1) {
		int16_t top = $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::TOP, this));
		int16_t bottom = $cast(int16_t, $nc(this->painter)->getInset($SwingConstants::BOTTOM, this));
		if (top != getTopInset()) {
			int32_t h = getTopInset() - top;
			$nc(a)->y += h;
			a->height -= h;
		} else {
			$nc(a)->height -= getBottomInset() - bottom;
		}
	}
	$nc(this->painter)->paint(g, (float)$nc(a)->x, (float)a->y, (float)a->width, (float)a->height, this);
	int32_t n = getViewCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		$nc(v)->paint(g, $(getChildAllocation(i, allocation)));
	}
}

void TableView::setParent($View* parent) {
	$BoxView::setParent(parent);
	if (parent != nullptr) {
		setPropertiesFromAttributes();
	}
}

$ViewFactory* TableView::getViewFactory() {
	return this;
}

void TableView::insertUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$BoxView::insertUpdate(e, a, this);
}

void TableView::removeUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$BoxView::removeUpdate(e, a, this);
}

void TableView::changedUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	$BoxView::changedUpdate(e, a, this);
}

void TableView::forwardUpdate($DocumentEvent$ElementChange* ec, $DocumentEvent* e, $Shape* a, $ViewFactory* f) {
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

$View* TableView::create($Element* elem) {
	$init($StyleConstants);
	$var($Object, o, $nc($($nc(elem)->getAttributes()))->getAttribute($StyleConstants::NameAttribute));
	if ($instanceOf($HTML$Tag, o)) {
		$var($HTML$Tag, kind, $cast($HTML$Tag, o));
		$init($HTML$Tag);
		if (kind == $HTML$Tag::TR) {
			return createTableRow(elem);
		} else {
			if ((kind == $HTML$Tag::TD) || (kind == $HTML$Tag::TH)) {
				return $new($TableView$CellView, this, elem);
			} else {
				if (kind == $HTML$Tag::CAPTION) {
					return $new($ParagraphView, elem);
				}
			}
		}
	}
	$var($View, p, getParent());
	if (p != nullptr) {
		$var($ViewFactory, f, p->getViewFactory());
		if (f != nullptr) {
			return f->create(elem);
		}
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

			} // html
		} // text
	} // swing
} // javax