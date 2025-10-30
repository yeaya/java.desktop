#include <com/sun/java/swing/plaf/windows/WindowsRootPaneUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsRootPaneUI$AltProcessor.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/RootPaneUI.h>
#include <javax/swing/plaf/basic/BasicRootPaneUI.h>
#include <jcpp.h>

using $WindowsRootPaneUI$AltProcessor = ::com::sun::java::swing::plaf::windows::WindowsRootPaneUI$AltProcessor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $RootPaneUI = ::javax::swing::plaf::RootPaneUI;
using $BasicRootPaneUI = ::javax::swing::plaf::basic::BasicRootPaneUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsRootPaneUI_FieldInfo_[] = {
	{"windowsRootPaneUI", "Lcom/sun/java/swing/plaf/windows/WindowsRootPaneUI;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsRootPaneUI, windowsRootPaneUI)},
	{"altProcessor", "Lcom/sun/java/swing/plaf/windows/WindowsRootPaneUI$AltProcessor;", nullptr, $STATIC | $FINAL, $staticField(WindowsRootPaneUI, altProcessor)},
	{}
};

$MethodInfo _WindowsRootPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsRootPaneUI::*)()>(&WindowsRootPaneUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsRootPaneUI::createUI))},
	{}
};

$InnerClassInfo _WindowsRootPaneUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsRootPaneUI$AltProcessor", "com.sun.java.swing.plaf.windows.WindowsRootPaneUI", "AltProcessor", $STATIC},
	{}
};

$ClassInfo _WindowsRootPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsRootPaneUI",
	"javax.swing.plaf.basic.BasicRootPaneUI",
	nullptr,
	_WindowsRootPaneUI_FieldInfo_,
	_WindowsRootPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsRootPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsRootPaneUI$AltProcessor"
};

$Object* allocate$WindowsRootPaneUI($Class* clazz) {
	return $of($alloc(WindowsRootPaneUI));
}

WindowsRootPaneUI* WindowsRootPaneUI::windowsRootPaneUI = nullptr;
$WindowsRootPaneUI$AltProcessor* WindowsRootPaneUI::altProcessor = nullptr;

void WindowsRootPaneUI::init$() {
	$BasicRootPaneUI::init$();
}

$ComponentUI* WindowsRootPaneUI::createUI($JComponent* c) {
	$init(WindowsRootPaneUI);
	return WindowsRootPaneUI::windowsRootPaneUI;
}

void clinit$WindowsRootPaneUI($Class* class$) {
	$assignStatic(WindowsRootPaneUI::windowsRootPaneUI, $new(WindowsRootPaneUI));
	$assignStatic(WindowsRootPaneUI::altProcessor, $new($WindowsRootPaneUI$AltProcessor));
}

WindowsRootPaneUI::WindowsRootPaneUI() {
}

$Class* WindowsRootPaneUI::load$($String* name, bool initialize) {
	$loadClass(WindowsRootPaneUI, name, initialize, &_WindowsRootPaneUI_ClassInfo_, clinit$WindowsRootPaneUI, allocate$WindowsRootPaneUI);
	return class$;
}

$Class* WindowsRootPaneUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com