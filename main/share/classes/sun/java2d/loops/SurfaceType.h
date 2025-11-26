#ifndef _sun_java2d_loops_SurfaceType_h_
#define _sun_java2d_loops_SurfaceType_h_
//$ class sun.java2d.loops.SurfaceType
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DESC_3BYTE_BGR")
#undef DESC_3BYTE_BGR
#pragma push_macro("DESC_3BYTE_RGB")
#undef DESC_3BYTE_RGB
#pragma push_macro("DESC_4BYTE_ABGR")
#undef DESC_4BYTE_ABGR
#pragma push_macro("DESC_4BYTE_ABGR_PRE")
#undef DESC_4BYTE_ABGR_PRE
#pragma push_macro("DESC_ANY")
#undef DESC_ANY
#pragma push_macro("DESC_ANY_3BYTE")
#undef DESC_ANY_3BYTE
#pragma push_macro("DESC_ANY_4BYTE")
#undef DESC_ANY_4BYTE
#pragma push_macro("DESC_ANY_BYTE")
#undef DESC_ANY_BYTE
#pragma push_macro("DESC_ANY_COLOR")
#undef DESC_ANY_COLOR
#pragma push_macro("DESC_ANY_INT")
#undef DESC_ANY_INT
#pragma push_macro("DESC_ANY_INT_DCM")
#undef DESC_ANY_INT_DCM
#pragma push_macro("DESC_ANY_PAINT")
#undef DESC_ANY_PAINT
#pragma push_macro("DESC_ANY_SHORT")
#undef DESC_ANY_SHORT
#pragma push_macro("DESC_BYTE_BINARY")
#undef DESC_BYTE_BINARY
#pragma push_macro("DESC_BYTE_BINARY_1BIT")
#undef DESC_BYTE_BINARY_1BIT
#pragma push_macro("DESC_BYTE_BINARY_2BIT")
#undef DESC_BYTE_BINARY_2BIT
#pragma push_macro("DESC_BYTE_BINARY_4BIT")
#undef DESC_BYTE_BINARY_4BIT
#pragma push_macro("DESC_BYTE_GRAY")
#undef DESC_BYTE_GRAY
#pragma push_macro("DESC_BYTE_INDEXED")
#undef DESC_BYTE_INDEXED
#pragma push_macro("DESC_BYTE_INDEXED_BM")
#undef DESC_BYTE_INDEXED_BM
#pragma push_macro("DESC_BYTE_INDEXED_OPAQUE")
#undef DESC_BYTE_INDEXED_OPAQUE
#pragma push_macro("DESC_GRADIENT_PAINT")
#undef DESC_GRADIENT_PAINT
#pragma push_macro("DESC_INDEX12_GRAY")
#undef DESC_INDEX12_GRAY
#pragma push_macro("DESC_INDEX8_GRAY")
#undef DESC_INDEX8_GRAY
#pragma push_macro("DESC_INT_ARGB")
#undef DESC_INT_ARGB
#pragma push_macro("DESC_INT_ARGB_BM")
#undef DESC_INT_ARGB_BM
#pragma push_macro("DESC_INT_ARGB_PRE")
#undef DESC_INT_ARGB_PRE
#pragma push_macro("DESC_INT_BGR")
#undef DESC_INT_BGR
#pragma push_macro("DESC_INT_RGB")
#undef DESC_INT_RGB
#pragma push_macro("DESC_LINEAR_GRADIENT_PAINT")
#undef DESC_LINEAR_GRADIENT_PAINT
#pragma push_macro("DESC_OPAQUE_COLOR")
#undef DESC_OPAQUE_COLOR
#pragma push_macro("DESC_OPAQUE_GRADIENT_PAINT")
#undef DESC_OPAQUE_GRADIENT_PAINT
#pragma push_macro("DESC_OPAQUE_LINEAR_GRADIENT_PAINT")
#undef DESC_OPAQUE_LINEAR_GRADIENT_PAINT
#pragma push_macro("DESC_OPAQUE_RADIAL_GRADIENT_PAINT")
#undef DESC_OPAQUE_RADIAL_GRADIENT_PAINT
#pragma push_macro("DESC_OPAQUE_TEXTURE_PAINT")
#undef DESC_OPAQUE_TEXTURE_PAINT
#pragma push_macro("DESC_RADIAL_GRADIENT_PAINT")
#undef DESC_RADIAL_GRADIENT_PAINT
#pragma push_macro("DESC_TEXTURE_PAINT")
#undef DESC_TEXTURE_PAINT
#pragma push_macro("DESC_USHORT_555_RGB")
#undef DESC_USHORT_555_RGB
#pragma push_macro("DESC_USHORT_565_RGB")
#undef DESC_USHORT_565_RGB
#pragma push_macro("DESC_USHORT_GRAY")
#undef DESC_USHORT_GRAY
#pragma push_macro("DESC_USHORT_INDEXED")
#undef DESC_USHORT_INDEXED

namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}
namespace sun {
	namespace awt {
		namespace image {
			class PixelConverter;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace loops {

class SurfaceType : public ::java::lang::Object {
	$class(SurfaceType, 0, ::java::lang::Object)
public:
	SurfaceType();
	void init$(::sun::java2d::loops::SurfaceType* parent, $String* desc, ::sun::awt::image::PixelConverter* pixelConverter);
	void init$(::sun::java2d::loops::SurfaceType* parent, $String* desc);
	::sun::java2d::loops::SurfaceType* deriveSubType($String* desc);
	::sun::java2d::loops::SurfaceType* deriveSubType($String* desc, ::sun::awt::image::PixelConverter* pixelConverter);
	virtual bool equals(Object$* o) override;
	int32_t getAlphaMask();
	$String* getDescriptor();
	::sun::awt::image::PixelConverter* getPixelConverter();
	::sun::java2d::loops::SurfaceType* getSuperType();
	int32_t getUniqueID();
	virtual int32_t hashCode() override;
	static int32_t makeUniqueID($String* desc);
	int32_t pixelFor(int32_t rgb, ::java::awt::image::ColorModel* cm);
	int32_t rgbFor(int32_t pixel, ::java::awt::image::ColorModel* cm);
	virtual $String* toString() override;
	static int32_t unusedUID;
	static ::java::util::HashMap* surfaceUIDMap;
	static $String* DESC_ANY;
	static $String* DESC_INT_RGB;
	static $String* DESC_INT_ARGB;
	static $String* DESC_INT_ARGB_PRE;
	static $String* DESC_INT_BGR;
	static $String* DESC_3BYTE_BGR;
	static $String* DESC_4BYTE_ABGR;
	static $String* DESC_4BYTE_ABGR_PRE;
	static $String* DESC_USHORT_565_RGB;
	static $String* DESC_USHORT_555_RGB;
	static $String* DESC_USHORT_555_RGBx;
	static $String* DESC_USHORT_4444_ARGB;
	static $String* DESC_BYTE_GRAY;
	static $String* DESC_USHORT_INDEXED;
	static $String* DESC_USHORT_GRAY;
	static $String* DESC_BYTE_BINARY;
	static $String* DESC_BYTE_INDEXED;
	static $String* DESC_ANY_INT;
	static $String* DESC_ANY_SHORT;
	static $String* DESC_ANY_BYTE;
	static $String* DESC_ANY_3BYTE;
	static $String* DESC_ANY_4BYTE;
	static $String* DESC_ANY_INT_DCM;
	static $String* DESC_INT_RGBx;
	static $String* DESC_INT_BGRx;
	static $String* DESC_3BYTE_RGB;
	static $String* DESC_INT_ARGB_BM;
	static $String* DESC_BYTE_INDEXED_BM;
	static $String* DESC_BYTE_INDEXED_OPAQUE;
	static $String* DESC_INDEX8_GRAY;
	static $String* DESC_INDEX12_GRAY;
	static $String* DESC_BYTE_BINARY_1BIT;
	static $String* DESC_BYTE_BINARY_2BIT;
	static $String* DESC_BYTE_BINARY_4BIT;
	static $String* DESC_ANY_PAINT;
	static $String* DESC_ANY_COLOR;
	static $String* DESC_OPAQUE_COLOR;
	static $String* DESC_GRADIENT_PAINT;
	static $String* DESC_OPAQUE_GRADIENT_PAINT;
	static $String* DESC_TEXTURE_PAINT;
	static $String* DESC_OPAQUE_TEXTURE_PAINT;
	static $String* DESC_LINEAR_GRADIENT_PAINT;
	static $String* DESC_OPAQUE_LINEAR_GRADIENT_PAINT;
	static $String* DESC_RADIAL_GRADIENT_PAINT;
	static $String* DESC_OPAQUE_RADIAL_GRADIENT_PAINT;
	static ::sun::java2d::loops::SurfaceType* Any;
	static ::sun::java2d::loops::SurfaceType* AnyInt;
	static ::sun::java2d::loops::SurfaceType* AnyShort;
	static ::sun::java2d::loops::SurfaceType* AnyByte;
	static ::sun::java2d::loops::SurfaceType* AnyByteBinary;
	static ::sun::java2d::loops::SurfaceType* Any3Byte;
	static ::sun::java2d::loops::SurfaceType* Any4Byte;
	static ::sun::java2d::loops::SurfaceType* AnyDcm;
	static ::sun::java2d::loops::SurfaceType* Custom;
	static ::sun::java2d::loops::SurfaceType* IntRgb;
	static ::sun::java2d::loops::SurfaceType* IntArgb;
	static ::sun::java2d::loops::SurfaceType* IntArgbPre;
	static ::sun::java2d::loops::SurfaceType* IntBgr;
	static ::sun::java2d::loops::SurfaceType* ThreeByteBgr;
	static ::sun::java2d::loops::SurfaceType* FourByteAbgr;
	static ::sun::java2d::loops::SurfaceType* FourByteAbgrPre;
	static ::sun::java2d::loops::SurfaceType* Ushort565Rgb;
	static ::sun::java2d::loops::SurfaceType* Ushort555Rgb;
	static ::sun::java2d::loops::SurfaceType* Ushort555Rgbx;
	static ::sun::java2d::loops::SurfaceType* Ushort4444Argb;
	static ::sun::java2d::loops::SurfaceType* UshortIndexed;
	static ::sun::java2d::loops::SurfaceType* ByteGray;
	static ::sun::java2d::loops::SurfaceType* UshortGray;
	static ::sun::java2d::loops::SurfaceType* ByteBinary1Bit;
	static ::sun::java2d::loops::SurfaceType* ByteBinary2Bit;
	static ::sun::java2d::loops::SurfaceType* ByteBinary4Bit;
	static ::sun::java2d::loops::SurfaceType* ByteIndexed;
	static ::sun::java2d::loops::SurfaceType* IntRgbx;
	static ::sun::java2d::loops::SurfaceType* IntBgrx;
	static ::sun::java2d::loops::SurfaceType* ThreeByteRgb;
	static ::sun::java2d::loops::SurfaceType* IntArgbBm;
	static ::sun::java2d::loops::SurfaceType* ByteIndexedBm;
	static ::sun::java2d::loops::SurfaceType* ByteIndexedOpaque;
	static ::sun::java2d::loops::SurfaceType* Index8Gray;
	static ::sun::java2d::loops::SurfaceType* Index12Gray;
	static ::sun::java2d::loops::SurfaceType* AnyPaint;
	static ::sun::java2d::loops::SurfaceType* AnyColor;
	static ::sun::java2d::loops::SurfaceType* OpaqueColor;
	static ::sun::java2d::loops::SurfaceType* GradientPaint;
	static ::sun::java2d::loops::SurfaceType* OpaqueGradientPaint;
	static ::sun::java2d::loops::SurfaceType* LinearGradientPaint;
	static ::sun::java2d::loops::SurfaceType* OpaqueLinearGradientPaint;
	static ::sun::java2d::loops::SurfaceType* RadialGradientPaint;
	static ::sun::java2d::loops::SurfaceType* OpaqueRadialGradientPaint;
	static ::sun::java2d::loops::SurfaceType* TexturePaint;
	static ::sun::java2d::loops::SurfaceType* OpaqueTexturePaint;
	int32_t uniqueID = 0;
	$String* desc = nullptr;
	::sun::java2d::loops::SurfaceType* next = nullptr;
	::sun::awt::image::PixelConverter* pixelConverter = nullptr;
};

		} // loops
	} // java2d
} // sun

#pragma pop_macro("DESC_3BYTE_BGR")
#pragma pop_macro("DESC_3BYTE_RGB")
#pragma pop_macro("DESC_4BYTE_ABGR")
#pragma pop_macro("DESC_4BYTE_ABGR_PRE")
#pragma pop_macro("DESC_ANY")
#pragma pop_macro("DESC_ANY_3BYTE")
#pragma pop_macro("DESC_ANY_4BYTE")
#pragma pop_macro("DESC_ANY_BYTE")
#pragma pop_macro("DESC_ANY_COLOR")
#pragma pop_macro("DESC_ANY_INT")
#pragma pop_macro("DESC_ANY_INT_DCM")
#pragma pop_macro("DESC_ANY_PAINT")
#pragma pop_macro("DESC_ANY_SHORT")
#pragma pop_macro("DESC_BYTE_BINARY")
#pragma pop_macro("DESC_BYTE_BINARY_1BIT")
#pragma pop_macro("DESC_BYTE_BINARY_2BIT")
#pragma pop_macro("DESC_BYTE_BINARY_4BIT")
#pragma pop_macro("DESC_BYTE_GRAY")
#pragma pop_macro("DESC_BYTE_INDEXED")
#pragma pop_macro("DESC_BYTE_INDEXED_BM")
#pragma pop_macro("DESC_BYTE_INDEXED_OPAQUE")
#pragma pop_macro("DESC_GRADIENT_PAINT")
#pragma pop_macro("DESC_INDEX12_GRAY")
#pragma pop_macro("DESC_INDEX8_GRAY")
#pragma pop_macro("DESC_INT_ARGB")
#pragma pop_macro("DESC_INT_ARGB_BM")
#pragma pop_macro("DESC_INT_ARGB_PRE")
#pragma pop_macro("DESC_INT_BGR")
#pragma pop_macro("DESC_INT_RGB")
#pragma pop_macro("DESC_LINEAR_GRADIENT_PAINT")
#pragma pop_macro("DESC_OPAQUE_COLOR")
#pragma pop_macro("DESC_OPAQUE_GRADIENT_PAINT")
#pragma pop_macro("DESC_OPAQUE_LINEAR_GRADIENT_PAINT")
#pragma pop_macro("DESC_OPAQUE_RADIAL_GRADIENT_PAINT")
#pragma pop_macro("DESC_OPAQUE_TEXTURE_PAINT")
#pragma pop_macro("DESC_RADIAL_GRADIENT_PAINT")
#pragma pop_macro("DESC_TEXTURE_PAINT")
#pragma pop_macro("DESC_USHORT_555_RGB")
#pragma pop_macro("DESC_USHORT_565_RGB")
#pragma pop_macro("DESC_USHORT_GRAY")
#pragma pop_macro("DESC_USHORT_INDEXED")

#endif // _sun_java2d_loops_SurfaceType_h_