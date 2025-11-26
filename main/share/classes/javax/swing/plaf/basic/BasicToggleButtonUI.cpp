#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>

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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/View.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef BASIC_TOGGLE_BUTTON_UI_KEY

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
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $View = ::javax::swing::text::View;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicToggleButtonUI_FieldInfo_[] = {
	{"BASIC_TOGGLE_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicToggleButtonUI, BASIC_TOGGLE_BUTTON_UI_KEY)},
	{"propertyPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicToggleButtonUI, propertyPrefix)},
	{}
};

$MethodInfo _BasicToggleButtonUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicToggleButtonUI::*)()>(&BasicToggleButtonUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicToggleButtonUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getTextShiftOffset", "()I", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _BasicToggleButtonUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicToggleButtonUI",
	"javax.swing.plaf.basic.BasicButtonUI",
	nullptr,
	_BasicToggleButtonUI_FieldInfo_,
	_BasicToggleButtonUI_MethodInfo_
};

$Object* allocate$BasicToggleButtonUI($Class* clazz) {
	return $of($alloc(BasicToggleButtonUI));
}

$Object* BasicToggleButtonUI::BASIC_TOGGLE_BUTTON_UI_KEY = nullptr;
$String* BasicToggleButtonUI::propertyPrefix = nullptr;

void BasicToggleButtonUI::init$() {
	$BasicButtonUI::init$();
}

$ComponentUI* BasicToggleButtonUI::createUI($JComponent* b) {
	$init(BasicToggleButtonUI);
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(BasicToggleButtonUI, toggleButtonUI, $cast(BasicToggleButtonUI, $nc(appContext)->get(BasicToggleButtonUI::BASIC_TOGGLE_BUTTON_UI_KEY)));
	if (toggleButtonUI == nullptr) {
		$assign(toggleButtonUI, $new(BasicToggleButtonUI));
		appContext->put(BasicToggleButtonUI::BASIC_TOGGLE_BUTTON_UI_KEY, toggleButtonUI);
	}
	return toggleButtonUI;
}

$String* BasicToggleButtonUI::getPropertyPrefix() {
	return BasicToggleButtonUI::propertyPrefix;
}

void BasicToggleButtonUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($Dimension, size, b->getSize());
	$var($FontMetrics, fm, $nc(g)->getFontMetrics());
	$var($Insets, i, $nc(c)->getInsets());
	$var($Rectangle, viewRect, $new($Rectangle, size));
	viewRect->x += $nc(i)->left;
	viewRect->y += i->top;
	viewRect->width -= (i->right + viewRect->x);
	viewRect->height -= (i->bottom + viewRect->y);
	$var($Rectangle, iconRect, $new($Rectangle));
	$var($Rectangle, textRect, $new($Rectangle));
	$var($Font, f, c->getFont());
	g->setFont(f);
	$var($JComponent, var$0, c);
	$var($FontMetrics, var$1, fm);
	$var($String, var$2, b->getText());
	$var($Icon, var$3, b->getIcon());
	int32_t var$4 = b->getVerticalAlignment();
	int32_t var$5 = b->getHorizontalAlignment();
	int32_t var$6 = b->getVerticalTextPosition();
	int32_t var$7 = b->getHorizontalTextPosition();
	$var($Rectangle, var$8, viewRect);
	$var($Rectangle, var$9, iconRect);
	$var($Rectangle, var$10, textRect);
	$var($String, text, $SwingUtilities::layoutCompoundLabel(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, b->getText() == nullptr ? 0 : b->getIconTextGap()));
	g->setColor($(b->getBackground()));
	bool var$12 = $nc(model)->isArmed();
	bool var$11 = var$12 && model->isPressed();
	if (var$11 || $nc(model)->isSelected()) {
		paintButtonPressed(g, b);
	}
	if (b->getIcon() != nullptr) {
		paintIcon(g, b, iconRect);
	}
	if (text != nullptr && !text->isEmpty()) {
		$init($BasicHTML);
		$var($View, v, $cast($View, c->getClientProperty($BasicHTML::propertyKey)));
		if (v != nullptr) {
			v->paint(g, textRect);
		} else {
			paintText(g, b, textRect, text);
		}
	}
	bool var$13 = b->isFocusPainted();
	if (var$13 && b->hasFocus()) {
		paintFocus(g, b, viewRect, textRect, iconRect);
	}
}

void BasicToggleButtonUI::paintIcon($Graphics* g, $AbstractButton* b, $Rectangle* iconRect) {
	$useLocalCurrentObjectStackCache();
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($Icon, icon, nullptr);
	if (!$nc(model)->isEnabled()) {
		if (model->isSelected()) {
			$assign(icon, b->getDisabledSelectedIcon());
		} else {
			$assign(icon, b->getDisabledIcon());
		}
	} else {
		bool var$1 = model->isPressed();
		if (var$1 && model->isArmed()) {
			$assign(icon, b->getPressedIcon());
			if (icon == nullptr) {
				$assign(icon, b->getSelectedIcon());
			}
		} else if (model->isSelected()) {
			bool var$2 = b->isRolloverEnabled();
			if (var$2 && model->isRollover()) {
				$assign(icon, b->getRolloverSelectedIcon());
				if (icon == nullptr) {
					$assign(icon, b->getSelectedIcon());
				}
			} else {
				$assign(icon, b->getSelectedIcon());
			}
		} else {
			bool var$4 = b->isRolloverEnabled();
			if (var$4 && model->isRollover()) {
				$assign(icon, b->getRolloverIcon());
			}
		}
	}
	if (icon == nullptr) {
		$assign(icon, b->getIcon());
	}
	$nc(icon)->paintIcon(b, g, $nc(iconRect)->x, iconRect->y);
}

int32_t BasicToggleButtonUI::getTextShiftOffset() {
	return 0;
}

void clinit$BasicToggleButtonUI($Class* class$) {
	$assignStatic(BasicToggleButtonUI::propertyPrefix, "ToggleButton."_s);
	$assignStatic(BasicToggleButtonUI::BASIC_TOGGLE_BUTTON_UI_KEY, $new($Object));
}

BasicToggleButtonUI::BasicToggleButtonUI() {
}

$Class* BasicToggleButtonUI::load$($String* name, bool initialize) {
	$loadClass(BasicToggleButtonUI, name, initialize, &_BasicToggleButtonUI_ClassInfo_, clinit$BasicToggleButtonUI, allocate$BasicToggleButtonUI);
	return class$;
}

$Class* BasicToggleButtonUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax