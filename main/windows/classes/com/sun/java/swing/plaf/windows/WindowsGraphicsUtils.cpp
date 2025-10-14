#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$TypeEnum.h>
#include <com/sun/java/swing/plaf/windows/WindowsButtonUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/UIResource.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BP_PUSHBUTTON
#undef DISABLED
#undef NORMAL
#undef TEXTCOLOR
#undef TEXTSHADOWCOLOR
#undef TEXTSHADOWOFFSET
#undef TEXTSHADOWTYPE
#undef TP_BUTTON
#undef TST_CONTINUOUS
#undef TST_SINGLE

using $WindowArray = $Array<::java::awt::Window>;
using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $TMSchema$TypeEnum = ::com::sun::java::swing::plaf::windows::TMSchema$TypeEnum;
using $WindowsButtonUI = ::com::sun::java::swing::plaf::windows::WindowsButtonUI;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsGraphicsUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsGraphicsUtils::*)()>(&WindowsGraphicsUtils::init$))},
	{"getDisabledTextColor", "(Ljavax/swing/AbstractButton;)Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Color*(*)($AbstractButton*)>(&WindowsGraphicsUtils::getDisabledTextColor))},
	{"isLeftToRight", "(Ljava/awt/Component;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Component*)>(&WindowsGraphicsUtils::isLeftToRight))},
	{"paintClassicText", "(Ljavax/swing/AbstractButton;Ljava/awt/Graphics;IILjava/lang/String;I)V", nullptr, $STATIC, $method(static_cast<void(*)($AbstractButton*,$Graphics*,int32_t,int32_t,$String*,int32_t)>(&WindowsGraphicsUtils::paintClassicText))},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/lang/String;I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Graphics*,$AbstractButton*,$Rectangle*,$String*,int32_t)>(&WindowsGraphicsUtils::paintText))},
	{"paintXPText", "(Ljavax/swing/AbstractButton;Ljava/awt/Graphics;IILjava/lang/String;I)V", nullptr, $STATIC, $method(static_cast<void(*)($AbstractButton*,$Graphics*,int32_t,int32_t,$String*,int32_t)>(&WindowsGraphicsUtils::paintXPText))},
	{"paintXPText", "(Ljavax/swing/AbstractButton;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Ljava/awt/Graphics;IILjava/lang/String;I)V", nullptr, $STATIC, $method(static_cast<void(*)($AbstractButton*,$TMSchema$Part*,$TMSchema$State*,$Graphics*,int32_t,int32_t,$String*,int32_t)>(&WindowsGraphicsUtils::paintXPText))},
	{"repaintMnemonicsInContainer", "(Ljava/awt/Container;)V", nullptr, $STATIC, $method(static_cast<void(*)($Container*)>(&WindowsGraphicsUtils::repaintMnemonicsInContainer))},
	{"repaintMnemonicsInWindow", "(Ljava/awt/Window;)V", nullptr, $STATIC, $method(static_cast<void(*)($Window*)>(&WindowsGraphicsUtils::repaintMnemonicsInWindow))},
	{}
};

$ClassInfo _WindowsGraphicsUtils_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsGraphicsUtils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WindowsGraphicsUtils_MethodInfo_
};

$Object* allocate$WindowsGraphicsUtils($Class* clazz) {
	return $of($alloc(WindowsGraphicsUtils));
}

void WindowsGraphicsUtils::init$() {
}

void WindowsGraphicsUtils::paintText($Graphics* g, $AbstractButton* b, $Rectangle* textRect, $String* text, int32_t textShiftOffset) {
	$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(static_cast<$JComponent*>(b), g));
	int32_t mnemIndex = $nc(b)->getDisplayedMnemonicIndex();
	if ($WindowsLookAndFeel::isMnemonicHidden() == true) {
		mnemIndex = -1;
	}
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr && !($instanceOf($JMenuItem, b))) {
		paintXPText(b, g, $nc(textRect)->x + textShiftOffset, textRect->y + $nc(fm)->getAscent() + textShiftOffset, text, mnemIndex);
	} else {
		paintClassicText(b, g, $nc(textRect)->x + textShiftOffset, textRect->y + $nc(fm)->getAscent() + textShiftOffset, text, mnemIndex);
	}
}

void WindowsGraphicsUtils::paintClassicText($AbstractButton* b, $Graphics* g, int32_t x, int32_t y, $String* text, int32_t mnemIndex) {
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($Color, color, b->getForeground());
	if ($nc(model)->isEnabled()) {
		bool var$0 = !($instanceOf($JMenuItem, b) && model->isArmed());
		if (var$0) {
			bool var$1 = $instanceOf($JMenu, b);
			if (var$1) {
				bool var$2 = model->isSelected();
				var$1 = (var$2 || model->isRollover());
			}
			var$0 = !(var$1);
		}
		if (var$0) {
			$nc(g)->setColor($(b->getForeground()));
		}
		$SwingUtilities2::drawStringUnderlineCharAt(b, g, text, mnemIndex, x, y);
	} else {
		$assign(color, getDisabledTextColor(b));
		if (color == nullptr) {
			$assign(color, $UIManager::getColor("Button.shadow"_s));
		}
		$var($Color, shadow, $UIManager::getColor("Button.disabledShadow"_s));
		if (model->isArmed()) {
			$assign(color, $UIManager::getColor("Button.disabledForeground"_s));
		} else {
			if (shadow == nullptr) {
				$assign(shadow, $nc($(b->getBackground()))->darker());
			}
			$nc(g)->setColor(shadow);
			$SwingUtilities2::drawStringUnderlineCharAt(b, g, text, mnemIndex, x + 1, y + 1);
		}
		if (color == nullptr) {
			$assign(color, $nc($(b->getBackground()))->brighter());
		}
		$nc(g)->setColor(color);
		$SwingUtilities2::drawStringUnderlineCharAt(b, g, text, mnemIndex, x, y);
	}
}

$Color* WindowsGraphicsUtils::getDisabledTextColor($AbstractButton* b) {
	if ($instanceOf($JCheckBox, b)) {
		return $UIManager::getColor("CheckBox.disabledText"_s);
	} else if ($instanceOf($JRadioButton, b)) {
		return $UIManager::getColor("RadioButton.disabledText"_s);
	} else if ($instanceOf($JToggleButton, b)) {
		return $UIManager::getColor("ToggleButton.disabledText"_s);
	} else if ($instanceOf($JButton, b)) {
		return $UIManager::getColor("Button.disabledText"_s);
	}
	return nullptr;
}

void WindowsGraphicsUtils::paintXPText($AbstractButton* b, $Graphics* g, int32_t x, int32_t y, $String* text, int32_t mnemIndex) {
	$TMSchema$Part* part = $WindowsButtonUI::getXPButtonType(b);
	$TMSchema$State* state = $WindowsButtonUI::getXPButtonState(b);
	paintXPText(b, part, state, g, x, y, text, mnemIndex);
}

void WindowsGraphicsUtils::paintXPText($AbstractButton* b, $TMSchema$Part* part, $TMSchema$State* state, $Graphics* g, int32_t x, int32_t y, $String* text, int32_t mnemIndex) {
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp == nullptr) {
		return;
	}
	$var($Color, textColor, nullptr);
	if ($nc(b)->isEnabled()) {
		$assign(textColor, b->getForeground());
	} else {
		$assign(textColor, getDisabledTextColor(b));
	}
	if (textColor == nullptr || $instanceOf($UIResource, textColor)) {
		$init($TMSchema$Prop);
		$assign(textColor, $nc(xp)->getColor(b, part, state, $TMSchema$Prop::TEXTCOLOR, $($nc(b)->getForeground())));
		$init($TMSchema$Part);
		$init($TMSchema$State);
		if (part == $TMSchema$Part::TP_BUTTON && state == $TMSchema$State::DISABLED) {
			$var($Color, enabledColor, xp->getColor(b, part, $TMSchema$State::NORMAL, $TMSchema$Prop::TEXTCOLOR, $($nc(b)->getForeground())));
			if ($nc(textColor)->equals(enabledColor)) {
				$assign(textColor, xp->getColor(b, $TMSchema$Part::BP_PUSHBUTTON, state, $TMSchema$Prop::TEXTCOLOR, textColor));
			}
		}
		$TMSchema$TypeEnum* shadowType = xp->getTypeEnum(b, part, state, $TMSchema$Prop::TEXTSHADOWTYPE);
		$init($TMSchema$TypeEnum);
		if (shadowType == $TMSchema$TypeEnum::TST_SINGLE || shadowType == $TMSchema$TypeEnum::TST_CONTINUOUS) {
			$init($Color);
			$var($Color, shadowColor, xp->getColor(b, part, state, $TMSchema$Prop::TEXTSHADOWCOLOR, $Color::black));
			$var($Point, offset, xp->getPoint(b, part, state, $TMSchema$Prop::TEXTSHADOWOFFSET));
			if (offset != nullptr) {
				$nc(g)->setColor(shadowColor);
				$SwingUtilities2::drawStringUnderlineCharAt(b, g, text, mnemIndex, x + offset->x, y + offset->y);
			}
		}
	}
	$nc(g)->setColor(textColor);
	$SwingUtilities2::drawStringUnderlineCharAt(b, g, text, mnemIndex, x, y);
}

bool WindowsGraphicsUtils::isLeftToRight($Component* c) {
	return $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
}

void WindowsGraphicsUtils::repaintMnemonicsInWindow($Window* w) {
	if (w == nullptr || !$nc(w)->isShowing()) {
		return;
	}
	$var($WindowArray, ownedWindows, $nc(w)->getOwnedWindows());
	for (int32_t i = 0; i < $nc(ownedWindows)->length; ++i) {
		repaintMnemonicsInWindow(ownedWindows->get(i));
	}
	repaintMnemonicsInContainer(w);
}

void WindowsGraphicsUtils::repaintMnemonicsInContainer($Container* cont) {
	$var($Component, c, nullptr);
	for (int32_t i = 0; i < $nc(cont)->getComponentCount(); ++i) {
		$assign(c, cont->getComponent(i));
		if (c == nullptr || !$nc(c)->isVisible()) {
			continue;
		}
		if ($instanceOf($AbstractButton, c) && $nc(($cast($AbstractButton, c)))->getMnemonic() != u'\0') {
			$nc(c)->repaint();
			continue;
		} else if ($instanceOf($JLabel, c) && $nc(($cast($JLabel, c)))->getDisplayedMnemonic() != u'\0') {
			$nc(c)->repaint();
			continue;
		}
		if ($instanceOf($Container, c)) {
			repaintMnemonicsInContainer($cast($Container, c));
		}
	}
}

WindowsGraphicsUtils::WindowsGraphicsUtils() {
}

$Class* WindowsGraphicsUtils::load$($String* name, bool initialize) {
	$loadClass(WindowsGraphicsUtils, name, initialize, &_WindowsGraphicsUtils_ClassInfo_, allocate$WindowsGraphicsUtils);
	return class$;
}

$Class* WindowsGraphicsUtils::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com