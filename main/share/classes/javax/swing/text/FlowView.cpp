#include <javax/swing/text/FlowView.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/Math.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/FlowView$FlowStrategy.h>
#include <javax/swing/text/FlowView$LogicalView.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef X_AXIS
#undef Y_AXIS

using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Element = ::javax::swing::text::Element;
using $FlowView$FlowStrategy = ::javax::swing::text::FlowView$FlowStrategy;
using $FlowView$LogicalView = ::javax::swing::text::FlowView$LogicalView;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _FlowView_FieldInfo_[] = {
	{"layoutSpan", "I", nullptr, $PROTECTED, $field(FlowView, layoutSpan)},
	{"layoutPool", "Ljavax/swing/text/View;", nullptr, $PROTECTED, $field(FlowView, layoutPool)},
	{"strategy", "Ljavax/swing/text/FlowView$FlowStrategy;", nullptr, $PROTECTED, $field(FlowView, strategy)},
	{}
};

$MethodInfo _FlowView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;I)V", nullptr, $PUBLIC, $method(static_cast<void(FlowView::*)($Element*,int32_t)>(&FlowView::init$))},
	{"calculateMinorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"createRow", "()Ljavax/swing/text/View;", nullptr, $PROTECTED | $ABSTRACT},
	{"getFlowAxis", "()I", nullptr, $PUBLIC},
	{"getFlowSpan", "(I)I", nullptr, $PUBLIC},
	{"getFlowStart", "(I)I", nullptr, $PUBLIC},
	{"getViewIndexAtPosition", "(I)I", nullptr, $PROTECTED},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"layout", "(II)V", nullptr, $PROTECTED},
	{"loadChildren", "(Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FlowView_InnerClassesInfo_[] = {
	{"javax.swing.text.FlowView$LogicalView", "javax.swing.text.FlowView", "LogicalView", $STATIC},
	{"javax.swing.text.FlowView$FlowStrategy", "javax.swing.text.FlowView", "FlowStrategy", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _FlowView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.text.FlowView",
	"javax.swing.text.BoxView",
	nullptr,
	_FlowView_FieldInfo_,
	_FlowView_MethodInfo_,
	nullptr,
	nullptr,
	_FlowView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.FlowView$LogicalView,javax.swing.text.FlowView$FlowStrategy"
};

$Object* allocate$FlowView($Class* clazz) {
	return $of($alloc(FlowView));
}

void FlowView::init$($Element* elem, int32_t axis) {
	$BoxView::init$(elem, axis);
	this->layoutSpan = $Integer::MAX_VALUE;
	$set(this, strategy, $new($FlowView$FlowStrategy));
}

int32_t FlowView::getFlowAxis() {
	if (getAxis() == $View::Y_AXIS) {
		return $View::X_AXIS;
	}
	return $View::Y_AXIS;
}

int32_t FlowView::getFlowSpan(int32_t index) {
	return this->layoutSpan;
}

int32_t FlowView::getFlowStart(int32_t index) {
	return 0;
}

void FlowView::loadChildren($ViewFactory* f) {
	if (this->layoutPool == nullptr) {
		$set(this, layoutPool, $new($FlowView$LogicalView, $(getElement())));
	}
	$nc(this->layoutPool)->setParent(this);
	$nc(this->strategy)->insertUpdate(this, nullptr, nullptr);
}

int32_t FlowView::getViewIndexAtPosition(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = pos >= getStartOffset();
	if (var$0 && (pos < getEndOffset())) {
		for (int32_t counter = 0; counter < getViewCount(); ++counter) {
			$var($View, v, getView(counter));
			bool var$1 = pos >= $nc(v)->getStartOffset();
			if (var$1 && pos < v->getEndOffset()) {
				return counter;
			}
		}
	}
	return -1;
}

void FlowView::layout(int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	int32_t faxis = getFlowAxis();
	int32_t newSpan = 0;
	if (faxis == $View::X_AXIS) {
		newSpan = width;
	} else {
		newSpan = height;
	}
	if (this->layoutSpan != newSpan) {
		layoutChanged(faxis);
		layoutChanged(getAxis());
		this->layoutSpan = newSpan;
	}
	if (!isLayoutValid(faxis)) {
		int32_t heightAxis = getAxis();
		int32_t oldFlowHeight = (heightAxis == $View::X_AXIS) ? getWidth() : getHeight();
		$nc(this->strategy)->layout(this);
		int32_t newFlowHeight = $cast(int32_t, getPreferredSpan(heightAxis));
		if (oldFlowHeight != newFlowHeight) {
			$var($View, p, getParent());
			if (p != nullptr) {
				p->preferenceChanged(this, (heightAxis == $View::X_AXIS), (heightAxis == $View::Y_AXIS));
			}
			$var($Component, host, getContainer());
			if (host != nullptr) {
				host->repaint();
			}
		}
	}
	$BoxView::layout(width, height);
}

$SizeRequirements* FlowView::calculateMinorAxisRequirements(int32_t axis, $SizeRequirements* r$renamed) {
	$var($SizeRequirements, r, r$renamed);
	if (r == nullptr) {
		$assign(r, $new($SizeRequirements));
	}
	float pref = $nc(this->layoutPool)->getPreferredSpan(axis);
	float min = $nc(this->layoutPool)->getMinimumSpan(axis);
	$nc(r)->minimum = $cast(int32_t, min);
	r->preferred = $Math::max(r->minimum, $cast(int32_t, pref));
	r->maximum = $Integer::MAX_VALUE;
	r->alignment = 0.5f;
	return r;
}

void FlowView::insertUpdate($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	$nc(this->layoutPool)->insertUpdate(changes, a, f);
	$nc(this->strategy)->insertUpdate(this, changes, $(getInsideAllocation(a)));
}

void FlowView::removeUpdate($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	$nc(this->layoutPool)->removeUpdate(changes, a, f);
	$nc(this->strategy)->removeUpdate(this, changes, $(getInsideAllocation(a)));
}

void FlowView::changedUpdate($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	$nc(this->layoutPool)->changedUpdate(changes, a, f);
	$nc(this->strategy)->changedUpdate(this, changes, $(getInsideAllocation(a)));
}

void FlowView::setParent($View* parent) {
	$BoxView::setParent(parent);
	if (parent == nullptr && this->layoutPool != nullptr) {
		$nc(this->layoutPool)->setParent(nullptr);
	}
}

FlowView::FlowView() {
}

$Class* FlowView::load$($String* name, bool initialize) {
	$loadClass(FlowView, name, initialize, &_FlowView_ClassInfo_, allocate$FlowView);
	return class$;
}

$Class* FlowView::class$ = nullptr;

		} // text
	} // swing
} // javax