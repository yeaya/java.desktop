#include <com/sun/imageio/plugins/jpeg/JPEGImageMetadataFormatResources.h>

#include <com/sun/imageio/plugins/jpeg/JPEGMetadataFormatResources.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $JPEGMetadataFormatResources = ::com::sun::imageio::plugins::jpeg::JPEGMetadataFormatResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JPEGImageMetadataFormatResources_FieldInfo_[] = {
	{"imageContents", "[[Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(JPEGImageMetadataFormatResources, imageContents)},
	{}
};

$MethodInfo _JPEGImageMetadataFormatResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JPEGImageMetadataFormatResources::*)()>(&JPEGImageMetadataFormatResources::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _JPEGImageMetadataFormatResources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGImageMetadataFormatResources",
	"com.sun.imageio.plugins.jpeg.JPEGMetadataFormatResources",
	nullptr,
	_JPEGImageMetadataFormatResources_FieldInfo_,
	_JPEGImageMetadataFormatResources_MethodInfo_
};

$Object* allocate$JPEGImageMetadataFormatResources($Class* clazz) {
	return $of($alloc(JPEGImageMetadataFormatResources));
}

$ObjectArray2* JPEGImageMetadataFormatResources::imageContents = nullptr;

void JPEGImageMetadataFormatResources::init$() {
	$JPEGMetadataFormatResources::init$();
}

$ObjectArray2* JPEGImageMetadataFormatResources::getContents() {
	$init($JPEGMetadataFormatResources);
	$var($ObjectArray2, combinedContents, $new($ObjectArray2, $nc($JPEGMetadataFormatResources::commonContents)->length + $nc(JPEGImageMetadataFormatResources::imageContents)->length, 2));
	int32_t combined = 0;
	for (int32_t i = 0; i < $nc($JPEGMetadataFormatResources::commonContents)->length; ++i, ++combined) {
		$nc(combinedContents->get(combined))->set(0, $nc($nc($JPEGMetadataFormatResources::commonContents)->get(i))->get(0));
		$nc(combinedContents->get(combined))->set(1, $nc($nc($JPEGMetadataFormatResources::commonContents)->get(i))->get(1));
	}
	for (int32_t i = 0; i < $nc(JPEGImageMetadataFormatResources::imageContents)->length; ++i, ++combined) {
		$nc(combinedContents->get(combined))->set(0, $nc($nc(JPEGImageMetadataFormatResources::imageContents)->get(i))->get(0));
		$nc(combinedContents->get(combined))->set(1, $nc($nc(JPEGImageMetadataFormatResources::imageContents)->get(i))->get(1));
	}
	return combinedContents;
}

void clinit$JPEGImageMetadataFormatResources($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JPEGImageMetadataFormatResources::imageContents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("JPEGvariety"_s),
			$of("A node grouping all marker segments specific to the variety of stream being read/written (e.g. JFIF) - may be empty"_s)
		}),
		$$new($ObjectArray, {
			$of("markerSequence"_s),
			$of("A node grouping all non-jfif marker segments"_s)
		}),
		$$new($ObjectArray, {
			$of("app0jfif"_s),
			$of("A JFIF APP0 marker segment"_s)
		}),
		$$new($ObjectArray, {
			$of("app14Adobe"_s),
			$of("An Adobe APP14 marker segment"_s)
		}),
		$$new($ObjectArray, {
			$of("sof"_s),
			$of("A Start Of Frame marker segment"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("A Start Of Scan marker segment"_s)
		}),
		$$new($ObjectArray, {
			$of("app0JFXX"_s),
			$of("A JFIF extension marker segment"_s)
		}),
		$$new($ObjectArray, {
			$of("app2ICC"_s),
			$of("An ICC profile APP2 marker segment"_s)
		}),
		$$new($ObjectArray, {
			$of("JFIFthumbJPEG"_s),
			$of("A JFIF thumbnail in JPEG format (no JFIF segments permitted)"_s)
		}),
		$$new($ObjectArray, {
			$of("JFIFthumbPalette"_s),
			$of("A JFIF thumbnail as an RGB indexed image"_s)
		}),
		$$new($ObjectArray, {
			$of("JFIFthumbRGB"_s),
			$of("A JFIF thumbnail as an RGB image"_s)
		}),
		$$new($ObjectArray, {
			$of("componentSpec"_s),
			$of("A component specification for a frame"_s)
		}),
		$$new($ObjectArray, {
			$of("scanComponentSpec"_s),
			$of("A component specification for a scan"_s)
		}),
		$$new($ObjectArray, {
			$of("app0JFIF/majorVersion"_s),
			$of("The major JFIF version number"_s)
		}),
		$$new($ObjectArray, {
			$of("app0JFIF/minorVersion"_s),
			$of("The minor JFIF version number"_s)
		}),
		$$new($ObjectArray, {
			$of("app0JFIF/resUnits"_s),
			$of("The resolution units for Xdensity and Ydensity (0 = no units, just aspect ratio; 1 = dots/inch; 2 = dots/cm)"_s)
		}),
		$$new($ObjectArray, {
			$of("app0JFIF/Xdensity"_s),
			$of("The horizontal density or aspect ratio numerator"_s)
		}),
		$$new($ObjectArray, {
			$of("app0JFIF/Ydensity"_s),
			$of("The vertical density or aspect ratio denominator"_s)
		}),
		$$new($ObjectArray, {
			$of("app0JFIF/thumbWidth"_s),
			$of("The width of the thumbnail, or 0 if there isn\'t one"_s)
		}),
		$$new($ObjectArray, {
			$of("app0JFIF/thumbHeight"_s),
			$of("The height of the thumbnail, or 0 if there isn\'t one"_s)
		}),
		$$new($ObjectArray, {
			$of("app0JFXX/extensionCode"_s),
			$of("The JFXX extension code identifying thumbnail type: (16 = JPEG, 17 = indexed, 19 = RGB"_s)
		}),
		$$new($ObjectArray, {
			$of("JFIFthumbPalette/thumbWidth"_s),
			$of("The width of the thumbnail"_s)
		}),
		$$new($ObjectArray, {
			$of("JFIFthumbPalette/thumbHeight"_s),
			$of("The height of the thumbnail"_s)
		}),
		$$new($ObjectArray, {
			$of("JFIFthumbRGB/thumbWidth"_s),
			$of("The width of the thumbnail"_s)
		}),
		$$new($ObjectArray, {
			$of("JFIFthumbRGB/thumbHeight"_s),
			$of("The height of the thumbnail"_s)
		}),
		$$new($ObjectArray, {
			$of("app14Adobe/version"_s),
			$of("The version of Adobe APP14 marker segment"_s)
		}),
		$$new($ObjectArray, {
			$of("app14Adobe/flags0"_s),
			$of("The flags0 variable of an APP14 marker segment"_s)
		}),
		$$new($ObjectArray, {
			$of("app14Adobe/flags1"_s),
			$of("The flags1 variable of an APP14 marker segment"_s)
		}),
		$$new($ObjectArray, {
			$of("app14Adobe/transform"_s),
			$of("The color transform applied to the image (0 = Unknown, 1 = YCbCr, 2 = YCCK)"_s)
		}),
		$$new($ObjectArray, {
			$of("sof/process"_s),
			$of("The JPEG process (0 = Baseline sequential, 1 = Extended sequential, 2 = Progressive)"_s)
		}),
		$$new($ObjectArray, {
			$of("sof/samplePrecision"_s),
			$of("The number of bits per sample"_s)
		}),
		$$new($ObjectArray, {
			$of("sof/numLines"_s),
			$of("The number of lines in the image"_s)
		}),
		$$new($ObjectArray, {
			$of("sof/samplesPerLine"_s),
			$of("The number of samples per line"_s)
		}),
		$$new($ObjectArray, {
			$of("sof/numFrameComponents"_s),
			$of("The number of components in the image"_s)
		}),
		$$new($ObjectArray, {
			$of("componentSpec/componentId"_s),
			$of("The id for this component"_s)
		}),
		$$new($ObjectArray, {
			$of("componentSpec/HsamplingFactor"_s),
			$of("The horizontal sampling factor for this component"_s)
		}),
		$$new($ObjectArray, {
			$of("componentSpec/VsamplingFactor"_s),
			$of("The vertical sampling factor for this component"_s)
		}),
		$$new($ObjectArray, {
			$of("componentSpec/QtableSelector"_s),
			$of("The quantization table to use for this component"_s)
		}),
		$$new($ObjectArray, {
			$of("sos/numScanComponents"_s),
			$of("The number of components in the scan"_s)
		}),
		$$new($ObjectArray, {
			$of("sos/startSpectralSelection"_s),
			$of("The first spectral band included in this scan"_s)
		}),
		$$new($ObjectArray, {
			$of("sos/endSpectralSelection"_s),
			$of("The last spectral band included in this scan"_s)
		}),
		$$new($ObjectArray, {
			$of("sos/approxHigh"_s),
			$of("The highest bit position included in this scan"_s)
		}),
		$$new($ObjectArray, {
			$of("sos/approxLow"_s),
			$of("The lowest bit position included in this scan"_s)
		}),
		$$new($ObjectArray, {
			$of("scanComponentSpec/componentSelector"_s),
			$of("The id of this component"_s)
		}),
		$$new($ObjectArray, {
			$of("scanComponentSpec/dcHuffTable"_s),
			$of("The huffman table to use for encoding DC coefficients"_s)
		}),
		$$new($ObjectArray, {
			$of("scanComponentSpec/acHuffTable"_s),
			$of("The huffman table to use for encoding AC coefficients"_s)
		})
	}));
}

JPEGImageMetadataFormatResources::JPEGImageMetadataFormatResources() {
}

$Class* JPEGImageMetadataFormatResources::load$($String* name, bool initialize) {
	$loadClass(JPEGImageMetadataFormatResources, name, initialize, &_JPEGImageMetadataFormatResources_ClassInfo_, clinit$JPEGImageMetadataFormatResources, allocate$JPEGImageMetadataFormatResources);
	return class$;
}

$Class* JPEGImageMetadataFormatResources::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com