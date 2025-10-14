#include <javax/swing/plaf/basic/BasicRadioButtonUI.h>

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
#include <java/awt/event/KeyListener.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>
#include <javax/swing/text/View.h>
#include <sun/awt/AppContext.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BASIC_RADIO_BUTTON_UI_KEY
#undef MAX_VALUE

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
using $KeyListener = ::java::awt::event::KeyListener;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicToggleButtonUI = ::javax::swing::plaf::basic::BasicToggleButtonUI;
using $View = ::javax::swing::text::View;
using $AppContext = ::sun::awt::AppContext;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicRadioButtonUI_FieldInfo_[] = {
	{"BASIC_RADIO_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicRadioButtonUI, BASIC_RADIO_BUTTON_UI_KEY)},
	{"icon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicRadioButtonUI, icon)},
	{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(BasicRadioButtonUI, defaults_initialized)},
	{"propertyPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicRadioButtonUI, propertyPrefix)},
	{"keyListener", "Ljava/awt/event/KeyListener;", nullptr, $PRIVATE, $field(BasicRadioButtonUI, keyListener)},
	{"size", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(BasicRadioButtonUI, size)},
	{"viewRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(BasicRadioButtonUI, viewRect)},
	{"iconRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(BasicRadioButtonUI, iconRect)},
	{"textRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(BasicRadioButtonUI, textRect)},
	{"prefViewRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(BasicRadioButtonUI, prefViewRect)},
	{"prefIconRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(BasicRadioButtonUI, prefIconRect)},
	{"prefTextRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(BasicRadioButtonUI, prefTextRect)},
	{"prefInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC, $staticField(BasicRadioButtonUI, prefInsets)},
	{}
};

$MethodInfo _BasicRadioButtonUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicRadioButtonUI::*)()>(&BasicRadioButtonUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicRadioButtonUI::createUI))},
	{"getDefaultIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"paintFocus", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Dimension;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _BasicRadioButtonUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicRadioButtonUI",
	"javax.swing.plaf.basic.BasicToggleButtonUI",
	nullptr,
	_BasicRadioButtonUI_FieldInfo_,
	_BasicRadioButtonUI_MethodInfo_
};

$Object* allocate$BasicRadioButtonUI($Class* clazz) {
	return $of($alloc(BasicRadioButtonUI));
}

$Object* BasicRadioButtonUI::BASIC_RADIO_BUTTON_UI_KEY = nullptr;
$String* BasicRadioButtonUI::propertyPrefix = nullptr;
$Dimension* BasicRadioButtonUI::size = nullptr;
$Rectangle* BasicRadioButtonUI::viewRect = nullptr;
$Rectangle* BasicRadioButtonUI::iconRect = nullptr;
$Rectangle* BasicRadioButtonUI::textRect = nullptr;
$Rectangle* BasicRadioButtonUI::prefViewRect = nullptr;
$Rectangle* BasicRadioButtonUI::prefIconRect = nullptr;
$Rectangle* BasicRadioButtonUI::prefTextRect = nullptr;
$Insets* BasicRadioButtonUI::prefInsets = nullptr;

void BasicRadioButtonUI::init$() {
	$BasicToggleButtonUI::init$();
	this->defaults_initialized = false;
	$set(this, keyListener, nullptr);
}

$ComponentUI* BasicRadioButtonUI::createUI($JComponent* b) {
	$init(BasicRadioButtonUI);
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(BasicRadioButtonUI, radioButtonUI, $cast(BasicRadioButtonUI, $nc(appContext)->get(BasicRadioButtonUI::BASIC_RADIO_BUTTON_UI_KEY)));
	if (radioButtonUI == nullptr) {
		$assign(radioButtonUI, $new(BasicRadioButtonUI));
		appContext->put(BasicRadioButtonUI::BASIC_RADIO_BUTTON_UI_KEY, radioButtonUI);
	}
	return radioButtonUI;
}

$String* BasicRadioButtonUI::getPropertyPrefix() {
	return BasicRadioButtonUI::propertyPrefix;
}

void BasicRadioButtonUI::installDefaults($AbstractButton* b) {
	$BasicToggleButtonUI::installDefaults(b);
	if (!this->defaults_initialized) {
		$set(this, icon, $UIManager::getIcon($$str({$(getPropertyPrefix()), "icon"_s})));
		this->defaults_initialized = true;
	}
}

void BasicRadioButtonUI::uninstallDefaults($AbstractButton* b) {
	$BasicToggleButtonUI::uninstallDefaults(b);
	this->defaults_initialized = false;
}

$Icon* BasicRadioButtonUI::getDefaultIcon() {
	return this->icon;
}

void BasicRadioButtonUI::paint($Graphics* g, $JComponent* c) {
	$synchronized(this) {
		$var($AbstractButton, b, $cast($AbstractButton, c));
		$var($ButtonModel, model, $nc(b)->getModel());
		$var($Font, f, $nc(c)->getFont());
		$nc(g)->setFont(f);
		$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(c, g, f));
		$var($Insets, i, c->getInsets());
		$assignStatic(BasicRadioButtonUI::size, b->getSize(BasicRadioButtonUI::size));
		$nc(BasicRadioButtonUI::viewRect)->x = $nc(i)->left;
		$nc(BasicRadioButtonUI::viewRect)->y = i->top;
		$nc(BasicRadioButtonUI::viewRect)->width = $nc(BasicRadioButtonUI::size)->width - (i->right + $nc(BasicRadioButtonUI::viewRect)->x);
		$nc(BasicRadioButtonUI::viewRect)->height = $nc(BasicRadioButtonUI::size)->height - (i->bottom + $nc(BasicRadioButtonUI::viewRect)->y);
		$nc(BasicRadioButtonUI::iconRect)->x = ($nc(BasicRadioButtonUI::iconRect)->y = ($nc(BasicRadioButtonUI::iconRect)->width = ($nc(BasicRadioButtonUI::iconRect)->height = 0)));
		$nc(BasicRadioButtonUI::textRect)->x = ($nc(BasicRadioButtonUI::textRect)->y = ($nc(BasicRadioButtonUI::textRect)->width = ($nc(BasicRadioButtonUI::textRect)->height = 0)));
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
		$var($Rectangle, var$8, BasicRadioButtonUI::viewRect);
		$var($Rectangle, var$9, BasicRadioButtonUI::iconRect);
		$var($Rectangle, var$10, BasicRadioButtonUI::textRect);
		$var($String, text, $SwingUtilities::layoutCompoundLabel(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, b->getText() == nullptr ? 0 : b->getIconTextGap()));
		if (c->isOpaque()) {
			g->setColor($(b->getBackground()));
			g->fillRect(0, 0, $nc(BasicRadioButtonUI::size)->width, $nc(BasicRadioButtonUI::size)->height);
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
			altIcon->paintIcon(c, g, $nc(BasicRadioButtonUI::iconRect)->x, $nc(BasicRadioButtonUI::iconRect)->y);
		} else {
			$nc($(getDefaultIcon()))->paintIcon(c, g, $nc(BasicRadioButtonUI::iconRect)->x, $nc(BasicRadioButtonUI::iconRect)->y);
		}
		if (text != nullptr) {
			$init($BasicHTML);
			$var($View, v, $cast($View, c->getClientProperty($BasicHTML::propertyKey)));
			if (v != nullptr) {
				v->paint(g, BasicRadioButtonUI::textRect);
			} else {
				paintText(g, b, BasicRadioButtonUI::textRect, text);
			}
			bool var$16 = b->hasFocus();
			if (var$16 && b->isFocusPainted() && $nc(BasicRadioButtonUI::textRect)->width > 0 && $nc(BasicRadioButtonUI::textRect)->height > 0) {
				paintFocus(g, BasicRadioButtonUI::textRect, BasicRadioButtonUI::size);
			}
		}
	}
}

void BasicRadioButtonUI::paintFocus($Graphics* g, $Rectangle* textRect, $Dimension* size) {
}

$Dimension* BasicRadioButtonUI::getPreferredSize($JComponent* c) {
	if ($nc(c)->getComponentCount() > 0) {
		return nullptr;
	}
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($String, text, $nc(b)->getText());
	$var($Icon, buttonIcon, b->getIcon());
	if (buttonIcon == nullptr) {
		$assign(buttonIcon, getDefaultIcon());
	}
	$var($Font, font, b->getFont());
	$var($FontMetrics, fm, b->getFontMetrics(font));
	$nc(BasicRadioButtonUI::prefViewRect)->x = ($nc(BasicRadioButtonUI::prefViewRect)->y = 0);
	$nc(BasicRadioButtonUI::prefViewRect)->width = $Short::MAX_VALUE;
	$nc(BasicRadioButtonUI::prefViewRect)->height = $Short::MAX_VALUE;
	$nc(BasicRadioButtonUI::prefIconRect)->x = ($nc(BasicRadioButtonUI::prefIconRect)->y = ($nc(BasicRadioButtonUI::prefIconRect)->width = ($nc(BasicRadioButtonUI::prefIconRect)->height = 0)));
	$nc(BasicRadioButtonUI::prefTextRect)->x = ($nc(BasicRadioButtonUI::prefTextRect)->y = ($nc(BasicRadioButtonUI::prefTextRect)->width = ($nc(BasicRadioButtonUI::prefTextRect)->height = 0)));
	$var($JComponent, var$0, c);
	$var($FontMetrics, var$1, fm);
	$var($String, var$2, text);
	$var($Icon, var$3, buttonIcon);
	int32_t var$4 = b->getVerticalAlignment();
	int32_t var$5 = b->getHorizontalAlignment();
	int32_t var$6 = b->getVerticalTextPosition();
	int32_t var$7 = b->getHorizontalTextPosition();
	$var($Rectangle, var$8, BasicRadioButtonUI::prefViewRect);
	$var($Rectangle, var$9, BasicRadioButtonUI::prefIconRect);
	$var($Rectangle, var$10, BasicRadioButtonUI::prefTextRect);
	$SwingUtilities::layoutCompoundLabel(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, text == nullptr ? 0 : b->getIconTextGap());
	int32_t x1 = $Math::min($nc(BasicRadioButtonUI::prefIconRect)->x, $nc(BasicRadioButtonUI::prefTextRect)->x);
	int32_t x2 = $Math::max($nc(BasicRadioButtonUI::prefIconRect)->x + $nc(BasicRadioButtonUI::prefIconRect)->width, $nc(BasicRadioButtonUI::prefTextRect)->x + $nc(BasicRadioButtonUI::prefTextRect)->width);
	int32_t y1 = $Math::min($nc(BasicRadioButtonUI::prefIconRect)->y, $nc(BasicRadioButtonUI::prefTextRect)->y);
	int32_t y2 = $Math::max($nc(BasicRadioButtonUI::prefIconRect)->y + $nc(BasicRadioButtonUI::prefIconRect)->height, $nc(BasicRadioButtonUI::prefTextRect)->y + $nc(BasicRadioButtonUI::prefTextRect)->height);
	int32_t width = x2 - x1;
	int32_t height = y2 - y1;
	$assignStatic(BasicRadioButtonUI::prefInsets, b->getInsets(BasicRadioButtonUI::prefInsets));
	width += $nc(BasicRadioButtonUI::prefInsets)->left + $nc(BasicRadioButtonUI::prefInsets)->right;
	height += $nc(BasicRadioButtonUI::prefInsets)->top + $nc(BasicRadioButtonUI::prefInsets)->bottom;
	return $new($Dimension, width, height);
}

void clinit$BasicRadioButtonUI($Class* class$) {
	$assignStatic(BasicRadioButtonUI::propertyPrefix, "RadioButton."_s);
	$assignStatic(BasicRadioButtonUI::BASIC_RADIO_BUTTON_UI_KEY, $new($Object));
	$assignStatic(BasicRadioButtonUI::size, $new($Dimension));
	$assignStatic(BasicRadioButtonUI::viewRect, $new($Rectangle));
	$assignStatic(BasicRadioButtonUI::iconRect, $new($Rectangle));
	$assignStatic(BasicRadioButtonUI::textRect, $new($Rectangle));
	$assignStatic(BasicRadioButtonUI::prefViewRect, $new($Rectangle));
	$assignStatic(BasicRadioButtonUI::prefIconRect, $new($Rectangle));
	$assignStatic(BasicRadioButtonUI::prefTextRect, $new($Rectangle));
	$assignStatic(BasicRadioButtonUI::prefInsets, $new($Insets, 0, 0, 0, 0));
}

BasicRadioButtonUI::BasicRadioButtonUI() {
}

$Class* BasicRadioButtonUI::load$($String* name, bool initialize) {
	$loadClass(BasicRadioButtonUI, name, initialize, &_BasicRadioButtonUI_ClassInfo_, clinit$BasicRadioButtonUI, allocate$BasicRadioButtonUI);
	return class$;
}

$Class* BasicRadioButtonUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax