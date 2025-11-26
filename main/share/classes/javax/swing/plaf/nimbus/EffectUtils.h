#ifndef _javax_swing_plaf_nimbus_EffectUtils_h_
#define _javax_swing_plaf_nimbus_EffectUtils_h_
//$ class javax.swing.plaf.nimbus.EffectUtils
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class GraphicsConfiguration;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class EffectUtils : public ::java::lang::Object {
	$class(EffectUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	EffectUtils();
	void init$();
	static void blur($ints* srcPixels, $ints* dstPixels, int32_t width, int32_t height, $floats* kernel, int32_t radius);
	static void blur($bytes* srcPixels, $bytes* dstPixels, int32_t width, int32_t height, $floats* kernel, int32_t radius);
	static void clearImage(::java::awt::image::BufferedImage* img);
	static ::java::awt::image::BufferedImage* createColorModelCompatibleImage(::java::awt::image::BufferedImage* image);
	static ::java::awt::image::BufferedImage* createCompatibleTranslucentImage(int32_t width, int32_t height);
	static $floats* createGaussianKernel(int32_t radius);
	static ::java::awt::image::BufferedImage* gaussianBlur(::java::awt::image::BufferedImage* src, ::java::awt::image::BufferedImage* dst, int32_t radius);
	static ::java::awt::GraphicsConfiguration* getGraphicsConfiguration();
	static $bytes* getPixels(::java::awt::image::BufferedImage* img, int32_t x, int32_t y, int32_t w, int32_t h, $bytes* pixels);
	static $ints* getPixels(::java::awt::image::BufferedImage* img, int32_t x, int32_t y, int32_t w, int32_t h, $ints* pixels);
	static bool isHeadless();
	static void setPixels(::java::awt::image::BufferedImage* img, int32_t x, int32_t y, int32_t w, int32_t h, $bytes* pixels);
	static void setPixels(::java::awt::image::BufferedImage* img, int32_t x, int32_t y, int32_t w, int32_t h, $ints* pixels);
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_EffectUtils_h_