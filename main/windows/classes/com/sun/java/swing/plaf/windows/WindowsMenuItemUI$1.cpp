#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI$1.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI;
using $WindowsMenuItemUIAccessor = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuItem = ::javax::swing::JMenuItem;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsMenuItemUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsMenuItemUI$1, this$0)},
	{}
};

$MethodInfo _WindowsMenuItemUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsMenuItemUI;)V", nullptr, 0, $method(static_cast<void(WindowsMenuItemUI$1::*)($WindowsMenuItemUI*)>(&WindowsMenuItemUI$1::init$))},
	{"getMenuItem", "()Ljavax/swing/JMenuItem;", nullptr, $PUBLIC},
	{"getPart", "(Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC},
	{"getState", "(Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsMenuItemUI$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsMenuItemUI",
	nullptr,
	nullptr
};

$InnerClassInfo _WindowsMenuItemUI$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsMenuItemUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsMenuItemUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsMenuItemUI$1",
	"java.lang.Object",
	"com.sun.java.swing.plaf.windows.WindowsMenuItemUIAccessor",
	_WindowsMenuItemUI$1_FieldInfo_,
	_WindowsMenuItemUI$1_MethodInfo_,
	nullptr,
	&_WindowsMenuItemUI$1_EnclosingMethodInfo_,
	_WindowsMenuItemUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsMenuItemUI"
};

$Object* allocate$WindowsMenuItemUI$1($Class* clazz) {
	return $of($alloc(WindowsMenuItemUI$1));
}

void WindowsMenuItemUI$1::init$($WindowsMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

$JMenuItem* WindowsMenuItemUI$1::getMenuItem() {
	return $WindowsMenuItemUI::access$000(this->this$0);
}

$TMSchema$State* WindowsMenuItemUI$1::getState($JMenuItem* menuItem) {
	return $WindowsMenuItemUI::getState(this, menuItem);
}

$TMSchema$Part* WindowsMenuItemUI$1::getPart($JMenuItem* menuItem) {
	return $WindowsMenuItemUI::getPart(this, menuItem);
}

WindowsMenuItemUI$1::WindowsMenuItemUI$1() {
}

$Class* WindowsMenuItemUI$1::load$($String* name, bool initialize) {
	$loadClass(WindowsMenuItemUI$1, name, initialize, &_WindowsMenuItemUI$1_ClassInfo_, allocate$WindowsMenuItemUI$1);
	return class$;
}

$Class* WindowsMenuItemUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com