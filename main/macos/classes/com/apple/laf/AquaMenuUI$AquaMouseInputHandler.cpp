#include <com/apple/laf/AquaMenuUI$AquaMouseInputHandler.h>

#include <com/apple/laf/AquaMenuUI.h>
#include <java/awt/Container.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/plaf/basic/BasicMenuUI$MouseInputHandler.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $AquaMenuUI = ::com::apple::laf::AquaMenuUI;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $BasicMenuUI = ::javax::swing::plaf::basic::BasicMenuUI;
using $BasicMenuUI$MouseInputHandler = ::javax::swing::plaf::basic::BasicMenuUI$MouseInputHandler;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaMenuUI$AquaMouseInputHandler_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaMenuUI$AquaMouseInputHandler, this$0)},
	{}
};

$MethodInfo _AquaMenuUI$AquaMouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaMenuUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaMenuUI$AquaMouseInputHandler::*)($AquaMenuUI*)>(&AquaMenuUI$AquaMouseInputHandler::init$))},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaMenuUI$AquaMouseInputHandler_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaMenuUI$AquaMouseInputHandler", "com.apple.laf.AquaMenuUI", "AquaMouseInputHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler", "javax.swing.plaf.basic.BasicMenuUI", "MouseInputHandler", $PROTECTED},
	{}
};

$ClassInfo _AquaMenuUI$AquaMouseInputHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaMenuUI$AquaMouseInputHandler",
	"javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler",
	nullptr,
	_AquaMenuUI$AquaMouseInputHandler_FieldInfo_,
	_AquaMenuUI$AquaMouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_AquaMenuUI$AquaMouseInputHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaMenuUI"
};

$Object* allocate$AquaMenuUI$AquaMouseInputHandler($Class* clazz) {
	return $of($alloc(AquaMenuUI$AquaMouseInputHandler));
}

void AquaMenuUI$AquaMouseInputHandler::init$($AquaMenuUI* this$0) {
	$set(this, this$0, this$0);
	$BasicMenuUI$MouseInputHandler::init$(this$0);
}

void AquaMenuUI$AquaMouseInputHandler::mouseEntered($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JMenu, menu, $cast($JMenu, $AquaMenuUI::access$500(this->this$0)));
	if (!$nc(menu)->isEnabled()) {
		return;
	}
	$var($MenuSelectionManager, manager, $MenuSelectionManager::defaultManager());
	$var($MenuElementArray, selectedPath, $nc(manager)->getSelectedPath());
	if (!($nc(selectedPath)->length > 0 && $equals(selectedPath->get(selectedPath->length - 1), $nc(menu)->getPopupMenu()))) {
		bool var$0 = !menu->isTopLevelMenu();
		if (var$0 || (selectedPath->length > 0 && $equals(selectedPath->get(0), menu->getParent()))) {
			if (menu->getDelay() == 0) {
				$var($MenuElementArray, var$1, this->this$0->getPath());
				$AquaMenuUI::appendPath(var$1, $(menu->getPopupMenu()));
			} else {
				manager->setSelectedPath($(this->this$0->getPath()));
				$AquaMenuUI::access$600(this->this$0, menu);
			}
		}
	}
}

AquaMenuUI$AquaMouseInputHandler::AquaMenuUI$AquaMouseInputHandler() {
}

$Class* AquaMenuUI$AquaMouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(AquaMenuUI$AquaMouseInputHandler, name, initialize, &_AquaMenuUI$AquaMouseInputHandler_ClassInfo_, allocate$AquaMenuUI$AquaMouseInputHandler);
	return class$;
}

$Class* AquaMenuUI$AquaMouseInputHandler::class$ = nullptr;

		} // laf
	} // apple
} // com