#include <java/awt/Taskbar$Feature.h>

#include <java/awt/Taskbar.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ICON_BADGE_IMAGE_WINDOW
#undef ICON_BADGE_NUMBER
#undef ICON_BADGE_TEXT
#undef ICON_IMAGE
#undef MENU
#undef PROGRESS_STATE_WINDOW
#undef PROGRESS_VALUE
#undef PROGRESS_VALUE_WINDOW
#undef USER_ATTENTION
#undef USER_ATTENTION_WINDOW

using $Taskbar$FeatureArray = $Array<::java::awt::Taskbar$Feature>;
using $Taskbar = ::java::awt::Taskbar;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Taskbar$Feature_FieldInfo_[] = {
	{"ICON_BADGE_TEXT", "Ljava/awt/Taskbar$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Taskbar$Feature, ICON_BADGE_TEXT)},
	{"ICON_BADGE_NUMBER", "Ljava/awt/Taskbar$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Taskbar$Feature, ICON_BADGE_NUMBER)},
	{"ICON_BADGE_IMAGE_WINDOW", "Ljava/awt/Taskbar$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Taskbar$Feature, ICON_BADGE_IMAGE_WINDOW)},
	{"ICON_IMAGE", "Ljava/awt/Taskbar$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Taskbar$Feature, ICON_IMAGE)},
	{"MENU", "Ljava/awt/Taskbar$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Taskbar$Feature, MENU)},
	{"PROGRESS_STATE_WINDOW", "Ljava/awt/Taskbar$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Taskbar$Feature, PROGRESS_STATE_WINDOW)},
	{"PROGRESS_VALUE", "Ljava/awt/Taskbar$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Taskbar$Feature, PROGRESS_VALUE)},
	{"PROGRESS_VALUE_WINDOW", "Ljava/awt/Taskbar$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Taskbar$Feature, PROGRESS_VALUE_WINDOW)},
	{"USER_ATTENTION", "Ljava/awt/Taskbar$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Taskbar$Feature, USER_ATTENTION)},
	{"USER_ATTENTION_WINDOW", "Ljava/awt/Taskbar$Feature;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Taskbar$Feature, USER_ATTENTION_WINDOW)},
	{"$VALUES", "[Ljava/awt/Taskbar$Feature;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Taskbar$Feature, $VALUES)},
	{}
};

$MethodInfo _Taskbar$Feature_MethodInfo_[] = {
	{"$values", "()[Ljava/awt/Taskbar$Feature;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Taskbar$FeatureArray*(*)()>(&Taskbar$Feature::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Taskbar$Feature::*)($String*,int32_t)>(&Taskbar$Feature::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljava/awt/Taskbar$Feature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Taskbar$Feature*(*)($String*)>(&Taskbar$Feature::valueOf))},
	{"values", "()[Ljava/awt/Taskbar$Feature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Taskbar$FeatureArray*(*)()>(&Taskbar$Feature::values))},
	{}
};

$InnerClassInfo _Taskbar$Feature_InnerClassesInfo_[] = {
	{"java.awt.Taskbar$Feature", "java.awt.Taskbar", "Feature", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Taskbar$Feature_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"java.awt.Taskbar$Feature",
	"java.lang.Enum",
	nullptr,
	_Taskbar$Feature_FieldInfo_,
	_Taskbar$Feature_MethodInfo_,
	"Ljava/lang/Enum<Ljava/awt/Taskbar$Feature;>;",
	nullptr,
	_Taskbar$Feature_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Taskbar"
};

$Object* allocate$Taskbar$Feature($Class* clazz) {
	return $of($alloc(Taskbar$Feature));
}


Taskbar$Feature* Taskbar$Feature::ICON_BADGE_TEXT = nullptr;

Taskbar$Feature* Taskbar$Feature::ICON_BADGE_NUMBER = nullptr;

Taskbar$Feature* Taskbar$Feature::ICON_BADGE_IMAGE_WINDOW = nullptr;

Taskbar$Feature* Taskbar$Feature::ICON_IMAGE = nullptr;

Taskbar$Feature* Taskbar$Feature::MENU = nullptr;

Taskbar$Feature* Taskbar$Feature::PROGRESS_STATE_WINDOW = nullptr;

Taskbar$Feature* Taskbar$Feature::PROGRESS_VALUE = nullptr;

Taskbar$Feature* Taskbar$Feature::PROGRESS_VALUE_WINDOW = nullptr;

Taskbar$Feature* Taskbar$Feature::USER_ATTENTION = nullptr;

Taskbar$Feature* Taskbar$Feature::USER_ATTENTION_WINDOW = nullptr;
$Taskbar$FeatureArray* Taskbar$Feature::$VALUES = nullptr;

$Taskbar$FeatureArray* Taskbar$Feature::$values() {
	$init(Taskbar$Feature);
	return $new($Taskbar$FeatureArray, {
		Taskbar$Feature::ICON_BADGE_TEXT,
		Taskbar$Feature::ICON_BADGE_NUMBER,
		Taskbar$Feature::ICON_BADGE_IMAGE_WINDOW,
		Taskbar$Feature::ICON_IMAGE,
		Taskbar$Feature::MENU,
		Taskbar$Feature::PROGRESS_STATE_WINDOW,
		Taskbar$Feature::PROGRESS_VALUE,
		Taskbar$Feature::PROGRESS_VALUE_WINDOW,
		Taskbar$Feature::USER_ATTENTION,
		Taskbar$Feature::USER_ATTENTION_WINDOW
	});
}

$Taskbar$FeatureArray* Taskbar$Feature::values() {
	$init(Taskbar$Feature);
	return $cast($Taskbar$FeatureArray, Taskbar$Feature::$VALUES->clone());
}

Taskbar$Feature* Taskbar$Feature::valueOf($String* name) {
	$init(Taskbar$Feature);
	return $cast(Taskbar$Feature, $Enum::valueOf(Taskbar$Feature::class$, name));
}

void Taskbar$Feature::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Taskbar$Feature($Class* class$) {
	$assignStatic(Taskbar$Feature::ICON_BADGE_TEXT, $new(Taskbar$Feature, "ICON_BADGE_TEXT"_s, 0));
	$assignStatic(Taskbar$Feature::ICON_BADGE_NUMBER, $new(Taskbar$Feature, "ICON_BADGE_NUMBER"_s, 1));
	$assignStatic(Taskbar$Feature::ICON_BADGE_IMAGE_WINDOW, $new(Taskbar$Feature, "ICON_BADGE_IMAGE_WINDOW"_s, 2));
	$assignStatic(Taskbar$Feature::ICON_IMAGE, $new(Taskbar$Feature, "ICON_IMAGE"_s, 3));
	$assignStatic(Taskbar$Feature::MENU, $new(Taskbar$Feature, "MENU"_s, 4));
	$assignStatic(Taskbar$Feature::PROGRESS_STATE_WINDOW, $new(Taskbar$Feature, "PROGRESS_STATE_WINDOW"_s, 5));
	$assignStatic(Taskbar$Feature::PROGRESS_VALUE, $new(Taskbar$Feature, "PROGRESS_VALUE"_s, 6));
	$assignStatic(Taskbar$Feature::PROGRESS_VALUE_WINDOW, $new(Taskbar$Feature, "PROGRESS_VALUE_WINDOW"_s, 7));
	$assignStatic(Taskbar$Feature::USER_ATTENTION, $new(Taskbar$Feature, "USER_ATTENTION"_s, 8));
	$assignStatic(Taskbar$Feature::USER_ATTENTION_WINDOW, $new(Taskbar$Feature, "USER_ATTENTION_WINDOW"_s, 9));
	$assignStatic(Taskbar$Feature::$VALUES, Taskbar$Feature::$values());
}

Taskbar$Feature::Taskbar$Feature() {
}

$Class* Taskbar$Feature::load$($String* name, bool initialize) {
	$loadClass(Taskbar$Feature, name, initialize, &_Taskbar$Feature_ClassInfo_, clinit$Taskbar$Feature, allocate$Taskbar$Feature);
	return class$;
}

$Class* Taskbar$Feature::class$ = nullptr;

	} // awt
} // java