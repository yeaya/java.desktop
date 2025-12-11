#include <javax/swing/plaf/metal/MetalCheckBoxUI.h>

#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicRadioButtonUI.h>
#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>
#include <javax/swing/plaf/metal/MetalRadioButtonUI.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef METAL_CHECK_BOX_UI_KEY

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
using $MetalRadioButtonUI = ::javax::swing::plaf::metal::MetalRadioButtonUI;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalCheckBoxUI_FieldInfo_[] = {
	{"METAL_CHECK_BOX_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalCheckBoxUI, METAL_CHECK_BOX_UI_KEY)},
	{"propertyPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalCheckBoxUI, propertyPrefix)},
	{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(MetalCheckBoxUI, defaults_initialized)},
	{}
};

$MethodInfo _MetalCheckBoxUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalCheckBoxUI::*)()>(&MetalCheckBoxUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalCheckBoxUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MetalCheckBoxUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalCheckBoxUI",
	"javax.swing.plaf.metal.MetalRadioButtonUI",
	nullptr,
	_MetalCheckBoxUI_FieldInfo_,
	_MetalCheckBoxUI_MethodInfo_
};

$Object* allocate$MetalCheckBoxUI($Class* clazz) {
	return $of($alloc(MetalCheckBoxUI));
}

$Object* MetalCheckBoxUI::METAL_CHECK_BOX_UI_KEY = nullptr;
$String* MetalCheckBoxUI::propertyPrefix = nullptr;

void MetalCheckBoxUI::init$() {
	$MetalRadioButtonUI::init$();
	this->defaults_initialized = false;
}

$ComponentUI* MetalCheckBoxUI::createUI($JComponent* b) {
	$init(MetalCheckBoxUI);
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(MetalCheckBoxUI, checkboxUI, $cast(MetalCheckBoxUI, $nc(appContext)->get(MetalCheckBoxUI::METAL_CHECK_BOX_UI_KEY)));
	if (checkboxUI == nullptr) {
		$assign(checkboxUI, $new(MetalCheckBoxUI));
		appContext->put(MetalCheckBoxUI::METAL_CHECK_BOX_UI_KEY, checkboxUI);
	}
	return checkboxUI;
}

$String* MetalCheckBoxUI::getPropertyPrefix() {
	return MetalCheckBoxUI::propertyPrefix;
}

void MetalCheckBoxUI::installDefaults($AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	$MetalRadioButtonUI::installDefaults(b);
	if (!this->defaults_initialized) {
		$set(this, icon, $UIManager::getIcon($$str({$(getPropertyPrefix()), "icon"_s})));
		this->defaults_initialized = true;
	}
}

void MetalCheckBoxUI::uninstallDefaults($AbstractButton* b) {
	$MetalRadioButtonUI::uninstallDefaults(b);
	this->defaults_initialized = false;
}

void clinit$MetalCheckBoxUI($Class* class$) {
	$assignStatic(MetalCheckBoxUI::propertyPrefix, "CheckBox."_s);
	$assignStatic(MetalCheckBoxUI::METAL_CHECK_BOX_UI_KEY, $new($Object));
}

MetalCheckBoxUI::MetalCheckBoxUI() {
}

$Class* MetalCheckBoxUI::load$($String* name, bool initialize) {
	$loadClass(MetalCheckBoxUI, name, initialize, &_MetalCheckBoxUI_ClassInfo_, clinit$MetalCheckBoxUI, allocate$MetalCheckBoxUI);
	return class$;
}

$Class* MetalCheckBoxUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax