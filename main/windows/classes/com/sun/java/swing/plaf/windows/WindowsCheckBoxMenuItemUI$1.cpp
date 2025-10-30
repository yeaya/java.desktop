#include <com/sun/java/swing/plaf/windows/WindowsCheckBoxMenuItemUI$1.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsCheckBoxMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsCheckBoxMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsCheckBoxMenuItemUI;
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

$FieldInfo _WindowsCheckBoxMenuItemUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsCheckBoxMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsCheckBoxMenuItemUI$1, this$0)},
	{}
};

$MethodInfo _WindowsCheckBoxMenuItemUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsCheckBoxMenuItemUI;)V", nullptr, 0, $method(static_cast<void(WindowsCheckBoxMenuItemUI$1::*)($WindowsCheckBoxMenuItemUI*)>(&WindowsCheckBoxMenuItemUI$1::init$))},
	{"getMenuItem", "()Ljavax/swing/JMenuItem;", nullptr, $PUBLIC},
	{"getPart", "(Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC},
	{"getState", "(Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsCheckBoxMenuItemUI$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsCheckBoxMenuItemUI",
	nullptr,
	nullptr
};

$InnerClassInfo _WindowsCheckBoxMenuItemUI$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsCheckBoxMenuItemUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsCheckBoxMenuItemUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsCheckBoxMenuItemUI$1",
	"java.lang.Object",
	"com.sun.java.swing.plaf.windows.WindowsMenuItemUIAccessor",
	_WindowsCheckBoxMenuItemUI$1_FieldInfo_,
	_WindowsCheckBoxMenuItemUI$1_MethodInfo_,
	nullptr,
	&_WindowsCheckBoxMenuItemUI$1_EnclosingMethodInfo_,
	_WindowsCheckBoxMenuItemUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsCheckBoxMenuItemUI"
};

$Object* allocate$WindowsCheckBoxMenuItemUI$1($Class* clazz) {
	return $of($alloc(WindowsCheckBoxMenuItemUI$1));
}

void WindowsCheckBoxMenuItemUI$1::init$($WindowsCheckBoxMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

$JMenuItem* WindowsCheckBoxMenuItemUI$1::getMenuItem() {
	return $WindowsCheckBoxMenuItemUI::access$000(this->this$0);
}

$TMSchema$State* WindowsCheckBoxMenuItemUI$1::getState($JMenuItem* menuItem) {
	return $WindowsMenuItemUI::getState(this, menuItem);
}

$TMSchema$Part* WindowsCheckBoxMenuItemUI$1::getPart($JMenuItem* menuItem) {
	return $WindowsMenuItemUI::getPart(this, menuItem);
}

WindowsCheckBoxMenuItemUI$1::WindowsCheckBoxMenuItemUI$1() {
}

$Class* WindowsCheckBoxMenuItemUI$1::load$($String* name, bool initialize) {
	$loadClass(WindowsCheckBoxMenuItemUI$1, name, initialize, &_WindowsCheckBoxMenuItemUI$1_ClassInfo_, allocate$WindowsCheckBoxMenuItemUI$1);
	return class$;
}

$Class* WindowsCheckBoxMenuItemUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com