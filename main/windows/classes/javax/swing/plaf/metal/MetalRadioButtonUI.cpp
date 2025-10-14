#include <javax/swing/plaf/metal/MetalRadioButtonUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicRadioButtonUI.h>
#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>
#include <javax/swing/text/View.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef METAL_RADIO_BUTTON_UI_KEY
#undef TRUE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicRadioButtonUI = ::javax::swing::plaf::basic::BasicRadioButtonUI;
using $BasicToggleButtonUI = ::javax::swing::plaf::basic::BasicToggleButtonUI;
using $View = ::javax::swing::text::View;
using $AppContext = ::sun::awt::AppContext;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalRadioButtonUI_FieldInfo_[] = {
	{"METAL_RADIO_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalRadioButtonUI, METAL_RADIO_BUTTON_UI_KEY)},
	{"focusColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalRadioButtonUI, focusColor)},
	{"selectColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalRadioButtonUI, selectColor)},
	{"disabledTextColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MetalRadioButtonUI, disabledTextColor)},
	{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(MetalRadioButtonUI, defaults_initialized)},
	{}
};

$MethodInfo _MetalRadioButtonUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalRadioButtonUI::*)()>(&MetalRadioButtonUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalRadioButtonUI::createUI))},
	{"getDisabledTextColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getFocusColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getSelectColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"paintFocus", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Dimension;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MetalRadioButtonUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalRadioButtonUI",
	"javax.swing.plaf.basic.BasicRadioButtonUI",
	nullptr,
	_MetalRadioButtonUI_FieldInfo_,
	_MetalRadioButtonUI_MethodInfo_
};

$Object* allocate$MetalRadioButtonUI($Class* clazz) {
	return $of($alloc(MetalRadioButtonUI));
}

$Object* MetalRadioButtonUI::METAL_RADIO_BUTTON_UI_KEY = nullptr;

void MetalRadioButtonUI::init$() {
	$BasicRadioButtonUI::init$();
	this->defaults_initialized = false;
}

$ComponentUI* MetalRadioButtonUI::createUI($JComponent* c) {
	$init(MetalRadioButtonUI);
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(MetalRadioButtonUI, metalRadioButtonUI, $cast(MetalRadioButtonUI, $nc(appContext)->get(MetalRadioButtonUI::METAL_RADIO_BUTTON_UI_KEY)));
	if (metalRadioButtonUI == nullptr) {
		$assign(metalRadioButtonUI, $new(MetalRadioButtonUI));
		appContext->put(MetalRadioButtonUI::METAL_RADIO_BUTTON_UI_KEY, metalRadioButtonUI);
	}
	return metalRadioButtonUI;
}

void MetalRadioButtonUI::installDefaults($AbstractButton* b) {
	$BasicRadioButtonUI::installDefaults(b);
	if (!this->defaults_initialized) {
		$set(this, focusColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "focus"_s})));
		$set(this, selectColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "select"_s})));
		$set(this, disabledTextColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "disabledText"_s})));
		this->defaults_initialized = true;
	}
	$init($Boolean);
	$LookAndFeel::installProperty(b, "opaque"_s, $Boolean::TRUE);
}

void MetalRadioButtonUI::uninstallDefaults($AbstractButton* b) {
	$BasicRadioButtonUI::uninstallDefaults(b);
	this->defaults_initialized = false;
}

$Color* MetalRadioButtonUI::getSelectColor() {
	return this->selectColor;
}

$Color* MetalRadioButtonUI::getDisabledTextColor() {
	return this->disabledTextColor;
}

$Color* MetalRadioButtonUI::getFocusColor() {
	return this->focusColor;
}

void MetalRadioButtonUI::paint($Graphics* g, $JComponent* c) {
	$synchronized(this) {
		$var($AbstractButton, b, $cast($AbstractButton, c));
		$var($ButtonModel, model, $nc(b)->getModel());
		$var($Dimension, size, $nc(c)->getSize());
		int32_t w = $nc(size)->width;
		int32_t h = size->height;
		$var($Font, f, c->getFont());
		$nc(g)->setFont(f);
		$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(c, g, f));
		$var($Rectangle, viewRect, $new($Rectangle, size));
		$var($Rectangle, iconRect, $new($Rectangle));
		$var($Rectangle, textRect, $new($Rectangle));
		$var($Insets, i, c->getInsets());
		viewRect->x += $nc(i)->left;
		viewRect->y += i->top;
		viewRect->width -= (i->right + viewRect->x);
		viewRect->height -= (i->bottom + viewRect->y);
		$var($Icon, altIcon, b->getIcon());
		$var($Icon, selectedIcon, nullptr);
		$var($Icon, disabledIcon, nullptr);
		$var($JComponent, var$0, c);
		$var($FontMetrics, var$1, fm);
		$var($String, var$2, b->getText());
		$var($Icon, var$3, altIcon != nullptr ? altIcon : getDefaultIcon());
		int32_t var$4 = b->getVerticalAlignment();
		int32_t var$5 = b->getHorizontalAlignment();
		int32_t var$6 = b->getVerticalTextPosition();
		int32_t var$7 = b->getHorizontalTextPosition();
		$var($Rectangle, var$8, viewRect);
		$var($Rectangle, var$9, iconRect);
		$var($Rectangle, var$10, textRect);
		$var($String, text, $SwingUtilities::layoutCompoundLabel(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, b->getIconTextGap()));
		if (c->isOpaque()) {
			g->setColor($(b->getBackground()));
			g->fillRect(0, 0, size->width, size->height);
		}
		if (altIcon != nullptr) {
			if (!$nc(model)->isEnabled()) {
				if (model->isSelected()) {
					$assign(altIcon, b->getDisabledSelectedIcon());
				} else {
					$assign(altIcon, b->getDisabledIcon());
				}
			} else {
				bool var$12 = model->isPressed();
				if (var$12 && model->isArmed()) {
					$assign(altIcon, b->getPressedIcon());
					if (altIcon == nullptr) {
						$assign(altIcon, b->getSelectedIcon());
					}
				} else if (model->isSelected()) {
					bool var$13 = b->isRolloverEnabled();
					if (var$13 && model->isRollover()) {
						$assign(altIcon, b->getRolloverSelectedIcon());
						if (altIcon == nullptr) {
							$assign(altIcon, b->getSelectedIcon());
						}
					} else {
						$assign(altIcon, b->getSelectedIcon());
					}
				} else {
					bool var$15 = b->isRolloverEnabled();
					if (var$15 && model->isRollover()) {
						$assign(altIcon, b->getRolloverIcon());
					}
				}
			}
			if (altIcon == nullptr) {
				$assign(altIcon, b->getIcon());
			}
			altIcon->paintIcon(c, g, iconRect->x, iconRect->y);
		} else {
			$nc($(getDefaultIcon()))->paintIcon(c, g, iconRect->x, iconRect->y);
		}
		if (text != nullptr) {
			$init($BasicHTML);
			$var($View, v, $cast($View, c->getClientProperty($BasicHTML::propertyKey)));
			if (v != nullptr) {
				v->paint(g, textRect);
			} else {
				int32_t mnemIndex = b->getDisplayedMnemonicIndex();
				if (model->isEnabled()) {
					g->setColor($(b->getForeground()));
				} else {
					g->setColor($(getDisabledTextColor()));
				}
				$SwingUtilities2::drawStringUnderlineCharAt(c, g, text, mnemIndex, textRect->x, textRect->y + $nc(fm)->getAscent());
			}
			bool var$16 = b->hasFocus();
			if (var$16 && b->isFocusPainted() && textRect->width > 0 && textRect->height > 0) {
				paintFocus(g, textRect, size);
			}
		}
	}
}

void MetalRadioButtonUI::paintFocus($Graphics* g, $Rectangle* t, $Dimension* d) {
	$nc(g)->setColor($(getFocusColor()));
	g->drawRect($nc(t)->x - 1, t->y - 1, t->width + 1, t->height + 1);
}

void clinit$MetalRadioButtonUI($Class* class$) {
	$assignStatic(MetalRadioButtonUI::METAL_RADIO_BUTTON_UI_KEY, $new($Object));
}

MetalRadioButtonUI::MetalRadioButtonUI() {
}

$Class* MetalRadioButtonUI::load$($String* name, bool initialize) {
	$loadClass(MetalRadioButtonUI, name, initialize, &_MetalRadioButtonUI_ClassInfo_, clinit$MetalRadioButtonUI, allocate$MetalRadioButtonUI);
	return class$;
}

$Class* MetalRadioButtonUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax