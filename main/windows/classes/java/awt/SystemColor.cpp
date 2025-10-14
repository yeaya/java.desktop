#include <java/awt/SystemColor.h>

#include <java/awt/Color.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor$SystemColorAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

#undef ACTIVE_CAPTION
#undef ACTIVE_CAPTION_BORDER
#undef ACTIVE_CAPTION_TEXT
#undef CONTROL
#undef CONTROL_DK_SHADOW
#undef CONTROL_HIGHLIGHT
#undef CONTROL_LT_HIGHLIGHT
#undef CONTROL_SHADOW
#undef CONTROL_TEXT
#undef DESKTOP
#undef INACTIVE_CAPTION
#undef INACTIVE_CAPTION_BORDER
#undef INACTIVE_CAPTION_TEXT
#undef INFO
#undef INFO_TEXT
#undef MENU
#undef MENU_TEXT
#undef NUM_COLORS
#undef SCROLLBAR
#undef TEXT
#undef TEXT_HIGHLIGHT
#undef TEXT_HIGHLIGHT_TEXT
#undef TEXT_INACTIVE_TEXT
#undef TEXT_TEXT
#undef WINDOW
#undef WINDOW_BORDER
#undef WINDOW_TEXT

using $SystemColorArray = $Array<::java::awt::SystemColor>;
using $Color = ::java::awt::Color;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$SystemColorAccessor = ::sun::awt::AWTAccessor$SystemColorAccessor;

namespace java {
	namespace awt {

class SystemColor$$Lambda$updateSystemColors : public $AWTAccessor$SystemColorAccessor {
	$class(SystemColor$$Lambda$updateSystemColors, $NO_CLASS_INIT, $AWTAccessor$SystemColorAccessor)
public:
	void init$() {
	}
	virtual void updateSystemColors() override {
		SystemColor::updateSystemColors();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SystemColor$$Lambda$updateSystemColors>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SystemColor$$Lambda$updateSystemColors::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SystemColor$$Lambda$updateSystemColors::*)()>(&SystemColor$$Lambda$updateSystemColors::init$))},
	{"updateSystemColors", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SystemColor$$Lambda$updateSystemColors::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.awt.SystemColor$$Lambda$updateSystemColors",
	"java.lang.Object",
	"sun.awt.AWTAccessor$SystemColorAccessor",
	nullptr,
	methodInfos
};
$Class* SystemColor$$Lambda$updateSystemColors::load$($String* name, bool initialize) {
	$loadClass(SystemColor$$Lambda$updateSystemColors, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SystemColor$$Lambda$updateSystemColors::class$ = nullptr;

$FieldInfo _SystemColor_FieldInfo_[] = {
	{"DESKTOP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, DESKTOP)},
	{"ACTIVE_CAPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, ACTIVE_CAPTION)},
	{"ACTIVE_CAPTION_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, ACTIVE_CAPTION_TEXT)},
	{"ACTIVE_CAPTION_BORDER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, ACTIVE_CAPTION_BORDER)},
	{"INACTIVE_CAPTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, INACTIVE_CAPTION)},
	{"INACTIVE_CAPTION_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, INACTIVE_CAPTION_TEXT)},
	{"INACTIVE_CAPTION_BORDER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, INACTIVE_CAPTION_BORDER)},
	{"WINDOW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, WINDOW)},
	{"WINDOW_BORDER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, WINDOW_BORDER)},
	{"WINDOW_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, WINDOW_TEXT)},
	{"MENU", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, MENU)},
	{"MENU_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, MENU_TEXT)},
	{"TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, TEXT)},
	{"TEXT_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, TEXT_TEXT)},
	{"TEXT_HIGHLIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, TEXT_HIGHLIGHT)},
	{"TEXT_HIGHLIGHT_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, TEXT_HIGHLIGHT_TEXT)},
	{"TEXT_INACTIVE_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, TEXT_INACTIVE_TEXT)},
	{"CONTROL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, CONTROL)},
	{"CONTROL_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, CONTROL_TEXT)},
	{"CONTROL_HIGHLIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, CONTROL_HIGHLIGHT)},
	{"CONTROL_LT_HIGHLIGHT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, CONTROL_LT_HIGHLIGHT)},
	{"CONTROL_SHADOW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, CONTROL_SHADOW)},
	{"CONTROL_DK_SHADOW", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, CONTROL_DK_SHADOW)},
	{"SCROLLBAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, SCROLLBAR)},
	{"INFO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, INFO)},
	{"INFO_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, INFO_TEXT)},
	{"NUM_COLORS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SystemColor, NUM_COLORS)},
	{"systemColors", "[I", nullptr, $PRIVATE | $STATIC, $staticField(SystemColor, systemColors)},
	{"desktop", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, desktop)},
	{"activeCaption", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, activeCaption)},
	{"activeCaptionText", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, activeCaptionText)},
	{"activeCaptionBorder", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, activeCaptionBorder)},
	{"inactiveCaption", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, inactiveCaption)},
	{"inactiveCaptionText", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, inactiveCaptionText)},
	{"inactiveCaptionBorder", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, inactiveCaptionBorder)},
	{"window", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, window)},
	{"windowBorder", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, windowBorder)},
	{"windowText", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, windowText)},
	{"menu", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, menu)},
	{"menuText", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, menuText)},
	{"text", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, text)},
	{"textText", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, textText)},
	{"textHighlight", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, textHighlight)},
	{"textHighlightText", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, textHighlightText)},
	{"textInactiveText", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, textInactiveText)},
	{"control", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, control)},
	{"controlText", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, controlText)},
	{"controlHighlight", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, controlHighlight)},
	{"controlLtHighlight", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, controlLtHighlight)},
	{"controlShadow", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, controlShadow)},
	{"controlDkShadow", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, controlDkShadow)},
	{"scrollbar", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, scrollbar)},
	{"info", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, info)},
	{"infoText", "Ljava/awt/SystemColor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SystemColor, infoText)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SystemColor, serialVersionUID)},
	{"index", "I", nullptr, $PRIVATE | $TRANSIENT, $field(SystemColor, index)},
	{"systemColorObjects", "[Ljava/awt/SystemColor;", nullptr, $PRIVATE | $STATIC, $staticField(SystemColor, systemColorObjects)},
	{}
};

$MethodInfo _SystemColor_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, $PRIVATE, $method(static_cast<void(SystemColor::*)(int8_t)>(&SystemColor::init$))},
	{"readResolve", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(SystemColor::*)()>(&SystemColor::readResolve))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateSystemColors", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SystemColor::updateSystemColors))},
	{"writeReplace", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(SystemColor::*)()>(&SystemColor::writeReplace)), "java.io.ObjectStreamException"},
	{}
};

$ClassInfo _SystemColor_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.SystemColor",
	"java.awt.Color",
	nullptr,
	_SystemColor_FieldInfo_,
	_SystemColor_MethodInfo_
};

$Object* allocate$SystemColor($Class* clazz) {
	return $of($alloc(SystemColor));
}


$ints* SystemColor::systemColors = nullptr;

SystemColor* SystemColor::desktop = nullptr;

SystemColor* SystemColor::activeCaption = nullptr;

SystemColor* SystemColor::activeCaptionText = nullptr;

SystemColor* SystemColor::activeCaptionBorder = nullptr;

SystemColor* SystemColor::inactiveCaption = nullptr;

SystemColor* SystemColor::inactiveCaptionText = nullptr;

SystemColor* SystemColor::inactiveCaptionBorder = nullptr;

SystemColor* SystemColor::window = nullptr;

SystemColor* SystemColor::windowBorder = nullptr;

SystemColor* SystemColor::windowText = nullptr;

SystemColor* SystemColor::menu = nullptr;

SystemColor* SystemColor::menuText = nullptr;

SystemColor* SystemColor::text = nullptr;

SystemColor* SystemColor::textText = nullptr;

SystemColor* SystemColor::textHighlight = nullptr;

SystemColor* SystemColor::textHighlightText = nullptr;

SystemColor* SystemColor::textInactiveText = nullptr;

SystemColor* SystemColor::control = nullptr;

SystemColor* SystemColor::controlText = nullptr;

SystemColor* SystemColor::controlHighlight = nullptr;

SystemColor* SystemColor::controlLtHighlight = nullptr;

SystemColor* SystemColor::controlShadow = nullptr;

SystemColor* SystemColor::controlDkShadow = nullptr;

SystemColor* SystemColor::scrollbar = nullptr;

SystemColor* SystemColor::info = nullptr;

SystemColor* SystemColor::infoText = nullptr;
$SystemColorArray* SystemColor::systemColorObjects = nullptr;

void SystemColor::updateSystemColors() {
	$init(SystemColor);
	if (!$GraphicsEnvironment::isHeadless()) {
		$nc($($Toolkit::getDefaultToolkit()))->loadSystemColors(SystemColor::systemColors);
	}
	for (int32_t i = 0; i < $nc(SystemColor::systemColors)->length; ++i) {
		$nc($nc(SystemColor::systemColorObjects)->get(i))->value = $nc(SystemColor::systemColors)->get(i);
	}
}

void SystemColor::init$(int8_t index) {
	$Color::init$($nc(SystemColor::systemColors)->get(index));
	this->index = index;
}

$String* SystemColor::toString() {
	return $str({$($of(this)->getClass()->getName()), "[i="_s, $$str((this->index)), "]"_s});
}

$Object* SystemColor::readResolve() {
	return $of($nc(SystemColor::systemColorObjects)->get(this->value));
}

$Object* SystemColor::writeReplace() {
	$var(SystemColor, color, $new(SystemColor, (int8_t)this->index));
	color->value = this->index;
	return $of(color);
}

void clinit$SystemColor($Class* class$) {
	$assignStatic(SystemColor::systemColors, $new($ints, {
		(int32_t)0xFF005C5C,
		(int32_t)0xFF000080,
		-1,
		(int32_t)0xFFC0C0C0,
		(int32_t)0xFF808080,
		(int32_t)0xFFC0C0C0,
		(int32_t)0xFFC0C0C0,
		-1,
		(int32_t)0xFF000000,
		(int32_t)0xFF000000,
		(int32_t)0xFFC0C0C0,
		(int32_t)0xFF000000,
		(int32_t)0xFFC0C0C0,
		(int32_t)0xFF000000,
		(int32_t)0xFF000080,
		-1,
		(int32_t)0xFF808080,
		(int32_t)0xFFC0C0C0,
		(int32_t)0xFF000000,
		-1,
		(int32_t)0xFFE0E0E0,
		(int32_t)0xFF808080,
		(int32_t)0xFF000000,
		(int32_t)0xFFE0E0E0,
		(int32_t)0xFFE0E000,
		(int32_t)0xFF000000
	}));
	$assignStatic(SystemColor::desktop, $new(SystemColor, (int8_t)SystemColor::DESKTOP));
	$assignStatic(SystemColor::activeCaption, $new(SystemColor, (int8_t)SystemColor::ACTIVE_CAPTION));
	$assignStatic(SystemColor::activeCaptionText, $new(SystemColor, (int8_t)SystemColor::ACTIVE_CAPTION_TEXT));
	$assignStatic(SystemColor::activeCaptionBorder, $new(SystemColor, (int8_t)SystemColor::ACTIVE_CAPTION_BORDER));
	$assignStatic(SystemColor::inactiveCaption, $new(SystemColor, (int8_t)SystemColor::INACTIVE_CAPTION));
	$assignStatic(SystemColor::inactiveCaptionText, $new(SystemColor, (int8_t)SystemColor::INACTIVE_CAPTION_TEXT));
	$assignStatic(SystemColor::inactiveCaptionBorder, $new(SystemColor, (int8_t)SystemColor::INACTIVE_CAPTION_BORDER));
	$assignStatic(SystemColor::window, $new(SystemColor, (int8_t)SystemColor::WINDOW));
	$assignStatic(SystemColor::windowBorder, $new(SystemColor, (int8_t)SystemColor::WINDOW_BORDER));
	$assignStatic(SystemColor::windowText, $new(SystemColor, (int8_t)SystemColor::WINDOW_TEXT));
	$assignStatic(SystemColor::menu, $new(SystemColor, (int8_t)SystemColor::MENU));
	$assignStatic(SystemColor::menuText, $new(SystemColor, (int8_t)SystemColor::MENU_TEXT));
	$assignStatic(SystemColor::text, $new(SystemColor, (int8_t)SystemColor::TEXT));
	$assignStatic(SystemColor::textText, $new(SystemColor, (int8_t)SystemColor::TEXT_TEXT));
	$assignStatic(SystemColor::textHighlight, $new(SystemColor, (int8_t)SystemColor::TEXT_HIGHLIGHT));
	$assignStatic(SystemColor::textHighlightText, $new(SystemColor, (int8_t)SystemColor::TEXT_HIGHLIGHT_TEXT));
	$assignStatic(SystemColor::textInactiveText, $new(SystemColor, (int8_t)SystemColor::TEXT_INACTIVE_TEXT));
	$assignStatic(SystemColor::control, $new(SystemColor, (int8_t)SystemColor::CONTROL));
	$assignStatic(SystemColor::controlText, $new(SystemColor, (int8_t)SystemColor::CONTROL_TEXT));
	$assignStatic(SystemColor::controlHighlight, $new(SystemColor, (int8_t)SystemColor::CONTROL_HIGHLIGHT));
	$assignStatic(SystemColor::controlLtHighlight, $new(SystemColor, (int8_t)SystemColor::CONTROL_LT_HIGHLIGHT));
	$assignStatic(SystemColor::controlShadow, $new(SystemColor, (int8_t)SystemColor::CONTROL_SHADOW));
	$assignStatic(SystemColor::controlDkShadow, $new(SystemColor, (int8_t)SystemColor::CONTROL_DK_SHADOW));
	$assignStatic(SystemColor::scrollbar, $new(SystemColor, (int8_t)SystemColor::SCROLLBAR));
	$assignStatic(SystemColor::info, $new(SystemColor, (int8_t)SystemColor::INFO));
	$assignStatic(SystemColor::infoText, $new(SystemColor, (int8_t)SystemColor::INFO_TEXT));
	$assignStatic(SystemColor::systemColorObjects, $new($SystemColorArray, {
		SystemColor::desktop,
		SystemColor::activeCaption,
		SystemColor::activeCaptionText,
		SystemColor::activeCaptionBorder,
		SystemColor::inactiveCaption,
		SystemColor::inactiveCaptionText,
		SystemColor::inactiveCaptionBorder,
		SystemColor::window,
		SystemColor::windowBorder,
		SystemColor::windowText,
		SystemColor::menu,
		SystemColor::menuText,
		SystemColor::text,
		SystemColor::textText,
		SystemColor::textHighlight,
		SystemColor::textHighlightText,
		SystemColor::textInactiveText,
		SystemColor::control,
		SystemColor::controlText,
		SystemColor::controlHighlight,
		SystemColor::controlLtHighlight,
		SystemColor::controlShadow,
		SystemColor::controlDkShadow,
		SystemColor::scrollbar,
		SystemColor::info,
		SystemColor::infoText
	}));
	{
		$AWTAccessor::setSystemColorAccessor(static_cast<$AWTAccessor$SystemColorAccessor*>($$new(SystemColor$$Lambda$updateSystemColors)));
		SystemColor::updateSystemColors();
	}
}

SystemColor::SystemColor() {
}

$Class* SystemColor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SystemColor$$Lambda$updateSystemColors::classInfo$.name)) {
			return SystemColor$$Lambda$updateSystemColors::load$(name, initialize);
		}
	}
	$loadClass(SystemColor, name, initialize, &_SystemColor_ClassInfo_, clinit$SystemColor, allocate$SystemColor);
	return class$;
}

$Class* SystemColor::class$ = nullptr;

	} // awt
} // java