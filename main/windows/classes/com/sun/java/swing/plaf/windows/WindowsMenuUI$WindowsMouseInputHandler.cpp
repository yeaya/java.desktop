#include <com/sun/java/swing/plaf/windows/WindowsMenuUI$WindowsMouseInputHandler.h>

#include <com/sun/java/swing/plaf/windows/WindowsMenuUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/plaf/basic/BasicMenuUI$MouseInputHandler.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>
#include <jcpp.h>

using $WindowsMenuUI = ::com::sun::java::swing::plaf::windows::WindowsMenuUI;
using $Component = ::java::awt::Component;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $BasicMenuUI = ::javax::swing::plaf::basic::BasicMenuUI;
using $BasicMenuUI$MouseInputHandler = ::javax::swing::plaf::basic::BasicMenuUI$MouseInputHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsMenuUI$WindowsMouseInputHandler_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsMenuUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsMenuUI$WindowsMouseInputHandler, this$0)},
	{}
};

$MethodInfo _WindowsMenuUI$WindowsMouseInputHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuUI;)V", nullptr, $PROTECTED, $method(static_cast<void(WindowsMenuUI$WindowsMouseInputHandler::*)($WindowsMenuUI*)>(&WindowsMenuUI$WindowsMouseInputHandler::init$))},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsMenuUI$WindowsMouseInputHandler_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsMenuUI$WindowsMouseInputHandler", "com.sun.java.swing.plaf.windows.WindowsMenuUI", "WindowsMouseInputHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler", "javax.swing.plaf.basic.BasicMenuUI", "MouseInputHandler", $PROTECTED},
	{}
};

$ClassInfo _WindowsMenuUI$WindowsMouseInputHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsMenuUI$WindowsMouseInputHandler",
	"javax.swing.plaf.basic.BasicMenuUI$MouseInputHandler",
	nullptr,
	_WindowsMenuUI$WindowsMouseInputHandler_FieldInfo_,
	_WindowsMenuUI$WindowsMouseInputHandler_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsMenuUI$WindowsMouseInputHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsMenuUI"
};

$Object* allocate$WindowsMenuUI$WindowsMouseInputHandler($Class* clazz) {
	return $of($alloc(WindowsMenuUI$WindowsMouseInputHandler));
}

void WindowsMenuUI$WindowsMouseInputHandler::init$($WindowsMenuUI* this$0) {
	$set(this, this$0, this$0);
	$BasicMenuUI$MouseInputHandler::init$(this$0);
}

void WindowsMenuUI$WindowsMouseInputHandler::mouseEntered($MouseEvent* evt) {
	$BasicMenuUI$MouseInputHandler::mouseEntered(evt);
	$var($JMenu, menu, $cast($JMenu, $nc(evt)->getSource()));
	bool var$0 = this->this$0->hotTrackingOn && $nc(menu)->isTopLevelMenu();
	if (var$0 && menu->isRolloverEnabled()) {
		$nc($(menu->getModel()))->setRollover(true);
		$nc($($WindowsMenuUI::access$100(this->this$0)))->repaint();
	}
}

void WindowsMenuUI$WindowsMouseInputHandler::mouseExited($MouseEvent* evt) {
	$BasicMenuUI$MouseInputHandler::mouseExited(evt);
	$var($JMenu, menu, $cast($JMenu, $nc(evt)->getSource()));
	$var($ButtonModel, model, $nc(menu)->getModel());
	if (menu->isRolloverEnabled()) {
		$nc(model)->setRollover(false);
		$nc($($WindowsMenuUI::access$200(this->this$0)))->repaint();
	}
}

WindowsMenuUI$WindowsMouseInputHandler::WindowsMenuUI$WindowsMouseInputHandler() {
}

$Class* WindowsMenuUI$WindowsMouseInputHandler::load$($String* name, bool initialize) {
	$loadClass(WindowsMenuUI$WindowsMouseInputHandler, name, initialize, &_WindowsMenuUI$WindowsMouseInputHandler_ClassInfo_, allocate$WindowsMenuUI$WindowsMouseInputHandler);
	return class$;
}

$Class* WindowsMenuUI$WindowsMouseInputHandler::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com