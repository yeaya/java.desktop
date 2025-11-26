#include <com/sun/java/swing/plaf/motif/MotifMenuItemUI$MouseInputHandler.h>

#include <com/sun/java/swing/plaf/motif/MotifMenuItemUI.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $MotifMenuItemUI = ::com::sun::java::swing::plaf::motif::MotifMenuItemUI;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifMenuItemUI$MouseInputHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifMenuItemUI$MouseInputHandler, this$0)},
	{}
};

$MethodInfo _MotifMenuItemUI$MouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifMenuItemUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MotifMenuItemUI$MouseInputHandler::*)($MotifMenuItemUI*)>(&MotifMenuItemUI$MouseInputHandler::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifMenuItemUI$MouseInputHandler_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifMenuItemUI$MouseInputHandler", "com.sun.java.swing.plaf.motif.MotifMenuItemUI", "MouseInputHandler", $PROTECTED},
	{}
};

$ClassInfo _MotifMenuItemUI$MouseInputHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifMenuItemUI$MouseInputHandler",
	"java.lang.Object",
	"javax.swing.event.MouseInputListener",
	_MotifMenuItemUI$MouseInputHandler_FieldInfo_,
	_MotifMenuItemUI$MouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MotifMenuItemUI$MouseInputHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifMenuItemUI"
};

$Object* allocate$MotifMenuItemUI$MouseInputHandler($Class* clazz) {
	return $of($alloc(MotifMenuItemUI$MouseInputHandler));
}

void MotifMenuItemUI$MouseInputHandler::init$($MotifMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifMenuItemUI$MouseInputHandler::mouseClicked($MouseEvent* e) {
}

void MotifMenuItemUI$MouseInputHandler::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$nc(manager)->setSelectedPath($(this->this$0->getPath()));
}

void MotifMenuItemUI$MouseInputHandler::mouseReleased($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$var($JMenuItem, menuItem, $cast($JMenuItem, $nc(e)->getComponent()));
	$var($Point, p, e->getPoint());
	bool var$0 = $nc(p)->x >= 0 && p->x < $nc(menuItem)->getWidth() && p->y >= 0;
	if (var$0 && p->y < menuItem->getHeight()) {
		$nc(manager)->clearSelectedPath();
		menuItem->doClick(0);
	} else {
		$nc(manager)->processMouseEvent(e);
	}
}

void MotifMenuItemUI$MouseInputHandler::mouseEntered($MouseEvent* e) {
}

void MotifMenuItemUI$MouseInputHandler::mouseExited($MouseEvent* e) {
}

void MotifMenuItemUI$MouseInputHandler::mouseDragged($MouseEvent* e) {
	$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(e);
}

void MotifMenuItemUI$MouseInputHandler::mouseMoved($MouseEvent* e) {
}

MotifMenuItemUI$MouseInputHandler::MotifMenuItemUI$MouseInputHandler() {
}

$Class* MotifMenuItemUI$MouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(MotifMenuItemUI$MouseInputHandler, name, initialize, &_MotifMenuItemUI$MouseInputHandler_ClassInfo_, allocate$MotifMenuItemUI$MouseInputHandler);
	return class$;
}

$Class* MotifMenuItemUI$MouseInputHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com