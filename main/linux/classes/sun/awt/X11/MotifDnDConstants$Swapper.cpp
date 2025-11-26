#include <sun/awt/X11/MotifDnDConstants$Swapper.h>

#include <jdk/internal/misc/Unsafe.h>
#include <sun/awt/X11/MotifDnDConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Unsafe = ::jdk::internal::misc::Unsafe;
using $MotifDnDConstants = ::sun::awt::X11::MotifDnDConstants;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _MotifDnDConstants$Swapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MotifDnDConstants$Swapper::*)()>(&MotifDnDConstants$Swapper::init$))},
	{"getInt", "(JB)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int64_t,int8_t)>(&MotifDnDConstants$Swapper::getInt))},
	{"getShort", "(JB)S", nullptr, $PUBLIC | $STATIC, $method(static_cast<int16_t(*)(int64_t,int8_t)>(&MotifDnDConstants$Swapper::getShort))},
	{"swap", "(S)S", nullptr, $PUBLIC | $STATIC, $method(static_cast<int16_t(*)(int16_t)>(&MotifDnDConstants$Swapper::swap))},
	{"swap", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&MotifDnDConstants$Swapper::swap))},
	{}
};

$InnerClassInfo _MotifDnDConstants$Swapper_InnerClassesInfo_[] = {
	{"sun.awt.X11.MotifDnDConstants$Swapper", "sun.awt.X11.MotifDnDConstants", "Swapper", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _MotifDnDConstants$Swapper_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.awt.X11.MotifDnDConstants$Swapper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MotifDnDConstants$Swapper_MethodInfo_,
	nullptr,
	nullptr,
	_MotifDnDConstants$Swapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.MotifDnDConstants"
};

$Object* allocate$MotifDnDConstants$Swapper($Class* clazz) {
	return $of($alloc(MotifDnDConstants$Swapper));
}

void MotifDnDConstants$Swapper::init$() {
}

int16_t MotifDnDConstants$Swapper::swap(int16_t s) {
	return (int16_t)(((int32_t)((uint32_t)((int32_t)(s & (uint32_t)0x0000FF00)) >> 8)) | (((int32_t)(s & (uint32_t)255)) << 8));
}

int32_t MotifDnDConstants$Swapper::swap(int32_t i) {
	return ((((int32_t)((uint32_t)((int32_t)(i & (uint32_t)(int32_t)0xFF000000)) >> 24)) | ((int32_t)((uint32_t)((int32_t)(i & (uint32_t)0x00FF0000)) >> 8))) | (((int32_t)(i & (uint32_t)0x0000FF00)) << 8)) | (((int32_t)(i & (uint32_t)255)) << 24);
}

int16_t MotifDnDConstants$Swapper::getShort(int64_t data, int8_t order) {
	$init($MotifDnDConstants);
	int16_t s = $nc($MotifDnDConstants::unsafe)->getShort(data);
	if (order != $MotifDnDConstants::getByteOrderByte()) {
		return swap(s);
	} else {
		return s;
	}
}

int32_t MotifDnDConstants$Swapper::getInt(int64_t data, int8_t order) {
	$init($MotifDnDConstants);
	int32_t i = $nc($MotifDnDConstants::unsafe)->getInt(data);
	if (order != $MotifDnDConstants::getByteOrderByte()) {
		return swap(i);
	} else {
		return i;
	}
}

MotifDnDConstants$Swapper::MotifDnDConstants$Swapper() {
}

$Class* MotifDnDConstants$Swapper::load$($String* name, bool initialize) {
	$loadClass(MotifDnDConstants$Swapper, name, initialize, &_MotifDnDConstants$Swapper_ClassInfo_, allocate$MotifDnDConstants$Swapper);
	return class$;
}

$Class* MotifDnDConstants$Swapper::class$ = nullptr;

		} // X11
	} // awt
} // sun