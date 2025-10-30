#include <com/sun/java/swing/plaf/windows/WindowsPasswordFieldUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsTextUI$WindowsCaret.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicPasswordFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
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
using $BasicPasswordFieldUI = ::javax::swing::plaf::basic::BasicPasswordFieldUI;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsPasswordFieldUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsPasswordFieldUI::*)()>(&WindowsPasswordFieldUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsPasswordFieldUI::createUI))},
	{}
};

$ClassInfo _WindowsPasswordFieldUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsPasswordFieldUI",
	"javax.swing.plaf.basic.BasicPasswordFieldUI",
	nullptr,
	nullptr,
	_WindowsPasswordFieldUI_MethodInfo_
};

$Object* allocate$WindowsPasswordFieldUI($Class* clazz) {
	return $of($alloc(WindowsPasswordFieldUI));
}

void WindowsPasswordFieldUI::init$() {
	$BasicPasswordFieldUI::init$();
}

$ComponentUI* WindowsPasswordFieldUI::createUI($JComponent* c) {
	$init(WindowsPasswordFieldUI);
	return $new(WindowsPasswordFieldUI);
}

$Caret* WindowsPasswordFieldUI::createCaret() {
	return $new($WindowsTextUI$WindowsCaret);
}

WindowsPasswordFieldUI::WindowsPasswordFieldUI() {
}

$Class* WindowsPasswordFieldUI::load$($String* name, bool initialize) {
	$loadClass(WindowsPasswordFieldUI, name, initialize, &_WindowsPasswordFieldUI_ClassInfo_, allocate$WindowsPasswordFieldUI);
	return class$;
}

$Class* WindowsPasswordFieldUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com