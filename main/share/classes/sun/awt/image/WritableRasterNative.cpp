#include <sun/awt/image/WritableRasterNative.h>

#include <java/awt/Point.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DirectColorModel.h>
#include <java/awt/image/PixelInterleavedSampleModel.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/SinglePixelPackedSampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/InternalError.h>
#include <sun/awt/image/DataBufferNative.h>
#include <sun/java2d/SurfaceData.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_INT
#undef TYPE_USHORT

using $Point = ::java::awt::Point;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DirectColorModel = ::java::awt::image::DirectColorModel;
using $PixelInterleavedSampleModel = ::java::awt::image::PixelInterleavedSampleModel;
using $SampleModel = ::java::awt::image::SampleModel;
using $SinglePixelPackedSampleModel = ::java::awt::image::SinglePixelPackedSampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $DataBufferNative = ::sun::awt::image::DataBufferNative;
using $SurfaceData = ::sun::java2d::SurfaceData;

namespace sun {
	namespace awt {
		namespace image {

$MethodInfo _WritableRasterNative_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBuffer;)V", nullptr, $PROTECTED, $method(static_cast<void(WritableRasterNative::*)($SampleModel*,$DataBuffer*)>(&WritableRasterNative::init$))},
	{"createNativeRaster", "(Ljava/awt/image/SampleModel;Ljava/awt/image/DataBuffer;)Lsun/awt/image/WritableRasterNative;", nullptr, $PUBLIC | $STATIC, $method(static_cast<WritableRasterNative*(*)($SampleModel*,$DataBuffer*)>(&WritableRasterNative::createNativeRaster))},
	{"createNativeRaster", "(Ljava/awt/image/ColorModel;Lsun/java2d/SurfaceData;II)Lsun/awt/image/WritableRasterNative;", nullptr, $PUBLIC | $STATIC, $method(static_cast<WritableRasterNative*(*)($ColorModel*,$SurfaceData*,int32_t,int32_t)>(&WritableRasterNative::createNativeRaster))},
	{}
};

$ClassInfo _WritableRasterNative_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.WritableRasterNative",
	"java.awt.image.WritableRaster",
	nullptr,
	nullptr,
	_WritableRasterNative_MethodInfo_
};

$Object* allocate$WritableRasterNative($Class* clazz) {
	return $of($alloc(WritableRasterNative));
}

WritableRasterNative* WritableRasterNative::createNativeRaster($SampleModel* sm, $DataBuffer* db) {
	$init(WritableRasterNative);
	return $new(WritableRasterNative, sm, db);
}

void WritableRasterNative::init$($SampleModel* sm, $DataBuffer* db) {
	$WritableRaster::init$(sm, db, $$new($Point, 0, 0));
}

WritableRasterNative* WritableRasterNative::createNativeRaster($ColorModel* cm, $SurfaceData* sd, int32_t width, int32_t height) {
	$init(WritableRasterNative);
	$useLocalCurrentObjectStackCache();
	$var($SampleModel, smHw, nullptr);
	int32_t dataType = 0;
	int32_t scanStride = width;
	{
		$var($ints, bandOffsets, nullptr)
		$var($ints, bitMasks, nullptr)
		$var($DirectColorModel, dcm, nullptr)
		switch ($nc(cm)->getPixelSize()) {
		case 8:
			{}
		case 12:
			{
				if (cm->getPixelSize() == 8) {
					dataType = $DataBuffer::TYPE_BYTE;
				} else {
					dataType = $DataBuffer::TYPE_USHORT;
				}
				$assign(bandOffsets, $new($ints, 1));
				$nc(bandOffsets)->set(0, 0);
				$assign(smHw, $new($PixelInterleavedSampleModel, dataType, width, height, 1, scanStride, bandOffsets));
				break;
			}
		case 15:
			{}
		case 16:
			{
				dataType = $DataBuffer::TYPE_USHORT;
				$assign(bitMasks, $new($ints, 3));
				$assign(dcm, $cast($DirectColorModel, cm));
				$nc(bitMasks)->set(0, $nc(dcm)->getRedMask());
				$nc(bitMasks)->set(1, $nc(dcm)->getGreenMask());
				$nc(bitMasks)->set(2, $nc(dcm)->getBlueMask());
				$assign(smHw, $new($SinglePixelPackedSampleModel, dataType, width, height, scanStride, bitMasks));
				break;
			}
		case 24:
			{}
		case 32:
			{
				dataType = $DataBuffer::TYPE_INT;
				$assign(bitMasks, $new($ints, 3));
				$assign(dcm, $cast($DirectColorModel, cm));
				$nc(bitMasks)->set(0, $nc(dcm)->getRedMask());
				$nc(bitMasks)->set(1, $nc(dcm)->getGreenMask());
				$nc(bitMasks)->set(2, $nc(dcm)->getBlueMask());
				$assign(smHw, $new($SinglePixelPackedSampleModel, dataType, width, height, scanStride, bitMasks));
				break;
			}
		default:
			{
				$throwNew($InternalError, $$str({"Unsupported depth "_s, $$str(cm->getPixelSize())}));
			}
		}
	}
	$var($DataBuffer, dbn, $new($DataBufferNative, sd, dataType, width, height));
	return $new(WritableRasterNative, smHw, dbn);
}

WritableRasterNative::WritableRasterNative() {
}

$Class* WritableRasterNative::load$($String* name, bool initialize) {
	$loadClass(WritableRasterNative, name, initialize, &_WritableRasterNative_ClassInfo_, allocate$WritableRasterNative);
	return class$;
}

$Class* WritableRasterNative::class$ = nullptr;

		} // image
	} // awt
} // sun