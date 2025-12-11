#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$TriggerDesktopProperty.h>

#include <com/sun/java/swing/plaf/windows/WindowsDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <sun/swing/plaf/DesktopProperty.h>
#include <jcpp.h>

using $WindowsDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsDesktopProperty;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLookAndFeel$TriggerDesktopProperty_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLookAndFeel$TriggerDesktopProperty, this$0)},
	{}
};

$MethodInfo _WindowsLookAndFeel$TriggerDesktopProperty_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(WindowsLookAndFeel$TriggerDesktopProperty::*)($WindowsLookAndFeel*,$String*)>(&WindowsLookAndFeel$TriggerDesktopProperty::init$))},
	{"updateUI", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _WindowsLookAndFeel$TriggerDesktopProperty_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$TriggerDesktopProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "TriggerDesktopProperty", $PRIVATE},
	{}
};

$ClassInfo _WindowsLookAndFeel$TriggerDesktopProperty_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$TriggerDesktopProperty",
	"com.sun.java.swing.plaf.windows.WindowsDesktopProperty",
	nullptr,
	_WindowsLookAndFeel$TriggerDesktopProperty_FieldInfo_,
	_WindowsLookAndFeel$TriggerDesktopProperty_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsLookAndFeel$TriggerDesktopProperty_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$TriggerDesktopProperty($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$TriggerDesktopProperty));
}

void WindowsLookAndFeel$TriggerDesktopProperty::init$($WindowsLookAndFeel* this$0, $String* key) {
	$set(this, this$0, this$0);
	$WindowsDesktopProperty::init$(key, nullptr);
	getValueFromDesktop();
}

void WindowsLookAndFeel$TriggerDesktopProperty::updateUI() {
	$WindowsDesktopProperty::updateUI();
	getValueFromDesktop();
}

WindowsLookAndFeel$TriggerDesktopProperty::WindowsLookAndFeel$TriggerDesktopProperty() {
}

$Class* WindowsLookAndFeel$TriggerDesktopProperty::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$TriggerDesktopProperty, name, initialize, &_WindowsLookAndFeel$TriggerDesktopProperty_ClassInfo_, allocate$WindowsLookAndFeel$TriggerDesktopProperty);
	return class$;
}

$Class* WindowsLookAndFeel$TriggerDesktopProperty::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com