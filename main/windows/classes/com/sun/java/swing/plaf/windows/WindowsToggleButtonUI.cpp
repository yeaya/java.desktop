#include <com/sun/java/swing/plaf/windows/WindowsToggleButtonUI.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/WindowsButtonUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
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
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE
#undef WINDOWS_TOGGLE_BUTTON_UI_KEY

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $WindowsButtonUI = ::com::sun::java::swing::plaf::windows::WindowsButtonUI;
using $WindowsGraphicsUtils = ::com::sun::java::swing::plaf::windows::WindowsGraphicsUtils;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicToggleButtonUI = ::javax::swing::plaf::basic::BasicToggleButtonUI;
using $AppContext = ::sun::awt::AppContext;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsToggleButtonUI_FieldInfo_[] = {
	{"dashedRectGapX", "I", nullptr, $PROTECTED, $field(WindowsToggleButtonUI, dashedRectGapX)},
	{"dashedRectGapY", "I", nullptr, $PROTECTED, $field(WindowsToggleButtonUI, dashedRectGapY)},
	{"dashedRectGapWidth", "I", nullptr, $PROTECTED, $field(WindowsToggleButtonUI, dashedRectGapWidth)},
	{"dashedRectGapHeight", "I", nullptr, $PROTECTED, $field(WindowsToggleButtonUI, dashedRectGapHeight)},
	{"focusColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(WindowsToggleButtonUI, focusColor)},
	{"WINDOWS_TOGGLE_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsToggleButtonUI, WINDOWS_TOGGLE_BUTTON_UI_KEY)},
	{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(WindowsToggleButtonUI, defaults_initialized)},
	{"cachedSelectedColor", "Ljava/awt/Color;", nullptr, $PRIVATE | $TRANSIENT, $field(WindowsToggleButtonUI, cachedSelectedColor)},
	{"cachedBackgroundColor", "Ljava/awt/Color;", nullptr, $PRIVATE | $TRANSIENT, $field(WindowsToggleButtonUI, cachedBackgroundColor)},
	{"cachedHighlightColor", "Ljava/awt/Color;", nullptr, $PRIVATE | $TRANSIENT, $field(WindowsToggleButtonUI, cachedHighlightColor)},
	{}
};

$MethodInfo _WindowsToggleButtonUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsToggleButtonUI::*)()>(&WindowsToggleButtonUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsToggleButtonUI::createUI))},
	{"getFocusColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintButtonPressed", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"paintFocus", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _WindowsToggleButtonUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsToggleButtonUI",
	"javax.swing.plaf.basic.BasicToggleButtonUI",
	nullptr,
	_WindowsToggleButtonUI_FieldInfo_,
	_WindowsToggleButtonUI_MethodInfo_
};

$Object* allocate$WindowsToggleButtonUI($Class* clazz) {
	return $of($alloc(WindowsToggleButtonUI));
}

$Object* WindowsToggleButtonUI::WINDOWS_TOGGLE_BUTTON_UI_KEY = nullptr;

void WindowsToggleButtonUI::init$() {
	$BasicToggleButtonUI::init$();
	this->defaults_initialized = false;
	$set(this, cachedSelectedColor, nullptr);
	$set(this, cachedBackgroundColor, nullptr);
	$set(this, cachedHighlightColor, nullptr);
}

$ComponentUI* WindowsToggleButtonUI::createUI($JComponent* b) {
	$init(WindowsToggleButtonUI);
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(WindowsToggleButtonUI, windowsToggleButtonUI, $cast(WindowsToggleButtonUI, $nc(appContext)->get(WindowsToggleButtonUI::WINDOWS_TOGGLE_BUTTON_UI_KEY)));
	if (windowsToggleButtonUI == nullptr) {
		$assign(windowsToggleButtonUI, $new(WindowsToggleButtonUI));
		appContext->put(WindowsToggleButtonUI::WINDOWS_TOGGLE_BUTTON_UI_KEY, windowsToggleButtonUI);
	}
	return windowsToggleButtonUI;
}

void WindowsToggleButtonUI::installDefaults($AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	$BasicToggleButtonUI::installDefaults(b);
	if (!this->defaults_initialized) {
		$var($String, pp, getPropertyPrefix());
		this->dashedRectGapX = $nc(($cast($Integer, $($UIManager::get("Button.dashedRectGapX"_s)))))->intValue();
		this->dashedRectGapY = $nc(($cast($Integer, $($UIManager::get("Button.dashedRectGapY"_s)))))->intValue();
		this->dashedRectGapWidth = $nc(($cast($Integer, $($UIManager::get("Button.dashedRectGapWidth"_s)))))->intValue();
		this->dashedRectGapHeight = $nc(($cast($Integer, $($UIManager::get("Button.dashedRectGapHeight"_s)))))->intValue();
		$set(this, focusColor, $UIManager::getColor($$str({pp, "focus"_s})));
		this->defaults_initialized = true;
	}
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$nc(b)->setBorder($(xp->getBorder(b, $($WindowsButtonUI::getXPButtonType(b)))));
		$init($Boolean);
		$LookAndFeel::installProperty(b, "opaque"_s, $Boolean::FALSE);
		$LookAndFeel::installProperty(b, "rolloverEnabled"_s, $Boolean::TRUE);
	}
}

void WindowsToggleButtonUI::uninstallDefaults($AbstractButton* b) {
	$BasicToggleButtonUI::uninstallDefaults(b);
	this->defaults_initialized = false;
}

$Color* WindowsToggleButtonUI::getFocusColor() {
	return this->focusColor;
}

void WindowsToggleButtonUI::paintButtonPressed($Graphics* g, $AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $XPStyle::getXP() == nullptr;
	if (var$0 && $nc(b)->isContentAreaFilled()) {
		$var($Color, oldColor, $nc(g)->getColor());
		$var($Color, c1, b->getBackground());
		$var($Color, c2, $UIManager::getColor("ToggleButton.highlight"_s));
		if (c1 != this->cachedBackgroundColor || c2 != this->cachedHighlightColor) {
			int32_t r1 = $nc(c1)->getRed();
			int32_t r2 = $nc(c2)->getRed();
			int32_t g1 = c1->getGreen();
			int32_t g2 = c2->getGreen();
			int32_t b1 = c1->getBlue();
			int32_t b2 = c2->getBlue();
			int32_t var$2 = $Math::min(r1, r2);
			int32_t var$1 = var$2 + $Math::abs(r1 - r2) / 2;
			int32_t var$4 = $Math::min(g1, g2);
			int32_t var$3 = var$4 + $Math::abs(g1 - g2) / 2;
			int32_t var$5 = $Math::min(b1, b2);
			$set(this, cachedSelectedColor, $new($Color, var$1, var$3, var$5 + $Math::abs(b1 - b2) / 2));
			$set(this, cachedBackgroundColor, c1);
			$set(this, cachedHighlightColor, c2);
		}
		g->setColor(this->cachedSelectedColor);
		int32_t var$6 = b->getWidth();
		g->fillRect(0, 0, var$6, b->getHeight());
		g->setColor(oldColor);
	}
}

void WindowsToggleButtonUI::paint($Graphics* g, $JComponent* c) {
	if ($XPStyle::getXP() != nullptr) {
		$WindowsButtonUI::paintXPButtonBackground(g, c);
	}
	$BasicToggleButtonUI::paint(g, c);
}

void WindowsToggleButtonUI::paintText($Graphics* g, $AbstractButton* b, $Rectangle* textRect, $String* text) {
	$WindowsGraphicsUtils::paintText(g, b, textRect, text, getTextShiftOffset());
}

void WindowsToggleButtonUI::paintFocus($Graphics* g, $AbstractButton* b, $Rectangle* viewRect, $Rectangle* textRect, $Rectangle* iconRect) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor($(getFocusColor()));
	$var($Graphics, var$0, g);
	int32_t var$1 = this->dashedRectGapX;
	int32_t var$2 = this->dashedRectGapY;
	int32_t var$3 = $nc(b)->getWidth() - this->dashedRectGapWidth;
	$BasicGraphicsUtils::drawDashedRect(var$0, var$1, var$2, var$3, b->getHeight() - this->dashedRectGapHeight);
}

$Dimension* WindowsToggleButtonUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, $BasicToggleButtonUI::getPreferredSize(c));
	$var($AbstractButton, b, $cast($AbstractButton, c));
	if (d != nullptr && $nc(b)->isFocusPainted()) {
		if (d->width % 2 == 0) {
			d->width += 1;
		}
		if (d->height % 2 == 0) {
			d->height += 1;
		}
	}
	return d;
}

void clinit$WindowsToggleButtonUI($Class* class$) {
	$assignStatic(WindowsToggleButtonUI::WINDOWS_TOGGLE_BUTTON_UI_KEY, $new($Object));
}

WindowsToggleButtonUI::WindowsToggleButtonUI() {
}

$Class* WindowsToggleButtonUI::load$($String* name, bool initialize) {
	$loadClass(WindowsToggleButtonUI, name, initialize, &_WindowsToggleButtonUI_ClassInfo_, clinit$WindowsToggleButtonUI, allocate$WindowsToggleButtonUI);
	return class$;
}

$Class* WindowsToggleButtonUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com