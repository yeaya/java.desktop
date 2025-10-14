#include <sun/java2d/loops/SurfaceType.h>

#include <java/awt/image/ColorModel.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/HashMap.h>
#include <sun/awt/image/PixelConverter$Argb.h>
#include <sun/awt/image/PixelConverter$ArgbBm.h>
#include <sun/awt/image/PixelConverter$ArgbPre.h>
#include <sun/awt/image/PixelConverter$Bgrx.h>
#include <sun/awt/image/PixelConverter$ByteGray.h>
#include <sun/awt/image/PixelConverter$Rgba.h>
#include <sun/awt/image/PixelConverter$RgbaPre.h>
#include <sun/awt/image/PixelConverter$Rgbx.h>
#include <sun/awt/image/PixelConverter$Ushort4444Argb.h>
#include <sun/awt/image/PixelConverter$Ushort555Rgb.h>
#include <sun/awt/image/PixelConverter$Ushort555Rgbx.h>
#include <sun/awt/image/PixelConverter$Ushort565Rgb.h>
#include <sun/awt/image/PixelConverter$UshortGray.h>
#include <sun/awt/image/PixelConverter$Xbgr.h>
#include <sun/awt/image/PixelConverter$Xrgb.h>
#include <sun/awt/image/PixelConverter.h>
#include <jcpp.h>

#undef DESC_3BYTE_BGR
#undef DESC_3BYTE_RGB
#undef DESC_4BYTE_ABGR
#undef DESC_4BYTE_ABGR_PRE
#undef DESC_ANY
#undef DESC_ANY_3BYTE
#undef DESC_ANY_4BYTE
#undef DESC_ANY_BYTE
#undef DESC_ANY_COLOR
#undef DESC_ANY_INT
#undef DESC_ANY_INT_DCM
#undef DESC_ANY_PAINT
#undef DESC_ANY_SHORT
#undef DESC_BYTE_BINARY
#undef DESC_BYTE_BINARY_1BIT
#undef DESC_BYTE_BINARY_2BIT
#undef DESC_BYTE_BINARY_4BIT
#undef DESC_BYTE_GRAY
#undef DESC_BYTE_INDEXED
#undef DESC_BYTE_INDEXED_BM
#undef DESC_BYTE_INDEXED_OPAQUE
#undef DESC_GRADIENT_PAINT
#undef DESC_INDEX12_GRAY
#undef DESC_INDEX8_GRAY
#undef DESC_INT_ARGB
#undef DESC_INT_ARGB_BM
#undef DESC_INT_ARGB_PRE
#undef DESC_INT_BGR
#undef DESC_INT_RGB
#undef DESC_LINEAR_GRADIENT_PAINT
#undef DESC_OPAQUE_COLOR
#undef DESC_OPAQUE_GRADIENT_PAINT
#undef DESC_OPAQUE_LINEAR_GRADIENT_PAINT
#undef DESC_OPAQUE_RADIAL_GRADIENT_PAINT
#undef DESC_OPAQUE_TEXTURE_PAINT
#undef DESC_RADIAL_GRADIENT_PAINT
#undef DESC_TEXTURE_PAINT
#undef DESC_USHORT_555_RGB
#undef DESC_USHORT_565_RGB
#undef DESC_USHORT_GRAY
#undef DESC_USHORT_INDEXED

using $ColorModel = ::java::awt::image::ColorModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $PixelConverter = ::sun::awt::image::PixelConverter;
using $PixelConverter$Argb = ::sun::awt::image::PixelConverter$Argb;
using $PixelConverter$ArgbBm = ::sun::awt::image::PixelConverter$ArgbBm;
using $PixelConverter$ArgbPre = ::sun::awt::image::PixelConverter$ArgbPre;
using $PixelConverter$Bgrx = ::sun::awt::image::PixelConverter$Bgrx;
using $PixelConverter$ByteGray = ::sun::awt::image::PixelConverter$ByteGray;
using $PixelConverter$Rgba = ::sun::awt::image::PixelConverter$Rgba;
using $PixelConverter$RgbaPre = ::sun::awt::image::PixelConverter$RgbaPre;
using $PixelConverter$Rgbx = ::sun::awt::image::PixelConverter$Rgbx;
using $PixelConverter$Ushort4444Argb = ::sun::awt::image::PixelConverter$Ushort4444Argb;
using $PixelConverter$Ushort555Rgb = ::sun::awt::image::PixelConverter$Ushort555Rgb;
using $PixelConverter$Ushort555Rgbx = ::sun::awt::image::PixelConverter$Ushort555Rgbx;
using $PixelConverter$Ushort565Rgb = ::sun::awt::image::PixelConverter$Ushort565Rgb;
using $PixelConverter$UshortGray = ::sun::awt::image::PixelConverter$UshortGray;
using $PixelConverter$Xbgr = ::sun::awt::image::PixelConverter$Xbgr;
using $PixelConverter$Xrgb = ::sun::awt::image::PixelConverter$Xrgb;

namespace sun {
	namespace java2d {
		namespace loops {

$FieldInfo _SurfaceType_FieldInfo_[] = {
	{"unusedUID", "I", nullptr, $PRIVATE | $STATIC, $staticField(SurfaceType, unusedUID)},
	{"surfaceUIDMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC, $staticField(SurfaceType, surfaceUIDMap)},
	{"DESC_ANY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_ANY)},
	{"DESC_INT_RGB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_INT_RGB)},
	{"DESC_INT_ARGB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_INT_ARGB)},
	{"DESC_INT_ARGB_PRE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_INT_ARGB_PRE)},
	{"DESC_INT_BGR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_INT_BGR)},
	{"DESC_3BYTE_BGR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_3BYTE_BGR)},
	{"DESC_4BYTE_ABGR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_4BYTE_ABGR)},
	{"DESC_4BYTE_ABGR_PRE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_4BYTE_ABGR_PRE)},
	{"DESC_USHORT_565_RGB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_USHORT_565_RGB)},
	{"DESC_USHORT_555_RGB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_USHORT_555_RGB)},
	{"DESC_USHORT_555_RGBx", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_USHORT_555_RGBx)},
	{"DESC_USHORT_4444_ARGB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_USHORT_4444_ARGB)},
	{"DESC_BYTE_GRAY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_BYTE_GRAY)},
	{"DESC_USHORT_INDEXED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_USHORT_INDEXED)},
	{"DESC_USHORT_GRAY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_USHORT_GRAY)},
	{"DESC_BYTE_BINARY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_BYTE_BINARY)},
	{"DESC_BYTE_INDEXED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_BYTE_INDEXED)},
	{"DESC_ANY_INT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_ANY_INT)},
	{"DESC_ANY_SHORT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_ANY_SHORT)},
	{"DESC_ANY_BYTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_ANY_BYTE)},
	{"DESC_ANY_3BYTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_ANY_3BYTE)},
	{"DESC_ANY_4BYTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_ANY_4BYTE)},
	{"DESC_ANY_INT_DCM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_ANY_INT_DCM)},
	{"DESC_INT_RGBx", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_INT_RGBx)},
	{"DESC_INT_BGRx", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_INT_BGRx)},
	{"DESC_3BYTE_RGB", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_3BYTE_RGB)},
	{"DESC_INT_ARGB_BM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_INT_ARGB_BM)},
	{"DESC_BYTE_INDEXED_BM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_BYTE_INDEXED_BM)},
	{"DESC_BYTE_INDEXED_OPAQUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_BYTE_INDEXED_OPAQUE)},
	{"DESC_INDEX8_GRAY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_INDEX8_GRAY)},
	{"DESC_INDEX12_GRAY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_INDEX12_GRAY)},
	{"DESC_BYTE_BINARY_1BIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_BYTE_BINARY_1BIT)},
	{"DESC_BYTE_BINARY_2BIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_BYTE_BINARY_2BIT)},
	{"DESC_BYTE_BINARY_4BIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_BYTE_BINARY_4BIT)},
	{"DESC_ANY_PAINT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_ANY_PAINT)},
	{"DESC_ANY_COLOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_ANY_COLOR)},
	{"DESC_OPAQUE_COLOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_OPAQUE_COLOR)},
	{"DESC_GRADIENT_PAINT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_GRADIENT_PAINT)},
	{"DESC_OPAQUE_GRADIENT_PAINT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_OPAQUE_GRADIENT_PAINT)},
	{"DESC_TEXTURE_PAINT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_TEXTURE_PAINT)},
	{"DESC_OPAQUE_TEXTURE_PAINT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_OPAQUE_TEXTURE_PAINT)},
	{"DESC_LINEAR_GRADIENT_PAINT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_LINEAR_GRADIENT_PAINT)},
	{"DESC_OPAQUE_LINEAR_GRADIENT_PAINT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_OPAQUE_LINEAR_GRADIENT_PAINT)},
	{"DESC_RADIAL_GRADIENT_PAINT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_RADIAL_GRADIENT_PAINT)},
	{"DESC_OPAQUE_RADIAL_GRADIENT_PAINT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, DESC_OPAQUE_RADIAL_GRADIENT_PAINT)},
	{"Any", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, Any)},
	{"AnyInt", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, AnyInt)},
	{"AnyShort", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, AnyShort)},
	{"AnyByte", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, AnyByte)},
	{"AnyByteBinary", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, AnyByteBinary)},
	{"Any3Byte", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, Any3Byte)},
	{"Any4Byte", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, Any4Byte)},
	{"AnyDcm", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, AnyDcm)},
	{"Custom", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, Custom)},
	{"IntRgb", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, IntRgb)},
	{"IntArgb", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, IntArgb)},
	{"IntArgbPre", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, IntArgbPre)},
	{"IntBgr", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, IntBgr)},
	{"ThreeByteBgr", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, ThreeByteBgr)},
	{"FourByteAbgr", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, FourByteAbgr)},
	{"FourByteAbgrPre", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, FourByteAbgrPre)},
	{"Ushort565Rgb", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, Ushort565Rgb)},
	{"Ushort555Rgb", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, Ushort555Rgb)},
	{"Ushort555Rgbx", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, Ushort555Rgbx)},
	{"Ushort4444Argb", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, Ushort4444Argb)},
	{"UshortIndexed", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, UshortIndexed)},
	{"ByteGray", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, ByteGray)},
	{"UshortGray", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, UshortGray)},
	{"ByteBinary1Bit", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, ByteBinary1Bit)},
	{"ByteBinary2Bit", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, ByteBinary2Bit)},
	{"ByteBinary4Bit", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, ByteBinary4Bit)},
	{"ByteIndexed", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, ByteIndexed)},
	{"IntRgbx", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, IntRgbx)},
	{"IntBgrx", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, IntBgrx)},
	{"ThreeByteRgb", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, ThreeByteRgb)},
	{"IntArgbBm", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, IntArgbBm)},
	{"ByteIndexedBm", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, ByteIndexedBm)},
	{"ByteIndexedOpaque", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, ByteIndexedOpaque)},
	{"Index8Gray", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, Index8Gray)},
	{"Index12Gray", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, Index12Gray)},
	{"AnyPaint", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, AnyPaint)},
	{"AnyColor", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, AnyColor)},
	{"OpaqueColor", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, OpaqueColor)},
	{"GradientPaint", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, GradientPaint)},
	{"OpaqueGradientPaint", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, OpaqueGradientPaint)},
	{"LinearGradientPaint", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, LinearGradientPaint)},
	{"OpaqueLinearGradientPaint", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, OpaqueLinearGradientPaint)},
	{"RadialGradientPaint", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, RadialGradientPaint)},
	{"OpaqueRadialGradientPaint", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, OpaqueRadialGradientPaint)},
	{"TexturePaint", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, TexturePaint)},
	{"OpaqueTexturePaint", "Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SurfaceType, OpaqueTexturePaint)},
	{"uniqueID", "I", nullptr, $PRIVATE, $field(SurfaceType, uniqueID)},
	{"desc", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SurfaceType, desc)},
	{"next", "Lsun/java2d/loops/SurfaceType;", nullptr, $PRIVATE, $field(SurfaceType, next)},
	{"pixelConverter", "Lsun/awt/image/PixelConverter;", nullptr, $PROTECTED, $field(SurfaceType, pixelConverter)},
	{}
};

$MethodInfo _SurfaceType_MethodInfo_[] = {
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Ljava/lang/String;Lsun/awt/image/PixelConverter;)V", nullptr, $PRIVATE, $method(static_cast<void(SurfaceType::*)(SurfaceType*,$String*,$PixelConverter*)>(&SurfaceType::init$))},
	{"<init>", "(Lsun/java2d/loops/SurfaceType;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(SurfaceType::*)(SurfaceType*,$String*)>(&SurfaceType::init$))},
	{"deriveSubType", "(Ljava/lang/String;)Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC, $method(static_cast<SurfaceType*(SurfaceType::*)($String*)>(&SurfaceType::deriveSubType))},
	{"deriveSubType", "(Ljava/lang/String;Lsun/awt/image/PixelConverter;)Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC, $method(static_cast<SurfaceType*(SurfaceType::*)($String*,$PixelConverter*)>(&SurfaceType::deriveSubType))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAlphaMask", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SurfaceType::*)()>(&SurfaceType::getAlphaMask))},
	{"getDescriptor", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SurfaceType::*)()>(&SurfaceType::getDescriptor))},
	{"getPixelConverter", "()Lsun/awt/image/PixelConverter;", nullptr, $PUBLIC, $method(static_cast<$PixelConverter*(SurfaceType::*)()>(&SurfaceType::getPixelConverter))},
	{"getSuperType", "()Lsun/java2d/loops/SurfaceType;", nullptr, $PUBLIC, $method(static_cast<SurfaceType*(SurfaceType::*)()>(&SurfaceType::getSuperType))},
	{"getUniqueID", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SurfaceType::*)()>(&SurfaceType::getUniqueID))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"makeUniqueID", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<int32_t(*)($String*)>(&SurfaceType::makeUniqueID))},
	{"pixelFor", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(SurfaceType::*)(int32_t,$ColorModel*)>(&SurfaceType::pixelFor))},
	{"rgbFor", "(ILjava/awt/image/ColorModel;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(SurfaceType::*)(int32_t,$ColorModel*)>(&SurfaceType::rgbFor))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SurfaceType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.loops.SurfaceType",
	"java.lang.Object",
	nullptr,
	_SurfaceType_FieldInfo_,
	_SurfaceType_MethodInfo_
};

$Object* allocate$SurfaceType($Class* clazz) {
	return $of($alloc(SurfaceType));
}

int32_t SurfaceType::unusedUID = 0;
$HashMap* SurfaceType::surfaceUIDMap = nullptr;

$String* SurfaceType::DESC_ANY = nullptr;

$String* SurfaceType::DESC_INT_RGB = nullptr;
$String* SurfaceType::DESC_INT_ARGB = nullptr;
$String* SurfaceType::DESC_INT_ARGB_PRE = nullptr;
$String* SurfaceType::DESC_INT_BGR = nullptr;
$String* SurfaceType::DESC_3BYTE_BGR = nullptr;
$String* SurfaceType::DESC_4BYTE_ABGR = nullptr;
$String* SurfaceType::DESC_4BYTE_ABGR_PRE = nullptr;
$String* SurfaceType::DESC_USHORT_565_RGB = nullptr;
$String* SurfaceType::DESC_USHORT_555_RGB = nullptr;
$String* SurfaceType::DESC_USHORT_555_RGBx = nullptr;
$String* SurfaceType::DESC_USHORT_4444_ARGB = nullptr;
$String* SurfaceType::DESC_BYTE_GRAY = nullptr;
$String* SurfaceType::DESC_USHORT_INDEXED = nullptr;
$String* SurfaceType::DESC_USHORT_GRAY = nullptr;
$String* SurfaceType::DESC_BYTE_BINARY = nullptr;
$String* SurfaceType::DESC_BYTE_INDEXED = nullptr;

$String* SurfaceType::DESC_ANY_INT = nullptr;

$String* SurfaceType::DESC_ANY_SHORT = nullptr;

$String* SurfaceType::DESC_ANY_BYTE = nullptr;

$String* SurfaceType::DESC_ANY_3BYTE = nullptr;

$String* SurfaceType::DESC_ANY_4BYTE = nullptr;

$String* SurfaceType::DESC_ANY_INT_DCM = nullptr;

$String* SurfaceType::DESC_INT_RGBx = nullptr;
$String* SurfaceType::DESC_INT_BGRx = nullptr;

$String* SurfaceType::DESC_3BYTE_RGB = nullptr;

$String* SurfaceType::DESC_INT_ARGB_BM = nullptr;
$String* SurfaceType::DESC_BYTE_INDEXED_BM = nullptr;

$String* SurfaceType::DESC_BYTE_INDEXED_OPAQUE = nullptr;

$String* SurfaceType::DESC_INDEX8_GRAY = nullptr;
$String* SurfaceType::DESC_INDEX12_GRAY = nullptr;
$String* SurfaceType::DESC_BYTE_BINARY_1BIT = nullptr;
$String* SurfaceType::DESC_BYTE_BINARY_2BIT = nullptr;
$String* SurfaceType::DESC_BYTE_BINARY_4BIT = nullptr;

$String* SurfaceType::DESC_ANY_PAINT = nullptr;
$String* SurfaceType::DESC_ANY_COLOR = nullptr;
$String* SurfaceType::DESC_OPAQUE_COLOR = nullptr;
$String* SurfaceType::DESC_GRADIENT_PAINT = nullptr;
$String* SurfaceType::DESC_OPAQUE_GRADIENT_PAINT = nullptr;
$String* SurfaceType::DESC_TEXTURE_PAINT = nullptr;
$String* SurfaceType::DESC_OPAQUE_TEXTURE_PAINT = nullptr;
$String* SurfaceType::DESC_LINEAR_GRADIENT_PAINT = nullptr;
$String* SurfaceType::DESC_OPAQUE_LINEAR_GRADIENT_PAINT = nullptr;
$String* SurfaceType::DESC_RADIAL_GRADIENT_PAINT = nullptr;
$String* SurfaceType::DESC_OPAQUE_RADIAL_GRADIENT_PAINT = nullptr;

SurfaceType* SurfaceType::Any = nullptr;
SurfaceType* SurfaceType::AnyInt = nullptr;
SurfaceType* SurfaceType::AnyShort = nullptr;
SurfaceType* SurfaceType::AnyByte = nullptr;
SurfaceType* SurfaceType::AnyByteBinary = nullptr;
SurfaceType* SurfaceType::Any3Byte = nullptr;
SurfaceType* SurfaceType::Any4Byte = nullptr;
SurfaceType* SurfaceType::AnyDcm = nullptr;
SurfaceType* SurfaceType::Custom = nullptr;
SurfaceType* SurfaceType::IntRgb = nullptr;
SurfaceType* SurfaceType::IntArgb = nullptr;
SurfaceType* SurfaceType::IntArgbPre = nullptr;
SurfaceType* SurfaceType::IntBgr = nullptr;
SurfaceType* SurfaceType::ThreeByteBgr = nullptr;
SurfaceType* SurfaceType::FourByteAbgr = nullptr;
SurfaceType* SurfaceType::FourByteAbgrPre = nullptr;
SurfaceType* SurfaceType::Ushort565Rgb = nullptr;
SurfaceType* SurfaceType::Ushort555Rgb = nullptr;
SurfaceType* SurfaceType::Ushort555Rgbx = nullptr;
SurfaceType* SurfaceType::Ushort4444Argb = nullptr;
SurfaceType* SurfaceType::UshortIndexed = nullptr;
SurfaceType* SurfaceType::ByteGray = nullptr;
SurfaceType* SurfaceType::UshortGray = nullptr;
SurfaceType* SurfaceType::ByteBinary1Bit = nullptr;
SurfaceType* SurfaceType::ByteBinary2Bit = nullptr;
SurfaceType* SurfaceType::ByteBinary4Bit = nullptr;
SurfaceType* SurfaceType::ByteIndexed = nullptr;
SurfaceType* SurfaceType::IntRgbx = nullptr;
SurfaceType* SurfaceType::IntBgrx = nullptr;
SurfaceType* SurfaceType::ThreeByteRgb = nullptr;
SurfaceType* SurfaceType::IntArgbBm = nullptr;
SurfaceType* SurfaceType::ByteIndexedBm = nullptr;
SurfaceType* SurfaceType::ByteIndexedOpaque = nullptr;
SurfaceType* SurfaceType::Index8Gray = nullptr;
SurfaceType* SurfaceType::Index12Gray = nullptr;
SurfaceType* SurfaceType::AnyPaint = nullptr;
SurfaceType* SurfaceType::AnyColor = nullptr;
SurfaceType* SurfaceType::OpaqueColor = nullptr;
SurfaceType* SurfaceType::GradientPaint = nullptr;
SurfaceType* SurfaceType::OpaqueGradientPaint = nullptr;
SurfaceType* SurfaceType::LinearGradientPaint = nullptr;
SurfaceType* SurfaceType::OpaqueLinearGradientPaint = nullptr;
SurfaceType* SurfaceType::RadialGradientPaint = nullptr;
SurfaceType* SurfaceType::OpaqueRadialGradientPaint = nullptr;
SurfaceType* SurfaceType::TexturePaint = nullptr;
SurfaceType* SurfaceType::OpaqueTexturePaint = nullptr;

SurfaceType* SurfaceType::deriveSubType($String* desc) {
	return $new(SurfaceType, this, desc);
}

SurfaceType* SurfaceType::deriveSubType($String* desc, $PixelConverter* pixelConverter) {
	return $new(SurfaceType, this, desc, pixelConverter);
}

void SurfaceType::init$(SurfaceType* parent, $String* desc, $PixelConverter* pixelConverter) {
	$set(this, next, parent);
	$set(this, desc, desc);
	this->uniqueID = makeUniqueID(desc);
	$set(this, pixelConverter, pixelConverter);
}

void SurfaceType::init$(SurfaceType* parent, $String* desc) {
	$set(this, next, parent);
	$set(this, desc, desc);
	this->uniqueID = makeUniqueID(desc);
	$set(this, pixelConverter, $nc(parent)->pixelConverter);
}

int32_t SurfaceType::makeUniqueID($String* desc) {
	$load(SurfaceType);
	$synchronized(class$) {
		$init(SurfaceType);
		$var($Integer, i, $cast($Integer, $nc(SurfaceType::surfaceUIDMap)->get(desc)));
		if (i == nullptr) {
			if (SurfaceType::unusedUID > 255) {
				$throwNew($InternalError, "surface type id overflow"_s);
			}
			$assign(i, $Integer::valueOf(SurfaceType::unusedUID++));
			$nc(SurfaceType::surfaceUIDMap)->put(desc, i);
		}
		return $nc(i)->intValue();
	}
}

int32_t SurfaceType::getUniqueID() {
	return this->uniqueID;
}

$String* SurfaceType::getDescriptor() {
	return this->desc;
}

SurfaceType* SurfaceType::getSuperType() {
	return this->next;
}

$PixelConverter* SurfaceType::getPixelConverter() {
	return this->pixelConverter;
}

int32_t SurfaceType::pixelFor(int32_t rgb, $ColorModel* cm) {
	return $nc(this->pixelConverter)->rgbToPixel(rgb, cm);
}

int32_t SurfaceType::rgbFor(int32_t pixel, $ColorModel* cm) {
	return $nc(this->pixelConverter)->pixelToRgb(pixel, cm);
}

int32_t SurfaceType::getAlphaMask() {
	return $nc(this->pixelConverter)->getAlphaMask();
}

int32_t SurfaceType::hashCode() {
	return $nc(this->desc)->hashCode();
}

bool SurfaceType::equals(Object$* o) {
	if ($instanceOf(SurfaceType, o)) {
		return ($nc(($cast(SurfaceType, o)))->uniqueID == this->uniqueID);
	}
	return false;
}

$String* SurfaceType::toString() {
	return this->desc;
}

void clinit$SurfaceType($Class* class$) {
	$assignStatic(SurfaceType::DESC_ANY, "Any Surface"_s);
	$assignStatic(SurfaceType::DESC_INT_RGB, "Integer RGB"_s);
	$assignStatic(SurfaceType::DESC_INT_ARGB, "Integer ARGB"_s);
	$assignStatic(SurfaceType::DESC_INT_ARGB_PRE, "Integer ARGB Premultiplied"_s);
	$assignStatic(SurfaceType::DESC_INT_BGR, "Integer BGR"_s);
	$assignStatic(SurfaceType::DESC_3BYTE_BGR, "3 Byte BGR"_s);
	$assignStatic(SurfaceType::DESC_4BYTE_ABGR, "4 Byte ABGR"_s);
	$assignStatic(SurfaceType::DESC_4BYTE_ABGR_PRE, "4 Byte ABGR Premultiplied"_s);
	$assignStatic(SurfaceType::DESC_USHORT_565_RGB, "Short 565 RGB"_s);
	$assignStatic(SurfaceType::DESC_USHORT_555_RGB, "Short 555 RGB"_s);
	$assignStatic(SurfaceType::DESC_USHORT_555_RGBx, "Short 555 RGBx"_s);
	$assignStatic(SurfaceType::DESC_USHORT_4444_ARGB, "Short 4444 ARGB"_s);
	$assignStatic(SurfaceType::DESC_BYTE_GRAY, "8-bit Gray"_s);
	$assignStatic(SurfaceType::DESC_USHORT_INDEXED, "16-bit Indexed"_s);
	$assignStatic(SurfaceType::DESC_USHORT_GRAY, "16-bit Gray"_s);
	$assignStatic(SurfaceType::DESC_BYTE_BINARY, "Packed Binary Bitmap"_s);
	$assignStatic(SurfaceType::DESC_BYTE_INDEXED, "8-bit Indexed"_s);
	$assignStatic(SurfaceType::DESC_ANY_INT, "Any Discrete Integer"_s);
	$assignStatic(SurfaceType::DESC_ANY_SHORT, "Any Discrete Short"_s);
	$assignStatic(SurfaceType::DESC_ANY_BYTE, "Any Discrete Byte"_s);
	$assignStatic(SurfaceType::DESC_ANY_3BYTE, "Any 3 Byte Component"_s);
	$assignStatic(SurfaceType::DESC_ANY_4BYTE, "Any 4 Byte Component"_s);
	$assignStatic(SurfaceType::DESC_ANY_INT_DCM, "Any Integer DCM"_s);
	$assignStatic(SurfaceType::DESC_INT_RGBx, "Integer RGBx"_s);
	$assignStatic(SurfaceType::DESC_INT_BGRx, "Integer BGRx"_s);
	$assignStatic(SurfaceType::DESC_3BYTE_RGB, "3 Byte RGB"_s);
	$assignStatic(SurfaceType::DESC_INT_ARGB_BM, "Int ARGB (Bitmask)"_s);
	$assignStatic(SurfaceType::DESC_BYTE_INDEXED_BM, "8-bit Indexed (Bitmask)"_s);
	$assignStatic(SurfaceType::DESC_BYTE_INDEXED_OPAQUE, "8-bit Indexed (Opaque)"_s);
	$assignStatic(SurfaceType::DESC_INDEX8_GRAY, "8-bit Palettized Gray"_s);
	$assignStatic(SurfaceType::DESC_INDEX12_GRAY, "12-bit Palettized Gray"_s);
	$assignStatic(SurfaceType::DESC_BYTE_BINARY_1BIT, "Packed Binary 1-bit Bitmap"_s);
	$assignStatic(SurfaceType::DESC_BYTE_BINARY_2BIT, "Packed Binary 2-bit Bitmap"_s);
	$assignStatic(SurfaceType::DESC_BYTE_BINARY_4BIT, "Packed Binary 4-bit Bitmap"_s);
	$assignStatic(SurfaceType::DESC_ANY_PAINT, "Paint Object"_s);
	$assignStatic(SurfaceType::DESC_ANY_COLOR, "Single Color"_s);
	$assignStatic(SurfaceType::DESC_OPAQUE_COLOR, "Opaque Color"_s);
	$assignStatic(SurfaceType::DESC_GRADIENT_PAINT, "Gradient Paint"_s);
	$assignStatic(SurfaceType::DESC_OPAQUE_GRADIENT_PAINT, "Opaque Gradient Paint"_s);
	$assignStatic(SurfaceType::DESC_TEXTURE_PAINT, "Texture Paint"_s);
	$assignStatic(SurfaceType::DESC_OPAQUE_TEXTURE_PAINT, "Opaque Texture Paint"_s);
	$assignStatic(SurfaceType::DESC_LINEAR_GRADIENT_PAINT, "Linear Gradient Paint"_s);
	$assignStatic(SurfaceType::DESC_OPAQUE_LINEAR_GRADIENT_PAINT, "Opaque Linear Gradient Paint"_s);
	$assignStatic(SurfaceType::DESC_RADIAL_GRADIENT_PAINT, "Radial Gradient Paint"_s);
	$assignStatic(SurfaceType::DESC_OPAQUE_RADIAL_GRADIENT_PAINT, "Opaque Radial Gradient Paint"_s);
	SurfaceType::unusedUID = 1;
	$assignStatic(SurfaceType::surfaceUIDMap, $new($HashMap, 100));
	$init($PixelConverter);
	$assignStatic(SurfaceType::Any, $new(SurfaceType, nullptr, SurfaceType::DESC_ANY, $PixelConverter::instance));
	$assignStatic(SurfaceType::AnyInt, $nc(SurfaceType::Any)->deriveSubType(SurfaceType::DESC_ANY_INT));
	$assignStatic(SurfaceType::AnyShort, $nc(SurfaceType::Any)->deriveSubType(SurfaceType::DESC_ANY_SHORT));
	$assignStatic(SurfaceType::AnyByte, $nc(SurfaceType::Any)->deriveSubType(SurfaceType::DESC_ANY_BYTE));
	$assignStatic(SurfaceType::AnyByteBinary, $nc(SurfaceType::Any)->deriveSubType(SurfaceType::DESC_BYTE_BINARY));
	$assignStatic(SurfaceType::Any3Byte, $nc(SurfaceType::Any)->deriveSubType(SurfaceType::DESC_ANY_3BYTE));
	$assignStatic(SurfaceType::Any4Byte, $nc(SurfaceType::Any)->deriveSubType(SurfaceType::DESC_ANY_4BYTE));
	$assignStatic(SurfaceType::AnyDcm, $nc(SurfaceType::AnyInt)->deriveSubType(SurfaceType::DESC_ANY_INT_DCM));
	$assignStatic(SurfaceType::Custom, SurfaceType::Any);
	$init($PixelConverter$Xrgb);
	$assignStatic(SurfaceType::IntRgb, $nc(SurfaceType::AnyDcm)->deriveSubType(SurfaceType::DESC_INT_RGB, $PixelConverter$Xrgb::instance));
	$init($PixelConverter$Argb);
	$assignStatic(SurfaceType::IntArgb, $nc(SurfaceType::AnyDcm)->deriveSubType(SurfaceType::DESC_INT_ARGB, $PixelConverter$Argb::instance));
	$init($PixelConverter$ArgbPre);
	$assignStatic(SurfaceType::IntArgbPre, $nc(SurfaceType::AnyDcm)->deriveSubType(SurfaceType::DESC_INT_ARGB_PRE, $PixelConverter$ArgbPre::instance));
	$init($PixelConverter$Xbgr);
	$assignStatic(SurfaceType::IntBgr, $nc(SurfaceType::AnyDcm)->deriveSubType(SurfaceType::DESC_INT_BGR, $PixelConverter$Xbgr::instance));
	$assignStatic(SurfaceType::ThreeByteBgr, $nc(SurfaceType::Any3Byte)->deriveSubType(SurfaceType::DESC_3BYTE_BGR, $PixelConverter$Xrgb::instance));
	$init($PixelConverter$Rgba);
	$assignStatic(SurfaceType::FourByteAbgr, $nc(SurfaceType::Any4Byte)->deriveSubType(SurfaceType::DESC_4BYTE_ABGR, $PixelConverter$Rgba::instance));
	$init($PixelConverter$RgbaPre);
	$assignStatic(SurfaceType::FourByteAbgrPre, $nc(SurfaceType::Any4Byte)->deriveSubType(SurfaceType::DESC_4BYTE_ABGR_PRE, $PixelConverter$RgbaPre::instance));
	$init($PixelConverter$Ushort565Rgb);
	$assignStatic(SurfaceType::Ushort565Rgb, $nc(SurfaceType::AnyShort)->deriveSubType(SurfaceType::DESC_USHORT_565_RGB, $PixelConverter$Ushort565Rgb::instance));
	$init($PixelConverter$Ushort555Rgb);
	$assignStatic(SurfaceType::Ushort555Rgb, $nc(SurfaceType::AnyShort)->deriveSubType(SurfaceType::DESC_USHORT_555_RGB, $PixelConverter$Ushort555Rgb::instance));
	$init($PixelConverter$Ushort555Rgbx);
	$assignStatic(SurfaceType::Ushort555Rgbx, $nc(SurfaceType::AnyShort)->deriveSubType(SurfaceType::DESC_USHORT_555_RGBx, $PixelConverter$Ushort555Rgbx::instance));
	$init($PixelConverter$Ushort4444Argb);
	$assignStatic(SurfaceType::Ushort4444Argb, $nc(SurfaceType::AnyShort)->deriveSubType(SurfaceType::DESC_USHORT_4444_ARGB, $PixelConverter$Ushort4444Argb::instance));
	$assignStatic(SurfaceType::UshortIndexed, $nc(SurfaceType::AnyShort)->deriveSubType(SurfaceType::DESC_USHORT_INDEXED));
	$init($PixelConverter$ByteGray);
	$assignStatic(SurfaceType::ByteGray, $nc(SurfaceType::AnyByte)->deriveSubType(SurfaceType::DESC_BYTE_GRAY, $PixelConverter$ByteGray::instance));
	$init($PixelConverter$UshortGray);
	$assignStatic(SurfaceType::UshortGray, $nc(SurfaceType::AnyShort)->deriveSubType(SurfaceType::DESC_USHORT_GRAY, $PixelConverter$UshortGray::instance));
	$assignStatic(SurfaceType::ByteBinary1Bit, $nc(SurfaceType::AnyByteBinary)->deriveSubType(SurfaceType::DESC_BYTE_BINARY_1BIT));
	$assignStatic(SurfaceType::ByteBinary2Bit, $nc(SurfaceType::AnyByteBinary)->deriveSubType(SurfaceType::DESC_BYTE_BINARY_2BIT));
	$assignStatic(SurfaceType::ByteBinary4Bit, $nc(SurfaceType::AnyByteBinary)->deriveSubType(SurfaceType::DESC_BYTE_BINARY_4BIT));
	$assignStatic(SurfaceType::ByteIndexed, $nc(SurfaceType::AnyByte)->deriveSubType(SurfaceType::DESC_BYTE_INDEXED));
	$init($PixelConverter$Rgbx);
	$assignStatic(SurfaceType::IntRgbx, $nc(SurfaceType::AnyDcm)->deriveSubType(SurfaceType::DESC_INT_RGBx, $PixelConverter$Rgbx::instance));
	$init($PixelConverter$Bgrx);
	$assignStatic(SurfaceType::IntBgrx, $nc(SurfaceType::AnyDcm)->deriveSubType(SurfaceType::DESC_INT_BGRx, $PixelConverter$Bgrx::instance));
	$assignStatic(SurfaceType::ThreeByteRgb, $nc(SurfaceType::Any3Byte)->deriveSubType(SurfaceType::DESC_3BYTE_RGB, $PixelConverter$Xbgr::instance));
	$init($PixelConverter$ArgbBm);
	$assignStatic(SurfaceType::IntArgbBm, $nc(SurfaceType::AnyDcm)->deriveSubType(SurfaceType::DESC_INT_ARGB_BM, $PixelConverter$ArgbBm::instance));
	$assignStatic(SurfaceType::ByteIndexedBm, $nc(SurfaceType::ByteIndexed)->deriveSubType(SurfaceType::DESC_BYTE_INDEXED_BM));
	$assignStatic(SurfaceType::ByteIndexedOpaque, $nc(SurfaceType::ByteIndexedBm)->deriveSubType(SurfaceType::DESC_BYTE_INDEXED_OPAQUE));
	$assignStatic(SurfaceType::Index8Gray, $nc(SurfaceType::ByteIndexedOpaque)->deriveSubType(SurfaceType::DESC_INDEX8_GRAY));
	$assignStatic(SurfaceType::Index12Gray, $nc(SurfaceType::Any)->deriveSubType(SurfaceType::DESC_INDEX12_GRAY));
	$assignStatic(SurfaceType::AnyPaint, $nc(SurfaceType::Any)->deriveSubType(SurfaceType::DESC_ANY_PAINT));
	$assignStatic(SurfaceType::AnyColor, $nc(SurfaceType::AnyPaint)->deriveSubType(SurfaceType::DESC_ANY_COLOR));
	$assignStatic(SurfaceType::OpaqueColor, $nc(SurfaceType::AnyColor)->deriveSubType(SurfaceType::DESC_OPAQUE_COLOR));
	$assignStatic(SurfaceType::GradientPaint, $nc(SurfaceType::AnyPaint)->deriveSubType(SurfaceType::DESC_GRADIENT_PAINT));
	$assignStatic(SurfaceType::OpaqueGradientPaint, $nc(SurfaceType::GradientPaint)->deriveSubType(SurfaceType::DESC_OPAQUE_GRADIENT_PAINT));
	$assignStatic(SurfaceType::LinearGradientPaint, $nc(SurfaceType::AnyPaint)->deriveSubType(SurfaceType::DESC_LINEAR_GRADIENT_PAINT));
	$assignStatic(SurfaceType::OpaqueLinearGradientPaint, $nc(SurfaceType::LinearGradientPaint)->deriveSubType(SurfaceType::DESC_OPAQUE_LINEAR_GRADIENT_PAINT));
	$assignStatic(SurfaceType::RadialGradientPaint, $nc(SurfaceType::AnyPaint)->deriveSubType(SurfaceType::DESC_RADIAL_GRADIENT_PAINT));
	$assignStatic(SurfaceType::OpaqueRadialGradientPaint, $nc(SurfaceType::RadialGradientPaint)->deriveSubType(SurfaceType::DESC_OPAQUE_RADIAL_GRADIENT_PAINT));
	$assignStatic(SurfaceType::TexturePaint, $nc(SurfaceType::AnyPaint)->deriveSubType(SurfaceType::DESC_TEXTURE_PAINT));
	$assignStatic(SurfaceType::OpaqueTexturePaint, $nc(SurfaceType::TexturePaint)->deriveSubType(SurfaceType::DESC_OPAQUE_TEXTURE_PAINT));
}

SurfaceType::SurfaceType() {
}

$Class* SurfaceType::load$($String* name, bool initialize) {
	$loadClass(SurfaceType, name, initialize, &_SurfaceType_ClassInfo_, clinit$SurfaceType, allocate$SurfaceType);
	return class$;
}

$Class* SurfaceType::class$ = nullptr;

		} // loops
	} // java2d
} // sun