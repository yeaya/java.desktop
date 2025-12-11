#include <sun/awt/shell/Win32ShellFolder2$SystemIcon.h>

#include <java/lang/Enum.h>
#include <sun/awt/shell/Win32ShellFolder2.h>
#include <jcpp.h>

#undef IDI_APPLICATION
#undef IDI_ASTERISK
#undef IDI_ERROR
#undef IDI_EXCLAMATION
#undef IDI_HAND
#undef IDI_INFORMATION
#undef IDI_QUESTION
#undef IDI_WARNING
#undef IDI_WINLOGO

using $Win32ShellFolder2$SystemIconArray = $Array<::sun::awt::shell::Win32ShellFolder2$SystemIcon>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace shell {

$FieldInfo _Win32ShellFolder2$SystemIcon_FieldInfo_[] = {
	{"IDI_APPLICATION", "Lsun/awt/shell/Win32ShellFolder2$SystemIcon;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Win32ShellFolder2$SystemIcon, IDI_APPLICATION)},
	{"IDI_HAND", "Lsun/awt/shell/Win32ShellFolder2$SystemIcon;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Win32ShellFolder2$SystemIcon, IDI_HAND)},
	{"IDI_ERROR", "Lsun/awt/shell/Win32ShellFolder2$SystemIcon;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Win32ShellFolder2$SystemIcon, IDI_ERROR)},
	{"IDI_QUESTION", "Lsun/awt/shell/Win32ShellFolder2$SystemIcon;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Win32ShellFolder2$SystemIcon, IDI_QUESTION)},
	{"IDI_EXCLAMATION", "Lsun/awt/shell/Win32ShellFolder2$SystemIcon;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Win32ShellFolder2$SystemIcon, IDI_EXCLAMATION)},
	{"IDI_WARNING", "Lsun/awt/shell/Win32ShellFolder2$SystemIcon;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Win32ShellFolder2$SystemIcon, IDI_WARNING)},
	{"IDI_ASTERISK", "Lsun/awt/shell/Win32ShellFolder2$SystemIcon;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Win32ShellFolder2$SystemIcon, IDI_ASTERISK)},
	{"IDI_INFORMATION", "Lsun/awt/shell/Win32ShellFolder2$SystemIcon;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Win32ShellFolder2$SystemIcon, IDI_INFORMATION)},
	{"IDI_WINLOGO", "Lsun/awt/shell/Win32ShellFolder2$SystemIcon;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Win32ShellFolder2$SystemIcon, IDI_WINLOGO)},
	{"$VALUES", "[Lsun/awt/shell/Win32ShellFolder2$SystemIcon;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Win32ShellFolder2$SystemIcon, $VALUES)},
	{"iconID", "I", nullptr, $PRIVATE | $FINAL, $field(Win32ShellFolder2$SystemIcon, iconID)},
	{}
};

$MethodInfo _Win32ShellFolder2$SystemIcon_MethodInfo_[] = {
	{"$values", "()[Lsun/awt/shell/Win32ShellFolder2$SystemIcon;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Win32ShellFolder2$SystemIconArray*(*)()>(&Win32ShellFolder2$SystemIcon::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(Win32ShellFolder2$SystemIcon::*)($String*,int32_t,int32_t)>(&Win32ShellFolder2$SystemIcon::init$))},
	{"getIconID", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(Win32ShellFolder2$SystemIcon::*)()>(&Win32ShellFolder2$SystemIcon::getIconID))},
	{"valueOf", "(Ljava/lang/String;)Lsun/awt/shell/Win32ShellFolder2$SystemIcon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Win32ShellFolder2$SystemIcon*(*)($String*)>(&Win32ShellFolder2$SystemIcon::valueOf))},
	{"values", "()[Lsun/awt/shell/Win32ShellFolder2$SystemIcon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Win32ShellFolder2$SystemIconArray*(*)()>(&Win32ShellFolder2$SystemIcon::values))},
	{}
};

$InnerClassInfo _Win32ShellFolder2$SystemIcon_InnerClassesInfo_[] = {
	{"sun.awt.shell.Win32ShellFolder2$SystemIcon", "sun.awt.shell.Win32ShellFolder2", "SystemIcon", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _Win32ShellFolder2$SystemIcon_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.awt.shell.Win32ShellFolder2$SystemIcon",
	"java.lang.Enum",
	nullptr,
	_Win32ShellFolder2$SystemIcon_FieldInfo_,
	_Win32ShellFolder2$SystemIcon_MethodInfo_,
	"Ljava/lang/Enum<Lsun/awt/shell/Win32ShellFolder2$SystemIcon;>;",
	nullptr,
	_Win32ShellFolder2$SystemIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.Win32ShellFolder2"
};

$Object* allocate$Win32ShellFolder2$SystemIcon($Class* clazz) {
	return $of($alloc(Win32ShellFolder2$SystemIcon));
}

Win32ShellFolder2$SystemIcon* Win32ShellFolder2$SystemIcon::IDI_APPLICATION = nullptr;
Win32ShellFolder2$SystemIcon* Win32ShellFolder2$SystemIcon::IDI_HAND = nullptr;
Win32ShellFolder2$SystemIcon* Win32ShellFolder2$SystemIcon::IDI_ERROR = nullptr;
Win32ShellFolder2$SystemIcon* Win32ShellFolder2$SystemIcon::IDI_QUESTION = nullptr;
Win32ShellFolder2$SystemIcon* Win32ShellFolder2$SystemIcon::IDI_EXCLAMATION = nullptr;
Win32ShellFolder2$SystemIcon* Win32ShellFolder2$SystemIcon::IDI_WARNING = nullptr;
Win32ShellFolder2$SystemIcon* Win32ShellFolder2$SystemIcon::IDI_ASTERISK = nullptr;
Win32ShellFolder2$SystemIcon* Win32ShellFolder2$SystemIcon::IDI_INFORMATION = nullptr;
Win32ShellFolder2$SystemIcon* Win32ShellFolder2$SystemIcon::IDI_WINLOGO = nullptr;
$Win32ShellFolder2$SystemIconArray* Win32ShellFolder2$SystemIcon::$VALUES = nullptr;

$Win32ShellFolder2$SystemIconArray* Win32ShellFolder2$SystemIcon::$values() {
	$init(Win32ShellFolder2$SystemIcon);
	return $new($Win32ShellFolder2$SystemIconArray, {
		Win32ShellFolder2$SystemIcon::IDI_APPLICATION,
		Win32ShellFolder2$SystemIcon::IDI_HAND,
		Win32ShellFolder2$SystemIcon::IDI_ERROR,
		Win32ShellFolder2$SystemIcon::IDI_QUESTION,
		Win32ShellFolder2$SystemIcon::IDI_EXCLAMATION,
		Win32ShellFolder2$SystemIcon::IDI_WARNING,
		Win32ShellFolder2$SystemIcon::IDI_ASTERISK,
		Win32ShellFolder2$SystemIcon::IDI_INFORMATION,
		Win32ShellFolder2$SystemIcon::IDI_WINLOGO
	});
}

$Win32ShellFolder2$SystemIconArray* Win32ShellFolder2$SystemIcon::values() {
	$init(Win32ShellFolder2$SystemIcon);
	return $cast($Win32ShellFolder2$SystemIconArray, Win32ShellFolder2$SystemIcon::$VALUES->clone());
}

Win32ShellFolder2$SystemIcon* Win32ShellFolder2$SystemIcon::valueOf($String* name) {
	$init(Win32ShellFolder2$SystemIcon);
	return $cast(Win32ShellFolder2$SystemIcon, $Enum::valueOf(Win32ShellFolder2$SystemIcon::class$, name));
}

void Win32ShellFolder2$SystemIcon::init$($String* $enum$name, int32_t $enum$ordinal, int32_t iconID) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->iconID = iconID;
}

int32_t Win32ShellFolder2$SystemIcon::getIconID() {
	return this->iconID;
}

void clinit$Win32ShellFolder2$SystemIcon($Class* class$) {
	$assignStatic(Win32ShellFolder2$SystemIcon::IDI_APPLICATION, $new(Win32ShellFolder2$SystemIcon, "IDI_APPLICATION"_s, 0, 32512));
	$assignStatic(Win32ShellFolder2$SystemIcon::IDI_HAND, $new(Win32ShellFolder2$SystemIcon, "IDI_HAND"_s, 1, 32513));
	$assignStatic(Win32ShellFolder2$SystemIcon::IDI_ERROR, $new(Win32ShellFolder2$SystemIcon, "IDI_ERROR"_s, 2, 32513));
	$assignStatic(Win32ShellFolder2$SystemIcon::IDI_QUESTION, $new(Win32ShellFolder2$SystemIcon, "IDI_QUESTION"_s, 3, 32514));
	$assignStatic(Win32ShellFolder2$SystemIcon::IDI_EXCLAMATION, $new(Win32ShellFolder2$SystemIcon, "IDI_EXCLAMATION"_s, 4, 32515));
	$assignStatic(Win32ShellFolder2$SystemIcon::IDI_WARNING, $new(Win32ShellFolder2$SystemIcon, "IDI_WARNING"_s, 5, 32515));
	$assignStatic(Win32ShellFolder2$SystemIcon::IDI_ASTERISK, $new(Win32ShellFolder2$SystemIcon, "IDI_ASTERISK"_s, 6, 32516));
	$assignStatic(Win32ShellFolder2$SystemIcon::IDI_INFORMATION, $new(Win32ShellFolder2$SystemIcon, "IDI_INFORMATION"_s, 7, 32516));
	$assignStatic(Win32ShellFolder2$SystemIcon::IDI_WINLOGO, $new(Win32ShellFolder2$SystemIcon, "IDI_WINLOGO"_s, 8, 32517));
	$assignStatic(Win32ShellFolder2$SystemIcon::$VALUES, Win32ShellFolder2$SystemIcon::$values());
}

Win32ShellFolder2$SystemIcon::Win32ShellFolder2$SystemIcon() {
}

$Class* Win32ShellFolder2$SystemIcon::load$($String* name, bool initialize) {
	$loadClass(Win32ShellFolder2$SystemIcon, name, initialize, &_Win32ShellFolder2$SystemIcon_ClassInfo_, clinit$Win32ShellFolder2$SystemIcon, allocate$Win32ShellFolder2$SystemIcon);
	return class$;
}

$Class* Win32ShellFolder2$SystemIcon::class$ = nullptr;

		} // shell
	} // awt
} // sun