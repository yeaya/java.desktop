#include <sun/awt/SunHints$LCDContrastKey.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/SunHints$Key.h>
#include <sun/awt/SunHints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints = ::sun::awt::SunHints;
using $SunHints$Key = ::sun::awt::SunHints$Key;

namespace sun {
	namespace awt {

$MethodInfo _SunHints$LCDContrastKey_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SunHints$LCDContrastKey::*)(int32_t,$String*)>(&SunHints$LCDContrastKey::init$))},
	{"isCompatibleValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _SunHints$LCDContrastKey_InnerClassesInfo_[] = {
	{"sun.awt.SunHints$LCDContrastKey", "sun.awt.SunHints", "LCDContrastKey", $PUBLIC | $STATIC},
	{"sun.awt.SunHints$Key", "sun.awt.SunHints", "Key", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SunHints$LCDContrastKey_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.SunHints$LCDContrastKey",
	"sun.awt.SunHints$Key",
	nullptr,
	nullptr,
	_SunHints$LCDContrastKey_MethodInfo_,
	nullptr,
	nullptr,
	_SunHints$LCDContrastKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.SunHints"
};

$Object* allocate$SunHints$LCDContrastKey($Class* clazz) {
	return $of($alloc(SunHints$LCDContrastKey));
}

void SunHints$LCDContrastKey::init$(int32_t privatekey, $String* description) {
	$SunHints$Key::init$(privatekey, description);
}

bool SunHints$LCDContrastKey::isCompatibleValue(Object$* val) {
	if ($instanceOf($Integer, val)) {
		int32_t ival = $nc(($cast($Integer, val)))->intValue();
		return ival >= 100 && ival <= 250;
	}
	return false;
}

SunHints$LCDContrastKey::SunHints$LCDContrastKey() {
}

$Class* SunHints$LCDContrastKey::load$($String* name, bool initialize) {
	$loadClass(SunHints$LCDContrastKey, name, initialize, &_SunHints$LCDContrastKey_ClassInfo_, allocate$SunHints$LCDContrastKey);
	return class$;
}

$Class* SunHints$LCDContrastKey::class$ = nullptr;

	} // awt
} // sun