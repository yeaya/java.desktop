#include <com/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI$MouseInputHandler.h>

#include <com/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $MotifCheckBoxMenuItemUI = ::com::sun::java::swing::plaf::motif::MotifCheckBoxMenuItemUI;
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
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifCheckBoxMenuItemUI$MouseInputHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifCheckBoxMenuItemUI$MouseInputHandler, this$0)},
	{}
};

$MethodInfo _MotifCheckBoxMenuItemUI$MouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MotifCheckBoxMenuItemUI$MouseInputHandler::*)($MotifCheckBoxMenuItemUI*)>(&MotifCheckBoxMenuItemUI$MouseInputHandler::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifCheckBoxMenuItemUI$MouseInputHandler_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI$MouseInputHandler", "com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI", "MouseInputHandler", $PROTECTED},
	{}
};

$ClassInfo _MotifCheckBoxMenuItemUI$MouseInputHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI$MouseInputHandler",
	"java.lang.Object",
	"javax.swing.event.MouseInputListener",
	_MotifCheckBoxMenuItemUI$MouseInputHandler_FieldInfo_,
	_MotifCheckBoxMenuItemUI$MouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MotifCheckBoxMenuItemUI$MouseInputHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI"
};

$Object* allocate$MotifCheckBoxMenuItemUI$MouseInputHandler($Class* clazz) {
	return $of($alloc(MotifCheckBoxMenuItemUI$MouseInputHandler));
}

void MotifCheckBoxMenuItemUI$MouseInputHandler::init$($MotifCheckBoxMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifCheckBoxMenuItemUI$MouseInputHandler::mouseClicked($MouseEvent* e) {
}

void MotifCheckBoxMenuItemUI$MouseInputHandler::mousePressed($MouseEvent* e) {
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$nc(manager)->setSelectedPath($(this->this$0->getPath()));
}

void MotifCheckBoxMenuItemUI$MouseInputHandler::mouseReleased($MouseEvent* e) {
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$var($JMenuItem, menuItem, $cast($JMenuItem, $nc(e)->getComponent()));
	$var($Point, p, e->getPoint());
	bool var$0 = $nc(p)->x >= 0 && p->x < $nc(menuItem)->getWidth() && p->y >= 0;
	if (var$0 && p->y < menuItem->getHeight()) {
		$var($String, property, "CheckBoxMenuItem.doNotCloseOnMouseClick"_s);
		if (!$SwingUtilities2::getBoolean(menuItem, property)) {
			$nc(manager)->clearSelectedPath();
		}
		menuItem->doClick(0);
	} else {
		$nc(manager)->processMouseEvent(e);
	}
}

void MotifCheckBoxMenuItemUI$MouseInputHandler::mouseEntered($MouseEvent* e) {
}

void MotifCheckBoxMenuItemUI$MouseInputHandler::mouseExited($MouseEvent* e) {
}

void MotifCheckBoxMenuItemUI$MouseInputHandler::mouseDragged($MouseEvent* e) {
	$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(e);
}

void MotifCheckBoxMenuItemUI$MouseInputHandler::mouseMoved($MouseEvent* e) {
}

MotifCheckBoxMenuItemUI$MouseInputHandler::MotifCheckBoxMenuItemUI$MouseInputHandler() {
}

$Class* MotifCheckBoxMenuItemUI$MouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(MotifCheckBoxMenuItemUI$MouseInputHandler, name, initialize, &_MotifCheckBoxMenuItemUI$MouseInputHandler_ClassInfo_, allocate$MotifCheckBoxMenuItemUI$MouseInputHandler);
	return class$;
}

$Class* MotifCheckBoxMenuItemUI$MouseInputHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com