#include <javax/swing/text/html/NoFramesView.h>

#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Shape.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/BlockView.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxView = ::javax::swing::text::BoxView;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $View = ::javax::swing::text::View;
using $BlockView = ::javax::swing::text::html::BlockView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _NoFramesView_FieldInfo_[] = {
	{"visible", "Z", nullptr, 0, $field(NoFramesView, visible)},
	{}
};

$MethodInfo _NoFramesView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;I)V", nullptr, $PUBLIC, $method(static_cast<void(NoFramesView::*)($Element*,int32_t)>(&NoFramesView::init$))},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"layout", "(II)V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NoFramesView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.NoFramesView",
	"javax.swing.text.html.BlockView",
	nullptr,
	_NoFramesView_FieldInfo_,
	_NoFramesView_MethodInfo_
};

$Object* allocate$NoFramesView($Class* clazz) {
	return $of($alloc(NoFramesView));
}

void NoFramesView::init$($Element* elem, int32_t axis) {
	$BlockView::init$(elem, axis);
	this->visible = false;
}

void NoFramesView::paint($Graphics* g, $Shape* allocation) {
	$var($Container, host, getContainer());
	if (host != nullptr && this->visible != $nc(($cast($JTextComponent, host)))->isEditable()) {
		this->visible = $nc(($cast($JTextComponent, host)))->isEditable();
	}
	if (!isVisible()) {
		return;
	}
	$BlockView::paint(g, allocation);
}

void NoFramesView::setParent($View* p) {
	if (p != nullptr) {
		$var($Container, host, p->getContainer());
		if (host != nullptr) {
			this->visible = $nc(($cast($JTextComponent, host)))->isEditable();
		}
	}
	$BlockView::setParent(p);
}

bool NoFramesView::isVisible() {
	return this->visible;
}

void NoFramesView::layout(int32_t width, int32_t height) {
	if (!isVisible()) {
		return;
	}
	$BlockView::layout(width, height);
}

float NoFramesView::getPreferredSpan(int32_t axis) {
	if (!this->visible) {
		return (float)0;
	}
	return $BlockView::getPreferredSpan(axis);
}

float NoFramesView::getMinimumSpan(int32_t axis) {
	if (!this->visible) {
		return (float)0;
	}
	return $BlockView::getMinimumSpan(axis);
}

float NoFramesView::getMaximumSpan(int32_t axis) {
	if (!this->visible) {
		return (float)0;
	}
	return $BlockView::getMaximumSpan(axis);
}

NoFramesView::NoFramesView() {
}

$Class* NoFramesView::load$($String* name, bool initialize) {
	$loadClass(NoFramesView, name, initialize, &_NoFramesView_ClassInfo_, allocate$NoFramesView);
	return class$;
}

$Class* NoFramesView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax