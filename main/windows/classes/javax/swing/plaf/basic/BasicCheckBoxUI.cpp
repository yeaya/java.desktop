#include <javax/swing/plaf/basic/BasicCheckBoxUI.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicRadioButtonUI.h>
#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef BASIC_CHECK_BOX_UI_KEY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicRadioButtonUI = ::javax::swing::plaf::basic::BasicRadioButtonUI;
using $BasicToggleButtonUI = ::javax::swing::plaf::basic::BasicToggleButtonUI;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicCheckBoxUI_FieldInfo_[] = {
	{"BASIC_CHECK_BOX_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicCheckBoxUI, BASIC_CHECK_BOX_UI_KEY)},
	{"propertyPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicCheckBoxUI, propertyPrefix)},
	{}
};

$MethodInfo _BasicCheckBoxUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicCheckBoxUI::*)()>(&BasicCheckBoxUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicCheckBoxUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BasicCheckBoxUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicCheckBoxUI",
	"javax.swing.plaf.basic.BasicRadioButtonUI",
	nullptr,
	_BasicCheckBoxUI_FieldInfo_,
	_BasicCheckBoxUI_MethodInfo_
};

$Object* allocate$BasicCheckBoxUI($Class* clazz) {
	return $of($alloc(BasicCheckBoxUI));
}

$Object* BasicCheckBoxUI::BASIC_CHECK_BOX_UI_KEY = nullptr;
$String* BasicCheckBoxUI::propertyPrefix = nullptr;

void BasicCheckBoxUI::init$() {
	$BasicRadioButtonUI::init$();
}

$ComponentUI* BasicCheckBoxUI::createUI($JComponent* b) {
	$init(BasicCheckBoxUI);
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(BasicCheckBoxUI, checkboxUI, $cast(BasicCheckBoxUI, $nc(appContext)->get(BasicCheckBoxUI::BASIC_CHECK_BOX_UI_KEY)));
	if (checkboxUI == nullptr) {
		$assign(checkboxUI, $new(BasicCheckBoxUI));
		appContext->put(BasicCheckBoxUI::BASIC_CHECK_BOX_UI_KEY, checkboxUI);
	}
	return checkboxUI;
}

$String* BasicCheckBoxUI::getPropertyPrefix() {
	return BasicCheckBoxUI::propertyPrefix;
}

void clinit$BasicCheckBoxUI($Class* class$) {
	$assignStatic(BasicCheckBoxUI::propertyPrefix, "CheckBox."_s);
	$assignStatic(BasicCheckBoxUI::BASIC_CHECK_BOX_UI_KEY, $new($Object));
}

BasicCheckBoxUI::BasicCheckBoxUI() {
}

$Class* BasicCheckBoxUI::load$($String* name, bool initialize) {
	$loadClass(BasicCheckBoxUI, name, initialize, &_BasicCheckBoxUI_ClassInfo_, clinit$BasicCheckBoxUI, allocate$BasicCheckBoxUI);
	return class$;
}

$Class* BasicCheckBoxUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax