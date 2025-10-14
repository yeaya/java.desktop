#include <com/sun/java/swing/plaf/motif/MotifToggleButtonUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef FALSE
#undef MOTIF_TOGGLE_BUTTON_UI_KEY

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicToggleButtonUI = ::javax::swing::plaf::basic::BasicToggleButtonUI;
using $AppContext = ::sun::awt::AppContext;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifToggleButtonUI_FieldInfo_[] = {
	{"MOTIF_TOGGLE_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifToggleButtonUI, MOTIF_TOGGLE_BUTTON_UI_KEY)},
	{"selectColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MotifToggleButtonUI, selectColor)},
	{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(MotifToggleButtonUI, defaults_initialized)},
	{}
};

$MethodInfo _MotifToggleButtonUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifToggleButtonUI::*)()>(&MotifToggleButtonUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifToggleButtonUI::createUI))},
	{"getInsets", "(Ljavax/swing/JComponent;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getSelectColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC},
	{"paintButtonPressed", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MotifToggleButtonUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifToggleButtonUI",
	"javax.swing.plaf.basic.BasicToggleButtonUI",
	nullptr,
	_MotifToggleButtonUI_FieldInfo_,
	_MotifToggleButtonUI_MethodInfo_
};

$Object* allocate$MotifToggleButtonUI($Class* clazz) {
	return $of($alloc(MotifToggleButtonUI));
}

$Object* MotifToggleButtonUI::MOTIF_TOGGLE_BUTTON_UI_KEY = nullptr;

void MotifToggleButtonUI::init$() {
	$BasicToggleButtonUI::init$();
	this->defaults_initialized = false;
}

$ComponentUI* MotifToggleButtonUI::createUI($JComponent* b) {
	$init(MotifToggleButtonUI);
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(MotifToggleButtonUI, motifToggleButtonUI, $cast(MotifToggleButtonUI, $nc(appContext)->get(MotifToggleButtonUI::MOTIF_TOGGLE_BUTTON_UI_KEY)));
	if (motifToggleButtonUI == nullptr) {
		$assign(motifToggleButtonUI, $new(MotifToggleButtonUI));
		appContext->put(MotifToggleButtonUI::MOTIF_TOGGLE_BUTTON_UI_KEY, motifToggleButtonUI);
	}
	return motifToggleButtonUI;
}

void MotifToggleButtonUI::installDefaults($AbstractButton* b) {
	$BasicToggleButtonUI::installDefaults(b);
	if (!this->defaults_initialized) {
		$set(this, selectColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "select"_s})));
		this->defaults_initialized = true;
	}
	$init($Boolean);
	$LookAndFeel::installProperty(b, "opaque"_s, $Boolean::FALSE);
}

void MotifToggleButtonUI::uninstallDefaults($AbstractButton* b) {
	$BasicToggleButtonUI::uninstallDefaults(b);
	this->defaults_initialized = false;
}

$Color* MotifToggleButtonUI::getSelectColor() {
	return this->selectColor;
}

void MotifToggleButtonUI::paintButtonPressed($Graphics* g, $AbstractButton* b) {
	if ($nc(b)->isContentAreaFilled()) {
		$var($Color, oldColor, $nc(g)->getColor());
		$var($Dimension, size, b->getSize());
		$var($Insets, insets, b->getInsets());
		$var($Insets, margin, b->getMargin());
		if ($instanceOf($UIResource, $(b->getBackground()))) {
			g->setColor($(getSelectColor()));
		}
		g->fillRect($nc(insets)->left - $nc(margin)->left, insets->top - margin->top, $nc(size)->width - (insets->left - margin->left) - (insets->right - margin->right), size->height - (insets->top - margin->top) - (insets->bottom - margin->bottom));
		g->setColor(oldColor);
	}
}

$Insets* MotifToggleButtonUI::getInsets($JComponent* c) {
	$var($Border, border, $nc(c)->getBorder());
	$var($Insets, i, border != nullptr ? $nc(border)->getBorderInsets(c) : $new($Insets, 0, 0, 0, 0));
	return i;
}

void clinit$MotifToggleButtonUI($Class* class$) {
	$assignStatic(MotifToggleButtonUI::MOTIF_TOGGLE_BUTTON_UI_KEY, $new($Object));
}

MotifToggleButtonUI::MotifToggleButtonUI() {
}

$Class* MotifToggleButtonUI::load$($String* name, bool initialize) {
	$loadClass(MotifToggleButtonUI, name, initialize, &_MotifToggleButtonUI_ClassInfo_, clinit$MotifToggleButtonUI, allocate$MotifToggleButtonUI);
	return class$;
}

$Class* MotifToggleButtonUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com