#include <java/awt/image/DataBuffer$1.h>

#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DataBufferUShort.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <jcpp.h>

using $byteArray2 = $Array<int8_t, 2>;
using $intArray2 = $Array<int32_t, 2>;
using $shortArray2 = $Array<int16_t, 2>;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunWritableRaster$DataStealer = ::sun::awt::image::SunWritableRaster$DataStealer;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;

namespace java {
	namespace awt {
		namespace image {

$MethodInfo _DataBuffer$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DataBuffer$1::*)()>(&DataBuffer$1::init$))},
	{"getData", "(Ljava/awt/image/DataBufferByte;I)[B", nullptr, $PUBLIC},
	{"getData", "(Ljava/awt/image/DataBufferUShort;I)[S", nullptr, $PUBLIC},
	{"getData", "(Ljava/awt/image/DataBufferInt;I)[I", nullptr, $PUBLIC},
	{"getTrackable", "(Ljava/awt/image/DataBuffer;)Lsun/java2d/StateTrackableDelegate;", nullptr, $PUBLIC},
	{"setTrackable", "(Ljava/awt/image/DataBuffer;Lsun/java2d/StateTrackableDelegate;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DataBuffer$1_EnclosingMethodInfo_ = {
	"java.awt.image.DataBuffer",
	nullptr,
	nullptr
};

$InnerClassInfo _DataBuffer$1_InnerClassesInfo_[] = {
	{"java.awt.image.DataBuffer$1", nullptr, nullptr, 0},
	{"sun.awt.image.SunWritableRaster$DataStealer", "sun.awt.image.SunWritableRaster", "DataStealer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DataBuffer$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.image.DataBuffer$1",
	"java.lang.Object",
	"sun.awt.image.SunWritableRaster$DataStealer",
	nullptr,
	_DataBuffer$1_MethodInfo_,
	nullptr,
	&_DataBuffer$1_EnclosingMethodInfo_,
	_DataBuffer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.image.DataBuffer"
};

$Object* allocate$DataBuffer$1($Class* clazz) {
	return $of($alloc(DataBuffer$1));
}

void DataBuffer$1::init$() {
}

$bytes* DataBuffer$1::getData($DataBufferByte* dbb, int32_t bank) {
	return $nc($nc(dbb)->bankdata)->get(bank);
}

$shorts* DataBuffer$1::getData($DataBufferUShort* dbus, int32_t bank) {
	return $nc($nc(dbus)->bankdata)->get(bank);
}

$ints* DataBuffer$1::getData($DataBufferInt* dbi, int32_t bank) {
	return $nc($nc(dbi)->bankdata)->get(bank);
}

$StateTrackableDelegate* DataBuffer$1::getTrackable($DataBuffer* db) {
	return $nc(db)->theTrackable;
}

void DataBuffer$1::setTrackable($DataBuffer* db, $StateTrackableDelegate* trackable) {
	$set($nc(db), theTrackable, trackable);
}

DataBuffer$1::DataBuffer$1() {
}

$Class* DataBuffer$1::load$($String* name, bool initialize) {
	$loadClass(DataBuffer$1, name, initialize, &_DataBuffer$1_ClassInfo_, allocate$DataBuffer$1);
	return class$;
}

$Class* DataBuffer$1::class$ = nullptr;

		} // image
	} // awt
} // java