#include <sun/awt/image/PixelConverter.h>

#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TYPE_BYTE
#undef TYPE_INT
#undef TYPE_SHORT
#undef TYPE_USHORT

using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _PixelConverter_FieldInfo_[] = {
	{"instance", "Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PixelConverter, instance)},
	{"alphaMask", "I", nullptr, $PROTECTED, $field(PixelConverter, alphaMask)},
	{}
};

$MethodInfo _PixelConverter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(PixelConverter::*)()>(&PixelConverter::init$))},
	{"getAlphaMask", "()I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(PixelConverter::*)()>(&PixelConverter::getAlphaMask))},
	{"pixelToRgb", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{"rgbToPixel", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PixelConverter_InnerClassesInfo_[] = {
	{"sun.awt.image.PixelConverter$UshortGray", "sun.awt.image.PixelConverter", "UshortGray", $PUBLIC | $STATIC},
	{"sun.awt.image.PixelConverter$ByteGray", "sun.awt.image.PixelConverter", "ByteGray", $PUBLIC | $STATIC},
	{"sun.awt.image.PixelConverter$ArgbBm", "sun.awt.image.PixelConverter", "ArgbBm", $PUBLIC | $STATIC},
	{"sun.awt.image.PixelConverter$ArgbPre", "sun.awt.image.PixelConverter", "ArgbPre", $PUBLIC | $STATIC},
	{"sun.awt.image.PixelConverter$RgbaPre", "sun.awt.image.PixelConverter", "RgbaPre", $PUBLIC | $STATIC},
	{"sun.awt.image.PixelConverter$Rgba", "sun.awt.image.PixelConverter", "Rgba", $PUBLIC | $STATIC},
	{"sun.awt.image.PixelConverter$Bgrx", "sun.awt.image.PixelConverter", "Bgrx", $PUBLIC | $STATIC},
	{"sun.awt.image.PixelConverter$Xbgr", "sun.awt.image.PixelConverter", "Xbgr", $PUBLIC | $STATIC},
	{"sun.awt.image.PixelConverter$Ushort4444Argb", "sun.awt.image.PixelConverter", "Ushort4444Argb", $PUBLIC | $STATIC},
	{"sun.awt.image.PixelConverter$Ushort555Rgb", "sun.awt.image.PixelConverter", "Ushort555Rgb", $PUBLIC | $STATIC},
	{"sun.awt.image.PixelConverter$Ushort555Rgbx", "sun.awt.image.PixelConverter", "Ushort555Rgbx", $PUBLIC | $STATIC},
	{"sun.awt.image.PixelConverter$Ushort565Rgb", "sun.awt.image.PixelConverter", "Ushort565Rgb", $PUBLIC | $STATIC},
	{"sun.awt.image.PixelConverter$Argb", "sun.awt.image.PixelConverter", "Argb", $PUBLIC | $STATIC},
	{"sun.awt.image.PixelConverter$Xrgb", "sun.awt.image.PixelConverter", "Xrgb", $PUBLIC | $STATIC},
	{"sun.awt.image.PixelConverter$Rgbx", "sun.awt.image.PixelConverter", "Rgbx", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _PixelConverter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.image.PixelConverter",
	"java.lang.Object",
	nullptr,
	_PixelConverter_FieldInfo_,
	_PixelConverter_MethodInfo_,
	nullptr,
	nullptr,
	_PixelConverter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.image.PixelConverter$UshortGray,sun.awt.image.PixelConverter$ByteGray,sun.awt.image.PixelConverter$ArgbBm,sun.awt.image.PixelConverter$ArgbPre,sun.awt.image.PixelConverter$RgbaPre,sun.awt.image.PixelConverter$Rgba,sun.awt.image.PixelConverter$Bgrx,sun.awt.image.PixelConverter$Xbgr,sun.awt.image.PixelConverter$Ushort4444Argb,sun.awt.image.PixelConverter$Ushort555Rgb,sun.awt.image.PixelConverter$Ushort555Rgbx,sun.awt.image.PixelConverter$Ushort565Rgb,sun.awt.image.PixelConverter$Argb,sun.awt.image.PixelConverter$Xrgb,sun.awt.image.PixelConverter$Rgbx"
};

$Object* allocate$PixelConverter($Class* clazz) {
	return $of($alloc(PixelConverter));
}


PixelConverter* PixelConverter::instance = nullptr;

void PixelConverter::init$() {
	this->alphaMask = 0;
}

int32_t PixelConverter::rgbToPixel(int32_t rgb, $ColorModel* cm) {
	$useLocalCurrentObjectStackCache();
	$var($Object, obj, $nc(cm)->getDataElements(rgb, nullptr));
	{
		$var($bytes, bytearr, nullptr)
		int32_t pix = 0;
		$var($shorts, shortarr, nullptr)
		switch (cm->getTransferType()) {
		case $DataBuffer::TYPE_BYTE:
			{
				$assign(bytearr, $cast($bytes, obj));
				pix = 0;
				switch ($nc(bytearr)->length) {
				default:
					{
						pix = bytearr->get(3) << 24;
					}
				case 3:
					{
						pix |= ((int32_t)(bytearr->get(2) & (uint32_t)255)) << 16;
					}
				case 2:
					{
						pix |= ((int32_t)(bytearr->get(1) & (uint32_t)255)) << 8;
					}
				case 1:
					{
						pix |= ((int32_t)(bytearr->get(0) & (uint32_t)255));
					}
				}
				return pix;
			}
		case $DataBuffer::TYPE_SHORT:
			{}
		case $DataBuffer::TYPE_USHORT:
			{
				$assign(shortarr, $cast($shorts, obj));
				return ((($nc(shortarr)->length > 1) ? $nc(shortarr)->get(1) << 16 : 0) | ((int32_t)(shortarr->get(0) & (uint32_t)0x0000FFFF)));
			}
		case $DataBuffer::TYPE_INT:
			{
				return $nc(($cast($ints, obj)))->get(0);
			}
		default:
			{
				return rgb;
			}
		}
	}
}

int32_t PixelConverter::pixelToRgb(int32_t pixel, $ColorModel* cm) {
	return pixel;
}

int32_t PixelConverter::getAlphaMask() {
	return this->alphaMask;
}

void clinit$PixelConverter($Class* class$) {
	$assignStatic(PixelConverter::instance, $new(PixelConverter));
}

PixelConverter::PixelConverter() {
}

$Class* PixelConverter::load$($String* name, bool initialize) {
	$loadClass(PixelConverter, name, initialize, &_PixelConverter_ClassInfo_, clinit$PixelConverter, allocate$PixelConverter);
	return class$;
}

$Class* PixelConverter::class$ = nullptr;

		} // image
	} // awt
} // sun