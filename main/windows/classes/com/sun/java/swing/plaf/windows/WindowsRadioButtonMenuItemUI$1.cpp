#include <com/sun/java/swing/plaf/windows/WindowsRadioButtonMenuItemUI$1.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsMenuItemUIAccessor.h>
#include <com/sun/java/swing/plaf/windows/WindowsRadioButtonMenuItemUI.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUI;
using $WindowsMenuItemUIAccessor = ::com::sun::java::swing::plaf::windows::WindowsMenuItemUIAccessor;
using $WindowsRadioButtonMenuItemUI = ::com::sun::java::swing::plaf::windows::WindowsRadioButtonMenuItemUI;
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

$FieldInfo _WindowsRadioButtonMenuItemUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsRadioButtonMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsRadioButtonMenuItemUI$1, this$0)},
	{}
};

$MethodInfo _WindowsRadioButtonMenuItemUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsRadioButtonMenuItemUI;)V", nullptr, 0, $method(static_cast<void(WindowsRadioButtonMenuItemUI$1::*)($WindowsRadioButtonMenuItemUI*)>(&WindowsRadioButtonMenuItemUI$1::init$))},
	{"getMenuItem", "()Ljavax/swing/JMenuItem;", nullptr, $PUBLIC},
	{"getPart", "(Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PUBLIC},
	{"getState", "(Ljavax/swing/JMenuItem;)Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsRadioButtonMenuItemUI$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsRadioButtonMenuItemUI",
	nullptr,
	nullptr
};

$InnerClassInfo _WindowsRadioButtonMenuItemUI$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsRadioButtonMenuItemUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsRadioButtonMenuItemUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsRadioButtonMenuItemUI$1",
	"java.lang.Object",
	"com.sun.java.swing.plaf.windows.WindowsMenuItemUIAccessor",
	_WindowsRadioButtonMenuItemUI$1_FieldInfo_,
	_WindowsRadioButtonMenuItemUI$1_MethodInfo_,
	nullptr,
	&_WindowsRadioButtonMenuItemUI$1_EnclosingMethodInfo_,
	_WindowsRadioButtonMenuItemUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsRadioButtonMenuItemUI"
};

$Object* allocate$WindowsRadioButtonMenuItemUI$1($Class* clazz) {
	return $of($alloc(WindowsRadioButtonMenuItemUI$1));
}

void WindowsRadioButtonMenuItemUI$1::init$($WindowsRadioButtonMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

$JMenuItem* WindowsRadioButtonMenuItemUI$1::getMenuItem() {
	return $WindowsRadioButtonMenuItemUI::access$000(this->this$0);
}

$TMSchema$State* WindowsRadioButtonMenuItemUI$1::getState($JMenuItem* menuItem) {
	return $WindowsMenuItemUI::getState(this, menuItem);
}

$TMSchema$Part* WindowsRadioButtonMenuItemUI$1::getPart($JMenuItem* menuItem) {
	return $WindowsMenuItemUI::getPart(this, menuItem);
}

WindowsRadioButtonMenuItemUI$1::WindowsRadioButtonMenuItemUI$1() {
}

$Class* WindowsRadioButtonMenuItemUI$1::load$($String* name, bool initialize) {
	$loadClass(WindowsRadioButtonMenuItemUI$1, name, initialize, &_WindowsRadioButtonMenuItemUI$1_ClassInfo_, allocate$WindowsRadioButtonMenuItemUI$1);
	return class$;
}

$Class* WindowsRadioButtonMenuItemUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com