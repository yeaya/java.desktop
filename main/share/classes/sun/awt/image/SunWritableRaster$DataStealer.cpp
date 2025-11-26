#include <sun/awt/image/SunWritableRaster$DataStealer.h>

#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DataBufferUShort.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <jcpp.h>

using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;

namespace sun {
	namespace awt {
		namespace image {

$MethodInfo _SunWritableRaster$DataStealer_MethodInfo_[] = {
	{"getData", "(Ljava/awt/image/DataBufferByte;I)[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getData", "(Ljava/awt/image/DataBufferUShort;I)[S", nullptr, $PUBLIC | $ABSTRACT},
	{"getData", "(Ljava/awt/image/DataBufferInt;I)[I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTrackable", "(Ljava/awt/image/DataBuffer;)Lsun/java2d/StateTrackableDelegate;", nullptr, $PUBLIC | $ABSTRACT},
	{"setTrackable", "(Ljava/awt/image/DataBuffer;Lsun/java2d/StateTrackableDelegate;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _SunWritableRaster$DataStealer_InnerClassesInfo_[] = {
	{"sun.awt.image.SunWritableRaster$DataStealer", "sun.awt.image.SunWritableRaster", "DataStealer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SunWritableRaster$DataStealer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.image.SunWritableRaster$DataStealer",
	nullptr,
	nullptr,
	nullptr,
	_SunWritableRaster$DataStealer_MethodInfo_,
	nullptr,
	nullptr,
	_SunWritableRaster$DataStealer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.SunWritableRaster"
};

$Object* allocate$SunWritableRaster$DataStealer($Class* clazz) {
	return $of($alloc(SunWritableRaster$DataStealer));
}

$Class* SunWritableRaster$DataStealer::load$($String* name, bool initialize) {
	$loadClass(SunWritableRaster$DataStealer, name, initialize, &_SunWritableRaster$DataStealer_ClassInfo_, allocate$SunWritableRaster$DataStealer);
	return class$;
}

$Class* SunWritableRaster$DataStealer::class$ = nullptr;

		} // image
	} // awt
} // sun