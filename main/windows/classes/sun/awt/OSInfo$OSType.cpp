#include <sun/awt/OSInfo$OSType.h>

#include <java/lang/Enum.h>
#include <sun/awt/OSInfo.h>
#include <jcpp.h>

#undef AIX
#undef LINUX
#undef MACOSX
#undef UNKNOWN
#undef WINDOWS

using $OSInfo$OSTypeArray = $Array<::sun::awt::OSInfo$OSType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OSInfo = ::sun::awt::OSInfo;

namespace sun {
	namespace awt {

$FieldInfo _OSInfo$OSType_FieldInfo_[] = {
	{"WINDOWS", "Lsun/awt/OSInfo$OSType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OSInfo$OSType, WINDOWS)},
	{"LINUX", "Lsun/awt/OSInfo$OSType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OSInfo$OSType, LINUX)},
	{"MACOSX", "Lsun/awt/OSInfo$OSType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OSInfo$OSType, MACOSX)},
	{"AIX", "Lsun/awt/OSInfo$OSType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OSInfo$OSType, AIX)},
	{"UNKNOWN", "Lsun/awt/OSInfo$OSType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(OSInfo$OSType, UNKNOWN)},
	{"$VALUES", "[Lsun/awt/OSInfo$OSType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(OSInfo$OSType, $VALUES)},
	{}
};

$MethodInfo _OSInfo$OSType_MethodInfo_[] = {
	{"$values", "()[Lsun/awt/OSInfo$OSType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$OSInfo$OSTypeArray*(*)()>(&OSInfo$OSType::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(OSInfo$OSType::*)($String*,int32_t)>(&OSInfo$OSType::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/awt/OSInfo$OSType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<OSInfo$OSType*(*)($String*)>(&OSInfo$OSType::valueOf))},
	{"values", "()[Lsun/awt/OSInfo$OSType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$OSInfo$OSTypeArray*(*)()>(&OSInfo$OSType::values))},
	{}
};

$InnerClassInfo _OSInfo$OSType_InnerClassesInfo_[] = {
	{"sun.awt.OSInfo$OSType", "sun.awt.OSInfo", "OSType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _OSInfo$OSType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.awt.OSInfo$OSType",
	"java.lang.Enum",
	nullptr,
	_OSInfo$OSType_FieldInfo_,
	_OSInfo$OSType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/awt/OSInfo$OSType;>;",
	nullptr,
	_OSInfo$OSType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.OSInfo"
};

$Object* allocate$OSInfo$OSType($Class* clazz) {
	return $of($alloc(OSInfo$OSType));
}

OSInfo$OSType* OSInfo$OSType::WINDOWS = nullptr;
OSInfo$OSType* OSInfo$OSType::LINUX = nullptr;
OSInfo$OSType* OSInfo$OSType::MACOSX = nullptr;
OSInfo$OSType* OSInfo$OSType::AIX = nullptr;
OSInfo$OSType* OSInfo$OSType::UNKNOWN = nullptr;
$OSInfo$OSTypeArray* OSInfo$OSType::$VALUES = nullptr;

$OSInfo$OSTypeArray* OSInfo$OSType::$values() {
	$init(OSInfo$OSType);
	return $new($OSInfo$OSTypeArray, {
		OSInfo$OSType::WINDOWS,
		OSInfo$OSType::LINUX,
		OSInfo$OSType::MACOSX,
		OSInfo$OSType::AIX,
		OSInfo$OSType::UNKNOWN
	});
}

$OSInfo$OSTypeArray* OSInfo$OSType::values() {
	$init(OSInfo$OSType);
	return $cast($OSInfo$OSTypeArray, OSInfo$OSType::$VALUES->clone());
}

OSInfo$OSType* OSInfo$OSType::valueOf($String* name) {
	$init(OSInfo$OSType);
	return $cast(OSInfo$OSType, $Enum::valueOf(OSInfo$OSType::class$, name));
}

void OSInfo$OSType::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$OSInfo$OSType($Class* class$) {
	$assignStatic(OSInfo$OSType::WINDOWS, $new(OSInfo$OSType, "WINDOWS"_s, 0));
	$assignStatic(OSInfo$OSType::LINUX, $new(OSInfo$OSType, "LINUX"_s, 1));
	$assignStatic(OSInfo$OSType::MACOSX, $new(OSInfo$OSType, "MACOSX"_s, 2));
	$assignStatic(OSInfo$OSType::AIX, $new(OSInfo$OSType, "AIX"_s, 3));
	$assignStatic(OSInfo$OSType::UNKNOWN, $new(OSInfo$OSType, "UNKNOWN"_s, 4));
	$assignStatic(OSInfo$OSType::$VALUES, OSInfo$OSType::$values());
}

OSInfo$OSType::OSInfo$OSType() {
}

$Class* OSInfo$OSType::load$($String* name, bool initialize) {
	$loadClass(OSInfo$OSType, name, initialize, &_OSInfo$OSType_ClassInfo_, clinit$OSInfo$OSType, allocate$OSInfo$OSType);
	return class$;
}

$Class* OSInfo$OSType::class$ = nullptr;

	} // awt
} // sun