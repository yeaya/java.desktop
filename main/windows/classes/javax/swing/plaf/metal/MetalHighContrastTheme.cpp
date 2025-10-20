#include <javax/swing/plaf/metal/MetalHighContrastTheme.h>

#include <java/awt/Color.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/basic/BasicBorders$MarginBorder.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $LineBorder = ::javax::swing::border::LineBorder;
using $BorderUIResource = ::javax::swing::plaf::BorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $BasicBorders$MarginBorder = ::javax::swing::plaf::basic::BasicBorders$MarginBorder;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $MetalTheme = ::javax::swing::plaf::metal::MetalTheme;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalHighContrastTheme_FieldInfo_[] = {
	{"primary1", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalHighContrastTheme, primary1)},
	{"primary2", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalHighContrastTheme, primary2)},
	{"primary3", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalHighContrastTheme, primary3)},
	{"primaryHighlight", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalHighContrastTheme, primaryHighlight)},
	{"secondary2", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalHighContrastTheme, secondary2)},
	{"secondary3", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalHighContrastTheme, secondary3)},
	{}
};

$MethodInfo _MetalHighContrastTheme_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetalHighContrastTheme::*)()>(&MetalHighContrastTheme::init$))},
	{"addCustomEntriesToTable", "(Ljavax/swing/UIDefaults;)V", nullptr, $PUBLIC},
	{"getAcceleratorForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getAcceleratorSelectedForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getControlHighlight", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getFocusColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getHighlightedTextColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getMenuSelectedBackground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getMenuSelectedForeground", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrimary1", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getPrimary2", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getPrimary3", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getPrimaryControlHighlight", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"getSecondary2", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getSecondary3", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getTextHighlightColor", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PUBLIC},
	{"isSystemTheme", "()Z", nullptr, 0},
	{}
};

$ClassInfo _MetalHighContrastTheme_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalHighContrastTheme",
	"javax.swing.plaf.metal.DefaultMetalTheme",
	nullptr,
	_MetalHighContrastTheme_FieldInfo_,
	_MetalHighContrastTheme_MethodInfo_
};

$Object* allocate$MetalHighContrastTheme($Class* clazz) {
	return $of($alloc(MetalHighContrastTheme));
}

$ColorUIResource* MetalHighContrastTheme::primary1 = nullptr;
$ColorUIResource* MetalHighContrastTheme::primary2 = nullptr;
$ColorUIResource* MetalHighContrastTheme::primary3 = nullptr;
$ColorUIResource* MetalHighContrastTheme::primaryHighlight = nullptr;
$ColorUIResource* MetalHighContrastTheme::secondary2 = nullptr;
$ColorUIResource* MetalHighContrastTheme::secondary3 = nullptr;

void MetalHighContrastTheme::init$() {
	$DefaultMetalTheme::init$();
}

$String* MetalHighContrastTheme::getName() {
	return "Contrast"_s;
}

$ColorUIResource* MetalHighContrastTheme::getPrimary1() {
	return MetalHighContrastTheme::primary1;
}

$ColorUIResource* MetalHighContrastTheme::getPrimary2() {
	return MetalHighContrastTheme::primary2;
}

$ColorUIResource* MetalHighContrastTheme::getPrimary3() {
	return MetalHighContrastTheme::primary3;
}

$ColorUIResource* MetalHighContrastTheme::getPrimaryControlHighlight() {
	return MetalHighContrastTheme::primaryHighlight;
}

$ColorUIResource* MetalHighContrastTheme::getSecondary2() {
	return MetalHighContrastTheme::secondary2;
}

$ColorUIResource* MetalHighContrastTheme::getSecondary3() {
	return MetalHighContrastTheme::secondary3;
}

$ColorUIResource* MetalHighContrastTheme::getControlHighlight() {
	return MetalHighContrastTheme::secondary2;
}

$ColorUIResource* MetalHighContrastTheme::getFocusColor() {
	return getBlack();
}

$ColorUIResource* MetalHighContrastTheme::getTextHighlightColor() {
	return getBlack();
}

$ColorUIResource* MetalHighContrastTheme::getHighlightedTextColor() {
	return getWhite();
}

$ColorUIResource* MetalHighContrastTheme::getMenuSelectedBackground() {
	return getBlack();
}

$ColorUIResource* MetalHighContrastTheme::getMenuSelectedForeground() {
	return getWhite();
}

$ColorUIResource* MetalHighContrastTheme::getAcceleratorForeground() {
	return getBlack();
}

$ColorUIResource* MetalHighContrastTheme::getAcceleratorSelectedForeground() {
	return getWhite();
}

void MetalHighContrastTheme::addCustomEntriesToTable($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$var($Border, blackLineBorder, $new($BorderUIResource, $$new($LineBorder, $(getBlack()))));
	$var($Border, whiteLineBorder, $new($BorderUIResource, $$new($LineBorder, $(getWhite()))));
	$var($Object, textBorder, $new($BorderUIResource, $$new($CompoundBorder, blackLineBorder, $$new($BasicBorders$MarginBorder))));
	$var($ObjectArray, defaults, $new($ObjectArray, {
		$of("ToolTip.border"_s),
		$of(blackLineBorder),
		$of("TitledBorder.border"_s),
		$of(blackLineBorder),
		$of("TextField.border"_s),
		textBorder,
		$of("PasswordField.border"_s),
		textBorder,
		$of("TextArea.border"_s),
		textBorder,
		$of("TextPane.border"_s),
		textBorder,
		$of("EditorPane.border"_s),
		textBorder,
		$of("ComboBox.background"_s),
		$($of(getWindowBackground())),
		$of("ComboBox.foreground"_s),
		$($of(getUserTextColor())),
		$of("ComboBox.selectionBackground"_s),
		$($of(getTextHighlightColor())),
		$of("ComboBox.selectionForeground"_s),
		$($of(getHighlightedTextColor())),
		$of("ProgressBar.foreground"_s),
		$($of(getUserTextColor())),
		$of("ProgressBar.background"_s),
		$($of(getWindowBackground())),
		$of("ProgressBar.selectionForeground"_s),
		$($of(getWindowBackground())),
		$of("ProgressBar.selectionBackground"_s),
		$($of(getUserTextColor())),
		$of("OptionPane.errorDialog.border.background"_s),
		$($of(getPrimary1())),
		$of("OptionPane.errorDialog.titlePane.foreground"_s),
		$($of(getPrimary3())),
		$of("OptionPane.errorDialog.titlePane.background"_s),
		$($of(getPrimary1())),
		$of("OptionPane.errorDialog.titlePane.shadow"_s),
		$($of(getPrimary2())),
		$of("OptionPane.questionDialog.border.background"_s),
		$($of(getPrimary1())),
		$of("OptionPane.questionDialog.titlePane.foreground"_s),
		$($of(getPrimary3())),
		$of("OptionPane.questionDialog.titlePane.background"_s),
		$($of(getPrimary1())),
		$of("OptionPane.questionDialog.titlePane.shadow"_s),
		$($of(getPrimary2())),
		$of("OptionPane.warningDialog.border.background"_s),
		$($of(getPrimary1())),
		$of("OptionPane.warningDialog.titlePane.foreground"_s),
		$($of(getPrimary3())),
		$of("OptionPane.warningDialog.titlePane.background"_s),
		$($of(getPrimary1())),
		$of("OptionPane.warningDialog.titlePane.shadow"_s),
		$($of(getPrimary2()))
	}));
	$nc(table)->putDefaults(defaults);
}

bool MetalHighContrastTheme::isSystemTheme() {
	return ($of(this)->getClass() == MetalHighContrastTheme::class$);
}

void clinit$MetalHighContrastTheme($Class* class$) {
	$assignStatic(MetalHighContrastTheme::primary1, $new($ColorUIResource, 0, 0, 0));
	$assignStatic(MetalHighContrastTheme::primary2, $new($ColorUIResource, 204, 204, 204));
	$assignStatic(MetalHighContrastTheme::primary3, $new($ColorUIResource, 255, 255, 255));
	$assignStatic(MetalHighContrastTheme::primaryHighlight, $new($ColorUIResource, 102, 102, 102));
	$assignStatic(MetalHighContrastTheme::secondary2, $new($ColorUIResource, 204, 204, 204));
	$assignStatic(MetalHighContrastTheme::secondary3, $new($ColorUIResource, 255, 255, 255));
}

MetalHighContrastTheme::MetalHighContrastTheme() {
}

$Class* MetalHighContrastTheme::load$($String* name, bool initialize) {
	$loadClass(MetalHighContrastTheme, name, initialize, &_MetalHighContrastTheme_ClassInfo_, clinit$MetalHighContrastTheme, allocate$MetalHighContrastTheme);
	return class$;
}

$Class* MetalHighContrastTheme::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax