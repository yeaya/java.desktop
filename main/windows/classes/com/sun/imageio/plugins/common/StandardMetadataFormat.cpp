#include <com/sun/imageio/plugins/common/StandardMetadataFormat.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <jcpp.h>

#undef CHILD_POLICY_EMPTY
#undef CHILD_POLICY_SOME
#undef DATATYPE_FLOAT
#undef DATATYPE_INTEGER
#undef DATATYPE_STRING
#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOMetadataFormat = ::javax::imageio::metadata::IIOMetadataFormat;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

$MethodInfo _StandardMetadataFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StandardMetadataFormat::*)()>(&StandardMetadataFormat::init$))},
	{"addSingleAttributeElement", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(StandardMetadataFormat::*)($String*,$String*,int32_t)>(&StandardMetadataFormat::addSingleAttributeElement))},
	{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StandardMetadataFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.common.StandardMetadataFormat",
	"javax.imageio.metadata.IIOMetadataFormatImpl",
	nullptr,
	nullptr,
	_StandardMetadataFormat_MethodInfo_
};

$Object* allocate$StandardMetadataFormat($Class* clazz) {
	return $of($alloc(StandardMetadataFormat));
}

void StandardMetadataFormat::addSingleAttributeElement($String* elementName, $String* parentName, int32_t dataType) {
	addElement(elementName, parentName, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute(elementName, "value"_s, dataType, true, nullptr);
}

void StandardMetadataFormat::init$() {
	$init($IIOMetadataFormatImpl);
	$IIOMetadataFormatImpl::init$($IIOMetadataFormatImpl::standardMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SOME);
	$var($List, values, nullptr);
	addElement("Chroma"_s, $IIOMetadataFormatImpl::standardMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SOME);
	addElement("ColorSpaceType"_s, "Chroma"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	$assign(values, $new($ArrayList));
	values->add("XYZ"_s);
	values->add("Lab"_s);
	values->add("Luv"_s);
	values->add("YCbCr"_s);
	values->add("Yxy"_s);
	values->add("YCCK"_s);
	values->add("PhotoYCC"_s);
	values->add("RGB"_s);
	values->add("GRAY"_s);
	values->add("HSV"_s);
	values->add("HLS"_s);
	values->add("CMYK"_s);
	values->add("CMY"_s);
	values->add("2CLR"_s);
	values->add("3CLR"_s);
	values->add("4CLR"_s);
	values->add("5CLR"_s);
	values->add("6CLR"_s);
	values->add("7CLR"_s);
	values->add("8CLR"_s);
	values->add("9CLR"_s);
	values->add("ACLR"_s);
	values->add("BCLR"_s);
	values->add("CCLR"_s);
	values->add("DCLR"_s);
	values->add("ECLR"_s);
	values->add("FCLR"_s);
	addAttribute("ColorSpaceType"_s, "name"_s, $IIOMetadataFormat::DATATYPE_STRING, true, ($String*)nullptr, values);
	addElement("NumChannels"_s, "Chroma"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("NumChannels"_s, "value"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, 0, $Integer::MAX_VALUE);
	addElement("Gamma"_s, "Chroma"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("Gamma"_s, "value"_s, $IIOMetadataFormat::DATATYPE_FLOAT, true, nullptr);
	addElement("BlackIsZero"_s, "Chroma"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addBooleanAttribute("BlackIsZero"_s, "value"_s, true, true);
	addElement("Palette"_s, "Chroma"_s, 0, $Integer::MAX_VALUE);
	addElement("PaletteEntry"_s, "Palette"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("PaletteEntry"_s, "index"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr);
	addAttribute("PaletteEntry"_s, "red"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr);
	addAttribute("PaletteEntry"_s, "green"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr);
	addAttribute("PaletteEntry"_s, "blue"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr);
	addAttribute("PaletteEntry"_s, "alpha"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "255"_s);
	addElement("BackgroundIndex"_s, "Chroma"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("BackgroundIndex"_s, "value"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr);
	addElement("BackgroundColor"_s, "Chroma"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("BackgroundColor"_s, "red"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr);
	addAttribute("BackgroundColor"_s, "green"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr);
	addAttribute("BackgroundColor"_s, "blue"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr);
	addElement("Compression"_s, $IIOMetadataFormatImpl::standardMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SOME);
	addSingleAttributeElement("CompressionTypeName"_s, "Compression"_s, $IIOMetadataFormat::DATATYPE_STRING);
	addElement("Lossless"_s, "Compression"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addBooleanAttribute("Lossless"_s, "value"_s, true, true);
	addSingleAttributeElement("NumProgressiveScans"_s, "Compression"_s, $IIOMetadataFormat::DATATYPE_INTEGER);
	addSingleAttributeElement("BitRate"_s, "Compression"_s, $IIOMetadataFormat::DATATYPE_FLOAT);
	addElement("Data"_s, $IIOMetadataFormatImpl::standardMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SOME);
	addElement("PlanarConfiguration"_s, "Data"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	$assign(values, $new($ArrayList));
	values->add("PixelInterleaved"_s);
	values->add("PlaneInterleaved"_s);
	values->add("LineInterleaved"_s);
	values->add("TileInterleaved"_s);
	addAttribute("PlanarConfiguration"_s, "value"_s, $IIOMetadataFormat::DATATYPE_STRING, true, ($String*)nullptr, values);
	addElement("SampleFormat"_s, "Data"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	$assign(values, $new($ArrayList));
	values->add("SignedIntegral"_s);
	values->add("UnsignedIntegral"_s);
	values->add("Real"_s);
	values->add("Index"_s);
	addAttribute("SampleFormat"_s, "value"_s, $IIOMetadataFormat::DATATYPE_STRING, true, ($String*)nullptr, values);
	addElement("BitsPerSample"_s, "Data"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("BitsPerSample"_s, "value"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, 1, $Integer::MAX_VALUE);
	addElement("SignificantBitsPerSample"_s, "Data"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("SignificantBitsPerSample"_s, "value"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, 1, $Integer::MAX_VALUE);
	addElement("SampleMSB"_s, "Data"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("SampleMSB"_s, "value"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, 1, $Integer::MAX_VALUE);
	addElement("Dimension"_s, $IIOMetadataFormatImpl::standardMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SOME);
	addSingleAttributeElement("PixelAspectRatio"_s, "Dimension"_s, $IIOMetadataFormat::DATATYPE_FLOAT);
	addElement("ImageOrientation"_s, "Dimension"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	$assign(values, $new($ArrayList));
	values->add("Normal"_s);
	values->add("Rotate90"_s);
	values->add("Rotate180"_s);
	values->add("Rotate270"_s);
	values->add("FlipH"_s);
	values->add("FlipV"_s);
	values->add("FlipHRotate90"_s);
	values->add("FlipVRotate90"_s);
	addAttribute("ImageOrientation"_s, "value"_s, $IIOMetadataFormat::DATATYPE_STRING, true, ($String*)nullptr, values);
	addSingleAttributeElement("HorizontalPixelSize"_s, "Dimension"_s, $IIOMetadataFormat::DATATYPE_FLOAT);
	addSingleAttributeElement("VerticalPixelSize"_s, "Dimension"_s, $IIOMetadataFormat::DATATYPE_FLOAT);
	addSingleAttributeElement("HorizontalPhysicalPixelSpacing"_s, "Dimension"_s, $IIOMetadataFormat::DATATYPE_FLOAT);
	addSingleAttributeElement("VerticalPhysicalPixelSpacing"_s, "Dimension"_s, $IIOMetadataFormat::DATATYPE_FLOAT);
	addSingleAttributeElement("HorizontalPosition"_s, "Dimension"_s, $IIOMetadataFormat::DATATYPE_FLOAT);
	addSingleAttributeElement("VerticalPosition"_s, "Dimension"_s, $IIOMetadataFormat::DATATYPE_FLOAT);
	addSingleAttributeElement("HorizontalPixelOffset"_s, "Dimension"_s, $IIOMetadataFormat::DATATYPE_INTEGER);
	addSingleAttributeElement("VerticalPixelOffset"_s, "Dimension"_s, $IIOMetadataFormat::DATATYPE_INTEGER);
	addSingleAttributeElement("HorizontalScreenSize"_s, "Dimension"_s, $IIOMetadataFormat::DATATYPE_INTEGER);
	addSingleAttributeElement("VerticalScreenSize"_s, "Dimension"_s, $IIOMetadataFormat::DATATYPE_INTEGER);
	addElement("Document"_s, $IIOMetadataFormatImpl::standardMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SOME);
	addElement("FormatVersion"_s, "Document"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("FormatVersion"_s, "value"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	addElement("SubimageInterpretation"_s, "Document"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	$assign(values, $new($ArrayList));
	values->add("Standalone"_s);
	values->add("SinglePage"_s);
	values->add("FullResolution"_s);
	values->add("ReducedResolution"_s);
	values->add("PyramidLayer"_s);
	values->add("Preview"_s);
	values->add("VolumeSlice"_s);
	values->add("ObjectView"_s);
	values->add("Panorama"_s);
	values->add("AnimationFrame"_s);
	values->add("TransparencyMask"_s);
	values->add("CompositingLayer"_s);
	values->add("SpectralSlice"_s);
	values->add("Unknown"_s);
	addAttribute("SubimageInterpretation"_s, "value"_s, $IIOMetadataFormat::DATATYPE_STRING, true, ($String*)nullptr, values);
	addElement("ImageCreationTime"_s, "Document"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("ImageCreationTime"_s, "year"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr);
	addAttribute("ImageCreationTime"_s, "month"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "12"_s, true, true);
	addAttribute("ImageCreationTime"_s, "day"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "31"_s, true, true);
	addAttribute("ImageCreationTime"_s, "hour"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "0"_s, "0"_s, "23"_s, true, true);
	addAttribute("ImageCreationTime"_s, "minute"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "0"_s, "0"_s, "59"_s, true, true);
	addAttribute("ImageCreationTime"_s, "second"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "0"_s, "0"_s, "60"_s, true, true);
	addElement("ImageModificationTime"_s, "Document"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("ImageModificationTime"_s, "year"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr);
	addAttribute("ImageModificationTime"_s, "month"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "12"_s, true, true);
	addAttribute("ImageModificationTime"_s, "day"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "31"_s, true, true);
	addAttribute("ImageModificationTime"_s, "hour"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "0"_s, "0"_s, "23"_s, true, true);
	addAttribute("ImageModificationTime"_s, "minute"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "0"_s, "0"_s, "59"_s, true, true);
	addAttribute("ImageModificationTime"_s, "second"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "0"_s, "0"_s, "60"_s, true, true);
	addElement("Text"_s, $IIOMetadataFormatImpl::standardMetadataFormatName, 0, $Integer::MAX_VALUE);
	addElement("TextEntry"_s, "Text"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("TextEntry"_s, "keyword"_s, $IIOMetadataFormat::DATATYPE_STRING, false, nullptr);
	addAttribute("TextEntry"_s, "value"_s, $IIOMetadataFormat::DATATYPE_STRING, true, nullptr);
	addAttribute("TextEntry"_s, "language"_s, $IIOMetadataFormat::DATATYPE_STRING, false, nullptr);
	addAttribute("TextEntry"_s, "encoding"_s, $IIOMetadataFormat::DATATYPE_STRING, false, nullptr);
	$assign(values, $new($ArrayList));
	values->add("none"_s);
	values->add("lzw"_s);
	values->add("zip"_s);
	values->add("bzip"_s);
	values->add("other"_s);
	addAttribute("TextEntry"_s, "compression"_s, $IIOMetadataFormat::DATATYPE_STRING, false, "none"_s, values);
	addElement("Transparency"_s, $IIOMetadataFormatImpl::standardMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SOME);
	addElement("Alpha"_s, "Transparency"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	$assign(values, $new($ArrayList));
	values->add("none"_s);
	values->add("premultiplied"_s);
	values->add("nonpremultiplied"_s);
	addAttribute("Alpha"_s, "value"_s, $IIOMetadataFormat::DATATYPE_STRING, false, "none"_s, values);
	addSingleAttributeElement("TransparentIndex"_s, "Transparency"_s, $IIOMetadataFormat::DATATYPE_INTEGER);
	addElement("TransparentColor"_s, "Transparency"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("TransparentColor"_s, "value"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, 0, $Integer::MAX_VALUE);
	addElement("TileTransparencies"_s, "Transparency"_s, 0, $Integer::MAX_VALUE);
	addElement("TransparentTile"_s, "TileTransparencies"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("TransparentTile"_s, "x"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr);
	addAttribute("TransparentTile"_s, "y"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr);
	addElement("TileOpacities"_s, "Transparency"_s, 0, $Integer::MAX_VALUE);
	addElement("OpaqueTile"_s, "TileOpacities"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("OpaqueTile"_s, "x"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr);
	addAttribute("OpaqueTile"_s, "y"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr);
}

bool StandardMetadataFormat::canNodeAppear($String* elementName, $ImageTypeSpecifier* imageType) {
	return true;
}

StandardMetadataFormat::StandardMetadataFormat() {
}

$Class* StandardMetadataFormat::load$($String* name, bool initialize) {
	$loadClass(StandardMetadataFormat, name, initialize, &_StandardMetadataFormat_ClassInfo_, allocate$StandardMetadataFormat);
	return class$;
}

$Class* StandardMetadataFormat::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com