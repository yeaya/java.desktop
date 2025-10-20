#include <com/sun/java/swing/plaf/motif/MotifRadioButtonUI.h>

#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicRadioButtonUI.h>
#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef MOTIF_RADIO_BUTTON_UI_KEY

using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
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
					namespace motif {

$FieldInfo _MotifRadioButtonUI_FieldInfo_[] = {
	{"MOTIF_RADIO_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifRadioButtonUI, MOTIF_RADIO_BUTTON_UI_KEY)},
	{"focusColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifRadioButtonUI, focusColor)},
	{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(MotifRadioButtonUI, defaults_initialized)},
	{}
};

$MethodInfo _MotifRadioButtonUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifRadioButtonUI::*)()>(&MotifRadioButtonUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifRadioButtonUI::createUI))},
	{"getFocusColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC},
	{"paintFocus", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Dimension;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MotifRadioButtonUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifRadioButtonUI",
	"javax.swing.plaf.basic.BasicRadioButtonUI",
	nullptr,
	_MotifRadioButtonUI_FieldInfo_,
	_MotifRadioButtonUI_MethodInfo_
};

$Object* allocate$MotifRadioButtonUI($Class* clazz) {
	return $of($alloc(MotifRadioButtonUI));
}

$Object* MotifRadioButtonUI::MOTIF_RADIO_BUTTON_UI_KEY = nullptr;

void MotifRadioButtonUI::init$() {
	$BasicRadioButtonUI::init$();
	this->defaults_initialized = false;
}

$ComponentUI* MotifRadioButtonUI::createUI($JComponent* c) {
	$init(MotifRadioButtonUI);
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(MotifRadioButtonUI, motifRadioButtonUI, $cast(MotifRadioButtonUI, $nc(appContext)->get(MotifRadioButtonUI::MOTIF_RADIO_BUTTON_UI_KEY)));
	if (motifRadioButtonUI == nullptr) {
		$assign(motifRadioButtonUI, $new(MotifRadioButtonUI));
		appContext->put(MotifRadioButtonUI::MOTIF_RADIO_BUTTON_UI_KEY, motifRadioButtonUI);
	}
	return motifRadioButtonUI;
}

void MotifRadioButtonUI::installDefaults($AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	$BasicRadioButtonUI::installDefaults(b);
	if (!this->defaults_initialized) {
		$set(this, focusColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "focus"_s})));
		this->defaults_initialized = true;
	}
}

void MotifRadioButtonUI::uninstallDefaults($AbstractButton* b) {
	$BasicRadioButtonUI::uninstallDefaults(b);
	this->defaults_initialized = false;
}

$Color* MotifRadioButtonUI::getFocusColor() {
	return this->focusColor;
}

void MotifRadioButtonUI::paintFocus($Graphics* g, $Rectangle* t, $Dimension* d) {
	$nc(g)->setColor($(getFocusColor()));
	g->drawRect(0, 0, $nc(d)->width - 1, d->height - 1);
}

void clinit$MotifRadioButtonUI($Class* class$) {
	$assignStatic(MotifRadioButtonUI::MOTIF_RADIO_BUTTON_UI_KEY, $new($Object));
}

MotifRadioButtonUI::MotifRadioButtonUI() {
}

$Class* MotifRadioButtonUI::load$($String* name, bool initialize) {
	$loadClass(MotifRadioButtonUI, name, initialize, &_MotifRadioButtonUI_ClassInfo_, clinit$MotifRadioButtonUI, allocate$MotifRadioButtonUI);
	return class$;
}

$Class* MotifRadioButtonUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com