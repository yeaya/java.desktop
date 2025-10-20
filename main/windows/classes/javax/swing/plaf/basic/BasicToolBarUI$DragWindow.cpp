#include <javax/swing/plaf/basic/BasicToolBarUI$DragWindow.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

#undef HORIZONTAL

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JToolBar = ::javax::swing::JToolBar;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicToolBarUI$DragWindow_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$DragWindow, this$0)},
	{"borderColor", "Ljava/awt/Color;", nullptr, 0, $field(BasicToolBarUI$DragWindow, borderColor)},
	{"orientation", "I", nullptr, 0, $field(BasicToolBarUI$DragWindow, orientation)},
	{"offset", "Ljava/awt/Point;", nullptr, 0, $field(BasicToolBarUI$DragWindow, offset)},
	{}
};

$MethodInfo _BasicToolBarUI$DragWindow_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;Ljava/awt/Window;)V", nullptr, 0, $method(static_cast<void(BasicToolBarUI$DragWindow::*)($BasicToolBarUI*,$Window*)>(&BasicToolBarUI$DragWindow::init$))},
	{"getBorderColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getOffset", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getOrientation", "()I", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setBorderColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setOffset", "(Ljava/awt/Point;)V", nullptr, $PUBLIC},
	{"setOrientation", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicToolBarUI$DragWindow_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicToolBarUI$DragWindow", "javax.swing.plaf.basic.BasicToolBarUI", "DragWindow", $PROTECTED},
	{}
};

$ClassInfo _BasicToolBarUI$DragWindow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicToolBarUI$DragWindow",
	"java.awt.Window",
	nullptr,
	_BasicToolBarUI$DragWindow_FieldInfo_,
	_BasicToolBarUI$DragWindow_MethodInfo_,
	nullptr,
	nullptr,
	_BasicToolBarUI$DragWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicToolBarUI"
};

$Object* allocate$BasicToolBarUI$DragWindow($Class* clazz) {
	return $of($alloc(BasicToolBarUI$DragWindow));
}

void BasicToolBarUI$DragWindow::init$($BasicToolBarUI* this$0, $Window* w) {
	$set(this, this$0, this$0);
	$Window::init$(w);
	$init($Color);
	$set(this, borderColor, $Color::gray);
	this->orientation = $nc(this->this$0->toolBar)->getOrientation();
}

int32_t BasicToolBarUI$DragWindow::getOrientation() {
	return this->orientation;
}

void BasicToolBarUI$DragWindow::setOrientation(int32_t o) {
	$useLocalCurrentObjectStackCache();
	if (isShowing()) {
		if (o == this->orientation) {
			return;
		}
		this->orientation = o;
		$var($Dimension, size, getSize());
		setSize($$new($Dimension, $nc(size)->height, size->width));
		if (this->offset != nullptr) {
			if ($BasicGraphicsUtils::isLeftToRight(this->this$0->toolBar)) {
				setOffset($$new($Point, $nc(this->offset)->y, $nc(this->offset)->x));
			} else if (o == $JToolBar::HORIZONTAL) {
				setOffset($$new($Point, $nc(size)->height - $nc(this->offset)->y, $nc(this->offset)->x));
			} else {
				setOffset($$new($Point, $nc(this->offset)->y, $nc(size)->width - $nc(this->offset)->x));
			}
		}
		repaint();
	}
}

$Point* BasicToolBarUI$DragWindow::getOffset() {
	return this->offset;
}

void BasicToolBarUI$DragWindow::setOffset($Point* p) {
	$set(this, offset, p);
}

void BasicToolBarUI$DragWindow::setBorderColor($Color* c) {
	if (this->borderColor == c) {
		return;
	}
	$set(this, borderColor, c);
	repaint();
}

$Color* BasicToolBarUI$DragWindow::getBorderColor() {
	return this->borderColor;
}

void BasicToolBarUI$DragWindow::paint($Graphics* g) {
	this->this$0->paintDragWindow(g);
	$Window::paint(g);
}

$Insets* BasicToolBarUI$DragWindow::getInsets() {
	return $new($Insets, 1, 1, 1, 1);
}

BasicToolBarUI$DragWindow::BasicToolBarUI$DragWindow() {
}

$Class* BasicToolBarUI$DragWindow::load$($String* name, bool initialize) {
	$loadClass(BasicToolBarUI$DragWindow, name, initialize, &_BasicToolBarUI$DragWindow_ClassInfo_, allocate$BasicToolBarUI$DragWindow);
	return class$;
}

$Class* BasicToolBarUI$DragWindow::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax