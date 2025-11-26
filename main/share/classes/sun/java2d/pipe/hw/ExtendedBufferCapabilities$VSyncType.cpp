#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType.h>

#include <java/lang/Enum.h>
#include <sun/java2d/pipe/hw/ExtendedBufferCapabilities.h>
#include <jcpp.h>

#undef VSYNC_DEFAULT
#undef VSYNC_OFF
#undef VSYNC_ON

using $ExtendedBufferCapabilities$VSyncTypeArray = $Array<::sun::java2d::pipe::hw::ExtendedBufferCapabilities$VSyncType>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExtendedBufferCapabilities = ::sun::java2d::pipe::hw::ExtendedBufferCapabilities;

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

$FieldInfo _ExtendedBufferCapabilities$VSyncType_FieldInfo_[] = {
	{"VSYNC_DEFAULT", "Lsun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ExtendedBufferCapabilities$VSyncType, VSYNC_DEFAULT)},
	{"VSYNC_ON", "Lsun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ExtendedBufferCapabilities$VSyncType, VSYNC_ON)},
	{"VSYNC_OFF", "Lsun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ExtendedBufferCapabilities$VSyncType, VSYNC_OFF)},
	{"$VALUES", "[Lsun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ExtendedBufferCapabilities$VSyncType, $VALUES)},
	{"id", "I", nullptr, $PRIVATE, $field(ExtendedBufferCapabilities$VSyncType, id$)},
	{}
};

$MethodInfo _ExtendedBufferCapabilities$VSyncType_MethodInfo_[] = {
	{"$values", "()[Lsun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ExtendedBufferCapabilities$VSyncTypeArray*(*)()>(&ExtendedBufferCapabilities$VSyncType::$values))},
	{"<init>", "(Ljava/lang/String;II)V", "(I)V", $PRIVATE, $method(static_cast<void(ExtendedBufferCapabilities$VSyncType::*)($String*,int32_t,int32_t)>(&ExtendedBufferCapabilities$VSyncType::init$))},
	{"id", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(ExtendedBufferCapabilities$VSyncType::*)()>(&ExtendedBufferCapabilities$VSyncType::id))},
	{"valueOf", "(Ljava/lang/String;)Lsun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ExtendedBufferCapabilities$VSyncType*(*)($String*)>(&ExtendedBufferCapabilities$VSyncType::valueOf))},
	{"values", "()[Lsun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ExtendedBufferCapabilities$VSyncTypeArray*(*)()>(&ExtendedBufferCapabilities$VSyncType::values))},
	{}
};

$InnerClassInfo _ExtendedBufferCapabilities$VSyncType_InnerClassesInfo_[] = {
	{"sun.java2d.pipe.hw.ExtendedBufferCapabilities$VSyncType", "sun.java2d.pipe.hw.ExtendedBufferCapabilities", "VSyncType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _ExtendedBufferCapabilities$VSyncType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.java2d.pipe.hw.ExtendedBufferCapabilities$VSyncType",
	"java.lang.Enum",
	nullptr,
	_ExtendedBufferCapabilities$VSyncType_FieldInfo_,
	_ExtendedBufferCapabilities$VSyncType_MethodInfo_,
	"Ljava/lang/Enum<Lsun/java2d/pipe/hw/ExtendedBufferCapabilities$VSyncType;>;",
	nullptr,
	_ExtendedBufferCapabilities$VSyncType_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.pipe.hw.ExtendedBufferCapabilities"
};

$Object* allocate$ExtendedBufferCapabilities$VSyncType($Class* clazz) {
	return $of($alloc(ExtendedBufferCapabilities$VSyncType));
}

ExtendedBufferCapabilities$VSyncType* ExtendedBufferCapabilities$VSyncType::VSYNC_DEFAULT = nullptr;
ExtendedBufferCapabilities$VSyncType* ExtendedBufferCapabilities$VSyncType::VSYNC_ON = nullptr;
ExtendedBufferCapabilities$VSyncType* ExtendedBufferCapabilities$VSyncType::VSYNC_OFF = nullptr;
$ExtendedBufferCapabilities$VSyncTypeArray* ExtendedBufferCapabilities$VSyncType::$VALUES = nullptr;

$ExtendedBufferCapabilities$VSyncTypeArray* ExtendedBufferCapabilities$VSyncType::$values() {
	$init(ExtendedBufferCapabilities$VSyncType);
	return $new($ExtendedBufferCapabilities$VSyncTypeArray, {
		ExtendedBufferCapabilities$VSyncType::VSYNC_DEFAULT,
		ExtendedBufferCapabilities$VSyncType::VSYNC_ON,
		ExtendedBufferCapabilities$VSyncType::VSYNC_OFF
	});
}

$ExtendedBufferCapabilities$VSyncTypeArray* ExtendedBufferCapabilities$VSyncType::values() {
	$init(ExtendedBufferCapabilities$VSyncType);
	return $cast($ExtendedBufferCapabilities$VSyncTypeArray, ExtendedBufferCapabilities$VSyncType::$VALUES->clone());
}

ExtendedBufferCapabilities$VSyncType* ExtendedBufferCapabilities$VSyncType::valueOf($String* name) {
	$init(ExtendedBufferCapabilities$VSyncType);
	return $cast(ExtendedBufferCapabilities$VSyncType, $Enum::valueOf(ExtendedBufferCapabilities$VSyncType::class$, name));
}

int32_t ExtendedBufferCapabilities$VSyncType::id() {
	return this->id$;
}

void ExtendedBufferCapabilities$VSyncType::init$($String* $enum$name, int32_t $enum$ordinal, int32_t id) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->id$ = id;
}

void clinit$ExtendedBufferCapabilities$VSyncType($Class* class$) {
	$assignStatic(ExtendedBufferCapabilities$VSyncType::VSYNC_DEFAULT, $new(ExtendedBufferCapabilities$VSyncType, "VSYNC_DEFAULT"_s, 0, 0));
	$assignStatic(ExtendedBufferCapabilities$VSyncType::VSYNC_ON, $new(ExtendedBufferCapabilities$VSyncType, "VSYNC_ON"_s, 1, 1));
	$assignStatic(ExtendedBufferCapabilities$VSyncType::VSYNC_OFF, $new(ExtendedBufferCapabilities$VSyncType, "VSYNC_OFF"_s, 2, 2));
	$assignStatic(ExtendedBufferCapabilities$VSyncType::$VALUES, ExtendedBufferCapabilities$VSyncType::$values());
}

ExtendedBufferCapabilities$VSyncType::ExtendedBufferCapabilities$VSyncType() {
}

$Class* ExtendedBufferCapabilities$VSyncType::load$($String* name, bool initialize) {
	$loadClass(ExtendedBufferCapabilities$VSyncType, name, initialize, &_ExtendedBufferCapabilities$VSyncType_ClassInfo_, clinit$ExtendedBufferCapabilities$VSyncType, allocate$ExtendedBufferCapabilities$VSyncType);
	return class$;
}

$Class* ExtendedBufferCapabilities$VSyncType::class$ = nullptr;

			} // hw
		} // pipe
	} // java2d
} // sun