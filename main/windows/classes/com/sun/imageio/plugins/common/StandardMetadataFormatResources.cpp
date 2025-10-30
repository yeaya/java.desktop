#include <com/sun/imageio/plugins/common/StandardMetadataFormatResources.h>

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
				namespace common {

$MethodInfo _StandardMetadataFormatResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StandardMetadataFormatResources::*)()>(&StandardMetadataFormatResources::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _StandardMetadataFormatResources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.common.StandardMetadataFormatResources",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_StandardMetadataFormatResources_MethodInfo_
};

$Object* allocate$StandardMetadataFormatResources($Class* clazz) {
	return $of($alloc(StandardMetadataFormatResources));
}

void StandardMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* StandardMetadataFormatResources::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Chroma"_s),
			$of("Chroma (color) information"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorSpaceType"_s),
			$of("The raw color space of the image"_s)
		}),
		$$new($ObjectArray, {
			$of("NumChannels"_s),
			$of("The number of channels in the raw image, including alpha"_s)
		}),
		$$new($ObjectArray, {
			$of("Gamma"_s),
			$of("The image gamma"_s)
		}),
		$$new($ObjectArray, {
			$of("BlackIsZero"_s),
			$of("True if smaller values represent darker shades"_s)
		}),
		$$new($ObjectArray, {
			$of("Palette"_s),
			$of("Palette-color information"_s)
		}),
		$$new($ObjectArray, {
			$of("PaletteEntry"_s),
			$of("A palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("PaletteEntry/index"_s),
			$of("The index of the palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("PaletteEntry/red"_s),
			$of("The red value for the palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("PaletteEntry/green"_s),
			$of("The green value for the palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("PaletteEntry/blue"_s),
			$of("The blue value for the palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("PaletteEntry/alpha"_s),
			$of("The alpha value for the palette entry"_s)
		}),
		$$new($ObjectArray, {
			$of("BackgroundIndex"_s),
			$of("A palette index to be used as a background"_s)
		}),
		$$new($ObjectArray, {
			$of("BackgroundColor"_s),
			$of("An RGB triple to be used as a background"_s)
		}),
		$$new($ObjectArray, {
			$of("BackgroundColor/red"_s),
			$of("The red background value"_s)
		}),
		$$new($ObjectArray, {
			$of("BackgroundColor/green"_s),
			$of("The green background value"_s)
		}),
		$$new($ObjectArray, {
			$of("BackgroundColor/blue"_s),
			$of("The blue background value"_s)
		}),
		$$new($ObjectArray, {
			$of("Compression"_s),
			$of("Compression information"_s)
		}),
		$$new($ObjectArray, {
			$of("CompressionTypeName"_s),
			$of("The name of the compression scheme in use"_s)
		}),
		$$new($ObjectArray, {
			$of("Lossless"_s),
			$of("True if the compression scheme is lossless"_s)
		}),
		$$new($ObjectArray, {
			$of("BitRate"_s),
			$of("The estimated bit rate of the compression scheme"_s)
		}),
		$$new($ObjectArray, {
			$of("NumProgressiveScans"_s),
			$of("The number of progressive scans used in the image encoding"_s)
		}),
		$$new($ObjectArray, {
			$of("Data"_s),
			$of("Information on the image layout"_s)
		}),
		$$new($ObjectArray, {
			$of("PlanarConfiguration"_s),
			$of("The organization of image samples in the stream"_s)
		}),
		$$new($ObjectArray, {
			$of("SampleFormat"_s),
			$of("The numeric format of image samples"_s)
		}),
		$$new($ObjectArray, {
			$of("BitsPerSample"_s),
			$of("The number of bits per sample"_s)
		}),
		$$new($ObjectArray, {
			$of("BitsPerSample/value"_s),
			$of("A list of integers, one per channel"_s)
		}),
		$$new($ObjectArray, {
			$of("SignificantBitsPerSample"_s),
			$of("The number of significant bits per sample"_s)
		}),
		$$new($ObjectArray, {
			$of("SignificantBitsPerSample/value"_s),
			$of("A list of integers, one per channel"_s)
		}),
		$$new($ObjectArray, {
			$of("SampleMSB"_s),
			$of("The position of the most significant bit of each sample"_s)
		}),
		$$new($ObjectArray, {
			$of("SampleMSB/value"_s),
			$of("A list of integers, one per channel"_s)
		}),
		$$new($ObjectArray, {
			$of("Dimension"_s),
			$of("Dimension information"_s)
		}),
		$$new($ObjectArray, {
			$of("PixelAspectRatio"_s),
			$of("The width of a pixel divided by its height"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageOrientation"_s),
			$of("The desired orientation of the image in terms of flips and counter-clockwise rotations"_s)
		}),
		$$new($ObjectArray, {
			$of("HorizontalPixelSize"_s),
			$of("The width of a pixel, in millimeters, as it should be rendered on media"_s)
		}),
		$$new($ObjectArray, {
			$of("VerticalPixelSize"_s),
			$of("The height of a pixel, in millimeters, as it should be rendered on media"_s)
		}),
		$$new($ObjectArray, {
			$of("HorizontalPhysicalPixelSpacing"_s),
			$of("The horizontal distance in the subject of the image, in millimeters, represented by one pixel at the center of the image"_s)
		}),
		$$new($ObjectArray, {
			$of("VerticalPhysicalPixelSpacing"_s),
			$of("The vertical distance in the subject of the image, in millimeters, represented by one pixel at the center of the image"_s)
		}),
		$$new($ObjectArray, {
			$of("HorizontalPosition"_s),
			$of("The horizontal position, in millimeters, where the image should be rendered on media "_s)
		}),
		$$new($ObjectArray, {
			$of("VerticalPosition"_s),
			$of("The vertical position, in millimeters, where the image should be rendered on media "_s)
		}),
		$$new($ObjectArray, {
			$of("HorizontalPixelOffset"_s),
			$of("The horizontal position, in pixels, where the image should be rendered onto a raster display"_s)
		}),
		$$new($ObjectArray, {
			$of("VerticalPixelOffset"_s),
			$of("The vertical position, in pixels, where the image should be rendered onto a raster display"_s)
		}),
		$$new($ObjectArray, {
			$of("HorizontalScreenSize"_s),
			$of("The width, in pixels, of the raster display into which the image should be rendered"_s)
		}),
		$$new($ObjectArray, {
			$of("VerticalScreenSize"_s),
			$of("The height, in pixels, of the raster display into which the image should be rendered"_s)
		}),
		$$new($ObjectArray, {
			$of("Document"_s),
			$of("Document information"_s)
		}),
		$$new($ObjectArray, {
			$of("FormatVersion"_s),
			$of("The version of the format used by the stream"_s)
		}),
		$$new($ObjectArray, {
			$of("SubimageInterpretation"_s),
			$of("The interpretation of this image in relation to the other images stored in the same stream"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageCreationTime"_s),
			$of("The time of image creation"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageCreationTime/year"_s),
			$of("The full year (e.g., 1967, not 67)"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageCreationTime/month"_s),
			$of("The month, with January = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageCreationTime/day"_s),
			$of("The day of the month"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageCreationTime/hour"_s),
			$of("The hour from 0 to 23"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageCreationTime/minute"_s),
			$of("The minute from 0 to 59"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageCreationTime/second"_s),
			$of("The second from 0 to 60 (60 = leap second)"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageModificationTime"_s),
			$of("The time of the last image modification"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageModificationTime/year"_s),
			$of("The full year (e.g., 1967, not 67)"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageModificationTime/month"_s),
			$of("The month, with January = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageModificationTime/day"_s),
			$of("The day of the month"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageModificationTime/hour"_s),
			$of("The hour from 0 to 23"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageModificationTime/minute"_s),
			$of("The minute from 0 to 59"_s)
		}),
		$$new($ObjectArray, {
			$of("ImageModificationTime/second"_s),
			$of("The second from 0 to 60 (60 = leap second)"_s)
		}),
		$$new($ObjectArray, {
			$of("Text"_s),
			$of("Text information"_s)
		}),
		$$new($ObjectArray, {
			$of("TextEntry"_s),
			$of("A text entry"_s)
		}),
		$$new($ObjectArray, {
			$of("TextEntry/keyword"_s),
			$of("A keyword associated with the text entry"_s)
		}),
		$$new($ObjectArray, {
			$of("TextEntry/value"_s),
			$of("the text entry"_s)
		}),
		$$new($ObjectArray, {
			$of("TextEntry/language"_s),
			$of("The language of the text"_s)
		}),
		$$new($ObjectArray, {
			$of("TextEntry/encoding"_s),
			$of("The encoding of the text"_s)
		}),
		$$new($ObjectArray, {
			$of("TextEntry/compression"_s),
			$of("The method used to compress the text"_s)
		}),
		$$new($ObjectArray, {
			$of("Transparency"_s),
			$of("Transparency information"_s)
		}),
		$$new($ObjectArray, {
			$of("Alpha"_s),
			$of("The type of alpha information contained in the image"_s)
		}),
		$$new($ObjectArray, {
			$of("TransparentIndex"_s),
			$of("A palette index to be treated as transparent"_s)
		}),
		$$new($ObjectArray, {
			$of("TransparentColor"_s),
			$of("An RGB color to be treated as transparent"_s)
		}),
		$$new($ObjectArray, {
			$of("TransparentColor/red"_s),
			$of("The red channel of the transparent color"_s)
		}),
		$$new($ObjectArray, {
			$of("TransparentColor/green"_s),
			$of("The green channel of the transparent color"_s)
		}),
		$$new($ObjectArray, {
			$of("TransparentColor/blue"_s),
			$of("The blue channel of the transparent color"_s)
		}),
		$$new($ObjectArray, {
			$of("TileTransparencies"_s),
			$of("A list of completely transparent tiles"_s)
		}),
		$$new($ObjectArray, {
			$of("TransparentTile"_s),
			$of("The index of a completely transparent tile"_s)
		}),
		$$new($ObjectArray, {
			$of("TransparentTile/x"_s),
			$of("The tile\'s X index"_s)
		}),
		$$new($ObjectArray, {
			$of("TransparentTile/y"_s),
			$of("The tile\'s Y index"_s)
		}),
		$$new($ObjectArray, {
			$of("TileOpacities"_s),
			$of("A list of completely opaque tiles"_s)
		}),
		$$new($ObjectArray, {
			$of("OpaqueTile"_s),
			$of("The index of a completely opaque tile"_s)
		}),
		$$new($ObjectArray, {
			$of("OpaqueTile/x"_s),
			$of("The tile\'s X index"_s)
		}),
		$$new($ObjectArray, {
			$of("OpaqueTile/y"_s),
			$of("The tile\'s Y index"_s)
		})
	});
}

StandardMetadataFormatResources::StandardMetadataFormatResources() {
}

$Class* StandardMetadataFormatResources::load$($String* name, bool initialize) {
	$loadClass(StandardMetadataFormatResources, name, initialize, &_StandardMetadataFormatResources_ClassInfo_, allocate$StandardMetadataFormatResources);
	return class$;
}

$Class* StandardMetadataFormatResources::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com