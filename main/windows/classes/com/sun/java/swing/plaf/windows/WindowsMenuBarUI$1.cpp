#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI$1.h>

#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JMenuBar.h>
#include <jcpp.h>

using $WindowsMenuBarUI = ::com::sun::java::swing::plaf::windows::WindowsMenuBarUI;
using $Component = ::java::awt::Component;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuBar = ::javax::swing::JMenuBar;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsMenuBarUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsMenuBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsMenuBarUI$1, this$0)},
	{}
};

$MethodInfo _WindowsMenuBarUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuBarUI;)V", nullptr, 0, $method(static_cast<void(WindowsMenuBarUI$1::*)($WindowsMenuBarUI*)>(&WindowsMenuBarUI$1::init$))},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsMenuBarUI$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsMenuBarUI",
	"installWindowListener",
	"()V"
};

$InnerClassInfo _WindowsMenuBarUI$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsMenuBarUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	_WindowsMenuBarUI$1_FieldInfo_,
	_WindowsMenuBarUI$1_MethodInfo_,
	nullptr,
	&_WindowsMenuBarUI$1_EnclosingMethodInfo_,
	_WindowsMenuBarUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsMenuBarUI"
};

$Object* allocate$WindowsMenuBarUI$1($Class* clazz) {
	return $of($alloc(WindowsMenuBarUI$1));
}

void WindowsMenuBarUI$1::init$($WindowsMenuBarUI* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void WindowsMenuBarUI$1::windowActivated($WindowEvent* e) {
	$nc($($WindowsMenuBarUI::access$000(this->this$0)))->repaint();
}

void WindowsMenuBarUI$1::windowDeactivated($WindowEvent* e) {
	$nc($($WindowsMenuBarUI::access$100(this->this$0)))->repaint();
}

WindowsMenuBarUI$1::WindowsMenuBarUI$1() {
}

$Class* WindowsMenuBarUI$1::load$($String* name, bool initialize) {
	$loadClass(WindowsMenuBarUI$1, name, initialize, &_WindowsMenuBarUI$1_ClassInfo_, allocate$WindowsMenuBarUI$1);
	return class$;
}

$Class* WindowsMenuBarUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com