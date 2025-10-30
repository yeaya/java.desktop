#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$ActiveWindowsIcon$1.h>

#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$ActiveWindowsIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$TriggerDesktopProperty.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsLookAndFeel$ActiveWindowsIcon = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$ActiveWindowsIcon;
using $WindowsLookAndFeel$TriggerDesktopProperty = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$TriggerDesktopProperty;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsLookAndFeel$ActiveWindowsIcon$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel$ActiveWindowsIcon;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLookAndFeel$ActiveWindowsIcon$1, this$1)},
	{"val$this$0", "Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsLookAndFeel$ActiveWindowsIcon$1, val$this$0)},
	{}
};

$MethodInfo _WindowsLookAndFeel$ActiveWindowsIcon$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel$ActiveWindowsIcon;Ljava/lang/String;Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;)V", nullptr, 0, $method(static_cast<void(WindowsLookAndFeel$ActiveWindowsIcon$1::*)($WindowsLookAndFeel$ActiveWindowsIcon*,$String*,$WindowsLookAndFeel*)>(&WindowsLookAndFeel$ActiveWindowsIcon$1::init$))},
	{"updateUI", "()V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _WindowsLookAndFeel$ActiveWindowsIcon$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon",
	"<init>",
	"(Lcom/sun/java/swing/plaf/windows/WindowsLookAndFeel;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V"
};

$InnerClassInfo _WindowsLookAndFeel$ActiveWindowsIcon$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "ActiveWindowsIcon", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon$1", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$TriggerDesktopProperty", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "TriggerDesktopProperty", $PRIVATE},
	{}
};

$ClassInfo _WindowsLookAndFeel$ActiveWindowsIcon$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$ActiveWindowsIcon$1",
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$TriggerDesktopProperty",
	nullptr,
	_WindowsLookAndFeel$ActiveWindowsIcon$1_FieldInfo_,
	_WindowsLookAndFeel$ActiveWindowsIcon$1_MethodInfo_,
	nullptr,
	&_WindowsLookAndFeel$ActiveWindowsIcon$1_EnclosingMethodInfo_,
	_WindowsLookAndFeel$ActiveWindowsIcon$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
};

$Object* allocate$WindowsLookAndFeel$ActiveWindowsIcon$1($Class* clazz) {
	return $of($alloc(WindowsLookAndFeel$ActiveWindowsIcon$1));
}

void WindowsLookAndFeel$ActiveWindowsIcon$1::init$($WindowsLookAndFeel$ActiveWindowsIcon* this$1, $String* key, $WindowsLookAndFeel* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
	$WindowsLookAndFeel$TriggerDesktopProperty::init$(this$1->this$0, key);
}

void WindowsLookAndFeel$ActiveWindowsIcon$1::updateUI() {
	$set(this->this$1, icon, nullptr);
	$WindowsLookAndFeel$TriggerDesktopProperty::updateUI();
}

WindowsLookAndFeel$ActiveWindowsIcon$1::WindowsLookAndFeel$ActiveWindowsIcon$1() {
}

$Class* WindowsLookAndFeel$ActiveWindowsIcon$1::load$($String* name, bool initialize) {
	$loadClass(WindowsLookAndFeel$ActiveWindowsIcon$1, name, initialize, &_WindowsLookAndFeel$ActiveWindowsIcon$1_ClassInfo_, allocate$WindowsLookAndFeel$ActiveWindowsIcon$1);
	return class$;
}

$Class* WindowsLookAndFeel$ActiveWindowsIcon$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com