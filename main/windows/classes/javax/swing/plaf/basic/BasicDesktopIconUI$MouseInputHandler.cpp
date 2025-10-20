#include <javax/swing/plaf/basic/BasicDesktopIconUI$MouseInputHandler.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/MouseInputAdapter.h>
#include <javax/swing/plaf/basic/BasicDesktopIconUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $DesktopManager = ::javax::swing::DesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $MouseInputAdapter = ::javax::swing::event::MouseInputAdapter;
using $BasicDesktopIconUI = ::javax::swing::plaf::basic::BasicDesktopIconUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicDesktopIconUI$MouseInputHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDesktopIconUI$MouseInputHandler, this$0)},
	{"_x", "I", nullptr, 0, $field(BasicDesktopIconUI$MouseInputHandler, _x)},
	{"_y", "I", nullptr, 0, $field(BasicDesktopIconUI$MouseInputHandler, _y)},
	{"__x", "I", nullptr, 0, $field(BasicDesktopIconUI$MouseInputHandler, __x)},
	{"__y", "I", nullptr, 0, $field(BasicDesktopIconUI$MouseInputHandler, __y)},
	{"startingBounds", "Ljava/awt/Rectangle;", nullptr, 0, $field(BasicDesktopIconUI$MouseInputHandler, startingBounds)},
	{}
};

$MethodInfo _BasicDesktopIconUI$MouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicDesktopIconUI;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicDesktopIconUI$MouseInputHandler::*)($BasicDesktopIconUI*)>(&BasicDesktopIconUI$MouseInputHandler::init$))},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"moveAndRepaint", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicDesktopIconUI$MouseInputHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicDesktopIconUI$MouseInputHandler", "javax.swing.plaf.basic.BasicDesktopIconUI", "MouseInputHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicDesktopIconUI$MouseInputHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicDesktopIconUI$MouseInputHandler",
	"javax.swing.event.MouseInputAdapter",
	nullptr,
	_BasicDesktopIconUI$MouseInputHandler_FieldInfo_,
	_BasicDesktopIconUI$MouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicDesktopIconUI$MouseInputHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicDesktopIconUI"
};

$Object* allocate$BasicDesktopIconUI$MouseInputHandler($Class* clazz) {
	return $of($alloc(BasicDesktopIconUI$MouseInputHandler));
}

void BasicDesktopIconUI$MouseInputHandler::init$($BasicDesktopIconUI* this$0) {
	$set(this, this$0, this$0);
	$MouseInputAdapter::init$();
}

void BasicDesktopIconUI$MouseInputHandler::mouseReleased($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	this->_x = 0;
	this->_y = 0;
	this->__x = 0;
	this->__y = 0;
	$set(this, startingBounds, nullptr);
	$var($JDesktopPane, d, nullptr);
	if (($assign(d, $nc(this->this$0->desktopIcon)->getDesktopPane())) != nullptr) {
		$var($DesktopManager, dm, $nc(d)->getDesktopManager());
		$nc(dm)->endDraggingFrame(this->this$0->desktopIcon);
	}
}

void BasicDesktopIconUI$MouseInputHandler::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Component, var$0, $cast($Component, $nc(e)->getSource()));
	int32_t var$1 = e->getX();
	$var($Point, p, $SwingUtilities::convertPoint(var$0, var$1, e->getY(), nullptr));
	this->__x = $nc(e)->getX();
	this->__y = e->getY();
	this->_x = $nc(p)->x;
	this->_y = p->y;
	$set(this, startingBounds, $nc(this->this$0->desktopIcon)->getBounds());
	$var($JDesktopPane, d, nullptr);
	if (($assign(d, $nc(this->this$0->desktopIcon)->getDesktopPane())) != nullptr) {
		$var($DesktopManager, dm, $nc(d)->getDesktopManager());
		$nc(dm)->beginDraggingFrame(this->this$0->desktopIcon);
	}
	try {
		$nc(this->this$0->frame)->setSelected(true);
	} catch ($PropertyVetoException&) {
		$catch();
	}
	if ($instanceOf($JLayeredPane, $($nc(this->this$0->desktopIcon)->getParent()))) {
		$nc(($cast($JLayeredPane, $($nc(this->this$0->desktopIcon)->getParent()))))->moveToFront(this->this$0->desktopIcon);
	}
	if (e->getClickCount() > 1) {
		bool var$2 = $nc(this->this$0->frame)->isIconifiable();
		if (var$2 && $nc(this->this$0->frame)->isIcon()) {
			this->this$0->deiconize();
		}
	}
}

void BasicDesktopIconUI$MouseInputHandler::mouseMoved($MouseEvent* e) {
}

void BasicDesktopIconUI$MouseInputHandler::mouseDragged($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Point, p, nullptr);
	int32_t newX = 0;
	int32_t newY = 0;
	int32_t newW = 0;
	int32_t newH = 0;
	int32_t deltaX = 0;
	int32_t deltaY = 0;
	$var($Dimension, min, nullptr);
	$var($Dimension, max, nullptr);
	$var($Component, var$0, $cast($Component, $nc(e)->getSource()));
	int32_t var$1 = e->getX();
	$assign(p, $SwingUtilities::convertPoint(var$0, var$1, e->getY(), nullptr));
	$var($Insets, i, $nc(this->this$0->desktopIcon)->getInsets());
	int32_t pWidth = 0;
	int32_t pHeight = 0;
	pWidth = $nc(($cast($JComponent, $($nc(this->this$0->desktopIcon)->getParent()))))->getWidth();
	pHeight = $nc(($cast($JComponent, $($nc(this->this$0->desktopIcon)->getParent()))))->getHeight();
	if (this->startingBounds == nullptr) {
		return;
	}
	newX = $nc(this->startingBounds)->x - (this->_x - $nc(p)->x);
	newY = $nc(this->startingBounds)->y - (this->_y - p->y);
	if (newX + $nc(i)->left <= -this->__x) {
		newX = -this->__x - i->left;
	}
	if (newY + $nc(i)->top <= -this->__y) {
		newY = -this->__y - i->top;
	}
	if (newX + this->__x + $nc(i)->right > pWidth) {
		newX = pWidth - this->__x - i->right;
	}
	if (newY + this->__y + $nc(i)->bottom > pHeight) {
		newY = pHeight - this->__y - i->bottom;
	}
	$var($JDesktopPane, d, nullptr);
	if (($assign(d, $nc(this->this$0->desktopIcon)->getDesktopPane())) != nullptr) {
		$var($DesktopManager, dm, $nc(d)->getDesktopManager());
		$nc(dm)->dragFrame(this->this$0->desktopIcon, newX, newY);
	} else {
		$var($JComponent, var$2, static_cast<$JComponent*>(this->this$0->desktopIcon));
		int32_t var$3 = newX;
		int32_t var$4 = newY;
		int32_t var$5 = $nc(this->this$0->desktopIcon)->getWidth();
		moveAndRepaint(var$2, var$3, var$4, var$5, $nc(this->this$0->desktopIcon)->getHeight());
	}
	return;
}

void BasicDesktopIconUI$MouseInputHandler::moveAndRepaint($JComponent* f, int32_t newX, int32_t newY, int32_t newWidth, int32_t newHeight) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, r, $nc(f)->getBounds());
	f->setBounds(newX, newY, newWidth, newHeight);
	$SwingUtilities::computeUnion(newX, newY, newWidth, newHeight, r);
	$nc($(f->getParent()))->repaint($nc(r)->x, r->y, r->width, r->height);
}

BasicDesktopIconUI$MouseInputHandler::BasicDesktopIconUI$MouseInputHandler() {
}

$Class* BasicDesktopIconUI$MouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(BasicDesktopIconUI$MouseInputHandler, name, initialize, &_BasicDesktopIconUI$MouseInputHandler_ClassInfo_, allocate$BasicDesktopIconUI$MouseInputHandler);
	return class$;
}

$Class* BasicDesktopIconUI$MouseInputHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax