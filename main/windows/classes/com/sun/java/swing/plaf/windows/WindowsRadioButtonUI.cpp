#include <com/sun/java/swing/plaf/windows/WindowsRadioButtonUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicRadioButtonUI.h>
#include <javax/swing/plaf/basic/BasicToggleButtonUI.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef TRUE
#undef WINDOWS_RADIO_BUTTON_UI_KEY

using $WindowsGraphicsUtils = ::com::sun::java::swing::plaf::windows::WindowsGraphicsUtils;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicRadioButtonUI = ::javax::swing::plaf::basic::BasicRadioButtonUI;
using $BasicToggleButtonUI = ::javax::swing::plaf::basic::BasicToggleButtonUI;
using $AppContext = ::sun::awt::AppContext;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsRadioButtonUI_FieldInfo_[] = {
	{"WINDOWS_RADIO_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsRadioButtonUI, WINDOWS_RADIO_BUTTON_UI_KEY)},
	{"dashedRectGapX", "I", nullptr, $PROTECTED, $field(WindowsRadioButtonUI, dashedRectGapX)},
	{"dashedRectGapY", "I", nullptr, $PROTECTED, $field(WindowsRadioButtonUI, dashedRectGapY)},
	{"dashedRectGapWidth", "I", nullptr, $PROTECTED, $field(WindowsRadioButtonUI, dashedRectGapWidth)},
	{"dashedRectGapHeight", "I", nullptr, $PROTECTED, $field(WindowsRadioButtonUI, dashedRectGapHeight)},
	{"focusColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(WindowsRadioButtonUI, focusColor)},
	{"initialized", "Z", nullptr, $PRIVATE, $field(WindowsRadioButtonUI, initialized)},
	{}
};

$MethodInfo _WindowsRadioButtonUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsRadioButtonUI::*)()>(&WindowsRadioButtonUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsRadioButtonUI::createUI))},
	{"getFocusColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC},
	{"paintFocus", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Ljava/awt/Dimension;)V", nullptr, $PROTECTED},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _WindowsRadioButtonUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsRadioButtonUI",
	"javax.swing.plaf.basic.BasicRadioButtonUI",
	nullptr,
	_WindowsRadioButtonUI_FieldInfo_,
	_WindowsRadioButtonUI_MethodInfo_
};

$Object* allocate$WindowsRadioButtonUI($Class* clazz) {
	return $of($alloc(WindowsRadioButtonUI));
}

$Object* WindowsRadioButtonUI::WINDOWS_RADIO_BUTTON_UI_KEY = nullptr;

void WindowsRadioButtonUI::init$() {
	$BasicRadioButtonUI::init$();
	this->initialized = false;
}

$ComponentUI* WindowsRadioButtonUI::createUI($JComponent* c) {
	$init(WindowsRadioButtonUI);
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(WindowsRadioButtonUI, windowsRadioButtonUI, $cast(WindowsRadioButtonUI, $nc(appContext)->get(WindowsRadioButtonUI::WINDOWS_RADIO_BUTTON_UI_KEY)));
	if (windowsRadioButtonUI == nullptr) {
		$assign(windowsRadioButtonUI, $new(WindowsRadioButtonUI));
		appContext->put(WindowsRadioButtonUI::WINDOWS_RADIO_BUTTON_UI_KEY, windowsRadioButtonUI);
	}
	return windowsRadioButtonUI;
}

void WindowsRadioButtonUI::installDefaults($AbstractButton* b) {
	$BasicRadioButtonUI::installDefaults(b);
	if (!this->initialized) {
		this->dashedRectGapX = $nc(($cast($Integer, $($UIManager::get("Button.dashedRectGapX"_s)))))->intValue();
		this->dashedRectGapY = $nc(($cast($Integer, $($UIManager::get("Button.dashedRectGapY"_s)))))->intValue();
		this->dashedRectGapWidth = $nc(($cast($Integer, $($UIManager::get("Button.dashedRectGapWidth"_s)))))->intValue();
		this->dashedRectGapHeight = $nc(($cast($Integer, $($UIManager::get("Button.dashedRectGapHeight"_s)))))->intValue();
		$set(this, focusColor, $UIManager::getColor($$str({$(getPropertyPrefix()), "focus"_s})));
		this->initialized = true;
	}
	if ($XPStyle::getXP() != nullptr) {
		$init($Boolean);
		$LookAndFeel::installProperty(b, "rolloverEnabled"_s, $Boolean::TRUE);
	}
}

void WindowsRadioButtonUI::uninstallDefaults($AbstractButton* b) {
	$BasicRadioButtonUI::uninstallDefaults(b);
	this->initialized = false;
}

$Color* WindowsRadioButtonUI::getFocusColor() {
	return this->focusColor;
}

void WindowsRadioButtonUI::paintText($Graphics* g, $AbstractButton* b, $Rectangle* textRect, $String* text) {
	$WindowsGraphicsUtils::paintText(g, b, textRect, text, getTextShiftOffset());
}

void WindowsRadioButtonUI::paintFocus($Graphics* g, $Rectangle* textRect, $Dimension* d) {
	$nc(g)->setColor($(getFocusColor()));
	$BasicGraphicsUtils::drawDashedRect(g, $nc(textRect)->x, textRect->y, textRect->width, textRect->height);
}

$Dimension* WindowsRadioButtonUI::getPreferredSize($JComponent* c) {
	$var($Dimension, d, $BasicRadioButtonUI::getPreferredSize(c));
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

void clinit$WindowsRadioButtonUI($Class* class$) {
	$assignStatic(WindowsRadioButtonUI::WINDOWS_RADIO_BUTTON_UI_KEY, $new($Object));
}

WindowsRadioButtonUI::WindowsRadioButtonUI() {
}

$Class* WindowsRadioButtonUI::load$($String* name, bool initialize) {
	$loadClass(WindowsRadioButtonUI, name, initialize, &_WindowsRadioButtonUI_ClassInfo_, clinit$WindowsRadioButtonUI, allocate$WindowsRadioButtonUI);
	return class$;
}

$Class* WindowsRadioButtonUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com