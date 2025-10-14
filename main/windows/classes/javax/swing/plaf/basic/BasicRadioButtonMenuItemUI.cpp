#include <javax/swing/plaf/basic/BasicRadioButtonMenuItemUI.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _BasicRadioButtonMenuItemUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicRadioButtonMenuItemUI::*)()>(&BasicRadioButtonMenuItemUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicRadioButtonMenuItemUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"processMouseEvent", "(Ljavax/swing/JMenuItem;Ljava/awt/event/MouseEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BasicRadioButtonMenuItemUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicRadioButtonMenuItemUI",
	"javax.swing.plaf.basic.BasicMenuItemUI",
	nullptr,
	nullptr,
	_BasicRadioButtonMenuItemUI_MethodInfo_
};

$Object* allocate$BasicRadioButtonMenuItemUI($Class* clazz) {
	return $of($alloc(BasicRadioButtonMenuItemUI));
}

void BasicRadioButtonMenuItemUI::init$() {
	$BasicMenuItemUI::init$();
}

$ComponentUI* BasicRadioButtonMenuItemUI::createUI($JComponent* b) {
	$init(BasicRadioButtonMenuItemUI);
	return $new(BasicRadioButtonMenuItemUI);
}

$String* BasicRadioButtonMenuItemUI::getPropertyPrefix() {
	return "RadioButtonMenuItem"_s;
}

void BasicRadioButtonMenuItemUI::processMouseEvent($JMenuItem* item, $MouseEvent* e, $MenuElementArray* path, $MenuSelectionManager* manager) {
	$var($Point, p, $nc(e)->getPoint());
	bool var$0 = $nc(p)->x >= 0 && p->x < $nc(item)->getWidth() && p->y >= 0;
	if (var$0 && p->y < item->getHeight()) {
		if (e->getID() == $MouseEvent::MOUSE_RELEASED) {
			$nc(manager)->clearSelectedPath();
			item->doClick(0);
			item->setArmed(false);
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

BasicRadioButtonMenuItemUI::BasicRadioButtonMenuItemUI() {
}

$Class* BasicRadioButtonMenuItemUI::load$($String* name, bool initialize) {
	$loadClass(BasicRadioButtonMenuItemUI, name, initialize, &_BasicRadioButtonMenuItemUI_ClassInfo_, allocate$BasicRadioButtonMenuItemUI);
	return class$;
}

$Class* BasicRadioButtonMenuItemUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax