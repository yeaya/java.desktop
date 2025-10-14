#include <com/sun/java/swing/plaf/windows/WindowsTextAreaUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsTextUI$WindowsCaret.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicTextAreaUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <jcpp.h>

using $WindowsTextUI$WindowsCaret = ::com::sun::java::swing::plaf::windows::WindowsTextUI$WindowsCaret;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicTextAreaUI = ::javax::swing::plaf::basic::BasicTextAreaUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsTextAreaUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsTextAreaUI::*)()>(&WindowsTextAreaUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsTextAreaUI::createUI))},
	{}
};

$ClassInfo _WindowsTextAreaUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsTextAreaUI",
	"javax.swing.plaf.basic.BasicTextAreaUI",
	nullptr,
	nullptr,
	_WindowsTextAreaUI_MethodInfo_
};

$Object* allocate$WindowsTextAreaUI($Class* clazz) {
	return $of($alloc(WindowsTextAreaUI));
}

void WindowsTextAreaUI::init$() {
	$BasicTextAreaUI::init$();
}

$Caret* WindowsTextAreaUI::createCaret() {
	return $new($WindowsTextUI$WindowsCaret);
}

$ComponentUI* WindowsTextAreaUI::createUI($JComponent* c) {
	$init(WindowsTextAreaUI);
	return $new(WindowsTextAreaUI);
}

WindowsTextAreaUI::WindowsTextAreaUI() {
}

$Class* WindowsTextAreaUI::load$($String* name, bool initialize) {
	$loadClass(WindowsTextAreaUI, name, initialize, &_WindowsTextAreaUI_ClassInfo_, allocate$WindowsTextAreaUI);
	return class$;
}

$Class* WindowsTextAreaUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com