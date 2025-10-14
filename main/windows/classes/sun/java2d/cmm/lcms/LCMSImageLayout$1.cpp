#include <sun/java2d/cmm/lcms/LCMSImageLayout$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/cmm/lcms/LCMSImageLayout$BandOrder.h>
#include <sun/java2d/cmm/lcms/LCMSImageLayout.h>
#include <jcpp.h>

#undef DIRECT
#undef INVERTED
#undef UNKNOWN

using $LCMSImageLayout$BandOrderArray = $Array<::sun::java2d::cmm::lcms::LCMSImageLayout$BandOrder>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LCMSImageLayout = ::sun::java2d::cmm::lcms::LCMSImageLayout;
using $LCMSImageLayout$BandOrder = ::sun::java2d::cmm::lcms::LCMSImageLayout$BandOrder;

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

$FieldInfo _LCMSImageLayout$1_FieldInfo_[] = {
	{"$SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LCMSImageLayout$1, $SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder)},
	{}
};

$EnclosingMethodInfo _LCMSImageLayout$1_EnclosingMethodInfo_ = {
	"sun.java2d.cmm.lcms.LCMSImageLayout",
	nullptr,
	nullptr
};

$InnerClassInfo _LCMSImageLayout$1_InnerClassesInfo_[] = {
	{"sun.java2d.cmm.lcms.LCMSImageLayout$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _LCMSImageLayout$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.java2d.cmm.lcms.LCMSImageLayout$1",
	"java.lang.Object",
	nullptr,
	_LCMSImageLayout$1_FieldInfo_,
	nullptr,
	nullptr,
	&_LCMSImageLayout$1_EnclosingMethodInfo_,
	_LCMSImageLayout$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.cmm.lcms.LCMSImageLayout"
};

$Object* allocate$LCMSImageLayout$1($Class* clazz) {
	return $of($alloc(LCMSImageLayout$1));
}

$ints* LCMSImageLayout$1::$SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder = nullptr;

void clinit$LCMSImageLayout$1($Class* class$) {
	$assignStatic(LCMSImageLayout$1::$SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder, $new($ints, $($LCMSImageLayout$BandOrder::values())->length));
	{
		try {
			$nc(LCMSImageLayout$1::$SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder)->set($LCMSImageLayout$BandOrder::UNKNOWN->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LCMSImageLayout$1::$SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder)->set($LCMSImageLayout$BandOrder::DIRECT->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(LCMSImageLayout$1::$SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder)->set($LCMSImageLayout$BandOrder::INVERTED->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

LCMSImageLayout$1::LCMSImageLayout$1() {
}

$Class* LCMSImageLayout$1::load$($String* name, bool initialize) {
	$loadClass(LCMSImageLayout$1, name, initialize, &_LCMSImageLayout$1_ClassInfo_, clinit$LCMSImageLayout$1, allocate$LCMSImageLayout$1);
	return class$;
}

$Class* LCMSImageLayout$1::class$ = nullptr;

			} // lcms
		} // cmm
	} // java2d
} // sun