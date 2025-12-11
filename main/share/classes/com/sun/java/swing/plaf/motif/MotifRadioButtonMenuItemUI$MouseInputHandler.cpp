#include <com/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI$MouseInputHandler.h>

#include <com/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $MotifRadioButtonMenuItemUI = ::com::sun::java::swing::plaf::motif::MotifRadioButtonMenuItemUI;
using $Point = ::java::awt::Point;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifRadioButtonMenuItemUI$MouseInputHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifRadioButtonMenuItemUI$MouseInputHandler, this$0)},
	{}
};

$MethodInfo _MotifRadioButtonMenuItemUI$MouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MotifRadioButtonMenuItemUI$MouseInputHandler::*)($MotifRadioButtonMenuItemUI*)>(&MotifRadioButtonMenuItemUI$MouseInputHandler::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifRadioButtonMenuItemUI$MouseInputHandler_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI$MouseInputHandler", "com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI", "MouseInputHandler", $PROTECTED},
	{}
};

$ClassInfo _MotifRadioButtonMenuItemUI$MouseInputHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI$MouseInputHandler",
	"java.lang.Object",
	"javax.swing.event.MouseInputListener",
	_MotifRadioButtonMenuItemUI$MouseInputHandler_FieldInfo_,
	_MotifRadioButtonMenuItemUI$MouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MotifRadioButtonMenuItemUI$MouseInputHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI"
};

$Object* allocate$MotifRadioButtonMenuItemUI$MouseInputHandler($Class* clazz) {
	return $of($alloc(MotifRadioButtonMenuItemUI$MouseInputHandler));
}

void MotifRadioButtonMenuItemUI$MouseInputHandler::init$($MotifRadioButtonMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifRadioButtonMenuItemUI$MouseInputHandler::mouseClicked($MouseEvent* e) {
}

void MotifRadioButtonMenuItemUI$MouseInputHandler::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$nc(manager)->setSelectedPath($(this->this$0->getPath()));
}

void MotifRadioButtonMenuItemUI$MouseInputHandler::mouseReleased($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$var($JMenuItem, menuItem, $cast($JMenuItem, $nc(e)->getComponent()));
	$var($Point, p, e->getPoint());
	bool var$0 = $nc(p)->x >= 0 && p->x < $nc(menuItem)->getWidth() && p->y >= 0;
	if (var$0 && p->y < menuItem->getHeight()) {
		$var($String, property, "RadioButtonMenuItem.doNotCloseOnMouseClick"_s);
		if (!$SwingUtilities2::getBoolean(menuItem, property)) {
			$nc(manager)->clearSelectedPath();
		}
		menuItem->doClick(0);
	} else {
		$nc(manager)->processMouseEvent(e);
	}
}

void MotifRadioButtonMenuItemUI$MouseInputHandler::mouseEntered($MouseEvent* e) {
}

void MotifRadioButtonMenuItemUI$MouseInputHandler::mouseExited($MouseEvent* e) {
}

void MotifRadioButtonMenuItemUI$MouseInputHandler::mouseDragged($MouseEvent* e) {
	$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(e);
}

void MotifRadioButtonMenuItemUI$MouseInputHandler::mouseMoved($MouseEvent* e) {
}

MotifRadioButtonMenuItemUI$MouseInputHandler::MotifRadioButtonMenuItemUI$MouseInputHandler() {
}

$Class* MotifRadioButtonMenuItemUI$MouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(MotifRadioButtonMenuItemUI$MouseInputHandler, name, initialize, &_MotifRadioButtonMenuItemUI$MouseInputHandler_ClassInfo_, allocate$MotifRadioButtonMenuItemUI$MouseInputHandler);
	return class$;
}

$Class* MotifRadioButtonMenuItemUI$MouseInputHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com