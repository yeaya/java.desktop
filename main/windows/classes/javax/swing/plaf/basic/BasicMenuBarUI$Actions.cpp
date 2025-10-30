#include <javax/swing/plaf/basic/BasicMenuBarUI$Actions.h>

#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/plaf/basic/BasicMenuBarUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef TAKE_FOCUS

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $BasicMenuBarUI = ::javax::swing::plaf::basic::BasicMenuBarUI;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicMenuBarUI$Actions_FieldInfo_[] = {
	{"TAKE_FOCUS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicMenuBarUI$Actions, TAKE_FOCUS)},
	{}
};

$MethodInfo _BasicMenuBarUI$Actions_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BasicMenuBarUI$Actions::*)($String*)>(&BasicMenuBarUI$Actions::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicMenuBarUI$Actions_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicMenuBarUI$Actions", "javax.swing.plaf.basic.BasicMenuBarUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicMenuBarUI$Actions_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicMenuBarUI$Actions",
	"sun.swing.UIAction",
	nullptr,
	_BasicMenuBarUI$Actions_FieldInfo_,
	_BasicMenuBarUI$Actions_MethodInfo_,
	nullptr,
	nullptr,
	_BasicMenuBarUI$Actions_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicMenuBarUI"
};

$Object* allocate$BasicMenuBarUI$Actions($Class* clazz) {
	return $of($alloc(BasicMenuBarUI$Actions));
}

$String* BasicMenuBarUI$Actions::TAKE_FOCUS = nullptr;

void BasicMenuBarUI$Actions::init$($String* key) {
	$UIAction::init$(key);
}

void BasicMenuBarUI$Actions::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuBar, menuBar, $cast($JMenuBar, $nc(e)->getSource()));
	$var($MenuSelectionManager, defaultManager, $MenuSelectionManager::defaultManager());
	$var($MenuElementArray, me, nullptr);
	$var($MenuElementArray, subElements, nullptr);
	$var($JMenu, menu, $nc(menuBar)->getMenu(0));
	if (menu != nullptr) {
		$assign(me, $new($MenuElementArray, 3));
		me->set(0, static_cast<$MenuElement*>(menuBar));
		me->set(1, static_cast<$MenuElement*>(menu));
		me->set(2, static_cast<$MenuElement*>($(menu->getPopupMenu())));
		$nc(defaultManager)->setSelectedPath(me);
	}
}

BasicMenuBarUI$Actions::BasicMenuBarUI$Actions() {
}

void clinit$BasicMenuBarUI$Actions($Class* class$) {
	$assignStatic(BasicMenuBarUI$Actions::TAKE_FOCUS, "takeFocus"_s);
}

$Class* BasicMenuBarUI$Actions::load$($String* name, bool initialize) {
	$loadClass(BasicMenuBarUI$Actions, name, initialize, &_BasicMenuBarUI$Actions_ClassInfo_, clinit$BasicMenuBarUI$Actions, allocate$BasicMenuBarUI$Actions);
	return class$;
}

$Class* BasicMenuBarUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax