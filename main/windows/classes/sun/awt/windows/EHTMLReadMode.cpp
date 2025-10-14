#include <sun/awt/windows/EHTMLReadMode.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef HTML_READ_ALL
#undef HTML_READ_FRAGMENT
#undef HTML_READ_SELECTION

using $EHTMLReadModeArray = $Array<::sun::awt::windows::EHTMLReadMode>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _EHTMLReadMode_FieldInfo_[] = {
	{"HTML_READ_ALL", "Lsun/awt/windows/EHTMLReadMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EHTMLReadMode, HTML_READ_ALL)},
	{"HTML_READ_FRAGMENT", "Lsun/awt/windows/EHTMLReadMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EHTMLReadMode, HTML_READ_FRAGMENT)},
	{"HTML_READ_SELECTION", "Lsun/awt/windows/EHTMLReadMode;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(EHTMLReadMode, HTML_READ_SELECTION)},
	{"$VALUES", "[Lsun/awt/windows/EHTMLReadMode;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(EHTMLReadMode, $VALUES)},
	{}
};

$MethodInfo _EHTMLReadMode_MethodInfo_[] = {
	{"$values", "()[Lsun/awt/windows/EHTMLReadMode;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$EHTMLReadModeArray*(*)()>(&EHTMLReadMode::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(EHTMLReadMode::*)($String*,int32_t)>(&EHTMLReadMode::init$))},
	{"getEHTMLReadMode", "(Ljava/awt/datatransfer/DataFlavor;)Lsun/awt/windows/EHTMLReadMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<EHTMLReadMode*(*)($DataFlavor*)>(&EHTMLReadMode::getEHTMLReadMode))},
	{"valueOf", "(Ljava/lang/String;)Lsun/awt/windows/EHTMLReadMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<EHTMLReadMode*(*)($String*)>(&EHTMLReadMode::valueOf))},
	{"values", "()[Lsun/awt/windows/EHTMLReadMode;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$EHTMLReadModeArray*(*)()>(&EHTMLReadMode::values))},
	{}
};

$ClassInfo _EHTMLReadMode_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"sun.awt.windows.EHTMLReadMode",
	"java.lang.Enum",
	nullptr,
	_EHTMLReadMode_FieldInfo_,
	_EHTMLReadMode_MethodInfo_,
	"Ljava/lang/Enum<Lsun/awt/windows/EHTMLReadMode;>;"
};

$Object* allocate$EHTMLReadMode($Class* clazz) {
	return $of($alloc(EHTMLReadMode));
}

EHTMLReadMode* EHTMLReadMode::HTML_READ_ALL = nullptr;
EHTMLReadMode* EHTMLReadMode::HTML_READ_FRAGMENT = nullptr;
EHTMLReadMode* EHTMLReadMode::HTML_READ_SELECTION = nullptr;
$EHTMLReadModeArray* EHTMLReadMode::$VALUES = nullptr;

$EHTMLReadModeArray* EHTMLReadMode::$values() {
	$init(EHTMLReadMode);
	return $new($EHTMLReadModeArray, {
		EHTMLReadMode::HTML_READ_ALL,
		EHTMLReadMode::HTML_READ_FRAGMENT,
		EHTMLReadMode::HTML_READ_SELECTION
	});
}

$EHTMLReadModeArray* EHTMLReadMode::values() {
	$init(EHTMLReadMode);
	return $cast($EHTMLReadModeArray, EHTMLReadMode::$VALUES->clone());
}

EHTMLReadMode* EHTMLReadMode::valueOf($String* name) {
	$init(EHTMLReadMode);
	return $cast(EHTMLReadMode, $Enum::valueOf(EHTMLReadMode::class$, name));
}

void EHTMLReadMode::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

EHTMLReadMode* EHTMLReadMode::getEHTMLReadMode($DataFlavor* df) {
	$init(EHTMLReadMode);
	EHTMLReadMode* mode = EHTMLReadMode::HTML_READ_SELECTION;
	$var($String, parameter, $nc(df)->getParameter("document"_s));
	if ("all"_s->equals(parameter)) {
		mode = EHTMLReadMode::HTML_READ_ALL;
	} else if ("fragment"_s->equals(parameter)) {
		mode = EHTMLReadMode::HTML_READ_FRAGMENT;
	}
	return mode;
}

void clinit$EHTMLReadMode($Class* class$) {
	$assignStatic(EHTMLReadMode::HTML_READ_ALL, $new(EHTMLReadMode, "HTML_READ_ALL"_s, 0));
	$assignStatic(EHTMLReadMode::HTML_READ_FRAGMENT, $new(EHTMLReadMode, "HTML_READ_FRAGMENT"_s, 1));
	$assignStatic(EHTMLReadMode::HTML_READ_SELECTION, $new(EHTMLReadMode, "HTML_READ_SELECTION"_s, 2));
	$assignStatic(EHTMLReadMode::$VALUES, EHTMLReadMode::$values());
}

EHTMLReadMode::EHTMLReadMode() {
}

$Class* EHTMLReadMode::load$($String* name, bool initialize) {
	$loadClass(EHTMLReadMode, name, initialize, &_EHTMLReadMode_ClassInfo_, clinit$EHTMLReadMode, allocate$EHTMLReadMode);
	return class$;
}

$Class* EHTMLReadMode::class$ = nullptr;

		} // windows
	} // awt
} // sun