#include <sun/java2d/IntegerNIORaster.h>

#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/RasterFormatException.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/nio/IntBuffer.h>
#include <sun/awt/image/SunWritableRaster.h>
#include <sun/java2d/DataBufferNIOInt.h>
#include <jcpp.h>

#undef TYPE_INT

using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $RasterFormatException = ::java::awt::image::RasterFormatException;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $IntBuffer = ::java::nio::IntBuffer;
using $SunWritableRaster = ::sun::awt::image::SunWritableRaster;
using $DataBufferNIOInt = ::sun::java2d::DataBufferNIOInt;

namespace sun {
	namespace java2d {

$FieldInfo _IntegerNIORaster_FieldInfo_[] = {
	{"data", "Ljava/nio/IntBuffer;", nullptr, $PROTECTED, $field(IntegerNIORaster, data)},
	{}
};

$MethodInfo _IntegerNIORaster_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/SampleModel;Lsun/java2d/DataBufferNIOInt;Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(static_cast<void(IntegerNIORaster::*)($SampleModel*,$DataBufferNIOInt*,$Point*)>(&IntegerNIORaster::init$))},
	{"createCompatibleWritableRaster", "()Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "(II)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "(Ljava/awt/Rectangle;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createCompatibleWritableRaster", "(IIII)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC},
	{"createNIORaster", "(II[ILjava/awt/Point;)Ljava/awt/image/WritableRaster;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$WritableRaster*(*)(int32_t,int32_t,$ints*,$Point*)>(&IntegerNIORaster::createNIORaster))},
	{"getBuffer", "()Ljava/nio/IntBuffer;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IntegerNIORaster_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.IntegerNIORaster",
	"sun.awt.image.SunWritableRaster",
	nullptr,
	_IntegerNIORaster_FieldInfo_,
	_IntegerNIORaster_MethodInfo_
};

$Object* allocate$IntegerNIORaster($Class* clazz) {
	return $of($alloc(IntegerNIORaster));
}

$WritableRaster* IntegerNIORaster::createNIORaster(int32_t w, int32_t h, $ints* bandMasks, $Point* location$renamed) {
	$init(IntegerNIORaster);
	$useLocalCurrentObjectStackCache();
	$var($Point, location, location$renamed);
	if ((w <= 0) || (h <= 0)) {
		$throwNew($IllegalArgumentException, $$str({"Width ("_s, $$str(w), ") and height ("_s, $$str(h), ") cannot be <= 0"_s}));
	}
	$var($DataBufferNIOInt, db, $new($DataBufferNIOInt, w * h));
	if (location == nullptr) {
		$assign(location, $new($Point, 0, 0));
	}
	$var($SinglePixelPackedSampleModel, sppsm, $new($SinglePixelPackedSampleModel, $DataBuffer::TYPE_INT, w, h, w, bandMasks));
	return $new(IntegerNIORaster, sppsm, db, location);
}

void IntegerNIORaster::init$($SampleModel* sampleModel, $DataBufferNIOInt* dataBuffer, $Point* origin) {
	int32_t var$0 = $nc(origin)->x;
	int32_t var$1 = origin->y;
	int32_t var$2 = $nc(sampleModel)->getWidth();
	$SunWritableRaster::init$(sampleModel, dataBuffer, $$new($Rectangle, var$0, var$1, var$2, sampleModel->getHeight()), origin, nullptr);
	$set(this, data, $nc(dataBuffer)->getBuffer());
}

$WritableRaster* IntegerNIORaster::createCompatibleWritableRaster() {
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, var$0, this->sampleModel);
	int32_t var$2 = $nc(this->sampleModel)->getWidth();
	$var($DataBufferNIOInt, var$1, $new($DataBufferNIOInt, var$2 * $nc(this->sampleModel)->getHeight()));
	return $new(IntegerNIORaster, var$0, var$1, $$new($Point, 0, 0));
}

$WritableRaster* IntegerNIORaster::createCompatibleWritableRaster(int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (w <= 0 || h <= 0) {
		$throwNew($RasterFormatException, $$str({"negative "_s, ((w <= 0) ? "width"_s : "height"_s)}));
	}
	$var($SampleModel, sm, $nc(this->sampleModel)->createCompatibleSampleModel(w, h));
	$var($SampleModel, var$0, sm);
	$var($DataBufferNIOInt, var$1, $new($DataBufferNIOInt, w * h));
	return $new(IntegerNIORaster, var$0, var$1, $$new($Point, 0, 0));
}

$WritableRaster* IntegerNIORaster::createCompatibleWritableRaster($Rectangle* rect) {
	if (rect == nullptr) {
		$throwNew($NullPointerException, "Rect cannot be null"_s);
	}
	return createCompatibleWritableRaster($nc(rect)->x, rect->y, rect->width, rect->height);
}

$WritableRaster* IntegerNIORaster::createCompatibleWritableRaster(int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($WritableRaster, ret, createCompatibleWritableRaster(w, h));
	return $nc(ret)->createWritableChild(0, 0, w, h, x, y, nullptr);
}

$IntBuffer* IntegerNIORaster::getBuffer() {
	return this->data;
}

$String* IntegerNIORaster::toString() {
	$useLocalCurrentObjectStackCache();
	return $new($String, $$str({"IntegerNIORaster: width = "_s, $$str(this->width), " height = "_s, $$str(this->height), " #Bands = "_s, $$str(this->numBands), " xOff = "_s, $$str(this->sampleModelTranslateX), " yOff = "_s, $$str(this->sampleModelTranslateY)}));
}

IntegerNIORaster::IntegerNIORaster() {
}

$Class* IntegerNIORaster::load$($String* name, bool initialize) {
	$loadClass(IntegerNIORaster, name, initialize, &_IntegerNIORaster_ClassInfo_, allocate$IntegerNIORaster);
	return class$;
}

$Class* IntegerNIORaster::class$ = nullptr;

	} // java2d
} // sun