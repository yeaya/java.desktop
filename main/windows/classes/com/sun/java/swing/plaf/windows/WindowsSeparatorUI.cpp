#include <com/sun/java/swing/plaf/windows/WindowsSeparatorUI.h>

#include <javax/swing/plaf/basic/BasicSeparatorUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSeparatorUI = ::javax::swing::plaf::basic::BasicSeparatorUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsSeparatorUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsSeparatorUI::*)()>(&WindowsSeparatorUI::init$))},
	{}
};

$ClassInfo _WindowsSeparatorUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsSeparatorUI",
	"javax.swing.plaf.basic.BasicSeparatorUI",
	nullptr,
	nullptr,
	_WindowsSeparatorUI_MethodInfo_
};

$Object* allocate$WindowsSeparatorUI($Class* clazz) {
	return $of($alloc(WindowsSeparatorUI));
}

void WindowsSeparatorUI::init$() {
	$BasicSeparatorUI::init$();
}

WindowsSeparatorUI::WindowsSeparatorUI() {
}

$Class* WindowsSeparatorUI::load$($String* name, bool initialize) {
	$loadClass(WindowsSeparatorUI, name, initialize, &_WindowsSeparatorUI_ClassInfo_, allocate$WindowsSeparatorUI);
	return class$;
}

$Class* WindowsSeparatorUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com