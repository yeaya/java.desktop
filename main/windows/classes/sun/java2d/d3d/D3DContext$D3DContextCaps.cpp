#include <sun/java2d/d3d/D3DContext$D3DContextCaps.h>

#include <sun/java2d/d3d/D3DContext.h>
#include <sun/java2d/pipe/hw/ContextCapabilities.h>
#include <jcpp.h>

#undef CAPS_AA_SHADER
#undef CAPS_BIOP_SHADER
#undef CAPS_DEVICE_OK
#undef CAPS_LCD_SHADER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContextCapabilities = ::sun::java2d::pipe::hw::ContextCapabilities;

namespace sun {
	namespace java2d {
		namespace d3d {

$FieldInfo _D3DContext$D3DContextCaps_FieldInfo_[] = {
	{"CAPS_LCD_SHADER", "I", nullptr, $STATIC | $FINAL, $constField(D3DContext$D3DContextCaps, CAPS_LCD_SHADER)},
	{"CAPS_BIOP_SHADER", "I", nullptr, $STATIC | $FINAL, $constField(D3DContext$D3DContextCaps, CAPS_BIOP_SHADER)},
	{"CAPS_DEVICE_OK", "I", nullptr, $STATIC | $FINAL, $constField(D3DContext$D3DContextCaps, CAPS_DEVICE_OK)},
	{"CAPS_AA_SHADER", "I", nullptr, $STATIC | $FINAL, $constField(D3DContext$D3DContextCaps, CAPS_AA_SHADER)},
	{}
};

$MethodInfo _D3DContext$D3DContextCaps_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;)V", nullptr, 0, $method(static_cast<void(D3DContext$D3DContextCaps::*)(int32_t,$String*)>(&D3DContext$D3DContextCaps::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _D3DContext$D3DContextCaps_InnerClassesInfo_[] = {
	{"sun.java2d.d3d.D3DContext$D3DContextCaps", "sun.java2d.d3d.D3DContext", "D3DContextCaps", $STATIC},
	{}
};

$ClassInfo _D3DContext$D3DContextCaps_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.d3d.D3DContext$D3DContextCaps",
	"sun.java2d.pipe.hw.ContextCapabilities",
	nullptr,
	_D3DContext$D3DContextCaps_FieldInfo_,
	_D3DContext$D3DContextCaps_MethodInfo_,
	nullptr,
	nullptr,
	_D3DContext$D3DContextCaps_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.d3d.D3DContext"
};

$Object* allocate$D3DContext$D3DContextCaps($Class* clazz) {
	return $of($alloc(D3DContext$D3DContextCaps));
}

void D3DContext$D3DContextCaps::init$(int32_t caps, $String* adapterId) {
	$ContextCapabilities::init$(caps, adapterId);
}

$String* D3DContext$D3DContextCaps::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder, $($ContextCapabilities::toString())));
	if (((int32_t)(this->caps & (uint32_t)D3DContext$D3DContextCaps::CAPS_LCD_SHADER)) != 0) {
		buf->append("CAPS_LCD_SHADER|"_s);
	}
	if (((int32_t)(this->caps & (uint32_t)D3DContext$D3DContextCaps::CAPS_BIOP_SHADER)) != 0) {
		buf->append("CAPS_BIOP_SHADER|"_s);
	}
	if (((int32_t)(this->caps & (uint32_t)D3DContext$D3DContextCaps::CAPS_AA_SHADER)) != 0) {
		buf->append("CAPS_AA_SHADER|"_s);
	}
	if (((int32_t)(this->caps & (uint32_t)D3DContext$D3DContextCaps::CAPS_DEVICE_OK)) != 0) {
		buf->append("CAPS_DEVICE_OK|"_s);
	}
	return buf->toString();
}

D3DContext$D3DContextCaps::D3DContext$D3DContextCaps() {
}

$Class* D3DContext$D3DContextCaps::load$($String* name, bool initialize) {
	$loadClass(D3DContext$D3DContextCaps, name, initialize, &_D3DContext$D3DContextCaps_ClassInfo_, allocate$D3DContext$D3DContextCaps);
	return class$;
}

$Class* D3DContext$D3DContextCaps::class$ = nullptr;

		} // d3d
	} // java2d
} // sun