#include <sun/lwawt/LWWindowPeer$PeerType.h>

#include <java/lang/Enum.h>
#include <sun/lwawt/LWWindowPeer.h>
#include <jcpp.h>

#undef DIALOG
#undef EMBEDDED_FRAME
#undef FRAME
#undef LW_FRAME
#undef SIMPLEWINDOW
#undef VIEW_EMBEDDED_FRAME

using $LWWindowPeer$PeerTypeArray = $Array<::sun::lwawt::LWWindowPeer$PeerType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {

$FieldInfo _LWWindowPeer$PeerType_FieldInfo_[] = {
	{"SIMPLEWINDOW", "Lsun/lwawt/LWWindowPeer$PeerType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LWWindowPeer$PeerType, SIMPLEWINDOW)},
	{"FRAME", "Lsun/lwawt/LWWindowPeer$PeerType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LWWindowPeer$PeerType, FRAME)},
	{"DIALOG", "Lsun/lwawt/LWWindowPeer$PeerType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LWWindowPeer$PeerType, DIALOG)},
	{"EMBEDDED_FRAME", "Lsun/lwawt/LWWindowPeer$PeerType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LWWindowPeer$PeerType, EMBEDDED_FRAME)},
	{"VIEW_EMBEDDED_FRAME", "Lsun/lwawt/LWWindowPeer$PeerType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LWWindowPeer$PeerType, VIEW_EMBEDDED_FRAME)},
	{"LW_FRAME", "Lsun/lwawt/LWWindowPeer$PeerType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(LWWindowPeer$PeerType, LW_FRAME)},
	{"$VALUES", "[Lsun/lwawt/LWWindowPeer$PeerType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(LWWindowPeer$PeerType, $VALUES)},
	{}
};

$MethodInfo _LWWindowPeer$PeerType_MethodInfo_[] = {
	{"$values", "()[Lsun/lwawt/LWWindowPeer$PeerType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$LWWindowPeer$PeerTypeArray*(*)()>(&LWWindowPeer$PeerType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(LWWindowPeer$PeerType::*)($String*,int32_t)>(&LWWindowPeer$PeerType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/lwawt/LWWindowPeer$PeerType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LWWindowPeer$PeerType*(*)($String*)>(&LWWindowPeer$PeerType::valueOf))},
	{"values", "()[Lsun/lwawt/LWWindowPeer$PeerType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LWWindowPeer$PeerTypeArray*(*)()>(&LWWindowPeer$PeerType::values))},
	{}
};

$InnerClassInfo _LWWindowPeer$PeerType_InnerClassesInfo_[] = {
	{"sun.lwawt.LWWindowPeer$PeerType", "sun.lwawt.LWWindowPeer", "PeerType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _LWWindowPeer$PeerType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.lwawt.LWWindowPeer$PeerType",
	"java.lang.Enum",
	nullptr,
	_LWWindowPeer$PeerType_FieldInfo_,
	_LWWindowPeer$PeerType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/lwawt/LWWindowPeer$PeerType;>;",
	nullptr,
	_LWWindowPeer$PeerType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWWindowPeer"
};

$Object* allocate$LWWindowPeer$PeerType($Class* clazz) {
	return $of($alloc(LWWindowPeer$PeerType));
}

LWWindowPeer$PeerType* LWWindowPeer$PeerType::SIMPLEWINDOW = nullptr;
LWWindowPeer$PeerType* LWWindowPeer$PeerType::FRAME = nullptr;
LWWindowPeer$PeerType* LWWindowPeer$PeerType::DIALOG = nullptr;
LWWindowPeer$PeerType* LWWindowPeer$PeerType::EMBEDDED_FRAME = nullptr;
LWWindowPeer$PeerType* LWWindowPeer$PeerType::VIEW_EMBEDDED_FRAME = nullptr;
LWWindowPeer$PeerType* LWWindowPeer$PeerType::LW_FRAME = nullptr;
$LWWindowPeer$PeerTypeArray* LWWindowPeer$PeerType::$VALUES = nullptr;

$LWWindowPeer$PeerTypeArray* LWWindowPeer$PeerType::$values() {
	$init(LWWindowPeer$PeerType);
	return $new($LWWindowPeer$PeerTypeArray, {
		LWWindowPeer$PeerType::SIMPLEWINDOW,
		LWWindowPeer$PeerType::FRAME,
		LWWindowPeer$PeerType::DIALOG,
		LWWindowPeer$PeerType::EMBEDDED_FRAME,
		LWWindowPeer$PeerType::VIEW_EMBEDDED_FRAME,
		LWWindowPeer$PeerType::LW_FRAME
	});
}

$LWWindowPeer$PeerTypeArray* LWWindowPeer$PeerType::values() {
	$init(LWWindowPeer$PeerType);
	return $cast($LWWindowPeer$PeerTypeArray, LWWindowPeer$PeerType::$VALUES->clone());
}

LWWindowPeer$PeerType* LWWindowPeer$PeerType::valueOf($String* name) {
	$init(LWWindowPeer$PeerType);
	return $cast(LWWindowPeer$PeerType, $Enum::valueOf(LWWindowPeer$PeerType::class$, name));
}

void LWWindowPeer$PeerType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$LWWindowPeer$PeerType($Class* class$) {
	$assignStatic(LWWindowPeer$PeerType::SIMPLEWINDOW, $new(LWWindowPeer$PeerType, "SIMPLEWINDOW"_s, 0));
	$assignStatic(LWWindowPeer$PeerType::FRAME, $new(LWWindowPeer$PeerType, "FRAME"_s, 1));
	$assignStatic(LWWindowPeer$PeerType::DIALOG, $new(LWWindowPeer$PeerType, "DIALOG"_s, 2));
	$assignStatic(LWWindowPeer$PeerType::EMBEDDED_FRAME, $new(LWWindowPeer$PeerType, "EMBEDDED_FRAME"_s, 3));
	$assignStatic(LWWindowPeer$PeerType::VIEW_EMBEDDED_FRAME, $new(LWWindowPeer$PeerType, "VIEW_EMBEDDED_FRAME"_s, 4));
	$assignStatic(LWWindowPeer$PeerType::LW_FRAME, $new(LWWindowPeer$PeerType, "LW_FRAME"_s, 5));
	$assignStatic(LWWindowPeer$PeerType::$VALUES, LWWindowPeer$PeerType::$values());
}

LWWindowPeer$PeerType::LWWindowPeer$PeerType() {
}

$Class* LWWindowPeer$PeerType::load$($String* name, bool initialize) {
	$loadClass(LWWindowPeer$PeerType, name, initialize, &_LWWindowPeer$PeerType_ClassInfo_, clinit$LWWindowPeer$PeerType, allocate$LWWindowPeer$PeerType);
	return class$;
}

$Class* LWWindowPeer$PeerType::class$ = nullptr;

	} // lwawt
} // sun