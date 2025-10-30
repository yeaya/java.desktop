#include <com/sun/imageio/plugins/png/PNGMetadataFormatResources.h>

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
				namespace png {

$MethodInfo _PNGMetadataFormatResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PNGMetadataFormatResources::*)()>(&PNGMetadataFormatResources::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _PNGMetadataFormatResources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.png.PNGMetadataFormatResources",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_PNGMetadataFormatResources_MethodInfo_
};

$Object* allocate$PNGMetadataFormatResources($Class* clazz) {
	return $of($alloc(PNGMetadataFormatResources));
}

void PNGMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* PNGMetadataFormatResources::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("IHDR"_s),
			$of("The IHDR chunk, containing the header"_s)
		}),
		$$new($ObjectArray, {
			$of("PLTE"_s),
			$of("The PLTE chunk, containing the palette"_s)
		}),
		$$new($ObjectArray, {
			$of("PLTEEntry"_s),
			$of("A palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("bKGD"_s),
			$of("The bKGD chunk, containing the background color"_s)
		}),
		$$new($ObjectArray, {
			$of("bKGD_RGB"_s),
			$of("An RGB background color, for RGB and RGBAlpha images"_s)
		}),
		$$new($ObjectArray, {
			$of("bKGD_Grayscale"_s),
			$of("A grayscale background color, for Gray and GrayAlpha images"_s)
		}),
		$$new($ObjectArray, {
			$of("bKGD_Palette"_s),
			$of("A background palette index"_s)
		}),
		$$new($ObjectArray, {
			$of("cHRM"_s),
			$of("The cHRM chunk, containing color calibration"_s)
		}),
		$$new($ObjectArray, {
			$of("gAMA"_s),
			$of("The gAMA chunk, containing the image gamma"_s)
		}),
		$$new($ObjectArray, {
			$of("hIST"_s),
			$of("The hIST chunk, containing histogram information "_s)
		}),
		$$new($ObjectArray, {
			$of("hISTEntry"_s),
			$of("A histogram entry"_s)
		}),
		$$new($ObjectArray, {
			$of("iCCP"_s),
			$of("The iCCP chunk, containing an ICC color profile"_s)
		}),
		$$new($ObjectArray, {
			$of("iTXt"_s),
			$of("The iTXt chunk, containing internationalized text"_s)
		}),
		$$new($ObjectArray, {
			$of("iTXtEntry"_s),
			$of("A localized text entry"_s)
		}),
		$$new($ObjectArray, {
			$of("pHYS"_s),
			$of("The pHYS chunk, containing the pixel size and aspect ratio"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT"_s),
			$of("The sBIT chunk, containing significant bit information"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_Grayscale"_s),
			$of("Significant bit information for gray samples"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_GrayAlpha"_s),
			$of("Significant bit information for gray and alpha samples"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_RGB"_s),
			$of("Significant bit information for RGB samples"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_RGBAlpha"_s),
			$of("Significant bit information for RGBA samples"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_Palette"_s),
			$of("Significant bit information for RGB palette entries"_s)
		}),
		$$new($ObjectArray, {
			$of("sPLT"_s),
			$of("The sPLT chunk, containing a suggested palette"_s)
		}),
		$$new($ObjectArray, {
			$of("sPLTEntry"_s),
			$of("A suggested palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("sRGB"_s),
			$of("The sRGB chunk, containing rendering intent information"_s)
		}),
		$$new($ObjectArray, {
			$of("tEXt"_s),
			$of("The tEXt chunk, containing text"_s)
		}),
		$$new($ObjectArray, {
			$of("tEXtEntry"_s),
			$of("A text entry"_s)
		}),
		$$new($ObjectArray, {
			$of("tIME"_s),
			$of("The tIME chunk, containing the image modification time"_s)
		}),
		$$new($ObjectArray, {
			$of("tRNS"_s),
			$of("The tRNS chunk, containing transparency information"_s)
		}),
		$$new($ObjectArray, {
			$of("tRNS_Grayscale"_s),
			$of("A grayscale value that should be considered transparent"_s)
		}),
		$$new($ObjectArray, {
			$of("tRNS_RGB"_s),
			$of("An RGB value that should be considered transparent"_s)
		}),
		$$new($ObjectArray, {
			$of("tRNS_Palette"_s),
			$of("A palette index that should be considered transparent"_s)
		}),
		$$new($ObjectArray, {
			$of("zTXt"_s),
			$of("The zTXt chunk, containing compressed text"_s)
		}),
		$$new($ObjectArray, {
			$of("zTXtEntry"_s),
			$of("A compressed text entry"_s)
		}),
		$$new($ObjectArray, {
			$of("UnknownChunks"_s),
			$of("A set of unknown chunks"_s)
		}),
		$$new($ObjectArray, {
			$of("UnknownChunk"_s),
			$of("Unknown chunk data stored as a byte array"_s)
		}),
		$$new($ObjectArray, {
			$of("IHDR/width"_s),
			$of("The width of the image in pixels"_s)
		}),
		$$new($ObjectArray, {
			$of("IHDR/height"_s),
			$of("The height of the image in pixels"_s)
		}),
		$$new($ObjectArray, {
			$of("IHDR/bitDepth"_s),
			$of("The bit depth of the image samples"_s)
		}),
		$$new($ObjectArray, {
			$of("IHDR/colorType"_s),
			$of("The color type of the image"_s)
		}),
		$$new($ObjectArray, {
			$of("IHDR/compressionMethod"_s),
			$of("The compression used for image data, always \"deflate\""_s)
		}),
		$$new($ObjectArray, {
			$of("IHDR/filterMethod"_s),
			$of("The filtering method used for compression, always \"adaptive\""_s)
		}),
		$$new($ObjectArray, {
			$of("IHDR/interlaceMethod"_s),
			$of("The interlacing method, \"none\" or \"adam7\""_s)
		}),
		$$new($ObjectArray, {
			$of("PLTEEntry/index"_s),
			$of("The index of a palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("PLTEEntry/red"_s),
			$of("The red value of a palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("PLTEEntry/green"_s),
			$of("The green value of a palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("PLTEEntry/blue"_s),
			$of("The blue value of a palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("bKGD_Grayscale/gray"_s),
			$of("A gray value to be used as a background"_s)
		}),
		$$new($ObjectArray, {
			$of("bKGD_RGB/red"_s),
			$of("A red value to be used as a background"_s)
		}),
		$$new($ObjectArray, {
			$of("bKGD_RGB/green"_s),
			$of("A green value to be used as a background"_s)
		}),
		$$new($ObjectArray, {
			$of("bKGD_RGB/blue"_s),
			$of("A blue value to be used as a background"_s)
		}),
		$$new($ObjectArray, {
			$of("bKGD_Palette/index"_s),
			$of("A palette index to be used as a background"_s)
		}),
		$$new($ObjectArray, {
			$of("cHRM/whitePointX"_s),
			$of("The CIE x coordinate of the white point, multiplied by 1e5"_s)
		}),
		$$new($ObjectArray, {
			$of("cHRM/whitePointY"_s),
			$of("The CIE y coordinate of the white point, multiplied by 1e5"_s)
		}),
		$$new($ObjectArray, {
			$of("cHRM/redX"_s),
			$of("The CIE x coordinate of the red primary, multiplied by 1e5"_s)
		}),
		$$new($ObjectArray, {
			$of("cHRM/redY"_s),
			$of("The CIE y coordinate of the red primary, multiplied by 1e5"_s)
		}),
		$$new($ObjectArray, {
			$of("cHRM/greenX"_s),
			$of("The CIE x coordinate of the green primary, multiplied by 1e5"_s)
		}),
		$$new($ObjectArray, {
			$of("cHRM/greenY"_s),
			$of("The CIE y coordinate of the green primary, multiplied by 1e5"_s)
		}),
		$$new($ObjectArray, {
			$of("cHRM/blueX"_s),
			$of("The CIE x coordinate of the blue primary, multiplied by 1e5"_s)
		}),
		$$new($ObjectArray, {
			$of("cHRM/blueY"_s),
			$of("The CIE y coordinate of the blue primary, multiplied by 1e5"_s)
		}),
		$$new($ObjectArray, {
			$of("gAMA/value"_s),
			$of("The image gamma, multiplied by 1e5"_s)
		}),
		$$new($ObjectArray, {
			$of("hISTEntry/index"_s),
			$of("The palette index of this histogram entry"_s)
		}),
		$$new($ObjectArray, {
			$of("hISTEntry/value"_s),
			$of("The frequency of this histogram entry"_s)
		}),
		$$new($ObjectArray, {
			$of("iCCP/profileName"_s),
			$of("The name of this ICC profile"_s)
		}),
		$$new($ObjectArray, {
			$of("iCCP/compressionMethod"_s),
			$of("The compression method used to store this ICC profile"_s)
		}),
		$$new($ObjectArray, {
			$of("iTXtEntry/keyword"_s),
			$of("The keyword"_s)
		}),
		$$new($ObjectArray, {
			$of("iTXtEntry/compressionMethod"_s),
			$of("The compression method used to store this iTXt entry"_s)
		}),
		$$new($ObjectArray, {
			$of("iTXtEntry/languageTag"_s),
			$of("The ISO tag describing the language this iTXt entry"_s)
		}),
		$$new($ObjectArray, {
			$of("iTXtEntry/translatedKeyword"_s),
			$of("The translated keyword for iTXt entry"_s)
		}),
		$$new($ObjectArray, {
			$of("iTXtEntry/text"_s),
			$of("The localized text"_s)
		}),
		$$new($ObjectArray, {
			$of("pHYS/pixelsPerUnitXAxis"_s),
			$of("The number of horizontal pixels per unit, multiplied by 1e5"_s)
		}),
		$$new($ObjectArray, {
			$of("pHYS/pixelsPerUnitYAxis"_s),
			$of("The number of vertical pixels per unit, multiplied by 1e5"_s)
		}),
		$$new($ObjectArray, {
			$of("pHYS/unitSpecifier"_s),
			$of("The unit specifier for this chunk (i.e., meters)"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_Grayscale/gray"_s),
			$of("The number of significant bits of the gray samples"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_GrayAlpha/gray"_s),
			$of("The number of significant bits of the gray samples"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_GrayAlpha/alpha"_s),
			$of("The number of significant bits of the alpha samples"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_RGB/red"_s),
			$of("The number of significant bits of the red samples"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_RGB/green"_s),
			$of("The number of significant bits of the green samples"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_RGB/blue"_s),
			$of("The number of significant bits of the blue samples"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_RGBAlpha/red"_s),
			$of("The number of significant bits of the red samples"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_RGBAlpha/green"_s),
			$of("The number of significant bits of the green samples"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_RGBAlpha/blue"_s),
			$of("The number of significant bits of the blue samples"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_RGBAlpha/alpha"_s),
			$of("The number of significant bits of the alpha samples"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_Palette/red"_s),
			$of("The number of significant bits of the red palette entries"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_Palette/green"_s),
			$of("The number of significant bits of the green palette entries"_s)
		}),
		$$new($ObjectArray, {
			$of("sBIT_Palette/blue"_s),
			$of("The number of significant bits of the blue palette entries"_s)
		}),
		$$new($ObjectArray, {
			$of("sPLTEntry/index"_s),
			$of("The index of a suggested palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("sPLTEntry/red"_s),
			$of("The red value of a suggested palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("sPLTEntry/green"_s),
			$of("The green value of a suggested palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("sPLTEntry/blue"_s),
			$of("The blue value of a suggested palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("sPLTEntry/alpha"_s),
			$of("The blue value of a suggested palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("sRGB/renderingIntent"_s),
			$of("The rendering intent"_s)
		}),
		$$new($ObjectArray, {
			$of("tEXtEntry/keyword"_s),
			$of("The keyword"_s)
		}),
		$$new($ObjectArray, {
			$of("tEXtEntry/value"_s),
			$of("The text"_s)
		}),
		$$new($ObjectArray, {
			$of("tIME/year"_s),
			$of("The year when the image was last modified"_s)
		}),
		$$new($ObjectArray, {
			$of("tIME/month"_s),
			$of("The month when the image was last modified, 1 = January"_s)
		}),
		$$new($ObjectArray, {
			$of("tIME/day"_s),
			$of("The day of the month when the image was last modified"_s)
		}),
		$$new($ObjectArray, {
			$of("tIME/hour"_s),
			$of("The hour when the image was last modified"_s)
		}),
		$$new($ObjectArray, {
			$of("tIME/minute"_s),
			$of("The minute when the image was last modified"_s)
		}),
		$$new($ObjectArray, {
			$of("tIME/second"_s),
			$of("The second when the image was last modified, 60 = leap second"_s)
		}),
		$$new($ObjectArray, {
			$of("tRNS_Grayscale/gray"_s),
			$of("The gray value to be considered transparent"_s)
		}),
		$$new($ObjectArray, {
			$of("tRNS_RGB/red"_s),
			$of("The red value to be considered transparent"_s)
		}),
		$$new($ObjectArray, {
			$of("tRNS_RGB/green"_s),
			$of("The green value to be considered transparent"_s)
		}),
		$$new($ObjectArray, {
			$of("tRNS_RGB/blue"_s),
			$of("The blure value to be considered transparent"_s)
		}),
		$$new($ObjectArray, {
			$of("tRNS_Palette/index"_s),
			$of("A palette index to be considered transparent"_s)
		}),
		$$new($ObjectArray, {
			$of("tRNS_Palette/alpha"_s),
			$of("The transparency associated with the palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("zTXtEntry/keyword"_s),
			$of("The keyword"_s)
		}),
		$$new($ObjectArray, {
			$of("zTXtEntry/compressionMethod"_s),
			$of("The compression method"_s)
		}),
		$$new($ObjectArray, {
			$of("zTXtEntry/text"_s),
			$of("The compressed text"_s)
		}),
		$$new($ObjectArray, {
			$of("UnknownChunk/type"_s),
			$of("The 4-character type of the unknown chunk"_s)
		})
	});
}

PNGMetadataFormatResources::PNGMetadataFormatResources() {
}

$Class* PNGMetadataFormatResources::load$($String* name, bool initialize) {
	$loadClass(PNGMetadataFormatResources, name, initialize, &_PNGMetadataFormatResources_ClassInfo_, allocate$PNGMetadataFormatResources);
	return class$;
}

$Class* PNGMetadataFormatResources::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com