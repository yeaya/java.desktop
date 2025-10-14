#include <com/sun/java/swing/plaf/windows/WindowsDesktopPaneUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsDesktopManager.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopPaneUI.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <jcpp.h>

using $WindowsDesktopManager = ::com::sun::java::swing::plaf::windows::WindowsDesktopManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $DesktopManager = ::javax::swing::DesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DesktopPaneUI = ::javax::swing::plaf::DesktopPaneUI;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsDesktopPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsDesktopPaneUI::*)()>(&WindowsDesktopPaneUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsDesktopPaneUI::createUI))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installDesktopManager", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _WindowsDesktopPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsDesktopPaneUI",
	"javax.swing.plaf.basic.BasicDesktopPaneUI",
	nullptr,
	nullptr,
	_WindowsDesktopPaneUI_MethodInfo_
};

$Object* allocate$WindowsDesktopPaneUI($Class* clazz) {
	return $of($alloc(WindowsDesktopPaneUI));
}

void WindowsDesktopPaneUI::init$() {
	$BasicDesktopPaneUI::init$();
}

$ComponentUI* WindowsDesktopPaneUI::createUI($JComponent* c) {
	$init(WindowsDesktopPaneUI);
	return $new(WindowsDesktopPaneUI);
}

void WindowsDesktopPaneUI::installDesktopManager() {
	$set(this, desktopManager, $nc(this->desktop)->getDesktopManager());
	if (this->desktopManager == nullptr) {
		$set(this, desktopManager, $new($WindowsDesktopManager));
		$nc(this->desktop)->setDesktopManager(this->desktopManager);
	}
}

void WindowsDesktopPaneUI::installDefaults() {
	$BasicDesktopPaneUI::installDefaults();
}

void WindowsDesktopPaneUI::installKeyboardActions() {
	$BasicDesktopPaneUI::installKeyboardActions();
	if (!$nc(this->desktop)->requestDefaultFocus()) {
		$nc(this->desktop)->requestFocus();
	}
}

WindowsDesktopPaneUI::WindowsDesktopPaneUI() {
}

$Class* WindowsDesktopPaneUI::load$($String* name, bool initialize) {
	$loadClass(WindowsDesktopPaneUI, name, initialize, &_WindowsDesktopPaneUI_ClassInfo_, allocate$WindowsDesktopPaneUI);
	return class$;
}

$Class* WindowsDesktopPaneUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com