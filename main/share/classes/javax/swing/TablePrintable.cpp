#include <javax/swing/TablePrintable.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/print/PageFormat.h>
#include <java/awt/print/Printable.h>
#include <java/awt/print/PrinterException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <java/text/MessageFormat.h>
#include <javax/swing/JTable$PrintMode.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef BLACK
#undef BOLD
#undef FIT_WIDTH
#undef FOOTER_FONT_SIZE
#undef HEADER_FONT_SIZE
#undef H_F_SPACE
#undef NO_SUCH_PAGE
#undef PAGE_EXISTS
#undef PLAIN

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PageFormat = ::java::awt::print::PageFormat;
using $Printable = ::java::awt::print::Printable;
using $PrinterException = ::java::awt::print::PrinterException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $JTable$PrintMode = ::javax::swing::JTable$PrintMode;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

namespace javax {
	namespace swing {

$FieldInfo _TablePrintable_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(TablePrintable, $assertionsDisabled)},
	{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE, $field(TablePrintable, table)},
	{"header", "Ljavax/swing/table/JTableHeader;", nullptr, $PRIVATE, $field(TablePrintable, header)},
	{"colModel", "Ljavax/swing/table/TableColumnModel;", nullptr, $PRIVATE, $field(TablePrintable, colModel)},
	{"totalColWidth", "I", nullptr, $PRIVATE, $field(TablePrintable, totalColWidth)},
	{"printMode", "Ljavax/swing/JTable$PrintMode;", nullptr, $PRIVATE, $field(TablePrintable, printMode)},
	{"headerFormat", "Ljava/text/MessageFormat;", nullptr, $PRIVATE, $field(TablePrintable, headerFormat)},
	{"footerFormat", "Ljava/text/MessageFormat;", nullptr, $PRIVATE, $field(TablePrintable, footerFormat)},
	{"last", "I", nullptr, $PRIVATE, $field(TablePrintable, last)},
	{"row", "I", nullptr, $PRIVATE, $field(TablePrintable, row)},
	{"col", "I", nullptr, $PRIVATE, $field(TablePrintable, col)},
	{"clip", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $FINAL, $field(TablePrintable, clip)},
	{"hclip", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $FINAL, $field(TablePrintable, hclip)},
	{"tempRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $FINAL, $field(TablePrintable, tempRect)},
	{"H_F_SPACE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TablePrintable, H_F_SPACE)},
	{"HEADER_FONT_SIZE", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TablePrintable, HEADER_FONT_SIZE)},
	{"FOOTER_FONT_SIZE", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TablePrintable, FOOTER_FONT_SIZE)},
	{"headerFont", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(TablePrintable, headerFont)},
	{"footerFont", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(TablePrintable, footerFont)},
	{}
};

$MethodInfo _TablePrintable_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTable;Ljavax/swing/JTable$PrintMode;Ljava/text/MessageFormat;Ljava/text/MessageFormat;)V", nullptr, $PUBLIC, $method(static_cast<void(TablePrintable::*)($JTable*,$JTable$PrintMode*,$MessageFormat*,$MessageFormat*)>(&TablePrintable::init$))},
	{"findNextClip", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(TablePrintable::*)(int32_t,int32_t)>(&TablePrintable::findNextClip))},
	{"print", "(Ljava/awt/Graphics;Ljava/awt/print/PageFormat;I)I", nullptr, $PUBLIC, nullptr, "java.awt.print.PrinterException"},
	{"printText", "(Ljava/awt/Graphics2D;Ljava/lang/String;Ljava/awt/geom/Rectangle2D;Ljava/awt/Font;I)V", nullptr, $PRIVATE, $method(static_cast<void(TablePrintable::*)($Graphics2D*,$String*,$Rectangle2D*,$Font*,int32_t)>(&TablePrintable::printText))},
	{}
};

$ClassInfo _TablePrintable_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.TablePrintable",
	"java.lang.Object",
	"java.awt.print.Printable",
	_TablePrintable_FieldInfo_,
	_TablePrintable_MethodInfo_
};

$Object* allocate$TablePrintable($Class* clazz) {
	return $of($alloc(TablePrintable));
}

bool TablePrintable::$assertionsDisabled = false;
float TablePrintable::HEADER_FONT_SIZE = 0.0;
float TablePrintable::FOOTER_FONT_SIZE = 0.0;

void TablePrintable::init$($JTable* table, $JTable$PrintMode* printMode, $MessageFormat* headerFormat, $MessageFormat* footerFormat) {
	$useLocalCurrentObjectStackCache();
	this->last = -1;
	this->row = 0;
	this->col = 0;
	$set(this, clip, $new($Rectangle, 0, 0, 0, 0));
	$set(this, hclip, $new($Rectangle, 0, 0, 0, 0));
	$set(this, tempRect, $new($Rectangle, 0, 0, 0, 0));
	$set(this, table, table);
	$set(this, header, $nc(table)->getTableHeader());
	$set(this, colModel, table->getColumnModel());
	this->totalColWidth = $nc(this->colModel)->getTotalColumnWidth();
	if (this->header != nullptr) {
		$nc(this->hclip)->height = $nc(this->header)->getHeight();
	}
	$set(this, printMode, printMode);
	$set(this, headerFormat, headerFormat);
	$set(this, footerFormat, footerFormat);
	$set(this, headerFont, $nc($(table->getFont()))->deriveFont($Font::BOLD, TablePrintable::HEADER_FONT_SIZE));
	$set(this, footerFont, $nc($(table->getFont()))->deriveFont($Font::PLAIN, TablePrintable::FOOTER_FONT_SIZE));
}

int32_t TablePrintable::print($Graphics* graphics, $PageFormat* pageFormat, int32_t pageIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t imgWidth = $cast(int32_t, $nc(pageFormat)->getImageableWidth());
	int32_t imgHeight = $cast(int32_t, pageFormat->getImageableHeight());
	if (imgWidth <= 0) {
		$throwNew($PrinterException, "Width of printable area is too small."_s);
	}
	$var($ObjectArray, pageNumber, $new($ObjectArray, {$($of($Integer::valueOf(pageIndex + 1)))}));
	$var($String, headerText, nullptr);
	if (this->headerFormat != nullptr) {
		$assign(headerText, $nc(this->headerFormat)->format(pageNumber));
	}
	$var($String, footerText, nullptr);
	if (this->footerFormat != nullptr) {
		$assign(footerText, $nc(this->footerFormat)->format(pageNumber));
	}
	$var($Rectangle2D, hRect, nullptr);
	$var($Rectangle2D, fRect, nullptr);
	int32_t headerTextSpace = 0;
	int32_t footerTextSpace = 0;
	int32_t availableSpace = imgHeight;
	if (headerText != nullptr) {
		$nc(graphics)->setFont(this->headerFont);
		$assign(hRect, $nc($(graphics->getFontMetrics()))->getStringBounds(headerText, graphics));
		headerTextSpace = $cast(int32_t, $Math::ceil($nc(hRect)->getHeight()));
		availableSpace -= headerTextSpace + TablePrintable::H_F_SPACE;
	}
	if (footerText != nullptr) {
		$nc(graphics)->setFont(this->footerFont);
		$assign(fRect, $nc($(graphics->getFontMetrics()))->getStringBounds(footerText, graphics));
		footerTextSpace = $cast(int32_t, $Math::ceil($nc(fRect)->getHeight()));
		availableSpace -= footerTextSpace + TablePrintable::H_F_SPACE;
	}
	if (availableSpace <= 0) {
		$throwNew($PrinterException, "Height of printable area is too small."_s);
	}
	double sf = 1.0;
	$init($JTable$PrintMode);
	if (this->printMode == $JTable$PrintMode::FIT_WIDTH && this->totalColWidth > imgWidth) {
		if (!TablePrintable::$assertionsDisabled && !(imgWidth > 0)) {
			$throwNew($AssertionError);
		}
		if (!TablePrintable::$assertionsDisabled && !(this->totalColWidth > 1)) {
			$throwNew($AssertionError);
		}
		sf = (double)imgWidth / (double)this->totalColWidth;
	}
	if (!TablePrintable::$assertionsDisabled && !(sf > 0)) {
		$throwNew($AssertionError);
	}
	while (this->last < pageIndex) {
		if (this->row >= $nc(this->table)->getRowCount() && this->col == 0) {
			return $Printable::NO_SUCH_PAGE;
		}
		int32_t scaledWidth = $cast(int32_t, (imgWidth / sf));
		int32_t scaledHeight = $cast(int32_t, ((availableSpace - $nc(this->hclip)->height) / sf));
		findNextClip(scaledWidth, scaledHeight);
		if (!($nc(($($nc(this->table)->getBounds())))->intersects(this->clip))) {
			return $Printable::NO_SUCH_PAGE;
		}
		++this->last;
	}
	$var($Graphics2D, g2d, $cast($Graphics2D, $nc(graphics)->create()));
	double var$0 = pageFormat->getImageableX();
	$nc(g2d)->translate(var$0, pageFormat->getImageableY());
	$var($AffineTransform, oldTrans, nullptr);
	if (footerText != nullptr) {
		$assign(oldTrans, g2d->getTransform());
		g2d->translate(0, imgHeight - footerTextSpace);
		printText(g2d, footerText, fRect, this->footerFont, imgWidth);
		g2d->setTransform(oldTrans);
	}
	if (headerText != nullptr) {
		printText(g2d, headerText, hRect, this->headerFont, imgWidth);
		g2d->translate(0, headerTextSpace + TablePrintable::H_F_SPACE);
	}
	$nc(this->tempRect)->x = 0;
	$nc(this->tempRect)->y = 0;
	$nc(this->tempRect)->width = imgWidth;
	$nc(this->tempRect)->height = availableSpace;
	g2d->clip(this->tempRect);
	if (sf != 1.0) {
		g2d->scale(sf, sf);
	} else {
		int32_t diff = (imgWidth - $nc(this->clip)->width) / 2;
		g2d->translate(diff, 0);
	}
	$assign(oldTrans, g2d->getTransform());
	$var($Shape, oldClip, g2d->getClip());
	if (this->header != nullptr) {
		$nc(this->hclip)->x = $nc(this->clip)->x;
		$nc(this->hclip)->width = $nc(this->clip)->width;
		g2d->translate(-$nc(this->hclip)->x, 0);
		g2d->clip(this->hclip);
		$nc(this->header)->print(g2d);
		g2d->setTransform(oldTrans);
		g2d->setClip(oldClip);
		g2d->translate(0, $nc(this->hclip)->height);
	}
	g2d->translate(-$nc(this->clip)->x, -$nc(this->clip)->y);
	g2d->clip(this->clip);
	if (this->printMode == $JTable$PrintMode::FIT_WIDTH) {
		$nc(this->table)->putClientProperty("Table.printMode"_s, $JTable$PrintMode::FIT_WIDTH);
	}
	$nc(this->table)->print(g2d);
	g2d->setTransform(oldTrans);
	g2d->setClip(oldClip);
	$init($Color);
	g2d->setColor($Color::BLACK);
	$var($Rectangle, visibleBounds, $nc(this->clip)->intersection($($nc(this->table)->getBounds())));
	$var($Point, upperLeft, $nc(visibleBounds)->getLocation());
	$var($Point, lowerRight, $new($Point, visibleBounds->x + visibleBounds->width, visibleBounds->y + visibleBounds->height));
	int32_t rMin = $nc(this->table)->rowAtPoint(upperLeft);
	int32_t rMax = $nc(this->table)->rowAtPoint(lowerRight);
	if (rMin == -1) {
		rMin = 0;
	}
	if (rMax == -1) {
		rMax = $nc(this->table)->getRowCount();
	}
	int32_t rowHeight = 0;
	for (int32_t visrow = rMin; visrow < rMax; ++visrow) {
		rowHeight += $nc(this->table)->getRowHeight(visrow);
	}
	if (this->printMode == $JTable$PrintMode::FIT_WIDTH) {
		g2d->drawRect(0, 0, $nc(this->clip)->width, $nc(this->hclip)->height + rowHeight);
	} else {
		g2d->drawRect(0, 0, visibleBounds->width, $nc(this->hclip)->height + rowHeight);
	}
	if (this->printMode == $JTable$PrintMode::FIT_WIDTH) {
		$nc(this->table)->putClientProperty("Table.printMode"_s, nullptr);
	}
	g2d->dispose();
	return $Printable::PAGE_EXISTS;
}

void TablePrintable::printText($Graphics2D* g2d, $String* text, $Rectangle2D* rect, $Font* font, int32_t imgWidth) {
	$useLocalCurrentObjectStackCache();
	int32_t tx = 0;
	if ($nc(rect)->getWidth() < imgWidth) {
		tx = $cast(int32_t, ((imgWidth - rect->getWidth()) / 2));
	} else if ($nc($($nc(this->table)->getComponentOrientation()))->isLeftToRight()) {
		tx = 0;
	} else {
		tx = -$cast(int32_t, ($Math::ceil(rect->getWidth()) - imgWidth));
	}
	int32_t ty = $cast(int32_t, $Math::ceil($Math::abs($nc(rect)->getY())));
	$init($Color);
	$nc(g2d)->setColor($Color::BLACK);
	g2d->setFont(font);
	g2d->drawString(text, tx, ty);
}

void TablePrintable::findNextClip(int32_t pw, int32_t ph) {
	$useLocalCurrentObjectStackCache();
	bool ltr = $nc($($nc(this->table)->getComponentOrientation()))->isLeftToRight();
	if (this->col == 0) {
		if (ltr) {
			$nc(this->clip)->x = 0;
		} else {
			$nc(this->clip)->x = this->totalColWidth;
		}
		$nc(this->clip)->y += $nc(this->clip)->height;
		$nc(this->clip)->width = 0;
		$nc(this->clip)->height = 0;
		int32_t rowCount = $nc(this->table)->getRowCount();
		int32_t rowHeight = $nc(this->table)->getRowHeight(this->row);
		do {
			$nc(this->clip)->height += rowHeight;
			if (++this->row >= rowCount) {
				break;
			}
			rowHeight = $nc(this->table)->getRowHeight(this->row);
		} while ($nc(this->clip)->height + rowHeight <= ph);
	}
	$init($JTable$PrintMode);
	if (this->printMode == $JTable$PrintMode::FIT_WIDTH) {
		$nc(this->clip)->x = 0;
		$nc(this->clip)->width = this->totalColWidth;
		return;
	}
	if (ltr) {
		$nc(this->clip)->x += $nc(this->clip)->width;
	}
	$nc(this->clip)->width = 0;
	int32_t colCount = $nc(this->table)->getColumnCount();
	int32_t colWidth = $nc($($nc(this->colModel)->getColumn(this->col)))->getWidth();
	do {
		$nc(this->clip)->width += colWidth;
		if (!ltr) {
			$nc(this->clip)->x -= colWidth;
		}
		if (++this->col >= colCount) {
			this->col = 0;
			break;
		}
		colWidth = $nc($($nc(this->colModel)->getColumn(this->col)))->getWidth();
	} while ($nc(this->clip)->width + colWidth <= pw);
}

void clinit$TablePrintable($Class* class$) {
	TablePrintable::HEADER_FONT_SIZE = 18.0f;
	TablePrintable::FOOTER_FONT_SIZE = 12.0f;
	TablePrintable::$assertionsDisabled = !TablePrintable::class$->desiredAssertionStatus();
}

TablePrintable::TablePrintable() {
}

$Class* TablePrintable::load$($String* name, bool initialize) {
	$loadClass(TablePrintable, name, initialize, &_TablePrintable_ClassInfo_, clinit$TablePrintable, allocate$TablePrintable);
	return class$;
}

$Class* TablePrintable::class$ = nullptr;

	} // swing
} // javax