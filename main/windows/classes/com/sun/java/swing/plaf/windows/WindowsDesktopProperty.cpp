#include <com/sun/java/swing/plaf/windows/WindowsDesktopProperty.h>

#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Package.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <sun/swing/plaf/DesktopProperty.h>
#include <jcpp.h>

using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Package = ::java::lang::Package;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $DesktopProperty = ::sun::swing::plaf::DesktopProperty;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsDesktopProperty_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsDesktopProperty::*)($String*,Object$*)>(&WindowsDesktopProperty::init$))},
	{"updateAllUIs", "()V", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _WindowsDesktopProperty_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsDesktopProperty",
	"sun.swing.plaf.DesktopProperty",
	nullptr,
	nullptr,
	_WindowsDesktopProperty_MethodInfo_
};

$Object* allocate$WindowsDesktopProperty($Class* clazz) {
	return $of($alloc(WindowsDesktopProperty));
}

void WindowsDesktopProperty::updateAllUIs() {
	$useLocalCurrentObjectStackCache();
	$Class* uiClass = $nc($of($($UIManager::getLookAndFeel())))->getClass();
	if ($nc($of($($nc(uiClass)->getPackage())))->equals($(WindowsDesktopProperty::class$->getPackage()))) {
		$XPStyle::invalidateStyle();
	}
	$DesktopProperty::updateAllUIs();
}

void WindowsDesktopProperty::init$($String* key, Object$* fallback) {
	$DesktopProperty::init$(key, fallback);
}

WindowsDesktopProperty::WindowsDesktopProperty() {
}

$Class* WindowsDesktopProperty::load$($String* name, bool initialize) {
	$loadClass(WindowsDesktopProperty, name, initialize, &_WindowsDesktopProperty_ClassInfo_, allocate$WindowsDesktopProperty);
	return class$;
}

$Class* WindowsDesktopProperty::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com