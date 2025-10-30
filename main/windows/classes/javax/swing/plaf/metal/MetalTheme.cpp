#include <javax/swing/plaf/metal/MetalTheme.h>

#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <jcpp.h>

#undef CONTROL_TEXT_FONT
#undef MENU_TEXT_FONT
#undef SUB_TEXT_FONT
#undef SYSTEM_TEXT_FONT
#undef USER_TEXT_FONT
#undef WINDOW_TITLE_FONT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalTheme_FieldInfo_[] = {
	{"CONTROL_TEXT_FONT", "I", nullptr, $STATIC | $FINAL, $constField(MetalTheme, CONTROL_TEXT_FONT)},
	{"SYSTEM_TEXT_FONT", "I", nullptr, $STATIC | $FINAL, $constField(MetalTheme, SYSTEM_TEXT_FONT)},
	{"USER_TEXT_FONT", "I", nullptr, $STATIC | $FINAL, $constField(MetalTheme, USER_TEXT_FONT)},
	{"MENU_TEXT_FONT", "I", nullptr, $STATIC | $FINAL, $constField(MetalTheme, MENU_TEXT_FONT)},
	{"WINDOW_TITLE_FONT", "I", nullptr, $STATIC | $FINAL, $constField(MetalTheme, WINDOW_TITLE_FONT)},
	{"SUB_TEXT_FONT", "I", nullptr, $STATIC | $FINAL, $constField(MetalTheme, SUB_TEXT_FONT)},
	{"white", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $STATIC, $staticField(MetalTheme, white)},
	{"black", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC, $staticField(MetalTheme, black)},
	{}
};

$MethodInfo _MetalTheme_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(MetalTheme::*)()>(&MetalTheme::init$))},
	{"addCustomEntriesToTable", "(Ljavax/swing/UIDefaults;)V", nullptr, $PUBLIC},
	{"getAcceleratorForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getAcceleratorSelectedForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getBlack", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getControl", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getControlDarkShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getControlDisabled", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getControlHighlight", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getControlInfo", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getControlShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getControlTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getControlTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDesktopColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getFocusColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getHighlightedTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getInactiveControlTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getInactiveSystemTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getMenuBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getMenuDisabledForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getMenuForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getMenuSelectedBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getMenuSelectedForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getMenuTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPrimary1", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED | $ABSTRACT},
	{"getPrimary2", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED | $ABSTRACT},
	{"getPrimary3", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED | $ABSTRACT},
	{"getPrimaryControl", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getPrimaryControlDarkShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getPrimaryControlHighlight", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getPrimaryControlInfo", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getPrimaryControlShadow", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getSecondary1", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED | $ABSTRACT},
	{"getSecondary2", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED | $ABSTRACT},
	{"getSecondary3", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED | $ABSTRACT},
	{"getSeparatorBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getSeparatorForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getSubTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSystemTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getSystemTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTextHighlightColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getUserTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getUserTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $ABSTRACT},
	{"getWhite", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getWindowBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getWindowTitleBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getWindowTitleFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC | $ABSTRACT},
	{"getWindowTitleForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getWindowTitleInactiveBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getWindowTitleInactiveForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"install", "()V", nullptr, 0},
	{"isSystemTheme", "()Z", nullptr, 0},
	{}
};

$ClassInfo _MetalTheme_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.metal.MetalTheme",
	"java.lang.Object",
	nullptr,
	_MetalTheme_FieldInfo_,
	_MetalTheme_MethodInfo_
};

$Object* allocate$MetalTheme($Class* clazz) {
	return $of($alloc(MetalTheme));
}

$ColorUIResource* MetalTheme::white = nullptr;
$ColorUIResource* MetalTheme::black = nullptr;

void MetalTheme::init$() {
}

$ColorUIResource* MetalTheme::getWhite() {
	return MetalTheme::white;
}

$ColorUIResource* MetalTheme::getBlack() {
	return MetalTheme::black;
}

$ColorUIResource* MetalTheme::getFocusColor() {
	return getPrimary2();
}

$ColorUIResource* MetalTheme::getDesktopColor() {
	return getPrimary2();
}

$ColorUIResource* MetalTheme::getControl() {
	return getSecondary3();
}

$ColorUIResource* MetalTheme::getControlShadow() {
	return getSecondary2();
}

$ColorUIResource* MetalTheme::getControlDarkShadow() {
	return getSecondary1();
}

$ColorUIResource* MetalTheme::getControlInfo() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getControlHighlight() {
	return getWhite();
}

$ColorUIResource* MetalTheme::getControlDisabled() {
	return getSecondary2();
}

$ColorUIResource* MetalTheme::getPrimaryControl() {
	return getPrimary3();
}

$ColorUIResource* MetalTheme::getPrimaryControlShadow() {
	return getPrimary2();
}

$ColorUIResource* MetalTheme::getPrimaryControlDarkShadow() {
	return getPrimary1();
}

$ColorUIResource* MetalTheme::getPrimaryControlInfo() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getPrimaryControlHighlight() {
	return getWhite();
}

$ColorUIResource* MetalTheme::getSystemTextColor() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getControlTextColor() {
	return getControlInfo();
}

$ColorUIResource* MetalTheme::getInactiveControlTextColor() {
	return getControlDisabled();
}

$ColorUIResource* MetalTheme::getInactiveSystemTextColor() {
	return getSecondary2();
}

$ColorUIResource* MetalTheme::getUserTextColor() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getTextHighlightColor() {
	return getPrimary3();
}

$ColorUIResource* MetalTheme::getHighlightedTextColor() {
	return getControlTextColor();
}

$ColorUIResource* MetalTheme::getWindowBackground() {
	return getWhite();
}

$ColorUIResource* MetalTheme::getWindowTitleBackground() {
	return getPrimary3();
}

$ColorUIResource* MetalTheme::getWindowTitleForeground() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getWindowTitleInactiveBackground() {
	return getSecondary3();
}

$ColorUIResource* MetalTheme::getWindowTitleInactiveForeground() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getMenuBackground() {
	return getSecondary3();
}

$ColorUIResource* MetalTheme::getMenuForeground() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getMenuSelectedBackground() {
	return getPrimary2();
}

$ColorUIResource* MetalTheme::getMenuSelectedForeground() {
	return getBlack();
}

$ColorUIResource* MetalTheme::getMenuDisabledForeground() {
	return getSecondary2();
}

$ColorUIResource* MetalTheme::getSeparatorBackground() {
	return getWhite();
}

$ColorUIResource* MetalTheme::getSeparatorForeground() {
	return getPrimary1();
}

$ColorUIResource* MetalTheme::getAcceleratorForeground() {
	return getPrimary1();
}

$ColorUIResource* MetalTheme::getAcceleratorSelectedForeground() {
	return getBlack();
}

void MetalTheme::addCustomEntriesToTable($UIDefaults* table) {
}

void MetalTheme::install() {
}

bool MetalTheme::isSystemTheme() {
	return false;
}

void clinit$MetalTheme($Class* class$) {
	$assignStatic(MetalTheme::white, $new($ColorUIResource, 255, 255, 255));
	$assignStatic(MetalTheme::black, $new($ColorUIResource, 0, 0, 0));
}

MetalTheme::MetalTheme() {
}

$Class* MetalTheme::load$($String* name, bool initialize) {
	$loadClass(MetalTheme, name, initialize, &_MetalTheme_ClassInfo_, clinit$MetalTheme, allocate$MetalTheme);
	return class$;
}

$Class* MetalTheme::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax