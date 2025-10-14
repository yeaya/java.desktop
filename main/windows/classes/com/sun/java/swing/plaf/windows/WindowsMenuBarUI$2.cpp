#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI$2.h>

#include <com/sun/java/swing/plaf/windows/WindowsMenuBarUI.h>
#include <java/awt/Component.h>
#include <java/awt/event/HierarchyEvent.h>
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

#undef DISPLAYABILITY_CHANGED

using $WindowsMenuBarUI = ::com::sun::java::swing::plaf::windows::WindowsMenuBarUI;
using $Component = ::java::awt::Component;
using $HierarchyEvent = ::java::awt::event::HierarchyEvent;
using $HierarchyListener = ::java::awt::event::HierarchyListener;
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

$FieldInfo _WindowsMenuBarUI$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsMenuBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsMenuBarUI$2, this$0)},
	{}
};

$MethodInfo _WindowsMenuBarUI$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuBarUI;)V", nullptr, 0, $method(static_cast<void(WindowsMenuBarUI$2::*)($WindowsMenuBarUI*)>(&WindowsMenuBarUI$2::init$))},
	{"hierarchyChanged", "(Ljava/awt/event/HierarchyEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsMenuBarUI$2_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsMenuBarUI",
	"installListeners",
	"()V"
};

$InnerClassInfo _WindowsMenuBarUI$2_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsMenuBarUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsMenuBarUI$2",
	"java.lang.Object",
	"java.awt.event.HierarchyListener",
	_WindowsMenuBarUI$2_FieldInfo_,
	_WindowsMenuBarUI$2_MethodInfo_,
	nullptr,
	&_WindowsMenuBarUI$2_EnclosingMethodInfo_,
	_WindowsMenuBarUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsMenuBarUI"
};

$Object* allocate$WindowsMenuBarUI$2($Class* clazz) {
	return $of($alloc(WindowsMenuBarUI$2));
}

void WindowsMenuBarUI$2::init$($WindowsMenuBarUI* this$0) {
	$set(this, this$0, this$0);
}

void WindowsMenuBarUI$2::hierarchyChanged($HierarchyEvent* e) {
	if (((int64_t)($nc(e)->getChangeFlags() & (uint64_t)(int64_t)$HierarchyEvent::DISPLAYABILITY_CHANGED)) != 0) {
		if ($nc($($WindowsMenuBarUI::access$200(this->this$0)))->isDisplayable()) {
			this->this$0->installWindowListener();
		} else {
			this->this$0->uninstallWindowListener();
		}
	}
}

WindowsMenuBarUI$2::WindowsMenuBarUI$2() {
}

$Class* WindowsMenuBarUI$2::load$($String* name, bool initialize) {
	$loadClass(WindowsMenuBarUI$2, name, initialize, &_WindowsMenuBarUI$2_ClassInfo_, allocate$WindowsMenuBarUI$2);
	return class$;
}

$Class* WindowsMenuBarUI$2::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com