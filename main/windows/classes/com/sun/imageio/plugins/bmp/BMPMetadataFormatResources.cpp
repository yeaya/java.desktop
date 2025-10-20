#include <com/sun/imageio/plugins/bmp/BMPMetadataFormatResources.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$MethodInfo _BMPMetadataFormatResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BMPMetadataFormatResources::*)()>(&BMPMetadataFormatResources::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _BMPMetadataFormatResources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPMetadataFormatResources",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_BMPMetadataFormatResources_MethodInfo_
};

$Object* allocate$BMPMetadataFormatResources($Class* clazz) {
	return $of($alloc(BMPMetadataFormatResources));
}

void BMPMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* BMPMetadataFormatResources::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BMPVersion"_s),
			$of("BMP version string"_s)
		}),
		$$new($ObjectArray, {
			$of("Width"_s),
			$of("The width of the image"_s)
		}),
		$$new($ObjectArray, {
			$of("Height"_s),
			$of("The height of the image"_s)
		}),
		$$new($ObjectArray, {
			$of("BitsPerPixel"_s),
			$of(""_s)
		}),
		$$new($ObjectArray, {
			$of("PixelsPerMeter"_s),
			$of("Resolution in pixels per unit distance"_s)
		}),
		$$new($ObjectArray, {
			$of("X"_s),
			$of("Pixels Per Meter along X"_s)
		}),
		$$new($ObjectArray, {
			$of("Y"_s),
			$of("Pixels Per Meter along Y"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorsUsed"_s),
			$of("Number of color indexes in the color table actually used"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorsImportant"_s),
			$of("Number of color indexes considered important for display"_s)
		}),
		$$new($ObjectArray, {
			$of("Mask"_s),
			$of("Color masks; present for BI_BITFIELDS compression only"_s)
		}),
		$$new($ObjectArray, {
			$of("Intent"_s),
			$of("Rendering intent"_s)
		}),
		$$new($ObjectArray, {
			$of("Palette"_s),
			$of("The color palette"_s)
		}),
		$$new($ObjectArray, {
			$of("Red"_s),
			$of("Red Mask/Color Palette"_s)
		}),
		$$new($ObjectArray, {
			$of("Green"_s),
			$of("Green Mask/Color Palette/Gamma"_s)
		}),
		$$new($ObjectArray, {
			$of("Blue"_s),
			$of("Blue Mask/Color Palette/Gamma"_s)
		}),
		$$new($ObjectArray, {
			$of("Alpha"_s),
			$of("Alpha Mask/Color Palette/Gamma"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorSpaceType"_s),
			$of("Color Space Type"_s)
		}),
		$$new($ObjectArray, {
			$of("X"_s),
			$of("The X coordinate of a point in XYZ color space"_s)
		}),
		$$new($ObjectArray, {
			$of("Y"_s),
			$of("The Y coordinate of a point in XYZ color space"_s)
		}),
		$$new($ObjectArray, {
			$of("Z"_s),
			$of("The Z coordinate of a point in XYZ color space"_s)
		})
	});
}

BMPMetadataFormatResources::BMPMetadataFormatResources() {
}

$Class* BMPMetadataFormatResources::load$($String* name, bool initialize) {
	$loadClass(BMPMetadataFormatResources, name, initialize, &_BMPMetadataFormatResources_ClassInfo_, allocate$BMPMetadataFormatResources);
	return class$;
}

$Class* BMPMetadataFormatResources::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com