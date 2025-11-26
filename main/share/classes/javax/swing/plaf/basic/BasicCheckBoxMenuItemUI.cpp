#include <javax/swing/plaf/basic/BasicCheckBoxMenuItemUI.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <jcpp.h>

#undef MOUSE_RELEASED

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Point = ::java::awt::Point;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JComponent = ::javax::swing::JComponent;
using $JMenuItem = ::javax::swing::JMenuItem;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicCheckBoxMenuItemUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicCheckBoxMenuItemUI::*)()>(&BasicCheckBoxMenuItemUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicCheckBoxMenuItemUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"processMouseEvent", "(Ljavax/swing/JMenuItem;Ljava/awt/event/MouseEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BasicCheckBoxMenuItemUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicCheckBoxMenuItemUI",
	"javax.swing.plaf.basic.BasicMenuItemUI",
	nullptr,
	nullptr,
	_BasicCheckBoxMenuItemUI_MethodInfo_
};

$Object* allocate$BasicCheckBoxMenuItemUI($Class* clazz) {
	return $of($alloc(BasicCheckBoxMenuItemUI));
}

void BasicCheckBoxMenuItemUI::init$() {
	$BasicMenuItemUI::init$();
}

$ComponentUI* BasicCheckBoxMenuItemUI::createUI($JComponent* c) {
	$init(BasicCheckBoxMenuItemUI);
	return $new(BasicCheckBoxMenuItemUI);
}

$String* BasicCheckBoxMenuItemUI::getPropertyPrefix() {
	return "CheckBoxMenuItem"_s;
}

void BasicCheckBoxMenuItemUI::processMouseEvent($JMenuItem* item, $MouseEvent* e, $MenuElementArray* path, $MenuSelectionManager* manager) {
	$useLocalCurrentObjectStackCache();
	$var($Point, p, $nc(e)->getPoint());
	bool var$0 = $nc(p)->x >= 0 && p->x < $nc(item)->getWidth() && p->y >= 0;
	if (var$0 && p->y < item->getHeight()) {
		if (e->getID() == $MouseEvent::MOUSE_RELEASED) {
			$nc(manager)->clearSelectedPath();
			item->doClick(0);
		} else {
			$nc(manager)->setSelectedPath(path);
		}
	} else if ($nc($(item->getModel()))->isArmed()) {
		$var($MenuElementArray, newPath, $new($MenuElementArray, $nc(path)->length - 1));
		int32_t i = 0;
		int32_t c = 0;
		for (i = 0, c = path->length - 1; i < c; ++i) {
			newPath->set(i, path->get(i));
		}
		$nc(manager)->setSelectedPath(newPath);
	}
}

BasicCheckBoxMenuItemUI::BasicCheckBoxMenuItemUI() {
}

$Class* BasicCheckBoxMenuItemUI::load$($String* name, bool initialize) {
	$loadClass(BasicCheckBoxMenuItemUI, name, initialize, &_BasicCheckBoxMenuItemUI_ClassInfo_, allocate$BasicCheckBoxMenuItemUI);
	return class$;
}

$Class* BasicCheckBoxMenuItemUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax