#include <javax/swing/plaf/basic/BasicTextFieldUI$I18nFieldView.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Math.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FlowView.h>
#include <javax/swing/text/ParagraphView.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef CENTER
#undef LEADING
#undef LEFT
#undef MAX_VALUE
#undef RIGHT
#undef TRAILING
#undef X_AXIS
#undef Y_AXIS

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JTextField = ::javax::swing::JTextField;
using $SwingConstants = ::javax::swing::SwingConstants;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $Element = ::javax::swing::text::Element;
using $ParagraphView = ::javax::swing::text::ParagraphView;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicTextFieldUI$I18nFieldView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, 0, $method(static_cast<void(BasicTextFieldUI$I18nFieldView::*)($Element*)>(&BasicTextFieldUI$I18nFieldView::init$))},
	{"adjustAllocation", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, 0},
	{"getFlowSpan", "(I)I", nullptr, $PUBLIC},
	{"getResizeWeight", "(I)I", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"isLeftToRight", "(Ljava/awt/Component;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Component*)>(&BasicTextFieldUI$I18nFieldView::isLeftToRight))},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"modelToView", "(ILjavax/swing/text/Position$Bias;ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"setJustification", "(I)V", nullptr, $PROTECTED},
	{"updateVisibilityModel", "()V", nullptr, 0},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTextFieldUI$I18nFieldView_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextFieldUI$I18nFieldView", "javax.swing.plaf.basic.BasicTextFieldUI", "I18nFieldView", $STATIC},
	{}
};

$ClassInfo _BasicTextFieldUI$I18nFieldView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextFieldUI$I18nFieldView",
	"javax.swing.text.ParagraphView",
	nullptr,
	nullptr,
	_BasicTextFieldUI$I18nFieldView_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextFieldUI$I18nFieldView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextFieldUI"
};

$Object* allocate$BasicTextFieldUI$I18nFieldView($Class* clazz) {
	return $of($alloc(BasicTextFieldUI$I18nFieldView));
}

void BasicTextFieldUI$I18nFieldView::init$($Element* elem) {
	$ParagraphView::init$(elem);
}

int32_t BasicTextFieldUI$I18nFieldView::getFlowSpan(int32_t index) {
	return $Integer::MAX_VALUE;
}

void BasicTextFieldUI$I18nFieldView::setJustification(int32_t j) {
}

bool BasicTextFieldUI$I18nFieldView::isLeftToRight($Component* c) {
	$init(BasicTextFieldUI$I18nFieldView);
	return $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
}

$Shape* BasicTextFieldUI$I18nFieldView::adjustAllocation($Shape* a) {
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
				if (isLeftToRight(c)) {
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

void BasicTextFieldUI$I18nFieldView::updateVisibilityModel() {
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

void BasicTextFieldUI$I18nFieldView::paint($Graphics* g, $Shape* a) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, r, $cast($Rectangle, a));
	$nc(g)->clipRect($nc(r)->x, r->y, r->width, r->height);
	$ParagraphView::paint(g, $(adjustAllocation(a)));
}

int32_t BasicTextFieldUI$I18nFieldView::getResizeWeight(int32_t axis) {
	if (axis == $View::X_AXIS) {
		return 1;
	}
	return 0;
}

$Shape* BasicTextFieldUI$I18nFieldView::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	return $ParagraphView::modelToView(pos, $(adjustAllocation(a)), b);
}

$Shape* BasicTextFieldUI$I18nFieldView::modelToView(int32_t p0, $Position$Bias* b0, int32_t p1, $Position$Bias* b1, $Shape* a) {
	return $ParagraphView::modelToView(p0, b0, p1, b1, $(adjustAllocation(a)));
}

int32_t BasicTextFieldUI$I18nFieldView::viewToModel(float fx, float fy, $Shape* a, $Position$BiasArray* bias) {
	return $ParagraphView::viewToModel(fx, fy, $(adjustAllocation(a)), bias);
}

void BasicTextFieldUI$I18nFieldView::insertUpdate($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	$ParagraphView::insertUpdate(changes, $(adjustAllocation(a)), f);
	updateVisibilityModel();
}

void BasicTextFieldUI$I18nFieldView::removeUpdate($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	$ParagraphView::removeUpdate(changes, $(adjustAllocation(a)), f);
	updateVisibilityModel();
}

BasicTextFieldUI$I18nFieldView::BasicTextFieldUI$I18nFieldView() {
}

$Class* BasicTextFieldUI$I18nFieldView::load$($String* name, bool initialize) {
	$loadClass(BasicTextFieldUI$I18nFieldView, name, initialize, &_BasicTextFieldUI$I18nFieldView_ClassInfo_, allocate$BasicTextFieldUI$I18nFieldView);
	return class$;
}

$Class* BasicTextFieldUI$I18nFieldView::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax