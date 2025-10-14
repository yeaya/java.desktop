#include <com/sun/java/swing/plaf/windows/WindowsOptionPaneUI.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicOptionPaneUI = ::javax::swing::plaf::basic::BasicOptionPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsOptionPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsOptionPaneUI::*)()>(&WindowsOptionPaneUI::init$))},
	{}
};

$ClassInfo _WindowsOptionPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsOptionPaneUI",
	"javax.swing.plaf.basic.BasicOptionPaneUI",
	nullptr,
	nullptr,
	_WindowsOptionPaneUI_MethodInfo_
};

$Object* allocate$WindowsOptionPaneUI($Class* clazz) {
	return $of($alloc(WindowsOptionPaneUI));
}

void WindowsOptionPaneUI::init$() {
	$BasicOptionPaneUI::init$();
}

WindowsOptionPaneUI::WindowsOptionPaneUI() {
}

$Class* WindowsOptionPaneUI::load$($String* name, bool initialize) {
	$loadClass(WindowsOptionPaneUI, name, initialize, &_WindowsOptionPaneUI_ClassInfo_, allocate$WindowsOptionPaneUI);
	return class$;
}

$Class* WindowsOptionPaneUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com