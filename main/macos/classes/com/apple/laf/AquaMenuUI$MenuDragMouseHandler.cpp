#include <com/apple/laf/AquaMenuUI$MenuDragMouseHandler.h>

#include <com/apple/laf/AquaMenuUI.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/event/MenuDragMouseEvent.h>
#include <jcpp.h>

#undef MOUSE_RELEASED

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $AquaMenuUI = ::com::apple::laf::AquaMenuUI;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $MenuDragMouseEvent = ::javax::swing::event::MenuDragMouseEvent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaMenuUI$MenuDragMouseHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaMenuUI$MenuDragMouseHandler, this$0)},
	{}
};

$MethodInfo _AquaMenuUI$MenuDragMouseHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaMenuUI;)V", nullptr, 0, $method(static_cast<void(AquaMenuUI$MenuDragMouseHandler::*)($AquaMenuUI*)>(&AquaMenuUI$MenuDragMouseHandler::init$))},
	{"menuDragMouseDragged", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC},
	{"menuDragMouseEntered", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC},
	{"menuDragMouseExited", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC},
	{"menuDragMouseReleased", "(Ljavax/swing/event/MenuDragMouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaMenuUI$MenuDragMouseHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaMenuUI$MenuDragMouseHandler", "com.apple.laf.AquaMenuUI", "MenuDragMouseHandler", 0},
	{}
};

$ClassInfo _AquaMenuUI$MenuDragMouseHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaMenuUI$MenuDragMouseHandler",
	"java.lang.Object",
	"javax.swing.event.MenuDragMouseListener",
	_AquaMenuUI$MenuDragMouseHandler_FieldInfo_,
	_AquaMenuUI$MenuDragMouseHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaMenuUI$MenuDragMouseHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaMenuUI"
};

$Object* allocate$AquaMenuUI$MenuDragMouseHandler($Class* clazz) {
	return $of($alloc(AquaMenuUI$MenuDragMouseHandler));
}

void AquaMenuUI$MenuDragMouseHandler::init$($AquaMenuUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaMenuUI$MenuDragMouseHandler::menuDragMouseDragged($MenuDragMouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($AquaMenuUI::access$000(this->this$0)))->isEnabled() == false) {
		return;
	}
	$var($MenuSelectionManager, manager, $nc(e)->getMenuSelectionManager());
	$var($MenuElementArray, path, e->getPath());
	$var($Point, p, e->getPoint());
	bool var$0 = $nc(p)->x >= 0 && p->x < $nc($($AquaMenuUI::access$100(this->this$0)))->getWidth() && p->y >= 0;
	if (var$0 && p->y < $nc($($AquaMenuUI::access$200(this->this$0)))->getHeight()) {
		$var($JMenu, menu, $cast($JMenu, $AquaMenuUI::access$300(this->this$0)));
		$var($MenuElementArray, selectedPath, $nc(manager)->getSelectedPath());
		if (!($nc(selectedPath)->length > 0 && $equals(selectedPath->get(selectedPath->length - 1), $nc(menu)->getPopupMenu()))) {
			if (menu->getDelay() == 0) {
				$AquaMenuUI::appendPath(path, $(menu->getPopupMenu()));
			} else {
				manager->setSelectedPath(path);
				$AquaMenuUI::access$400(this->this$0, menu);
			}
		}
	} else if (e->getID() == $MouseEvent::MOUSE_RELEASED) {
		$var($Component, var$1, e->getComponent());
		$var($Component, comp, $nc(manager)->componentForPoint(var$1, $(e->getPoint())));
		if (comp == nullptr) {
			manager->clearSelectedPath();
		}
	}
}

void AquaMenuUI$MenuDragMouseHandler::menuDragMouseEntered($MenuDragMouseEvent* e) {
}

void AquaMenuUI$MenuDragMouseHandler::menuDragMouseExited($MenuDragMouseEvent* e) {
}

void AquaMenuUI$MenuDragMouseHandler::menuDragMouseReleased($MenuDragMouseEvent* e) {
}

AquaMenuUI$MenuDragMouseHandler::AquaMenuUI$MenuDragMouseHandler() {
}

$Class* AquaMenuUI$MenuDragMouseHandler::load$($String* name, bool initialize) {
	$loadClass(AquaMenuUI$MenuDragMouseHandler, name, initialize, &_AquaMenuUI$MenuDragMouseHandler_ClassInfo_, allocate$AquaMenuUI$MenuDragMouseHandler);
	return class$;
}

$Class* AquaMenuUI$MenuDragMouseHandler::class$ = nullptr;

		} // laf
	} // apple
} // com