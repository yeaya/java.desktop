#include <com/sun/java/swing/plaf/windows/WindowsTextFieldUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsTextFieldUI$WindowsFieldCaret.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <jcpp.h>

using $WindowsTextFieldUI$WindowsFieldCaret = ::com::sun::java::swing::plaf::windows::WindowsTextFieldUI$WindowsFieldCaret;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
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

$MethodInfo _WindowsTextFieldUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsTextFieldUI::*)()>(&WindowsTextFieldUI::init$))},
	{"createCaret", "()Ljavax/swing/text/Caret;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsTextFieldUI::createUI))},
	{"paintBackground", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _WindowsTextFieldUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret", "com.sun.java.swing.plaf.windows.WindowsTextFieldUI", "WindowsFieldCaret", $STATIC},
	{}
};

$ClassInfo _WindowsTextFieldUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsTextFieldUI",
	"javax.swing.plaf.basic.BasicTextFieldUI",
	nullptr,
	nullptr,
	_WindowsTextFieldUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsTextFieldUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret,com.sun.java.swing.plaf.windows.WindowsTextFieldUI$WindowsFieldCaret$SafeScroller"
};

$Object* allocate$WindowsTextFieldUI($Class* clazz) {
	return $of($alloc(WindowsTextFieldUI));
}

void WindowsTextFieldUI::init$() {
	$BasicTextFieldUI::init$();
}

$ComponentUI* WindowsTextFieldUI::createUI($JComponent* c) {
	$init(WindowsTextFieldUI);
	return $new(WindowsTextFieldUI);
}

void WindowsTextFieldUI::paintBackground($Graphics* g) {
	$BasicTextFieldUI::paintBackground(g);
}

$Caret* WindowsTextFieldUI::createCaret() {
	return $new($WindowsTextFieldUI$WindowsFieldCaret);
}

WindowsTextFieldUI::WindowsTextFieldUI() {
}

$Class* WindowsTextFieldUI::load$($String* name, bool initialize) {
	$loadClass(WindowsTextFieldUI, name, initialize, &_WindowsTextFieldUI_ClassInfo_, allocate$WindowsTextFieldUI);
	return class$;
}

$Class* WindowsTextFieldUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com