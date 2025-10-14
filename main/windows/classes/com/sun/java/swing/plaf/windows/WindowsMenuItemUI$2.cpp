#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI$2.h>

#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $WindowsMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsMenuItemUI$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsMenuItemUI$2, this$0)},
	{}
};

$MethodInfo _WindowsMenuItemUI$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUI;)V", nullptr, 0, $method(static_cast<void(WindowsMenuItemUI$2::*)($WindowsMenuItemUI*)>(&WindowsMenuItemUI$2::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsMenuItemUI$2_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsMenuItemUI",
	"installListeners",
	"()V"
};

$InnerClassInfo _WindowsMenuItemUI$2_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsMenuItemUI$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsMenuItemUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsMenuItemUI$2",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_WindowsMenuItemUI$2_FieldInfo_,
	_WindowsMenuItemUI$2_MethodInfo_,
	nullptr,
	&_WindowsMenuItemUI$2_EnclosingMethodInfo_,
	_WindowsMenuItemUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsMenuItemUI"
};

$Object* allocate$WindowsMenuItemUI$2($Class* clazz) {
	return $of($alloc(WindowsMenuItemUI$2));
}

void WindowsMenuItemUI$2::init$($WindowsMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

void WindowsMenuItemUI$2::propertyChange($PropertyChangeEvent* e) {
	$var($String, name, $nc(e)->getPropertyName());
	if (name == "horizontalTextPosition"_s) {
		this->this$0->updateCheckIcon();
	}
}

WindowsMenuItemUI$2::WindowsMenuItemUI$2() {
}

$Class* WindowsMenuItemUI$2::load$($String* name, bool initialize) {
	$loadClass(WindowsMenuItemUI$2, name, initialize, &_WindowsMenuItemUI$2_ClassInfo_, allocate$WindowsMenuItemUI$2);
	return class$;
}

$Class* WindowsMenuItemUI$2::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com