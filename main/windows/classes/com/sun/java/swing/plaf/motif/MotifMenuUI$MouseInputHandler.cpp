#include <com/sun/java/swing/plaf/motif/MotifMenuUI$MouseInputHandler.h>

#include <com/sun/java/swing/plaf/motif/MotifMenuUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
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
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $MotifMenuUI = ::com::sun::java::swing::plaf::motif::MotifMenuUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifMenuUI$MouseInputHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifMenuUI$MouseInputHandler, this$0)},
	{}
};

$MethodInfo _MotifMenuUI$MouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifMenuUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MotifMenuUI$MouseInputHandler::*)($MotifMenuUI*)>(&MotifMenuUI$MouseInputHandler::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifMenuUI$MouseInputHandler_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifMenuUI$MouseInputHandler", "com.sun.java.swing.plaf.motif.MotifMenuUI", "MouseInputHandler", $PROTECTED},
	{}
};

$ClassInfo _MotifMenuUI$MouseInputHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifMenuUI$MouseInputHandler",
	"java.lang.Object",
	"javax.swing.event.MouseInputListener",
	_MotifMenuUI$MouseInputHandler_FieldInfo_,
	_MotifMenuUI$MouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_MotifMenuUI$MouseInputHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifMenuUI"
};

$Object* allocate$MotifMenuUI$MouseInputHandler($Class* clazz) {
	return $of($alloc(MotifMenuUI$MouseInputHandler));
}

void MotifMenuUI$MouseInputHandler::init$($MotifMenuUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifMenuUI$MouseInputHandler::mouseClicked($MouseEvent* e) {
}

void MotifMenuUI$MouseInputHandler::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$var($JMenu, menu, $cast($JMenu, $nc(e)->getComponent()));
	if ($nc(menu)->isEnabled()) {
		if (menu->isTopLevelMenu()) {
			if (menu->isSelected()) {
				$nc(manager)->clearSelectedPath();
			} else {
				$var($Container, cnt, menu->getParent());
				if (cnt != nullptr && $instanceOf($JMenuBar, cnt)) {
					$var($MenuElementArray, me, $new($MenuElementArray, 2));
					me->set(0, $cast($MenuElement, cnt));
					me->set(1, menu);
					$nc(manager)->setSelectedPath(me);
				}
			}
		}
		$var($MenuElementArray, path, this->this$0->getPath());
		if ($nc(path)->length > 0) {
			$var($MenuElementArray, newPath, $new($MenuElementArray, path->length + 1));
			$System::arraycopy(path, 0, newPath, 0, path->length);
			newPath->set(path->length, $(menu->getPopupMenu()));
			$nc(manager)->setSelectedPath(newPath);
		}
	}
}

void MotifMenuUI$MouseInputHandler::mouseReleased($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$var($JMenuItem, menuItem, $cast($JMenuItem, $nc(e)->getComponent()));
	$var($Point, p, e->getPoint());
	bool var$0 = $nc(p)->x >= 0 && p->x < $nc(menuItem)->getWidth() && p->y >= 0;
	if (!(var$0 && p->y < menuItem->getHeight())) {
		$nc(manager)->processMouseEvent(e);
	}
}

void MotifMenuUI$MouseInputHandler::mouseEntered($MouseEvent* e) {
}

void MotifMenuUI$MouseInputHandler::mouseExited($MouseEvent* e) {
}

void MotifMenuUI$MouseInputHandler::mouseDragged($MouseEvent* e) {
	$nc($($MenuSelectionManager::defaultManager()))->processMouseEvent(e);
}

void MotifMenuUI$MouseInputHandler::mouseMoved($MouseEvent* e) {
}

MotifMenuUI$MouseInputHandler::MotifMenuUI$MouseInputHandler() {
}

$Class* MotifMenuUI$MouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(MotifMenuUI$MouseInputHandler, name, initialize, &_MotifMenuUI$MouseInputHandler_ClassInfo_, allocate$MotifMenuUI$MouseInputHandler);
	return class$;
}

$Class* MotifMenuUI$MouseInputHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com