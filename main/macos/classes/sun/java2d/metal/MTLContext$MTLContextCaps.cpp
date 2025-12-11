#include <sun/java2d/metal/MTLContext$MTLContextCaps.h>

#include <sun/java2d/metal/MTLContext.h>
#include <sun/java2d/pipe/hw/ContextCapabilities.h>
#include <jcpp.h>

#undef CAPS_DOUBLEBUFFERED
#undef CAPS_EXT_BIOP_SHADER
#undef CAPS_EXT_GRAD_SHADER
#undef CAPS_EXT_LCD_SHADER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContextCapabilities = ::sun::java2d::pipe::hw::ContextCapabilities;

namespace sun {
	namespace java2d {
		namespace metal {

$FieldInfo _MTLContext$MTLContextCaps_FieldInfo_[] = {
	{"CAPS_DOUBLEBUFFERED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLContext$MTLContextCaps, CAPS_DOUBLEBUFFERED)},
	{"CAPS_EXT_LCD_SHADER", "I", nullptr, $STATIC | $FINAL, $constField(MTLContext$MTLContextCaps, CAPS_EXT_LCD_SHADER)},
	{"CAPS_EXT_BIOP_SHADER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MTLContext$MTLContextCaps, CAPS_EXT_BIOP_SHADER)},
	{"CAPS_EXT_GRAD_SHADER", "I", nullptr, $STATIC | $FINAL, $constField(MTLContext$MTLContextCaps, CAPS_EXT_GRAD_SHADER)},
	{}
};

$MethodInfo _MTLContext$MTLContextCaps_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MTLContext$MTLContextCaps::*)(int32_t,$String*)>(&MTLContext$MTLContextCaps::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MTLContext$MTLContextCaps_InnerClassesInfo_[] = {
	{"sun.java2d.metal.MTLContext$MTLContextCaps", "sun.java2d.metal.MTLContext", "MTLContextCaps", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MTLContext$MTLContextCaps_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.metal.MTLContext$MTLContextCaps",
	"sun.java2d.pipe.hw.ContextCapabilities",
	nullptr,
	_MTLContext$MTLContextCaps_FieldInfo_,
	_MTLContext$MTLContextCaps_MethodInfo_,
	nullptr,
	nullptr,
	_MTLContext$MTLContextCaps_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.metal.MTLContext"
};

$Object* allocate$MTLContext$MTLContextCaps($Class* clazz) {
	return $of($alloc(MTLContext$MTLContextCaps));
}

void MTLContext$MTLContextCaps::init$(int32_t caps, $String* adapterId) {
	$ContextCapabilities::init$(caps, adapterId);
}

$String* MTLContext$MTLContextCaps::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, $($ContextCapabilities::toString())));
	if (((int32_t)(this->caps & (uint32_t)MTLContext$MTLContextCaps::CAPS_DOUBLEBUFFERED)) != 0) {
		sb->append("CAPS_DOUBLEBUFFERED|"_s);
	}
	if (((int32_t)(this->caps & (uint32_t)MTLContext$MTLContextCaps::CAPS_EXT_LCD_SHADER)) != 0) {
		sb->append("CAPS_EXT_LCD_SHADER|"_s);
	}
	if (((int32_t)(this->caps & (uint32_t)MTLContext$MTLContextCaps::CAPS_EXT_BIOP_SHADER)) != 0) {
		sb->append("CAPS_BIOP_SHADER|"_s);
	}
	if (((int32_t)(this->caps & (uint32_t)MTLContext$MTLContextCaps::CAPS_EXT_GRAD_SHADER)) != 0) {
		sb->append("CAPS_EXT_GRAD_SHADER|"_s);
	}
	return sb->toString();
}

MTLContext$MTLContextCaps::MTLContext$MTLContextCaps() {
}

$Class* MTLContext$MTLContextCaps::load$($String* name, bool initialize) {
	$loadClass(MTLContext$MTLContextCaps, name, initialize, &_MTLContext$MTLContextCaps_ClassInfo_, allocate$MTLContext$MTLContextCaps);
	return class$;
}

$Class* MTLContext$MTLContextCaps::class$ = nullptr;

		} // metal
	} // java2d
} // sun