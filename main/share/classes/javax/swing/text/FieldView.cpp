#include <javax/swing/text/FieldView.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Math.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/PlainView.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Segment.h>
#include <javax/swing/text/SegmentCache.h>
#include <javax/swing/text/TabExpander.h>
#include <javax/swing/text/Utilities.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef CENTER
#undef LEADING
#undef LEFT
#undef RIGHT
#undef TRAILING
#undef X_AXIS
#undef Y_AXIS

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Component = ::java::awt::Component;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;
using $SwingConstants = ::javax::swing::SwingConstants;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $PlainView = ::javax::swing::text::PlainView;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $Segment = ::javax::swing::text::Segment;
using $SegmentCache = ::javax::swing::text::SegmentCache;
using $TabExpander = ::javax::swing::text::TabExpander;
using $Utilities = ::javax::swing::text::Utilities;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _FieldView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(FieldView::*)($Element*)>(&FieldView::init$))},
	{"adjustAllocation", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PROTECTED},
	{"adjustPaintRegion", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, 0},
	{"getFontMetrics", "()Ljava/awt/FontMetrics;", nullptr, $PROTECTED},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"getResizeWeight", "(I)I", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"updateVisibilityModel", "()V", nullptr, 0},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FieldView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.FieldView",
	"javax.swing.text.PlainView",
	nullptr,
	nullptr,
	_FieldView_MethodInfo_
};

$Object* allocate$FieldView($Class* clazz) {
	return $of($alloc(FieldView));
}

void FieldView::init$($Element* elem) {
	$PlainView::init$(elem);
}

$FontMetrics* FieldView::getFontMetrics() {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, getContainer());
	return $nc(c)->getFontMetrics($(c->getFont()));
}

$Shape* FieldView::adjustAllocation($Shape* a) {
	$useLocalCurrentObjectStackCache();
	if (a != nullptr) {
		$var($Rectangle, bounds, a->getBounds());
		int32_t vspan = $cast(int32_t, getPreferredSpan($View::Y_AXIS));
		int32_t hspan = $cast(int32_t, getPreferredSpan($View::X_AXIS));
		if ($nc(bounds)->height != vspan) {
			int32_t slop = bounds->height - vspan;
			bounds->y += slop / 2;
			bounds->height -= slop;
		}
		$var($Component, c, getContainer());
		if ($instanceOf($JTextField, c)) {
			$var($JTextField, field, $cast($JTextField, c));
			$var($BoundedRangeModel, vis, $nc(field)->getHorizontalVisibility());
			int32_t max = $Math::max(hspan, $nc(bounds)->width);
			int32_t value = $nc(vis)->getValue();
			int32_t extent = $Math::min(max, $nc(bounds)->width - 1);
			if ((value + extent) > max) {
				value = max - extent;
			}
			vis->setRangeProperties(value, extent, vis->getMinimum(), max, false);
			if (hspan < $nc(bounds)->width) {
				int32_t slop = bounds->width - 1 - hspan;
				int32_t align = $nc(($cast($JTextField, c)))->getHorizontalAlignment();
				if ($Utilities::isLeftToRight(c)) {
					if (align == $SwingConstants::LEADING) {
						align = $SwingConstants::LEFT;
					} else if (align == $SwingConstants::TRAILING) {
						align = $SwingConstants::RIGHT;
					}
				} else if (align == $SwingConstants::LEADING) {
					align = $SwingConstants::RIGHT;
				} else if (align == $SwingConstants::TRAILING) {
					align = $SwingConstants::LEFT;
				}
				switch (align) {
				case $SwingConstants::CENTER:
					{
						bounds->x += slop / 2;
						bounds->width -= slop;
						break;
					}
				case $SwingConstants::RIGHT:
					{
						bounds->x += slop;
						bounds->width -= slop;
						break;
					}
				}
			} else {
				bounds->width = hspan;
				bounds->x -= vis->getValue();
			}
		}
		return bounds;
	}
	return nullptr;
}

void FieldView::updateVisibilityModel() {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, getContainer());
	if ($instanceOf($JTextField, c)) {
		$var($JTextField, field, $cast($JTextField, c));
		$var($BoundedRangeModel, vis, $nc(field)->getHorizontalVisibility());
		int32_t hspan = $cast(int32_t, getPreferredSpan($View::X_AXIS));
		int32_t extent = $nc(vis)->getExtent();
		int32_t maximum = $Math::max(hspan, extent);
		extent = (extent == 0) ? maximum : extent;
		int32_t value = maximum - extent;
		int32_t oldValue = vis->getValue();
		if ((oldValue + extent) > maximum) {
			oldValue = maximum - extent;
		}
		value = $Math::max(0, $Math::min(value, oldValue));
		vis->setRangeProperties(value, extent, 0, maximum, false);
	}
}

void FieldView::paint($Graphics* g, $Shape* a) {
	$var($Rectangle, r, $cast($Rectangle, a));
	$nc(g)->clipRect($nc(r)->x, r->y, r->width, r->height);
	$PlainView::paint(g, a);
}

$Shape* FieldView::adjustPaintRegion($Shape* a) {
	return adjustAllocation(a);
}

float FieldView::getPreferredSpan(int32_t axis) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Segment, buff, nullptr)
		$var($Document, doc, nullptr)
		int32_t width = 0;
		switch (axis) {
		case $View::X_AXIS:
			{
				$assign(buff, $SegmentCache::getSharedSegment());
				$assign(doc, getDocument());
				try {
					$var($FontMetrics, fm, getFontMetrics());
					$nc(doc)->getText(0, doc->getLength(), buff);
					width = $Utilities::getTabbedTextWidth(buff, fm, 0, static_cast<$TabExpander*>(this), 0);
					if ($nc(buff)->count > 0) {
						$var($Component, c, getContainer());
						this->firstLineOffset = $SwingUtilities2::getLeftSideBearing(($instanceOf($JComponent, c)) ? $cast($JComponent, c) : ($JComponent*)nullptr, fm, $nc(buff->array)->get(buff->offset));
						this->firstLineOffset = $Math::max(0, -this->firstLineOffset);
					} else {
						this->firstLineOffset = 0;
					}
				} catch ($BadLocationException& bl) {
					width = 0;
				}
				$SegmentCache::releaseSharedSegment(buff);
				return (float)(width + this->firstLineOffset);
			}
		default:
			{
				return $PlainView::getPreferredSpan(axis);
			}
		}
	}
}

int32_t FieldView::getResizeWeight(int32_t axis) {
	if (axis == $View::X_AXIS) {
		return 1;
	}
	return 0;
}

$Shape* FieldView::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	return $PlainView::modelToView(pos, $(adjustAllocation(a)), b);
}

int32_t FieldView::viewToModel(float fx, float fy, $Shape* a, $Position$BiasArray* bias) {
	return $PlainView::viewToModel(fx, fy, $(adjustAllocation(a)), bias);
}

void FieldView::insertUpdate($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	$PlainView::insertUpdate(changes, $(adjustAllocation(a)), f);
	updateVisibilityModel();
}

void FieldView::removeUpdate($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	$PlainView::removeUpdate(changes, $(adjustAllocation(a)), f);
	updateVisibilityModel();
}

FieldView::FieldView() {
}

$Class* FieldView::load$($String* name, bool initialize) {
	$loadClass(FieldView, name, initialize, &_FieldView_ClassInfo_, allocate$FieldView);
	return class$;
}

$Class* FieldView::class$ = nullptr;

		} // text
	} // swing
} // javax