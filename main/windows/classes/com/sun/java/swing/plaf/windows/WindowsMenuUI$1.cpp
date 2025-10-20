#include <com/sun/java/swing/plaf/windows/WindowsMenuUI$1.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuUI.h>
#include <java/awt/Container.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/MenuElement.h>
#include <jcpp.h>

#undef DISABLED
#undef DISABLEDHOT
#undef DISABLEDPUSHED
#undef HOT
#undef MP_BARITEM
#undef MP_POPUPITEM
#undef NORMAL
#undef PUSHED

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsMenuBarUI = ::com::sun::java::swing::plaf::windows::WindowsMenuBarUI;
using $WindowsMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI;
using $WindowsMenuItemUIAccessor = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor;
using $WindowsMenuUI = ::com::sun::java::swing::plaf::windows::WindowsMenuUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $MenuElement = ::javax::swing::MenuElement;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsMenuUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsMenuUI$1, this$0)},
	{}
};

$MethodInfo _WindowsMenuUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuUI;)V", nullptr, 0, $method(static_cast<void(WindowsMenuUI$1::*)($WindowsMenuUI*)>(&WindowsMenuUI$1::init$))},
	{"getMenuItem", "()Ljavax/swing/JMenuItem;", nullptr, $PUBLIC},
	{"getPart", "(Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC},
	{"getState", "(Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsMenuUI$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsMenuUI",
	nullptr,
	nullptr
};

$InnerClassInfo _WindowsMenuUI$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsMenuUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsMenuUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsMenuUI$1",
	"java.lang.Object",
	"com.sun.java.swing.plaf.windows.WindowsMenuItemUIAccessor",
	_WindowsMenuUI$1_FieldInfo_,
	_WindowsMenuUI$1_MethodInfo_,
	nullptr,
	&_WindowsMenuUI$1_EnclosingMethodInfo_,
	_WindowsMenuUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsMenuUI"
};

$Object* allocate$WindowsMenuUI$1($Class* clazz) {
	return $of($alloc(WindowsMenuUI$1));
}

void WindowsMenuUI$1::init$($WindowsMenuUI* this$0) {
	$set(this, this$0, this$0);
}

$JMenuItem* WindowsMenuUI$1::getMenuItem() {
	return $WindowsMenuUI::access$000(this->this$0);
}

$TMSchema$State* WindowsMenuUI$1::getState($JMenuItem* menu) {
	$useLocalCurrentObjectStackCache();
	$init($TMSchema$State);
	$TMSchema$State* state = $nc(menu)->isEnabled() ? $TMSchema$State::NORMAL : $TMSchema$State::DISABLED;
	$var($ButtonModel, model, $nc(menu)->getModel());
	bool var$0 = $nc(model)->isArmed();
	if (var$0 || $nc(model)->isSelected()) {
		state = (menu->isEnabled()) ? $TMSchema$State::PUSHED : $TMSchema$State::DISABLEDPUSHED;
	} else {
		bool var$2 = model->isRollover();
		if (var$2 && $nc(($cast($JMenu, menu)))->isTopLevelMenu()) {
			$TMSchema$State* stateTmp = state;
			state = (menu->isEnabled()) ? $TMSchema$State::HOT : $TMSchema$State::DISABLEDHOT;
			{
				$var($MenuElementArray, arr$, $nc(($cast($JMenuBar, $(menu->getParent()))))->getSubElements());
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($MenuElement, menuElement, arr$->get(i$));
					{
						if ($nc(($cast($JMenuItem, menuElement)))->isSelected()) {
							state = stateTmp;
							break;
						}
					}
				}
			}
		}
	}
	if (!$nc(($cast($JMenu, menu)))->isTopLevelMenu()) {
		if (state == $TMSchema$State::PUSHED) {
			state = $TMSchema$State::HOT;
		} else {
			if (state == $TMSchema$State::DISABLEDPUSHED) {
				state = $TMSchema$State::DISABLEDHOT;
			}
		}
	}
	bool var$3 = $nc(($cast($JMenu, menu)))->isTopLevelMenu();
	if (var$3 && $WindowsMenuItemUI::isVistaPainting()) {
		if (!$WindowsMenuBarUI::isActive(menu)) {
			state = $TMSchema$State::DISABLED;
		}
	}
	return state;
}

$TMSchema$Part* WindowsMenuUI$1::getPart($JMenuItem* menuItem) {
	$init($TMSchema$Part);
	return $nc(($cast($JMenu, menuItem)))->isTopLevelMenu() ? $TMSchema$Part::MP_BARITEM : $TMSchema$Part::MP_POPUPITEM;
}

WindowsMenuUI$1::WindowsMenuUI$1() {
}

$Class* WindowsMenuUI$1::load$($String* name, bool initialize) {
	$loadClass(WindowsMenuUI$1, name, initialize, &_WindowsMenuUI$1_ClassInfo_, allocate$WindowsMenuUI$1);
	return class$;
}

$Class* WindowsMenuUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com