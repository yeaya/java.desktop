#include <com/sun/java/swing/plaf/motif/MotifCheckBoxUI.h>

#include <com/sun/java/swing/plaf/motif/MotifRadioButtonUI.h>
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

#undef MOTIF_CHECK_BOX_UI_KEY

using $MotifRadioButtonUI = ::com::sun::java::swing::plaf::motif::MotifRadioButtonUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
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
					namespace motif {

$FieldInfo _MotifCheckBoxUI_FieldInfo_[] = {
	{"MOTIF_CHECK_BOX_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifCheckBoxUI, MOTIF_CHECK_BOX_UI_KEY)},
	{"propertyPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifCheckBoxUI, propertyPrefix)},
	{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(MotifCheckBoxUI, defaults_initialized)},
	{}
};

$MethodInfo _MotifCheckBoxUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifCheckBoxUI::*)()>(&MotifCheckBoxUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifCheckBoxUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MotifCheckBoxUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifCheckBoxUI",
	"com.sun.java.swing.plaf.motif.MotifRadioButtonUI",
	nullptr,
	_MotifCheckBoxUI_FieldInfo_,
	_MotifCheckBoxUI_MethodInfo_
};

$Object* allocate$MotifCheckBoxUI($Class* clazz) {
	return $of($alloc(MotifCheckBoxUI));
}

$Object* MotifCheckBoxUI::MOTIF_CHECK_BOX_UI_KEY = nullptr;
$String* MotifCheckBoxUI::propertyPrefix = nullptr;

void MotifCheckBoxUI::init$() {
	$MotifRadioButtonUI::init$();
	this->defaults_initialized = false;
}

$ComponentUI* MotifCheckBoxUI::createUI($JComponent* c) {
	$init(MotifCheckBoxUI);
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(MotifCheckBoxUI, motifCheckBoxUI, $cast(MotifCheckBoxUI, $nc(appContext)->get(MotifCheckBoxUI::MOTIF_CHECK_BOX_UI_KEY)));
	if (motifCheckBoxUI == nullptr) {
		$assign(motifCheckBoxUI, $new(MotifCheckBoxUI));
		appContext->put(MotifCheckBoxUI::MOTIF_CHECK_BOX_UI_KEY, motifCheckBoxUI);
	}
	return motifCheckBoxUI;
}

$String* MotifCheckBoxUI::getPropertyPrefix() {
	return MotifCheckBoxUI::propertyPrefix;
}

void MotifCheckBoxUI::installDefaults($AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	$MotifRadioButtonUI::installDefaults(b);
	if (!this->defaults_initialized) {
		$set(this, icon, $UIManager::getIcon($$str({$(getPropertyPrefix()), "icon"_s})));
		this->defaults_initialized = true;
	}
}

void MotifCheckBoxUI::uninstallDefaults($AbstractButton* b) {
	$MotifRadioButtonUI::uninstallDefaults(b);
	this->defaults_initialized = false;
}

void clinit$MotifCheckBoxUI($Class* class$) {
	$assignStatic(MotifCheckBoxUI::propertyPrefix, "CheckBox."_s);
	$assignStatic(MotifCheckBoxUI::MOTIF_CHECK_BOX_UI_KEY, $new($Object));
}

MotifCheckBoxUI::MotifCheckBoxUI() {
}

$Class* MotifCheckBoxUI::load$($String* name, bool initialize) {
	$loadClass(MotifCheckBoxUI, name, initialize, &_MotifCheckBoxUI_ClassInfo_, clinit$MotifCheckBoxUI, allocate$MotifCheckBoxUI);
	return class$;
}

$Class* MotifCheckBoxUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com