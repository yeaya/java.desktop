#include <javax/swing/plaf/metal/DefaultMetalTheme.h>

#include <java/awt/Font.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme$FontDelegate.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme$WindowsFontDelegate.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <sun/awt/AppContext.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BOLD
#undef CONTROL_TEXT_FONT
#undef DIALOG
#undef FALSE
#undef LAF_STATE_KEY
#undef MENU_TEXT_FONT
#undef PLAIN
#undef PLAIN_FONTS
#undef SUB_TEXT_FONT
#undef SYSTEM_TEXT_FONT
#undef USER_TEXT_FONT
#undef WINDOW_TITLE_FONT

using $Font = ::java::awt::Font;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $UIManager = ::javax::swing::UIManager;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $DefaultMetalTheme$FontDelegate = ::javax::swing::plaf::metal::DefaultMetalTheme$FontDelegate;
using $DefaultMetalTheme$WindowsFontDelegate = ::javax::swing::plaf::metal::DefaultMetalTheme$WindowsFontDelegate;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalTheme = ::javax::swing::plaf::metal::MetalTheme;
using $AppContext = ::sun::awt::AppContext;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _DefaultMetalTheme_FieldInfo_[] = {
	{"PLAIN_FONTS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMetalTheme, PLAIN_FONTS)},
	{"fontNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMetalTheme, fontNames)},
	{"fontStyles", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMetalTheme, fontStyles)},
	{"fontSizes", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMetalTheme, fontSizes)},
	{"defaultNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMetalTheme, defaultNames)},
	{"primary1", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMetalTheme, primary1)},
	{"primary2", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMetalTheme, primary2)},
	{"primary3", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMetalTheme, primary3)},
	{"secondary1", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMetalTheme, secondary1)},
	{"secondary2", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMetalTheme, secondary2)},
	{"secondary3", "Ljavax/swing/plaf/ColorUIResource;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultMetalTheme, secondary3)},
	{"fontDelegate", "Ljavax/swing/plaf/metal/DefaultMetalTheme$FontDelegate;", nullptr, $PRIVATE, $field(DefaultMetalTheme, fontDelegate)},
	{}
};

$MethodInfo _DefaultMetalTheme_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultMetalTheme::*)()>(&DefaultMetalTheme::init$))},
	{"getControlTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC},
	{"getDefaultFontName", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&DefaultMetalTheme::getDefaultFontName))},
	{"getDefaultFontSize", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&DefaultMetalTheme::getDefaultFontSize))},
	{"getDefaultFontStyle", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&DefaultMetalTheme::getDefaultFontStyle))},
	{"getDefaultPropertyName", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&DefaultMetalTheme::getDefaultPropertyName))},
	{"getFont", "(I)Ljavax/swing/plaf/FontUIResource;", nullptr, $PRIVATE, $method(static_cast<$FontUIResource*(DefaultMetalTheme::*)(int32_t)>(&DefaultMetalTheme::getFont))},
	{"getMenuTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrimary1", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getPrimary2", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getPrimary3", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getSecondary1", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getSecondary2", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getSecondary3", "()Ljavax/swing/plaf/ColorUIResource;", nullptr, $PROTECTED},
	{"getSubTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC},
	{"getSystemTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC},
	{"getUserTextFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC},
	{"getWindowTitleFont", "()Ljavax/swing/plaf/FontUIResource;", nullptr, $PUBLIC},
	{"install", "()V", nullptr, 0},
	{"isSystemTheme", "()Z", nullptr, 0},
	{}
};

$InnerClassInfo _DefaultMetalTheme_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.DefaultMetalTheme$WindowsFontDelegate", "javax.swing.plaf.metal.DefaultMetalTheme", "WindowsFontDelegate", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate", "javax.swing.plaf.metal.DefaultMetalTheme", "FontDelegate", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DefaultMetalTheme_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.DefaultMetalTheme",
	"javax.swing.plaf.metal.MetalTheme",
	nullptr,
	_DefaultMetalTheme_FieldInfo_,
	_DefaultMetalTheme_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultMetalTheme_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.DefaultMetalTheme$WindowsFontDelegate,javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate,javax.swing.plaf.metal.DefaultMetalTheme$FontDelegate$1"
};

$Object* allocate$DefaultMetalTheme($Class* clazz) {
	return $of($alloc(DefaultMetalTheme));
}


bool DefaultMetalTheme::PLAIN_FONTS = false;

$StringArray* DefaultMetalTheme::fontNames = nullptr;

$ints* DefaultMetalTheme::fontStyles = nullptr;

$ints* DefaultMetalTheme::fontSizes = nullptr;

$StringArray* DefaultMetalTheme::defaultNames = nullptr;
$ColorUIResource* DefaultMetalTheme::primary1 = nullptr;
$ColorUIResource* DefaultMetalTheme::primary2 = nullptr;
$ColorUIResource* DefaultMetalTheme::primary3 = nullptr;
$ColorUIResource* DefaultMetalTheme::secondary1 = nullptr;
$ColorUIResource* DefaultMetalTheme::secondary2 = nullptr;
$ColorUIResource* DefaultMetalTheme::secondary3 = nullptr;

$String* DefaultMetalTheme::getDefaultFontName(int32_t key) {
	$init(DefaultMetalTheme);
	return $nc(DefaultMetalTheme::fontNames)->get(key);
}

int32_t DefaultMetalTheme::getDefaultFontSize(int32_t key) {
	$init(DefaultMetalTheme);
	return $nc(DefaultMetalTheme::fontSizes)->get(key);
}

int32_t DefaultMetalTheme::getDefaultFontStyle(int32_t key) {
	$init(DefaultMetalTheme);
	$useLocalCurrentObjectStackCache();
	if (key != $MetalTheme::WINDOW_TITLE_FONT) {
		$var($Object, boldMetal, nullptr);
		$init($SwingUtilities2);
		if ($nc($($AppContext::getAppContext()))->get($SwingUtilities2::LAF_STATE_KEY) != nullptr) {
			$assign(boldMetal, $UIManager::get("swing.boldMetal"_s));
		}
		if (boldMetal != nullptr) {
			$init($Boolean);
			if ($nc($Boolean::FALSE)->equals(boldMetal)) {
				return $Font::PLAIN;
			}
		} else {
			if (DefaultMetalTheme::PLAIN_FONTS) {
				return $Font::PLAIN;
			}
		}
	}
	return $nc(DefaultMetalTheme::fontStyles)->get(key);
}

$String* DefaultMetalTheme::getDefaultPropertyName(int32_t key) {
	$init(DefaultMetalTheme);
	return $nc(DefaultMetalTheme::defaultNames)->get(key);
}

$String* DefaultMetalTheme::getName() {
	return "Steel"_s;
}

void DefaultMetalTheme::init$() {
	$MetalTheme::init$();
	install();
}

$ColorUIResource* DefaultMetalTheme::getPrimary1() {
	return DefaultMetalTheme::primary1;
}

$ColorUIResource* DefaultMetalTheme::getPrimary2() {
	return DefaultMetalTheme::primary2;
}

$ColorUIResource* DefaultMetalTheme::getPrimary3() {
	return DefaultMetalTheme::primary3;
}

$ColorUIResource* DefaultMetalTheme::getSecondary1() {
	return DefaultMetalTheme::secondary1;
}

$ColorUIResource* DefaultMetalTheme::getSecondary2() {
	return DefaultMetalTheme::secondary2;
}

$ColorUIResource* DefaultMetalTheme::getSecondary3() {
	return DefaultMetalTheme::secondary3;
}

$FontUIResource* DefaultMetalTheme::getControlTextFont() {
	return getFont($MetalTheme::CONTROL_TEXT_FONT);
}

$FontUIResource* DefaultMetalTheme::getSystemTextFont() {
	return getFont($MetalTheme::SYSTEM_TEXT_FONT);
}

$FontUIResource* DefaultMetalTheme::getUserTextFont() {
	return getFont($MetalTheme::USER_TEXT_FONT);
}

$FontUIResource* DefaultMetalTheme::getMenuTextFont() {
	return getFont($MetalTheme::MENU_TEXT_FONT);
}

$FontUIResource* DefaultMetalTheme::getWindowTitleFont() {
	return getFont($MetalTheme::WINDOW_TITLE_FONT);
}

$FontUIResource* DefaultMetalTheme::getSubTextFont() {
	return getFont($MetalTheme::SUB_TEXT_FONT);
}

$FontUIResource* DefaultMetalTheme::getFont(int32_t key) {
	return $nc(this->fontDelegate)->getFont(key);
}

void DefaultMetalTheme::install() {
	bool var$0 = $MetalLookAndFeel::isWindows();
	if (var$0 && $MetalLookAndFeel::useSystemFonts()) {
		$set(this, fontDelegate, $new($DefaultMetalTheme$WindowsFontDelegate));
	} else {
		$set(this, fontDelegate, $new($DefaultMetalTheme$FontDelegate));
	}
}

bool DefaultMetalTheme::isSystemTheme() {
	return ($of(this)->getClass() == DefaultMetalTheme::class$);
}

void clinit$DefaultMetalTheme($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
		$init($Font);
	$assignStatic(DefaultMetalTheme::fontNames, $new($StringArray, {
		$Font::DIALOG,
		$Font::DIALOG,
		$Font::DIALOG,
		$Font::DIALOG,
		$Font::DIALOG,
		$Font::DIALOG
	}));
	$assignStatic(DefaultMetalTheme::fontStyles, $new($ints, {
		$Font::BOLD,
		$Font::PLAIN,
		$Font::PLAIN,
		$Font::BOLD,
		$Font::BOLD,
		$Font::PLAIN
	}));
	$assignStatic(DefaultMetalTheme::fontSizes, $new($ints, {
		12,
		12,
		12,
		12,
		12,
		10
	}));
	$assignStatic(DefaultMetalTheme::defaultNames, $new($StringArray, {
		"swing.plaf.metal.controlFont"_s,
		"swing.plaf.metal.systemFont"_s,
		"swing.plaf.metal.userFont"_s,
		"swing.plaf.metal.controlFont"_s,
		"swing.plaf.metal.controlFont"_s,
		"swing.plaf.metal.smallFont"_s
	}));
	{
		$var($Object, boldProperty, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.boldMetal"_s))));
		if (boldProperty == nullptr || !"false"_s->equals(boldProperty)) {
			DefaultMetalTheme::PLAIN_FONTS = false;
		} else {
			DefaultMetalTheme::PLAIN_FONTS = true;
		}
	}
	$assignStatic(DefaultMetalTheme::primary1, $new($ColorUIResource, 102, 102, 153));
	$assignStatic(DefaultMetalTheme::primary2, $new($ColorUIResource, 153, 153, 204));
	$assignStatic(DefaultMetalTheme::primary3, $new($ColorUIResource, 204, 204, 255));
	$assignStatic(DefaultMetalTheme::secondary1, $new($ColorUIResource, 102, 102, 102));
	$assignStatic(DefaultMetalTheme::secondary2, $new($ColorUIResource, 153, 153, 153));
	$assignStatic(DefaultMetalTheme::secondary3, $new($ColorUIResource, 204, 204, 204));
}

DefaultMetalTheme::DefaultMetalTheme() {
}

$Class* DefaultMetalTheme::load$($String* name, bool initialize) {
	$loadClass(DefaultMetalTheme, name, initialize, &_DefaultMetalTheme_ClassInfo_, clinit$DefaultMetalTheme, allocate$DefaultMetalTheme);
	return class$;
}

$Class* DefaultMetalTheme::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax