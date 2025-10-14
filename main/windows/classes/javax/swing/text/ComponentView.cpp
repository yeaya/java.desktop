#include <javax/swing/text/ComponentView.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/ComponentView$1.h>
#include <javax/swing/text/ComponentView$Invalidator.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef X_AXIS
#undef Y_AXIS

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $ComponentView$1 = ::javax::swing::text::ComponentView$1;
using $ComponentView$Invalidator = ::javax::swing::text::ComponentView$Invalidator;
using $Element = ::javax::swing::text::Element;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _ComponentView_FieldInfo_[] = {
	{"createdC", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(ComponentView, createdC)},
	{"c", "Ljavax/swing/text/ComponentView$Invalidator;", nullptr, $PRIVATE, $field(ComponentView, c)},
	{}
};

$MethodInfo _ComponentView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(ComponentView::*)($Element*)>(&ComponentView::init$))},
	{"createComponent", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"getAlignment", "(I)F", nullptr, $PUBLIC},
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Component*(ComponentView::*)()>(&ComponentView::getComponent))},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setComponentParent", "()V", nullptr, 0},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ComponentView_InnerClassesInfo_[] = {
	{"javax.swing.text.ComponentView$Invalidator", "javax.swing.text.ComponentView", "Invalidator", 0},
	{"javax.swing.text.ComponentView$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ComponentView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.ComponentView",
	"javax.swing.text.View",
	nullptr,
	_ComponentView_FieldInfo_,
	_ComponentView_MethodInfo_,
	nullptr,
	nullptr,
	_ComponentView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.ComponentView$Invalidator,javax.swing.text.ComponentView$1"
};

$Object* allocate$ComponentView($Class* clazz) {
	return $of($alloc(ComponentView));
}

void ComponentView::init$($Element* elem) {
	$View::init$(elem);
}

$Component* ComponentView::createComponent() {
	$var($AttributeSet, attr, $nc($(getElement()))->getAttributes());
	$var($Component, comp, $StyleConstants::getComponent(attr));
	return comp;
}

$Component* ComponentView::getComponent() {
	return this->createdC;
}

void ComponentView::paint($Graphics* g, $Shape* a) {
	if (this->c != nullptr) {
		$var($Rectangle, alloc, ($instanceOf($Rectangle, a)) ? $cast($Rectangle, a) : $nc(a)->getBounds());
		$nc(this->c)->setBounds($nc(alloc)->x, alloc->y, alloc->width, alloc->height);
	}
}

float ComponentView::getPreferredSpan(int32_t axis) {
	if ((axis != $View::X_AXIS) && (axis != $View::Y_AXIS)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
	}
	if (this->c != nullptr) {
		$var($Dimension, size, $nc(this->c)->getPreferredSize());
		if (axis == $View::X_AXIS) {
			return (float)$nc(size)->width;
		} else {
			return (float)$nc(size)->height;
		}
	}
	return (float)0;
}

float ComponentView::getMinimumSpan(int32_t axis) {
	if ((axis != $View::X_AXIS) && (axis != $View::Y_AXIS)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
	}
	if (this->c != nullptr) {
		$var($Dimension, size, $nc(this->c)->getMinimumSize());
		if (axis == $View::X_AXIS) {
			return (float)$nc(size)->width;
		} else {
			return (float)$nc(size)->height;
		}
	}
	return (float)0;
}

float ComponentView::getMaximumSpan(int32_t axis) {
	if ((axis != $View::X_AXIS) && (axis != $View::Y_AXIS)) {
		$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
	}
	if (this->c != nullptr) {
		$var($Dimension, size, $nc(this->c)->getMaximumSize());
		if (axis == $View::X_AXIS) {
			return (float)$nc(size)->width;
		} else {
			return (float)$nc(size)->height;
		}
	}
	return (float)0;
}

float ComponentView::getAlignment(int32_t axis) {
	if (this->c != nullptr) {
		switch (axis) {
		case $View::X_AXIS:
			{
				return $nc(this->c)->getAlignmentX();
			}
		case $View::Y_AXIS:
			{
				return $nc(this->c)->getAlignmentY();
			}
		}
	}
	return $View::getAlignment(axis);
}

void ComponentView::setParent($View* p) {
	$View::setParent(p);
	if ($SwingUtilities::isEventDispatchThread()) {
		setComponentParent();
	} else {
		$var($Runnable, callSetComponentParent, $new($ComponentView$1, this));
		$SwingUtilities::invokeLater(callSetComponentParent);
	}
}

void ComponentView::setComponentParent() {
	$var($View, p, getParent());
	if (p != nullptr) {
		$var($Container, parent, getContainer());
		if (parent != nullptr) {
			if (this->c == nullptr) {
				$var($Component, comp, createComponent());
				if (comp != nullptr) {
					$set(this, createdC, comp);
					$set(this, c, $new($ComponentView$Invalidator, this, comp));
				}
			}
			if (this->c != nullptr) {
				if ($nc(this->c)->getParent() == nullptr) {
					parent->add(static_cast<$Component*>(this->c), $of(this));
					parent->addPropertyChangeListener("enabled"_s, this->c);
				}
			}
		}
	} else if (this->c != nullptr) {
		$var($Container, parent, $nc(this->c)->getParent());
		if (parent != nullptr) {
			parent->remove(static_cast<$Component*>(this->c));
			parent->removePropertyChangeListener("enabled"_s, this->c);
		}
	}
}

$Shape* ComponentView::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	int32_t p0 = getStartOffset();
	int32_t p1 = getEndOffset();
	if ((pos >= p0) && (pos <= p1)) {
		$var($Rectangle, r, $nc(a)->getBounds());
		if (pos == p1) {
			$nc(r)->x += r->width;
		}
		$nc(r)->width = 0;
		return r;
	}
	$throwNew($BadLocationException, $$str({$$str(pos), " not in range "_s, $$str(p0), ","_s, $$str(p1)}), pos);
}

int32_t ComponentView::viewToModel(float x, float y, $Shape* a, $Position$BiasArray* bias) {
	$var($Rectangle, alloc, $cast($Rectangle, a));
	if (x < $nc(alloc)->x + (alloc->width / 2)) {
		$init($Position$Bias);
		$nc(bias)->set(0, $Position$Bias::Forward);
		return getStartOffset();
	}
	$init($Position$Bias);
	$nc(bias)->set(0, $Position$Bias::Backward);
	return getEndOffset();
}

ComponentView::ComponentView() {
}

$Class* ComponentView::load$($String* name, bool initialize) {
	$loadClass(ComponentView, name, initialize, &_ComponentView_ClassInfo_, allocate$ComponentView);
	return class$;
}

$Class* ComponentView::class$ = nullptr;

		} // text
	} // swing
} // javax