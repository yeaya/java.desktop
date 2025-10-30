#include <javax/swing/plaf/metal/MetalToggleButtonUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef METAL_TOGGLE_BUTTON_UI_KEY

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicToggleButtonUI = ::javax::swing::plaf::basic::BasicToggleButtonUI;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $AppContext = ::sun::awt::AppContext;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalToggleButtonUI_FieldInfo_[] = {
	{"METAL_TOGGLE_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalToggleButtonUI, METAL_TOGGLE_BUTTON_UI_KEY)},
	{"focusColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalToggleButtonUI, focusColor)},
	{"selectColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalToggleButtonUI, selectColor)},
	{"disabledTextColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalToggleButtonUI, disabledTextColor)},
	{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(MetalToggleButtonUI, defaults_initialized)},
	{}
};

$MethodInfo _MetalToggleButtonUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalToggleButtonUI::*)()>(&MetalToggleButtonUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalToggleButtonUI::createUI))},
	{"getDisabledTextColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getFocusColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getSelectColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC},
	{"paintButtonPressed", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"paintFocus", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintIcon", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MetalToggleButtonUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalToggleButtonUI",
	"javax.swing.plaf.basic.BasicToggleButtonUI",
	nullptr,
	_MetalToggleButtonUI_FieldInfo_,
	_MetalToggleButtonUI_MethodInfo_
};

$Object* allocate$MetalToggleButtonUI($Class* clazz) {
	return $of($alloc(MetalToggleButtonUI));
}

$Object* MetalToggleButtonUI::METAL_TOGGLE_BUTTON_UI_KEY = nullptr;

void MetalToggleButtonUI::init$() {
	$BasicToggleButtonUI::init$();
	this->defaults_initialized = false;
}

$ComponentUI* MetalToggleButtonUI::createUI($JComponent* b) {
	$init(MetalToggleButtonUI);
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(MetalToggleButtonUI, metalToggleButtonUI, $cast(MetalToggleButtonUI, $nc(appContext)->get(MetalToggleButtonUI::METAL_TOGGLE_BUTTON_UI_KEY)));
	if (metalToggleButtonUI == nullptr) {
		$assign(metalToggleButtonUI, $new(MetalToggleButtonUI));
		appContext->put(MetalToggleButtonUI::METAL_TOGGLE_BUTTON_UI_KEY, metalToggleButtonUI);
	}
	return metalToggleButtonUI;
}

void MetalToggleButtonUI::installDefaults($AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	$BasicToggleButtonUI::installDefaults(b);
	if (!this->defaults_initialized) {
		$set(this, focusColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "focus"_s})));
		$set(this, selectColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "select"_s})));
		$set(this, disabledTextColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "disabledText"_s})));
		this->defaults_initialized = true;
	}
}

void MetalToggleButtonUI::uninstallDefaults($AbstractButton* b) {
	$BasicToggleButtonUI::uninstallDefaults(b);
	this->defaults_initialized = false;
}

$Color* MetalToggleButtonUI::getSelectColor() {
	return this->selectColor;
}

$Color* MetalToggleButtonUI::getDisabledTextColor() {
	return this->disabledTextColor;
}

$Color* MetalToggleButtonUI::getFocusColor() {
	return this->focusColor;
}

void MetalToggleButtonUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, button, $cast($AbstractButton, c));
	bool var$1 = ($instanceOf($UIResource, $($nc(c)->getBackground())));
	bool var$0 = var$1 && $nc(button)->isContentAreaFilled();
	if (var$0 && c->isEnabled()) {
		$var($ButtonModel, model, button->getModel());
		if (!$MetalUtils::isToolBarButton(c)) {
			bool var$3 = !$nc(model)->isArmed();
			bool var$2 = var$3 && !model->isPressed();
			if (var$2) {
				$var($Component, var$4, static_cast<$Component*>(c));
				$var($Graphics, var$5, g);
				$var($String, var$6, "ToggleButton.gradient"_s);
				int32_t var$7 = c->getWidth();
				var$2 = $MetalUtils::drawGradient(var$4, var$5, var$6, 0, 0, var$7, c->getHeight(), true);
			}
			if (var$2) {
				paint(g, c);
				return;
			}
		} else {
			bool var$15 = $nc(model)->isRollover();
			bool var$14 = (var$15 || $nc(model)->isSelected());
			if (var$14) {
				$var($Component, var$16, static_cast<$Component*>(c));
				$var($Graphics, var$17, g);
				$var($String, var$18, "ToggleButton.gradient"_s);
				int32_t var$19 = c->getWidth();
				var$14 = $MetalUtils::drawGradient(var$16, var$17, var$18, 0, 0, var$19, c->getHeight(), true);
			}
			if (var$14) {
				paint(g, c);
				return;
			}
		}
	}
	$BasicToggleButtonUI::update(g, c);
}

void MetalToggleButtonUI::paintButtonPressed($Graphics* g, $AbstractButton* b) {
	if ($nc(b)->isContentAreaFilled()) {
		$nc(g)->setColor($(getSelectColor()));
		int32_t var$0 = b->getWidth();
		g->fillRect(0, 0, var$0, b->getHeight());
	}
}

void MetalToggleButtonUI::paintText($Graphics* g, $JComponent* c, $Rectangle* textRect, $String* text) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(static_cast<$JComponent*>(b), g));
	int32_t mnemIndex = b->getDisplayedMnemonicIndex();
	if ($nc(model)->isEnabled()) {
		$nc(g)->setColor($(b->getForeground()));
	} else if (model->isSelected()) {
		$nc(g)->setColor($($nc(c)->getBackground()));
	} else {
		$nc(g)->setColor($(getDisabledTextColor()));
	}
	$SwingUtilities2::drawStringUnderlineCharAt(c, g, text, mnemIndex, $nc(textRect)->x, textRect->y + $nc(fm)->getAscent());
}

void MetalToggleButtonUI::paintFocus($Graphics* g, $AbstractButton* b, $Rectangle* viewRect, $Rectangle* textRect, $Rectangle* iconRect) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, focusRect, $new($Rectangle));
	$var($String, text, $nc(b)->getText());
	bool isIcon = b->getIcon() != nullptr;
	if (text != nullptr && !text->isEmpty()) {
		if (!isIcon) {
			focusRect->setBounds(textRect);
		} else {
			focusRect->setBounds($($nc(iconRect)->union$(textRect)));
		}
	} else if (isIcon) {
		focusRect->setBounds(iconRect);
	}
	$nc(g)->setColor($(getFocusColor()));
	g->drawRect((focusRect->x - 1), (focusRect->y - 1), focusRect->width + 1, focusRect->height + 1);
}

void MetalToggleButtonUI::paintIcon($Graphics* g, $AbstractButton* b, $Rectangle* iconRect) {
	$BasicToggleButtonUI::paintIcon(g, b, iconRect);
}

void clinit$MetalToggleButtonUI($Class* class$) {
	$assignStatic(MetalToggleButtonUI::METAL_TOGGLE_BUTTON_UI_KEY, $new($Object));
}

MetalToggleButtonUI::MetalToggleButtonUI() {
}

$Class* MetalToggleButtonUI::load$($String* name, bool initialize) {
	$loadClass(MetalToggleButtonUI, name, initialize, &_MetalToggleButtonUI_ClassInfo_, clinit$MetalToggleButtonUI, allocate$MetalToggleButtonUI);
	return class$;
}

$Class* MetalToggleButtonUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax