#include <javax/swing/plaf/metal/MetalButtonUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
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
#include <javax/swing/plaf/basic/BasicButtonListener.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef METAL_BUTTON_UI_KEY

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicButtonListener = ::javax::swing::plaf::basic::BasicButtonListener;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $AppContext = ::sun::awt::AppContext;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalButtonUI_FieldInfo_[] = {
	{"focusColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalButtonUI, focusColor)},
	{"selectColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalButtonUI, selectColor)},
	{"disabledTextColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalButtonUI, disabledTextColor)},
	{"METAL_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalButtonUI, METAL_BUTTON_UI_KEY)},
	{}
};

$MethodInfo _MetalButtonUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalButtonUI::*)()>(&MetalButtonUI::init$))},
	{"createButtonListener", "(Ljavax/swing/AbstractButton;)Ljavax/swing/plaf/basic/BasicButtonListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalButtonUI::createUI))},
	{"getDisabledTextColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getFocusColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getSelectColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC},
	{"paintButtonPressed", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"paintFocus", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MetalButtonUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalButtonUI",
	"javax.swing.plaf.basic.BasicButtonUI",
	nullptr,
	_MetalButtonUI_FieldInfo_,
	_MetalButtonUI_MethodInfo_
};

$Object* allocate$MetalButtonUI($Class* clazz) {
	return $of($alloc(MetalButtonUI));
}

$Object* MetalButtonUI::METAL_BUTTON_UI_KEY = nullptr;

void MetalButtonUI::init$() {
	$BasicButtonUI::init$();
}

$ComponentUI* MetalButtonUI::createUI($JComponent* c) {
	$init(MetalButtonUI);
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(MetalButtonUI, metalButtonUI, $cast(MetalButtonUI, $nc(appContext)->get(MetalButtonUI::METAL_BUTTON_UI_KEY)));
	if (metalButtonUI == nullptr) {
		$assign(metalButtonUI, $new(MetalButtonUI));
		appContext->put(MetalButtonUI::METAL_BUTTON_UI_KEY, metalButtonUI);
	}
	return metalButtonUI;
}

void MetalButtonUI::installDefaults($AbstractButton* b) {
	$BasicButtonUI::installDefaults(b);
}

void MetalButtonUI::uninstallDefaults($AbstractButton* b) {
	$BasicButtonUI::uninstallDefaults(b);
}

$BasicButtonListener* MetalButtonUI::createButtonListener($AbstractButton* b) {
	return $BasicButtonUI::createButtonListener(b);
}

$Color* MetalButtonUI::getSelectColor() {
	$useLocalCurrentObjectStackCache();
	$set(this, selectColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "select"_s})));
	return this->selectColor;
}

$Color* MetalButtonUI::getDisabledTextColor() {
	$useLocalCurrentObjectStackCache();
	$set(this, disabledTextColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "disabledText"_s})));
	return this->disabledTextColor;
}

$Color* MetalButtonUI::getFocusColor() {
	$useLocalCurrentObjectStackCache();
	$set(this, focusColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "focus"_s})));
	return this->focusColor;
}

void MetalButtonUI::update($Graphics* g, $JComponent* c) {
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
				$var($String, var$6, "Button.gradient"_s);
				int32_t var$7 = c->getWidth();
				var$2 = $MetalUtils::drawGradient(var$4, var$5, var$6, 0, 0, var$7, c->getHeight(), true);
			}
			if (var$2) {
				paint(g, c);
				return;
			}
		} else {
			bool var$13 = $nc(model)->isRollover();
			if (var$13) {
				$var($Component, var$14, static_cast<$Component*>(c));
				$var($Graphics, var$15, g);
				$var($String, var$16, "Button.gradient"_s);
				int32_t var$17 = c->getWidth();
				var$13 = $MetalUtils::drawGradient(var$14, var$15, var$16, 0, 0, var$17, c->getHeight(), true);
			}
			if (var$13) {
				paint(g, c);
				return;
			}
		}
	}
	$BasicButtonUI::update(g, c);
}

void MetalButtonUI::paintButtonPressed($Graphics* g, $AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	if ($nc(b)->isContentAreaFilled()) {
		$var($Dimension, size, b->getSize());
		$nc(g)->setColor($(getSelectColor()));
		g->fillRect(0, 0, $nc(size)->width, size->height);
	}
}

void MetalButtonUI::paintFocus($Graphics* g, $AbstractButton* b, $Rectangle* viewRect, $Rectangle* textRect, $Rectangle* iconRect) {
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

void MetalButtonUI::paintText($Graphics* g, $JComponent* c, $Rectangle* textRect, $String* text) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(c, g));
	int32_t mnemIndex = b->getDisplayedMnemonicIndex();
	if ($nc(model)->isEnabled()) {
		$nc(g)->setColor($(b->getForeground()));
	} else {
		$nc(g)->setColor($(getDisabledTextColor()));
	}
	$SwingUtilities2::drawStringUnderlineCharAt(c, g, text, mnemIndex, $nc(textRect)->x, textRect->y + $nc(fm)->getAscent());
}

void clinit$MetalButtonUI($Class* class$) {
	$assignStatic(MetalButtonUI::METAL_BUTTON_UI_KEY, $new($Object));
}

MetalButtonUI::MetalButtonUI() {
}

$Class* MetalButtonUI::load$($String* name, bool initialize) {
	$loadClass(MetalButtonUI, name, initialize, &_MetalButtonUI_ClassInfo_, clinit$MetalButtonUI, allocate$MetalButtonUI);
	return class$;
}

$Class* MetalButtonUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax