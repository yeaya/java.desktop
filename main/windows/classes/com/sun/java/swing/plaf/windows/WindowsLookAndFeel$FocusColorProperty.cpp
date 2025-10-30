#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$FocusColorProperty.h>

#include <com/sun/java/swing/plaf/windows/WindowsDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <java/awt/Color.h>
#include <java/awt/Toolkit.h>
#include <jcpp.h>

#undef BLACK
#undef WHITE

using $WindowsDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $Color = ::java::awt::Color;
using $Toolkit = ::java::awt::Toolkit;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsLookAndFeel$FocusColorProperty_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsLookAndFeel$FocusColorProperty::*)()>(&WindowsLookAndFeel$FocusColorProperty::init$))},
	{"configureValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$FocusColorProperty_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FocusColorProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "FocusColorProperty", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsLookAndFeel$FocusColorProperty_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$FocusColorProperty",
	"com.sun.java.swing.plaf.windows.WindowsDesktopProperty",
	nullptr,
	nullptr,
	_WindowsLookAndFeel$FocusColorProperty_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$FocusColorProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$FocusColorProperty($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$FocusColorProperty));
}

void WindowsLookAndFeel$FocusColorProperty::init$() {
	$init($Color);
	$WindowsDesktopProperty::init$("win.3d.backgroundColor"_s, $Color::BLACK);
}

$Object* WindowsLookAndFeel$FocusColorProperty::configureValue(Object$* value) {
	$useLocalCurrentObjectStackCache();
	$var($Object, highContrastOn, $nc($($Toolkit::getDefaultToolkit()))->getDesktopProperty("win.highContrast.on"_s));
	if (highContrastOn == nullptr || !$nc(($cast($Boolean, highContrastOn)))->booleanValue()) {
		$init($Color);
		return $of($Color::BLACK);
	}
	$init($Color);
	return $of($nc($Color::BLACK)->equals(value) ? $of($Color::WHITE) : $of($Color::BLACK));
}

WindowsLookAndFeel$FocusColorProperty::WindowsLookAndFeel$FocusColorProperty() {
}

$Class* WindowsLookAndFeel$FocusColorProperty::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$FocusColorProperty, name, initialize, &_WindowsLookAndFeel$FocusColorProperty_ClassInfo_, allocate$WindowsLookAndFeel$FocusColorProperty);
	return class$;
}

$Class* WindowsLookAndFeel$FocusColorProperty::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com