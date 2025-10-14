#include <com/sun/java/swing/plaf/windows/WindowsScrollPaneUI.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsScrollPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsScrollPaneUI::*)()>(&WindowsScrollPaneUI::init$))},
	{}
};

$ClassInfo _WindowsScrollPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsScrollPaneUI",
	"javax.swing.plaf.basic.BasicScrollPaneUI",
	nullptr,
	nullptr,
	_WindowsScrollPaneUI_MethodInfo_
};

$Object* allocate$WindowsScrollPaneUI($Class* clazz) {
	return $of($alloc(WindowsScrollPaneUI));
}

void WindowsScrollPaneUI::init$() {
	$BasicScrollPaneUI::init$();
}

WindowsScrollPaneUI::WindowsScrollPaneUI() {
}

$Class* WindowsScrollPaneUI::load$($String* name, bool initialize) {
	$loadClass(WindowsScrollPaneUI, name, initialize, &_WindowsScrollPaneUI_ClassInfo_, allocate$WindowsScrollPaneUI);
	return class$;
}

$Class* WindowsScrollPaneUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com