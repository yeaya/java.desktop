#include <javax/swing/text/html/EditableView.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Shape.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/ComponentView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentView = ::javax::swing::text::ComponentView;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _EditableView_FieldInfo_[] = {
	{"isVisible", "Z", nullptr, $PRIVATE, $field(EditableView, isVisible$)},
	{}
};

$MethodInfo _EditableView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, 0, $method(static_cast<void(EditableView::*)($Element*)>(&EditableView::init$))},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"isVisible", "()Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EditableView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.EditableView",
	"javax.swing.text.ComponentView",
	nullptr,
	_EditableView_FieldInfo_,
	_EditableView_MethodInfo_
};

$Object* allocate$EditableView($Class* clazz) {
	return $of($alloc(EditableView));
}

void EditableView::init$($Element* e) {
	$ComponentView::init$(e);
}

float EditableView::getMinimumSpan(int32_t axis) {
	if (this->isVisible$) {
		return $ComponentView::getMinimumSpan(axis);
	}
	return (float)0;
}

float EditableView::getPreferredSpan(int32_t axis) {
	if (this->isVisible$) {
		return $ComponentView::getPreferredSpan(axis);
	}
	return (float)0;
}

float EditableView::getMaximumSpan(int32_t axis) {
	if (this->isVisible$) {
		return $ComponentView::getMaximumSpan(axis);
	}
	return (float)0;
}

void EditableView::paint($Graphics* g, $Shape* allocation) {
	$var($Component, c, getComponent());
	$var($Container, host, getContainer());
	if ($instanceOf($JTextComponent, host) && this->isVisible$ != $nc(($cast($JTextComponent, host)))->isEditable()) {
		this->isVisible$ = $nc(($cast($JTextComponent, host)))->isEditable();
		preferenceChanged(nullptr, true, true);
		$nc(host)->repaint();
	}
	if (this->isVisible$) {
		$ComponentView::paint(g, allocation);
	} else {
		setSize((float)0, (float)0);
	}
	if (c != nullptr) {
		c->setFocusable(this->isVisible$);
	}
}

void EditableView::setParent($View* parent) {
	if (parent != nullptr) {
		$var($Container, host, parent->getContainer());
		if (host != nullptr) {
			if ($instanceOf($JTextComponent, host)) {
				this->isVisible$ = $nc(($cast($JTextComponent, host)))->isEditable();
			} else {
				this->isVisible$ = false;
			}
		}
	}
	$ComponentView::setParent(parent);
}

bool EditableView::isVisible() {
	return this->isVisible$;
}

EditableView::EditableView() {
}

$Class* EditableView::load$($String* name, bool initialize) {
	$loadClass(EditableView, name, initialize, &_EditableView_ClassInfo_, allocate$EditableView);
	return class$;
}

$Class* EditableView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax