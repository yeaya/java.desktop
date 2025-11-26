#include <sun/awt/image/SunWritableRaster.h>

#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/DataBufferUShort.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/InternalError.h>
#include <sun/awt/image/SunWritableRaster$DataStealer.h>
#include <sun/java2d/StateTrackable$State.h>
#include <sun/java2d/StateTrackableDelegate.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

#undef STABLE

using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $DataBufferUShort = ::java::awt::image::DataBufferUShort;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunWritableRaster$DataStealer = ::sun::awt::image::SunWritableRaster$DataStealer;
using $StateTrackable$State = ::sun::java2d::StateTrackable$State;
using $StateTrackableDelegate = ::sun::java2d::StateTrackableDelegate;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _SunWritableRaster_FieldInfo_[] = {
	{"stealer", "Lsun/awt/image/SunWritableRaster$DataStealer;", nullptr, $PRIVATE | $STATIC, $staticField(SunWritableRaster, stealer)},
	{"theTrackable", "Lsun/java2d/StateTrackableDelegate;", nullptr, $PRIVATE, $field(SunWritableRaster, theTrackable)},
	{}
};

$MethodInfo _SunWritableRaster_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(SunWritableRaster::*)($SampleModel*,$Point*)>(&SunWritableRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBuffer;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(SunWritableRaster::*)($SampleModel*,$DataBuffer*,$Point*)>(&SunWritableRaster::init$))},
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBuffer;Ljava/awt/Rectangle;Ljava/awt/Point;Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC, $method(static_cast<void(SunWritableRaster::*)($SampleModel*,$DataBuffer*,$Rectangle*,$Point*,$WritableRaster*)>(&SunWritableRaster::init$))},
	{"makeTrackable", "(Ljava/awt/image/DataBuffer;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($DataBuffer*)>(&SunWritableRaster::makeTrackable))},
	{"markDirty", "(Ljava/awt/image/DataBuffer;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($DataBuffer*)>(&SunWritableRaster::markDirty))},
	{"markDirty", "(Ljava/awt/image/WritableRaster;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($WritableRaster*)>(&SunWritableRaster::markDirty))},
	{"markDirty", "(Ljava/awt/Image;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Image*)>(&SunWritableRaster::markDirty))},
	{"markDirty", "()V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(SunWritableRaster::*)()>(&SunWritableRaster::markDirty))},
	{"setDataStealer", "(Lsun/awt/image/SunWritableRaster$DataStealer;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($SunWritableRaster$DataStealer*)>(&SunWritableRaster::setDataStealer))},
	{"setTrackable", "(Ljava/awt/image/DataBuffer;Lsun/java2d/StateTrackableDelegate;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($DataBuffer*,$StateTrackableDelegate*)>(&SunWritableRaster::setTrackable))},
	{"stealData", "(Ljava/awt/image/DataBufferByte;I)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($DataBufferByte*,int32_t)>(&SunWritableRaster::stealData))},
	{"stealData", "(Ljava/awt/image/DataBufferUShort;I)[S", nullptr, $PUBLIC | $STATIC, $method(static_cast<$shorts*(*)($DataBufferUShort*,int32_t)>(&SunWritableRaster::stealData))},
	{"stealData", "(Ljava/awt/image/DataBufferInt;I)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)($DataBufferInt*,int32_t)>(&SunWritableRaster::stealData))},
	{"stealTrackable", "(Ljava/awt/image/DataBuffer;)Lsun/java2d/StateTrackableDelegate;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StateTrackableDelegate*(*)($DataBuffer*)>(&SunWritableRaster::stealTrackable))},
	{}
};

$InnerClassInfo _SunWritableRaster_InnerClassesInfo_[] = {
	{"sun.awt.image.SunWritableRaster$DataStealer", "sun.awt.image.SunWritableRaster", "DataStealer", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SunWritableRaster_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.SunWritableRaster",
	"java.awt.image.WritableRaster",
	nullptr,
	_SunWritableRaster_FieldInfo_,
	_SunWritableRaster_MethodInfo_,
	nullptr,
	nullptr,
	_SunWritableRaster_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.image.SunWritableRaster$DataStealer"
};

$Object* allocate$SunWritableRaster($Class* clazz) {
	return $of($alloc(SunWritableRaster));
}

$SunWritableRaster$DataStealer* SunWritableRaster::stealer = nullptr;

void SunWritableRaster::setDataStealer($SunWritableRaster$DataStealer* ds) {
	$init(SunWritableRaster);
	if (SunWritableRaster::stealer != nullptr) {
		$throwNew($InternalError, "Attempt to set DataStealer twice"_s);
	}
	$assignStatic(SunWritableRaster::stealer, ds);
}

$bytes* SunWritableRaster::stealData($DataBufferByte* dbb, int32_t bank) {
	$init(SunWritableRaster);
	return $nc(SunWritableRaster::stealer)->getData(dbb, bank);
}

$shorts* SunWritableRaster::stealData($DataBufferUShort* dbus, int32_t bank) {
	$init(SunWritableRaster);
	return $nc(SunWritableRaster::stealer)->getData(dbus, bank);
}

$ints* SunWritableRaster::stealData($DataBufferInt* dbi, int32_t bank) {
	$init(SunWritableRaster);
	return $nc(SunWritableRaster::stealer)->getData(dbi, bank);
}

$StateTrackableDelegate* SunWritableRaster::stealTrackable($DataBuffer* db) {
	$init(SunWritableRaster);
	return $nc(SunWritableRaster::stealer)->getTrackable(db);
}

void SunWritableRaster::setTrackable($DataBuffer* db, $StateTrackableDelegate* trackable) {
	$init(SunWritableRaster);
	$nc(SunWritableRaster::stealer)->setTrackable(db, trackable);
}

void SunWritableRaster::makeTrackable($DataBuffer* db) {
	$init(SunWritableRaster);
	$init($StateTrackable$State);
	$nc(SunWritableRaster::stealer)->setTrackable(db, $($StateTrackableDelegate::createInstance($StateTrackable$State::STABLE)));
}

void SunWritableRaster::markDirty($DataBuffer* db) {
	$init(SunWritableRaster);
	$nc($($nc(SunWritableRaster::stealer)->getTrackable(db)))->markDirty();
}

void SunWritableRaster::markDirty($WritableRaster* wr) {
	$init(SunWritableRaster);
	if ($instanceOf(SunWritableRaster, wr)) {
		$nc(($cast(SunWritableRaster, wr)))->markDirty();
	} else {
		markDirty($($nc(wr)->getDataBuffer()));
	}
}

void SunWritableRaster::markDirty($Image* img) {
	$init(SunWritableRaster);
	$nc($($SurfaceData::getPrimarySurfaceData(img)))->markDirty();
}

void SunWritableRaster::init$($SampleModel* sampleModel, $Point* origin) {
	$WritableRaster::init$(sampleModel, origin);
	$set(this, theTrackable, stealTrackable(this->dataBuffer));
}

void SunWritableRaster::init$($SampleModel* sampleModel, $DataBuffer* dataBuffer, $Point* origin) {
	$WritableRaster::init$(sampleModel, dataBuffer, origin);
	$set(this, theTrackable, stealTrackable(dataBuffer));
}

void SunWritableRaster::init$($SampleModel* sampleModel, $DataBuffer* dataBuffer, $Rectangle* aRegion, $Point* sampleModelTranslate, $WritableRaster* parent) {
	$WritableRaster::init$(sampleModel, dataBuffer, aRegion, sampleModelTranslate, parent);
	$set(this, theTrackable, stealTrackable(dataBuffer));
}

void SunWritableRaster::markDirty() {
	$nc(this->theTrackable)->markDirty();
}

SunWritableRaster::SunWritableRaster() {
}

$Class* SunWritableRaster::load$($String* name, bool initialize) {
	$loadClass(SunWritableRaster, name, initialize, &_SunWritableRaster_ClassInfo_, allocate$SunWritableRaster);
	return class$;
}

$Class* SunWritableRaster::class$ = nullptr;

		} // image
	} // awt
} // sun