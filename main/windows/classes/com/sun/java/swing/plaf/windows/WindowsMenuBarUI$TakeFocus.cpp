#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI$TakeFocus.h>

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsMenuBarUI = ::com::sun::java::swing::plaf::windows::WindowsMenuBarUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $MenuElement = ::javax::swing::MenuElement;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsMenuBarUI$TakeFocus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsMenuBarUI$TakeFocus::*)()>(&WindowsMenuBarUI$TakeFocus::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsMenuBarUI$TakeFocus_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$TakeFocus", "com.sun.java.swing.plaf.windows.WindowsMenuBarUI", "TakeFocus", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsMenuBarUI$TakeFocus_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$TakeFocus",
	"javax.swing.AbstractAction",
	nullptr,
	nullptr,
	_WindowsMenuBarUI$TakeFocus_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsMenuBarUI$TakeFocus_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsMenuBarUI"
};

$Object* allocate$WindowsMenuBarUI$TakeFocus($Class* clazz) {
	return $of($alloc(WindowsMenuBarUI$TakeFocus));
}

void WindowsMenuBarUI$TakeFocus::init$() {
	$AbstractAction::init$();
}

void WindowsMenuBarUI$TakeFocus::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JMenuBar, menuBar, $cast($JMenuBar, $nc(e)->getSource()));
	$var($JMenu, menu, $nc(menuBar)->getMenu(0));
	if (menu != nullptr) {
		$var($MenuSelectionManager, msm, $MenuSelectionManager::defaultManager());
		$var($MenuElementArray, path, $new($MenuElementArray, 2));
		path->set(0, static_cast<$MenuElement*>(menuBar));
		path->set(1, static_cast<$MenuElement*>(menu));
		$nc(msm)->setSelectedPath(path);
		$WindowsLookAndFeel::setMnemonicHidden(false);
		$WindowsLookAndFeel::repaintRootPane(menuBar);
	}
}

WindowsMenuBarUI$TakeFocus::WindowsMenuBarUI$TakeFocus() {
}

$Class* WindowsMenuBarUI$TakeFocus::load$($String* name, bool initialize) {
	$loadClass(WindowsMenuBarUI$TakeFocus, name, initialize, &_WindowsMenuBarUI$TakeFocus_ClassInfo_, allocate$WindowsMenuBarUI$TakeFocus);
	return class$;
}

$Class* WindowsMenuBarUI$TakeFocus::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com