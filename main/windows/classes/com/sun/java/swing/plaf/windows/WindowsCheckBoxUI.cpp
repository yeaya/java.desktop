#include <com/sun/java/swing/plaf/windows/WindowsCheckBoxUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsRadioButtonUI.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicRadioButtonUI.h>
#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef WINDOWS_CHECK_BOX_UI_KEY

using $WindowsRadioButtonUI = ::com::sun::java::swing::plaf::windows::WindowsRadioButtonUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicRadioButtonUI = ::javax::swing::plaf::basic::BasicRadioButtonUI;
using $BasicToggleButtonUI = ::javax::swing::plaf::basic::BasicToggleButtonUI;
using $AppContext = ::sun::awt::AppContext;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsCheckBoxUI_FieldInfo_[] = {
	{"WINDOWS_CHECK_BOX_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsCheckBoxUI, WINDOWS_CHECK_BOX_UI_KEY)},
	{"propertyPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsCheckBoxUI, propertyPrefix)},
	{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(WindowsCheckBoxUI, defaults_initialized)},
	{}
};

$MethodInfo _WindowsCheckBoxUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsCheckBoxUI::*)()>(&WindowsCheckBoxUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsCheckBoxUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WindowsCheckBoxUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsCheckBoxUI",
	"com.sun.java.swing.plaf.windows.WindowsRadioButtonUI",
	nullptr,
	_WindowsCheckBoxUI_FieldInfo_,
	_WindowsCheckBoxUI_MethodInfo_
};

$Object* allocate$WindowsCheckBoxUI($Class* clazz) {
	return $of($alloc(WindowsCheckBoxUI));
}

$Object* WindowsCheckBoxUI::WINDOWS_CHECK_BOX_UI_KEY = nullptr;
$String* WindowsCheckBoxUI::propertyPrefix = nullptr;

void WindowsCheckBoxUI::init$() {
	$WindowsRadioButtonUI::init$();
	this->defaults_initialized = false;
}

$ComponentUI* WindowsCheckBoxUI::createUI($JComponent* c) {
	$init(WindowsCheckBoxUI);
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(WindowsCheckBoxUI, windowsCheckBoxUI, $cast(WindowsCheckBoxUI, $nc(appContext)->get(WindowsCheckBoxUI::WINDOWS_CHECK_BOX_UI_KEY)));
	if (windowsCheckBoxUI == nullptr) {
		$assign(windowsCheckBoxUI, $new(WindowsCheckBoxUI));
		appContext->put(WindowsCheckBoxUI::WINDOWS_CHECK_BOX_UI_KEY, windowsCheckBoxUI);
	}
	return windowsCheckBoxUI;
}

$String* WindowsCheckBoxUI::getPropertyPrefix() {
	return WindowsCheckBoxUI::propertyPrefix;
}

void WindowsCheckBoxUI::installDefaults($AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	$WindowsRadioButtonUI::installDefaults(b);
	if (!this->defaults_initialized) {
		$set(this, icon, $UIManager::getIcon($$str({$(getPropertyPrefix()), "icon"_s})));
		this->defaults_initialized = true;
	}
}

void WindowsCheckBoxUI::uninstallDefaults($AbstractButton* b) {
	$WindowsRadioButtonUI::uninstallDefaults(b);
	this->defaults_initialized = false;
}

void clinit$WindowsCheckBoxUI($Class* class$) {
	$assignStatic(WindowsCheckBoxUI::propertyPrefix, "CheckBox."_s);
	$assignStatic(WindowsCheckBoxUI::WINDOWS_CHECK_BOX_UI_KEY, $new($Object));
}

WindowsCheckBoxUI::WindowsCheckBoxUI() {
}

$Class* WindowsCheckBoxUI::load$($String* name, bool initialize) {
	$loadClass(WindowsCheckBoxUI, name, initialize, &_WindowsCheckBoxUI_ClassInfo_, clinit$WindowsCheckBoxUI, allocate$WindowsCheckBoxUI);
	return class$;
}

$Class* WindowsCheckBoxUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com