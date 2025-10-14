#include <com/sun/java/swing/plaf/windows/WindowsTextPaneUI.h>

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
#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>
#include <javax/swing/plaf/basic/BasicTextPaneUI.h>
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
using $BasicEditorPaneUI = ::javax::swing::plaf::basic::BasicEditorPaneUI;
using $BasicTextPaneUI = ::javax::swing::plaf::basic::BasicTextPaneUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsTextPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsTextPaneUI::*)()>(&WindowsTextPaneUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsTextPaneUI::createUI))},
	{}
};

$ClassInfo _WindowsTextPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsTextPaneUI",
	"javax.swing.plaf.basic.BasicTextPaneUI",
	nullptr,
	nullptr,
	_WindowsTextPaneUI_MethodInfo_
};

$Object* allocate$WindowsTextPaneUI($Class* clazz) {
	return $of($alloc(WindowsTextPaneUI));
}

void WindowsTextPaneUI::init$() {
	$BasicTextPaneUI::init$();
}

$ComponentUI* WindowsTextPaneUI::createUI($JComponent* c) {
	$init(WindowsTextPaneUI);
	return $new(WindowsTextPaneUI);
}

$Caret* WindowsTextPaneUI::createCaret() {
	return $new($WindowsTextUI$WindowsCaret);
}

WindowsTextPaneUI::WindowsTextPaneUI() {
}

$Class* WindowsTextPaneUI::load$($String* name, bool initialize) {
	$loadClass(WindowsTextPaneUI, name, initialize, &_WindowsTextPaneUI_ClassInfo_, allocate$WindowsTextPaneUI);
	return class$;
}

$Class* WindowsTextPaneUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com