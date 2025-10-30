#include <com/sun/imageio/plugins/jpeg/JPEGImageMetadataFormat.h>

#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGMetadataFormat.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadataFormat.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <jcpp.h>

#undef CHILD_POLICY_ALL
#undef CHILD_POLICY_CHOICE
#undef CHILD_POLICY_EMPTY
#undef CHILD_POLICY_SEQUENCE
#undef CHILD_POLICY_SOME
#undef DATATYPE_INTEGER
#undef MAX_VALUE

using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGMetadataFormat = ::com::sun::imageio::plugins::jpeg::JPEGMetadataFormat;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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
				namespace jpeg {

$FieldInfo _JPEGImageMetadataFormat_FieldInfo_[] = {
	{"theInstance", "Lcom/sun/imageio/plugins/jpeg/JPEGImageMetadataFormat;", nullptr, $PRIVATE | $STATIC, $staticField(JPEGImageMetadataFormat, theInstance)},
	{}
};

$MethodInfo _JPEGImageMetadataFormat_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPEGImageMetadataFormat::*)()>(&JPEGImageMetadataFormat::init$))},
	{"canNodeAppear", "(Ljava/lang/String;Ljavax/imageio/ImageTypeSpecifier;)Z", nullptr, $PUBLIC},
	{"getInstance", "()Ljavax/imageio/metadata/IIOMetadataFormat;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<$IIOMetadataFormat*(*)()>(&JPEGImageMetadataFormat::getInstance))},
	{}
};

$ClassInfo _JPEGImageMetadataFormat_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGImageMetadataFormat",
	"com.sun.imageio.plugins.jpeg.JPEGMetadataFormat",
	nullptr,
	_JPEGImageMetadataFormat_FieldInfo_,
	_JPEGImageMetadataFormat_MethodInfo_
};

$Object* allocate$JPEGImageMetadataFormat($Class* clazz) {
	return $of($alloc(JPEGImageMetadataFormat));
}

JPEGImageMetadataFormat* JPEGImageMetadataFormat::theInstance = nullptr;

void JPEGImageMetadataFormat::init$() {
	$useLocalCurrentObjectStackCache();
	$init($JPEG);
	$JPEGMetadataFormat::init$($JPEG::nativeImageMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_ALL);
	addElement("JPEGvariety"_s, $JPEG::nativeImageMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_CHOICE);
	addElement("markerSequence"_s, $JPEG::nativeImageMetadataFormatName, $IIOMetadataFormat::CHILD_POLICY_SEQUENCE);
	addElement("app0JFIF"_s, "JPEGvariety"_s, $IIOMetadataFormat::CHILD_POLICY_SOME);
	addStreamElements("markerSequence"_s);
	addElement("app14Adobe"_s, "markerSequence"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addElement("sof"_s, "markerSequence"_s, 1, 4);
	addElement("sos"_s, "markerSequence"_s, 1, 4);
	addElement("JFXX"_s, "app0JFIF"_s, 1, $Integer::MAX_VALUE);
	addElement("app0JFXX"_s, "JFXX"_s, $IIOMetadataFormat::CHILD_POLICY_CHOICE);
	addElement("app2ICC"_s, "app0JFIF"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("app0JFIF"_s, "majorVersion"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "1"_s, "0"_s, "255"_s, true, true);
	addAttribute("app0JFIF"_s, "minorVersion"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "2"_s, "0"_s, "255"_s, true, true);
	$var($List, resUnits, $new($ArrayList));
	resUnits->add("0"_s);
	resUnits->add("1"_s);
	resUnits->add("2"_s);
	addAttribute("app0JFIF"_s, "resUnits"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "0"_s, resUnits);
	addAttribute("app0JFIF"_s, "Xdensity"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "1"_s, "1"_s, "65535"_s, true, true);
	addAttribute("app0JFIF"_s, "Ydensity"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "1"_s, "1"_s, "65535"_s, true, true);
	addAttribute("app0JFIF"_s, "thumbWidth"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "0"_s, "0"_s, "255"_s, true, true);
	addAttribute("app0JFIF"_s, "thumbHeight"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "0"_s, "0"_s, "255"_s, true, true);
	addElement("JFIFthumbJPEG"_s, "app0JFXX"_s, $IIOMetadataFormat::CHILD_POLICY_SOME);
	addElement("JFIFthumbPalette"_s, "app0JFXX"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addElement("JFIFthumbRGB"_s, "app0JFXX"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	$var($List, codes, $new($ArrayList));
	codes->add("16"_s);
	codes->add("17"_s);
	codes->add("19"_s);
	addAttribute("app0JFXX"_s, "extensionCode"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, ($String*)nullptr, codes);
	addChildElement("markerSequence"_s, "JFIFthumbJPEG"_s);
	addAttribute("JFIFthumbPalette"_s, "thumbWidth"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "0"_s, "255"_s, true, true);
	addAttribute("JFIFthumbPalette"_s, "thumbHeight"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "0"_s, "255"_s, true, true);
	addAttribute("JFIFthumbRGB"_s, "thumbWidth"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "0"_s, "255"_s, true, true);
	addAttribute("JFIFthumbRGB"_s, "thumbHeight"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "0"_s, "255"_s, true, true);
	$load($ICC_Profile);
	addObjectValue("app2ICC"_s, $ICC_Profile::class$, false, ($Object*)nullptr);
	addAttribute("app14Adobe"_s, "version"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "100"_s, "100"_s, "255"_s, true, true);
	addAttribute("app14Adobe"_s, "flags0"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "0"_s, "0"_s, "65535"_s, true, true);
	addAttribute("app14Adobe"_s, "flags1"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "0"_s, "0"_s, "65535"_s, true, true);
	$var($List, transforms, $new($ArrayList));
	transforms->add("0"_s);
	transforms->add("1"_s);
	transforms->add("2"_s);
	addAttribute("app14Adobe"_s, "transform"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, ($String*)nullptr, transforms);
	addElement("componentSpec"_s, "sof"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	$var($List, procs, $new($ArrayList));
	procs->add("0"_s);
	procs->add("1"_s);
	procs->add("2"_s);
	addAttribute("sof"_s, "process"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, ($String*)nullptr, procs);
	addAttribute("sof"_s, "samplePrecision"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "8"_s);
	addAttribute("sof"_s, "numLines"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "0"_s, "65535"_s, true, true);
	addAttribute("sof"_s, "samplesPerLine"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, nullptr, "0"_s, "65535"_s, true, true);
	$var($List, comps, $new($ArrayList));
	comps->add("1"_s);
	comps->add("2"_s);
	comps->add("3"_s);
	comps->add("4"_s);
	addAttribute("sof"_s, "numFrameComponents"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, ($String*)nullptr, comps);
	addAttribute("componentSpec"_s, "componentId"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addAttribute("componentSpec"_s, "HsamplingFactor"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "255"_s, true, true);
	addAttribute("componentSpec"_s, "VsamplingFactor"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "1"_s, "255"_s, true, true);
	$var($List, tabids, $new($ArrayList));
	tabids->add("0"_s);
	tabids->add("1"_s);
	tabids->add("2"_s);
	tabids->add("3"_s);
	addAttribute("componentSpec"_s, "QtableSelector"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, ($String*)nullptr, tabids);
	addElement("scanComponentSpec"_s, "sos"_s, $IIOMetadataFormat::CHILD_POLICY_EMPTY);
	addAttribute("sos"_s, "numScanComponents"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, ($String*)nullptr, comps);
	addAttribute("sos"_s, "startSpectralSelection"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "0"_s, "0"_s, "63"_s, true, true);
	addAttribute("sos"_s, "endSpectralSelection"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "63"_s, "0"_s, "63"_s, true, true);
	addAttribute("sos"_s, "approxHigh"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "0"_s, "0"_s, "15"_s, true, true);
	addAttribute("sos"_s, "approxLow"_s, $IIOMetadataFormat::DATATYPE_INTEGER, false, "0"_s, "0"_s, "15"_s, true, true);
	addAttribute("scanComponentSpec"_s, "componentSelector"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, nullptr, "0"_s, "255"_s, true, true);
	addAttribute("scanComponentSpec"_s, "dcHuffTable"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, ($String*)nullptr, tabids);
	addAttribute("scanComponentSpec"_s, "acHuffTable"_s, $IIOMetadataFormat::DATATYPE_INTEGER, true, ($String*)nullptr, tabids);
}

bool JPEGImageMetadataFormat::canNodeAppear($String* elementName, $ImageTypeSpecifier* imageType) {
	bool var$1 = $nc(elementName)->equals($(getRootName()));
	bool var$0 = var$1 || $nc(elementName)->equals("JPEGvariety"_s);
	if (var$0 || isInSubtree(elementName, "markerSequence"_s)) {
		return true;
	}
	bool var$2 = (isInSubtree(elementName, "app0JFIF"_s));
	if (var$2 && $JPEG::isJFIFcompliant(imageType, true)) {
		return true;
	}
	return false;
}

$IIOMetadataFormat* JPEGImageMetadataFormat::getInstance() {
	$load(JPEGImageMetadataFormat);
	$synchronized(class$) {
		$init(JPEGImageMetadataFormat);
		if (JPEGImageMetadataFormat::theInstance == nullptr) {
			$assignStatic(JPEGImageMetadataFormat::theInstance, $new(JPEGImageMetadataFormat));
		}
		return JPEGImageMetadataFormat::theInstance;
	}
}

void clinit$JPEGImageMetadataFormat($Class* class$) {
	$assignStatic(JPEGImageMetadataFormat::theInstance, nullptr);
}

JPEGImageMetadataFormat::JPEGImageMetadataFormat() {
}

$Class* JPEGImageMetadataFormat::load$($String* name, bool initialize) {
	$loadClass(JPEGImageMetadataFormat, name, initialize, &_JPEGImageMetadataFormat_ClassInfo_, clinit$JPEGImageMetadataFormat, allocate$JPEGImageMetadataFormat);
	return class$;
}

$Class* JPEGImageMetadataFormat::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com