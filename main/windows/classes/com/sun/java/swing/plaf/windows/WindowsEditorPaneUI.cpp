#include <com/sun/java/swing/plaf/windows/WindowsEditorPaneUI.h>

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
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsEditorPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsEditorPaneUI::*)()>(&WindowsEditorPaneUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsEditorPaneUI::createUI))},
	{}
};

$ClassInfo _WindowsEditorPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsEditorPaneUI",
	"javax.swing.plaf.basic.BasicEditorPaneUI",
	nullptr,
	nullptr,
	_WindowsEditorPaneUI_MethodInfo_
};

$Object* allocate$WindowsEditorPaneUI($Class* clazz) {
	return $of($alloc(WindowsEditorPaneUI));
}

void WindowsEditorPaneUI::init$() {
	$BasicEditorPaneUI::init$();
}

$ComponentUI* WindowsEditorPaneUI::createUI($JComponent* c) {
	$init(WindowsEditorPaneUI);
	return $new(WindowsEditorPaneUI);
}

$Caret* WindowsEditorPaneUI::createCaret() {
	return $new($WindowsTextUI$WindowsCaret);
}

WindowsEditorPaneUI::WindowsEditorPaneUI() {
}

$Class* WindowsEditorPaneUI::load$($String* name, bool initialize) {
	$loadClass(WindowsEditorPaneUI, name, initialize, &_WindowsEditorPaneUI_ClassInfo_, allocate$WindowsEditorPaneUI);
	return class$;
}

$Class* WindowsEditorPaneUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com