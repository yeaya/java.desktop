#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler.h>

#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WinComboPopUp.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicComboPopup$InvocationKeyHandler.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

using $WindowsComboBoxUI$WinComboPopUp = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$WinComboPopUp;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $BasicComboPopup$InvocationKeyHandler = ::javax::swing::plaf::basic::BasicComboPopup$InvocationKeyHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler_FieldInfo_[] = {
	{"this$1", "Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI$WinComboPopUp;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler, this$1)},
	{}
};

$MethodInfo _WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI$WinComboPopUp;)V", nullptr, $PROTECTED, $method(static_cast<void(WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler::*)($WindowsComboBoxUI$WinComboPopUp*)>(&WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler::init$))},
	{}
};

$InnerClassInfo _WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI", "WinComboPopUp", $PROTECTED},
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp", "InvocationKeyHandler", $PROTECTED},
	{"javax.swing.plaf.basic.BasicComboPopup$InvocationKeyHandler", "javax.swing.plaf.basic.BasicComboPopup", "InvocationKeyHandler", $PUBLIC},
	{}
};

$ClassInfo _WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler",
	"javax.swing.plaf.basic.BasicComboPopup$InvocationKeyHandler",
	nullptr,
	_WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler_FieldInfo_,
	_WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI"
};

$Object* allocate$WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler($Class* clazz) {
	return $of($alloc(WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler));
}

void WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler::init$($WindowsComboBoxUI$WinComboPopUp* this$1) {
	$set(this, this$1, this$1);
	$BasicComboPopup$InvocationKeyHandler::init$((static_cast<$WindowsComboBoxUI$WinComboPopUp*>(this$1)));
}

WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler::WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler() {
}

$Class* WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler::load$($String* name, bool initialize) {
	$loadClass(WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler, name, initialize, &_WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler_ClassInfo_, allocate$WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler);
	return class$;
}

$Class* WindowsComboBoxUI$WinComboPopUp$InvocationKeyHandler::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com