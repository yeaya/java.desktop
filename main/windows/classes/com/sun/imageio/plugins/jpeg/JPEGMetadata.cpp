#include <com/sun/imageio/plugins/jpeg/JPEGMetadata.h>

#include <com/sun/imageio/plugins/common/ImageUtil.h>
#include <com/sun/imageio/plugins/jpeg/AdobeMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/COMMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/DHTMarkerSegment$Htable.h>
#include <com/sun/imageio/plugins/jpeg/DHTMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/DQTMarkerSegment$Qtable.h>
#include <com/sun/imageio/plugins/jpeg/DQTMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/DRIMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/SOFMarkerSegment$ComponentSpec.h>
#include <com/sun/imageio/plugins/jpeg/SOFMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/SOSMarkerSegment$ScanComponentSpec.h>
#include <com/sun/imageio/plugins/jpeg/SOSMarkerSegment.h>
#include <java/awt/Point.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_ColorSpace.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/awt/image/ColorModel.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/InternalError.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/metadata/IIOMetadataFormatImpl.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/plugins/jpeg/JPEGHuffmanTable.h>
#include <javax/imageio/plugins/jpeg/JPEGImageWriteParam.h>
#include <javax/imageio/plugins/jpeg/JPEGQTable.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef ADOBE_IMPOSSIBLE
#undef ADOBE_UNKNOWN
#undef ADOBE_YCC
#undef ADOBE_YCCK
#undef APP0
#undef APP14
#undef APP2
#undef COM
#undef CS_PYCC
#undef DEFAULT_QUALITY
#undef DENSITY_UNIT_ASPECT_RATIO
#undef DENSITY_UNIT_DOTS_CM
#undef DHT
#undef DQT
#undef DRI
#undef EOI
#undef MODE_DEFAULT
#undef MODE_EXPLICIT
#undef RST0
#undef RST1
#undef RST2
#undef RST3
#undef RST4
#undef RST5
#undef RST6
#undef RST7
#undef SOF0
#undef SOF1
#undef SOF2
#undef SOI
#undef SOS
#undef TYPE_3CLR
#undef TYPE_CMYK
#undef TYPE_GRAY
#undef TYPE_RGB
#undef WARNING_DEST_IGNORED
#undef WARNING_METADATA_ADJUSTED_FOR_THUMB
#undef WARNING_NO_JFIF_IN_THUMB

using $SOFMarkerSegment$ComponentSpecArray = $Array<::com::sun::imageio::plugins::jpeg::SOFMarkerSegment$ComponentSpec>;
using $SOSMarkerSegment$ScanComponentSpecArray = $Array<::com::sun::imageio::plugins::jpeg::SOSMarkerSegment$ScanComponentSpec>;
using $JPEGHuffmanTableArray = $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>;
using $JPEGQTableArray = $Array<::javax::imageio::plugins::jpeg::JPEGQTable>;
using $ImageUtil = ::com::sun::imageio::plugins::common::ImageUtil;
using $AdobeMarkerSegment = ::com::sun::imageio::plugins::jpeg::AdobeMarkerSegment;
using $COMMarkerSegment = ::com::sun::imageio::plugins::jpeg::COMMarkerSegment;
using $DHTMarkerSegment = ::com::sun::imageio::plugins::jpeg::DHTMarkerSegment;
using $DHTMarkerSegment$Htable = ::com::sun::imageio::plugins::jpeg::DHTMarkerSegment$Htable;
using $DQTMarkerSegment = ::com::sun::imageio::plugins::jpeg::DQTMarkerSegment;
using $DQTMarkerSegment$Qtable = ::com::sun::imageio::plugins::jpeg::DQTMarkerSegment$Qtable;
using $DRIMarkerSegment = ::com::sun::imageio::plugins::jpeg::DRIMarkerSegment;
using $JFIFMarkerSegment = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $JPEGImageWriter = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $SOFMarkerSegment = ::com::sun::imageio::plugins::jpeg::SOFMarkerSegment;
using $SOFMarkerSegment$ComponentSpec = ::com::sun::imageio::plugins::jpeg::SOFMarkerSegment$ComponentSpec;
using $SOSMarkerSegment = ::com::sun::imageio::plugins::jpeg::SOSMarkerSegment;
using $SOSMarkerSegment$ScanComponentSpec = ::com::sun::imageio::plugins::jpeg::SOSMarkerSegment$ScanComponentSpec;
using $Point = ::java::awt::Point;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_ColorSpace = ::java::awt::color::ICC_ColorSpace;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $ColorModel = ::java::awt::image::ColorModel;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $IIOException = ::javax::imageio::IIOException;
using $IIOParam = ::javax::imageio::IIOParam;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $IIOMetadataFormatImpl = ::javax::imageio::metadata::IIOMetadataFormatImpl;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $JPEGHuffmanTable = ::javax::imageio::plugins::jpeg::JPEGHuffmanTable;
using $JPEGImageWriteParam = ::javax::imageio::plugins::jpeg::JPEGImageWriteParam;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JPEGMetadata_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JPEGMetadata, debug)},
	{"resetSequence", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/imageio/plugins/jpeg/MarkerSegment;>;", $PRIVATE, $field(JPEGMetadata, resetSequence)},
	{"inThumb", "Z", nullptr, $PRIVATE, $field(JPEGMetadata, inThumb)},
	{"hasAlpha", "Z", nullptr, $PRIVATE, $field(JPEGMetadata, hasAlpha)},
	{"markerSequence", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/imageio/plugins/jpeg/MarkerSegment;>;", 0, $field(JPEGMetadata, markerSequence)},
	{"isStream", "Z", nullptr, $FINAL, $field(JPEGMetadata, isStream)},
	{"transparencyDone", "Z", nullptr, $PRIVATE, $field(JPEGMetadata, transparencyDone)},
	{}
};

$MethodInfo _JPEGMetadata_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(ZZ)V", nullptr, 0, $method(static_cast<void(JPEGMetadata::*)(bool,bool)>(&JPEGMetadata::init$))},
	{"<init>", "(ZZLjavax/imageio/stream/ImageInputStream;Lcom/sun/imageio/plugins/jpeg/JPEGImageReader;)V", nullptr, 0, $method(static_cast<void(JPEGMetadata::*)(bool,bool,$ImageInputStream*,$JPEGImageReader*)>(&JPEGMetadata::init$)), "java.io.IOException"},
	{"<init>", "(Ljavax/imageio/ImageWriteParam;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", nullptr, 0, $method(static_cast<void(JPEGMetadata::*)($ImageWriteParam*,$JPEGImageWriter*)>(&JPEGMetadata::init$))},
	{"<init>", "(Ljavax/imageio/ImageTypeSpecifier;Ljavax/imageio/ImageWriteParam;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", nullptr, 0, $method(static_cast<void(JPEGMetadata::*)($ImageTypeSpecifier*,$ImageWriteParam*,$JPEGImageWriter*)>(&JPEGMetadata::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"cloneSequence", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/imageio/plugins/jpeg/MarkerSegment;>;", $PRIVATE, $method(static_cast<$List*(JPEGMetadata::*)()>(&JPEGMetadata::cloneSequence))},
	{"countScanBands", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(JPEGMetadata::*)()>(&JPEGMetadata::countScanBands))},
	{"findIntegerRatio", "(F)Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Point*(*)(float)>(&JPEGMetadata::findIntegerRatio))},
	{"findLastUnknownMarkerSegmentPosition", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(JPEGMetadata::*)()>(&JPEGMetadata::findLastUnknownMarkerSegmentPosition))},
	{"findMarkerSegment", "(I)Lcom/sun/imageio/plugins/jpeg/MarkerSegment;", nullptr, 0},
	{"findMarkerSegment", "(Ljava/lang/Class;Z)Lcom/sun/imageio/plugins/jpeg/MarkerSegment;", "(Ljava/lang/Class<+Lcom/sun/imageio/plugins/jpeg/MarkerSegment;>;Z)Lcom/sun/imageio/plugins/jpeg/MarkerSegment;", 0},
	{"findMarkerSegmentPosition", "(Ljava/lang/Class;Z)I", "(Ljava/lang/Class<+Lcom/sun/imageio/plugins/jpeg/MarkerSegment;>;Z)I", $PRIVATE, $method(static_cast<int32_t(JPEGMetadata::*)($Class*,bool)>(&JPEGMetadata::findMarkerSegmentPosition))},
	{"getAsTree", "(Ljava/lang/String;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getNativeTree", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"getStandardChromaNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED},
	{"getStandardCompressionNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED},
	{"getStandardDimensionNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED},
	{"getStandardTextNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED},
	{"getStandardTransparencyNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, $PROTECTED},
	{"insertAdobeMarkerSegment", "(Lcom/sun/imageio/plugins/jpeg/AdobeMarkerSegment;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($AdobeMarkerSegment*)>(&JPEGMetadata::insertAdobeMarkerSegment))},
	{"insertCOMMarkerSegment", "(Lcom/sun/imageio/plugins/jpeg/COMMarkerSegment;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($COMMarkerSegment*)>(&JPEGMetadata::insertCOMMarkerSegment))},
	{"isConsistent", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(JPEGMetadata::*)()>(&JPEGMetadata::isConsistent))},
	{"isReadOnly", "()Z", nullptr, $PUBLIC},
	{"mergeAdobeNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeAdobeNode)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeCOMNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeCOMNode)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeDHTNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeDHTNode)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeDQTNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeDQTNode)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeDRINode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeDRINode)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeJFIFsubtree", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeJFIFsubtree)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeNativeTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeNativeTree)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeSOFNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeSOFNode)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeSOSNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeSOSNode)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeSequenceSubtree", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeSequenceSubtree)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeStandardChromaNode", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/NodeList;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*,$NodeList*)>(&JPEGMetadata::mergeStandardChromaNode)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeStandardCompressionNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeStandardCompressionNode)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeStandardDataNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeStandardDataNode)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeStandardDimensionNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeStandardDimensionNode)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeStandardDocumentNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeStandardDocumentNode)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeStandardTextNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeStandardTextNode)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeStandardTransparencyNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeStandardTransparencyNode)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeStandardTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeStandardTree)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"mergeUnknownNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::mergeUnknownNode)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"print", "()V", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{"setFromMarkerSequenceNode", "(Lorg/w3c/dom/Node;)V", nullptr, 0, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"setFromNativeTree", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGMetadata::*)($Node*)>(&JPEGMetadata::setFromNativeTree)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"setFromTree", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"wantAlpha", "(Lorg/w3c/dom/Node;)Z", nullptr, $PRIVATE, $method(static_cast<bool(JPEGMetadata::*)($Node*)>(&JPEGMetadata::wantAlpha))},
	{"writeToStream", "(Ljavax/imageio/stream/ImageOutputStream;ZZLjava/util/List;Ljava/awt/color/ICC_Profile;ZILcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", "(Ljavax/imageio/stream/ImageOutputStream;ZZLjava/util/List<+Ljava/awt/image/BufferedImage;>;Ljava/awt/color/ICC_Profile;ZILcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", 0, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _JPEGMetadata_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JPEGMetadata",
	"javax.imageio.metadata.IIOMetadata",
	"java.lang.Cloneable",
	_JPEGMetadata_FieldInfo_,
	_JPEGMetadata_MethodInfo_
};

$Object* allocate$JPEGMetadata($Class* clazz) {
	return $of($alloc(JPEGMetadata));
}

int32_t JPEGMetadata::hashCode() {
	 return this->$IIOMetadata::hashCode();
}

bool JPEGMetadata::equals(Object$* arg0) {
	 return this->$IIOMetadata::equals(arg0);
}

$String* JPEGMetadata::toString() {
	 return this->$IIOMetadata::toString();
}

void JPEGMetadata::finalize() {
	this->$IIOMetadata::finalize();
}

void JPEGMetadata::init$(bool isStream, bool inThumb) {
	$init($JPEG);
	$IIOMetadata::init$(true, $JPEG::nativeImageMetadataFormatName, $JPEG::nativeImageMetadataFormatClassName, nullptr, nullptr);
	$set(this, resetSequence, nullptr);
	this->inThumb = false;
	$set(this, markerSequence, $new($ArrayList));
	this->inThumb = inThumb;
	this->isStream = isStream;
	if (isStream) {
		$set(this, nativeMetadataFormatName, $JPEG::nativeStreamMetadataFormatName);
		$set(this, nativeMetadataFormatClassName, $JPEG::nativeStreamMetadataFormatClassName);
	}
}

void JPEGMetadata::init$(bool isStream, bool isThumb, $ImageInputStream* iis, $JPEGImageReader* reader) {
	$useLocalCurrentObjectStackCache();
	JPEGMetadata::init$(isStream, isThumb);
	$var($JPEGBuffer, buffer, $new($JPEGBuffer, iis));
	buffer->loadBuf(0);
	if ((((int32_t)($nc(buffer->buf)->get(0) & (uint32_t)255)) != 255) || (((int32_t)($nc(buffer->buf)->get(1) & (uint32_t)255)) != $JPEG::SOI) || (((int32_t)($nc(buffer->buf)->get(2) & (uint32_t)255)) != 255)) {
		$throwNew($IIOException, "Image format error"_s);
	}
	bool done = false;
	buffer->bufAvail -= 2;
	buffer->bufPtr = 2;
	$var($MarkerSegment, newGuy, nullptr);
	while (!done) {
		$var($bytes, buf, nullptr);
		int32_t ptr = 0;
		buffer->loadBuf(1);
		buffer->scanForFF(reader);
		switch ((int32_t)($nc(buffer->buf)->get(buffer->bufPtr) & (uint32_t)255)) {
		case 0:
			{
				--buffer->bufAvail;
				++buffer->bufPtr;
				break;
			}
		case $JPEG::SOF0:
			{}
		case $JPEG::SOF1:
			{}
		case $JPEG::SOF2:
			{
				if (isStream) {
					$throwNew($IIOException, "SOF not permitted in stream metadata"_s);
				}
				$assign(newGuy, $new($SOFMarkerSegment, buffer));
				break;
			}
		case $JPEG::DQT:
			{
				$assign(newGuy, $new($DQTMarkerSegment, buffer));
				break;
			}
		case $JPEG::DHT:
			{
				$assign(newGuy, $new($DHTMarkerSegment, buffer));
				break;
			}
		case $JPEG::DRI:
			{
				$assign(newGuy, $new($DRIMarkerSegment, buffer));
				break;
			}
		case $JPEG::APP0:
			{
				buffer->loadBuf(8);
				$assign(buf, buffer->buf);
				ptr = buffer->bufPtr;
				if (($nc(buf)->get(ptr + 3) == u'J') && (buf->get(ptr + 4) == u'F') && (buf->get(ptr + 5) == u'I') && (buf->get(ptr + 6) == u'F') && (buf->get(ptr + 7) == 0)) {
					if (this->inThumb) {
						$nc(reader)->warningOccurred($JPEGImageReader::WARNING_NO_JFIF_IN_THUMB);
						$var($JFIFMarkerSegment, dummy, $new($JFIFMarkerSegment, buffer));
					} else if (isStream) {
						$throwNew($IIOException, "JFIF not permitted in stream metadata"_s);
					} else if ($nc(this->markerSequence)->isEmpty() == false) {
						$throwNew($IIOException, "JFIF APP0 must be first marker after SOI"_s);
					} else {
						$assign(newGuy, $new($JFIFMarkerSegment, buffer));
					}
				} else if ((buf->get(ptr + 3) == u'J') && (buf->get(ptr + 4) == u'F') && (buf->get(ptr + 5) == u'X') && (buf->get(ptr + 6) == u'X') && (buf->get(ptr + 7) == 0)) {
					if (isStream) {
						$throwNew($IIOException, "JFXX not permitted in stream metadata"_s);
					}
					if (this->inThumb) {
						$throwNew($IIOException, "JFXX markers not allowed in JFIF JPEG thumbnail"_s);
					}
					$load($JFIFMarkerSegment);
					$var($JFIFMarkerSegment, jfif, $cast($JFIFMarkerSegment, findMarkerSegment($JFIFMarkerSegment::class$, true)));
					if (jfif == nullptr) {
						$throwNew($IIOException, "JFXX encountered without prior JFIF!"_s);
					}
					$nc(jfif)->addJFXX(buffer, reader);
				} else {
					$assign(newGuy, $new($MarkerSegment, buffer));
					newGuy->loadData(buffer);
				}
				break;
			}
		case $JPEG::APP2:
			{
				buffer->loadBuf(15);
				if (($nc(buffer->buf)->get(buffer->bufPtr + 3) == u'I') && ($nc(buffer->buf)->get(buffer->bufPtr + 4) == u'C') && ($nc(buffer->buf)->get(buffer->bufPtr + 5) == u'C') && ($nc(buffer->buf)->get(buffer->bufPtr + 6) == u'_') && ($nc(buffer->buf)->get(buffer->bufPtr + 7) == u'P') && ($nc(buffer->buf)->get(buffer->bufPtr + 8) == u'R') && ($nc(buffer->buf)->get(buffer->bufPtr + 9) == u'O') && ($nc(buffer->buf)->get(buffer->bufPtr + 10) == u'F') && ($nc(buffer->buf)->get(buffer->bufPtr + 11) == u'I') && ($nc(buffer->buf)->get(buffer->bufPtr + 12) == u'L') && ($nc(buffer->buf)->get(buffer->bufPtr + 13) == u'E') && ($nc(buffer->buf)->get(buffer->bufPtr + 14) == 0)) {
					if (isStream) {
						$throwNew($IIOException, "ICC profiles not permitted in stream metadata"_s);
					}
					$load($JFIFMarkerSegment);
					$var($JFIFMarkerSegment, jfif, $cast($JFIFMarkerSegment, findMarkerSegment($JFIFMarkerSegment::class$, true)));
					if (jfif == nullptr) {
						$assign(newGuy, $new($MarkerSegment, buffer));
						newGuy->loadData(buffer);
					} else {
						$nc(jfif)->addICC(buffer);
					}
				} else {
					$assign(newGuy, $new($MarkerSegment, buffer));
					newGuy->loadData(buffer);
				}
				break;
			}
		case $JPEG::APP14:
			{
				buffer->loadBuf(8);
				if (($nc(buffer->buf)->get(buffer->bufPtr + 3) == u'A') && ($nc(buffer->buf)->get(buffer->bufPtr + 4) == u'd') && ($nc(buffer->buf)->get(buffer->bufPtr + 5) == u'o') && ($nc(buffer->buf)->get(buffer->bufPtr + 6) == u'b') && ($nc(buffer->buf)->get(buffer->bufPtr + 7) == u'e')) {
					if (isStream) {
						$throwNew($IIOException, "Adobe APP14 markers not permitted in stream metadata"_s);
					}
					$assign(newGuy, $new($AdobeMarkerSegment, buffer));
				} else {
					$assign(newGuy, $new($MarkerSegment, buffer));
					newGuy->loadData(buffer);
				}
				break;
			}
		case $JPEG::COM:
			{
				$assign(newGuy, $new($COMMarkerSegment, buffer));
				break;
			}
		case $JPEG::SOS:
			{
				if (isStream) {
					$throwNew($IIOException, "SOS not permitted in stream metadata"_s);
				}
				$assign(newGuy, $new($SOSMarkerSegment, buffer));
				break;
			}
		case $JPEG::RST0:
			{}
		case $JPEG::RST1:
			{}
		case $JPEG::RST2:
			{}
		case $JPEG::RST3:
			{}
		case $JPEG::RST4:
			{}
		case $JPEG::RST5:
			{}
		case $JPEG::RST6:
			{}
		case $JPEG::RST7:
			{
				++buffer->bufPtr;
				--buffer->bufAvail;
				break;
			}
		case $JPEG::EOI:
			{
				done = true;
				++buffer->bufPtr;
				--buffer->bufAvail;
				break;
			}
		default:
			{
				$assign(newGuy, $new($MarkerSegment, buffer));
				$nc(newGuy)->loadData(buffer);
				$nc(newGuy)->unknown = true;
				break;
			}
		}
		if (newGuy != nullptr) {
			$nc(this->markerSequence)->add(newGuy);
			$assign(newGuy, nullptr);
		}
	}
	buffer->pushBack();
	if (!isConsistent()) {
		$throwNew($IIOException, "Inconsistent metadata read from stream"_s);
	}
}

void JPEGMetadata::init$($ImageWriteParam* param, $JPEGImageWriter* writer) {
	$useLocalCurrentObjectStackCache();
	JPEGMetadata::init$(true, false);
	$var($JPEGImageWriteParam, jparam, nullptr);
	if ((param != nullptr) && ($instanceOf($JPEGImageWriteParam, param))) {
		$assign(jparam, $cast($JPEGImageWriteParam, param));
		if (!jparam->areTablesSet()) {
			$assign(jparam, nullptr);
		}
	}
	if (jparam != nullptr) {
		$nc(this->markerSequence)->add($$new($DQTMarkerSegment, $(jparam->getQTables())));
		$var($JPEGHuffmanTableArray, var$0, jparam->getDCHuffmanTables());
		$nc(this->markerSequence)->add($$new($DHTMarkerSegment, var$0, $(jparam->getACHuffmanTables())));
	} else {
		$nc(this->markerSequence)->add($$new($DQTMarkerSegment, $($JPEG::getDefaultQTables())));
		$var($JPEGHuffmanTableArray, var$1, $JPEG::getDefaultHuffmanTables(true));
		$nc(this->markerSequence)->add($$new($DHTMarkerSegment, var$1, $($JPEG::getDefaultHuffmanTables(false))));
	}
	if (!isConsistent()) {
		$throwNew($InternalError, "Default stream metadata is inconsistent"_s);
	}
}

void JPEGMetadata::init$($ImageTypeSpecifier* imageType, $ImageWriteParam* param, $JPEGImageWriter* writer) {
	$useLocalCurrentObjectStackCache();
	JPEGMetadata::init$(false, false);
	bool wantJFIF = true;
	bool wantAdobe = false;
	int32_t transform = $JPEG::ADOBE_UNKNOWN;
	bool willSubsample = true;
	bool wantICC = false;
	bool wantProg = false;
	bool wantOptimized = false;
	bool wantExtended = false;
	bool wantQTables = true;
	bool wantHTables = true;
	$init($JPEG);
	float quality = $JPEG::DEFAULT_QUALITY;
	$var($bytes, componentIDs, $new($bytes, {
		(int8_t)1,
		(int8_t)2,
		(int8_t)3,
		(int8_t)4
	}));
	int32_t numComponents = 0;
	$var($ImageTypeSpecifier, destType, nullptr);
	if (param != nullptr) {
		$assign(destType, param->getDestinationType());
		if (destType != nullptr) {
			if (imageType != nullptr) {
				$nc(writer)->warningOccurred($JPEGImageWriter::WARNING_DEST_IGNORED);
				$assign(destType, nullptr);
			}
		}
		if (param->canWriteProgressive()) {
			if (param->getProgressiveMode() == $ImageWriteParam::MODE_DEFAULT) {
				wantProg = true;
				wantOptimized = true;
				wantHTables = false;
			}
		}
		if ($instanceOf($JPEGImageWriteParam, param)) {
			$var($JPEGImageWriteParam, jparam, $cast($JPEGImageWriteParam, param));
			if (jparam->areTablesSet()) {
				wantQTables = false;
				wantHTables = false;
				bool var$0 = ($nc($(jparam->getDCHuffmanTables()))->length > 2);
				if (var$0 || ($nc($(jparam->getACHuffmanTables()))->length > 2)) {
					wantExtended = true;
				}
			}
			if (!wantProg) {
				wantOptimized = jparam->getOptimizeHuffmanTables();
				if (wantOptimized) {
					wantHTables = false;
				}
			}
		}
		if (param->canWriteCompressed()) {
			if (param->getCompressionMode() == $ImageWriteParam::MODE_EXPLICIT) {
				quality = param->getCompressionQuality();
			}
		}
	}
	$var($ColorSpace, cs, nullptr);
	if (destType != nullptr) {
		$var($ColorModel, cm, destType->getColorModel());
		numComponents = $nc(cm)->getNumComponents();
		bool hasExtraComponents = (cm->getNumColorComponents() != numComponents);
		bool hasAlpha = cm->hasAlpha();
		$assign(cs, cm->getColorSpace());
		int32_t type = $nc(cs)->getType();
		switch (type) {
		case $ColorSpace::TYPE_GRAY:
			{
				willSubsample = false;
				if (hasExtraComponents) {
					wantJFIF = false;
				}
				break;
			}
		case $ColorSpace::TYPE_YCbCr:
			{
				if (hasExtraComponents) {
					wantJFIF = false;
					if (!hasAlpha) {
						wantAdobe = true;
						transform = $JPEG::ADOBE_YCCK;
					}
				}
				break;
			}
		case $ColorSpace::TYPE_RGB:
			{
				wantJFIF = false;
				wantAdobe = true;
				willSubsample = false;
				componentIDs->set(0, (int8_t)u'R');
				componentIDs->set(1, (int8_t)u'G');
				componentIDs->set(2, (int8_t)u'B');
				if (hasAlpha) {
					componentIDs->set(3, (int8_t)u'A');
				}
				break;
			}
		default:
			{
				wantJFIF = false;
				willSubsample = false;
			}
		}
	} else if (imageType != nullptr) {
		$var($ColorModel, cm, imageType->getColorModel());
		numComponents = $nc(cm)->getNumComponents();
		bool hasExtraComponents = (cm->getNumColorComponents() != numComponents);
		bool hasAlpha = cm->hasAlpha();
		$assign(cs, cm->getColorSpace());
		int32_t type = $nc(cs)->getType();
		switch (type) {
		case $ColorSpace::TYPE_GRAY:
			{
				willSubsample = false;
				if (hasExtraComponents) {
					wantJFIF = false;
				}
				break;
			}
		case $ColorSpace::TYPE_RGB:
			{
				if (hasAlpha) {
					wantJFIF = false;
				}
				break;
			}
		case $ColorSpace::TYPE_3CLR:
			{
				wantJFIF = false;
				willSubsample = false;
				if ($of(cs)->equals($($ColorSpace::getInstance($ColorSpace::CS_PYCC)))) {
					willSubsample = true;
					wantAdobe = true;
					componentIDs->set(0, (int8_t)u'Y');
					componentIDs->set(1, (int8_t)u'C');
					componentIDs->set(2, (int8_t)u'c');
					if (hasAlpha) {
						componentIDs->set(3, (int8_t)u'A');
					}
				}
				break;
			}
		case $ColorSpace::TYPE_YCbCr:
			{
				if (hasExtraComponents) {
					wantJFIF = false;
					if (!hasAlpha) {
						wantAdobe = true;
						transform = $JPEG::ADOBE_YCCK;
					}
				}
				break;
			}
		case $ColorSpace::TYPE_CMYK:
			{
				wantJFIF = false;
				wantAdobe = true;
				transform = $JPEG::ADOBE_YCCK;
				break;
			}
		default:
			{
				wantJFIF = false;
				willSubsample = false;
			}
		}
	}
	if (wantJFIF && $ImageUtil::isNonStandardICCColorSpace(cs)) {
		wantICC = true;
	}
	if (wantJFIF) {
		$var($JFIFMarkerSegment, jfif, $new($JFIFMarkerSegment));
		$nc(this->markerSequence)->add(jfif);
		if (wantICC) {
			try {
				jfif->addICC($cast($ICC_ColorSpace, cs));
			} catch ($IOException&) {
				$catch();
			}
		}
	}
	if (wantAdobe) {
		$nc(this->markerSequence)->add($$new($AdobeMarkerSegment, transform));
	}
	if (wantQTables) {
		$nc(this->markerSequence)->add($$new($DQTMarkerSegment, quality, willSubsample));
	}
	if (wantHTables) {
		$nc(this->markerSequence)->add($$new($DHTMarkerSegment, willSubsample));
	}
	$nc(this->markerSequence)->add($$new($SOFMarkerSegment, wantProg, wantExtended, willSubsample, componentIDs, numComponents));
	if (!wantProg) {
		$nc(this->markerSequence)->add($$new($SOSMarkerSegment, willSubsample, componentIDs, numComponents));
	}
	if (!isConsistent()) {
		$throwNew($InternalError, "Default image metadata is inconsistent"_s);
	}
}

$MarkerSegment* JPEGMetadata::findMarkerSegment(int32_t tag) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->markerSequence)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MarkerSegment, seg, $cast($MarkerSegment, i$->next()));
			{
				if ($nc(seg)->tag == tag) {
					return seg;
				}
			}
		}
	}
	return nullptr;
}

$MarkerSegment* JPEGMetadata::findMarkerSegment($Class* cls, bool first) {
	$useLocalCurrentObjectStackCache();
	if (first) {
		{
			$var($Iterator, i$, $nc(this->markerSequence)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($MarkerSegment, seg, $cast($MarkerSegment, i$->next()));
				{
					if ($nc(cls)->isInstance(seg)) {
						return seg;
					}
				}
			}
		}
	} else {
		$var($ListIterator, iter, $nc(this->markerSequence)->listIterator($nc(this->markerSequence)->size()));
		while ($nc(iter)->hasPrevious()) {
			$var($MarkerSegment, seg, $cast($MarkerSegment, iter->previous()));
			if ($nc(cls)->isInstance(seg)) {
				return seg;
			}
		}
	}
	return nullptr;
}

int32_t JPEGMetadata::findMarkerSegmentPosition($Class* cls, bool first) {
	$useLocalCurrentObjectStackCache();
	if (first) {
		$var($ListIterator, iter, $nc(this->markerSequence)->listIterator());
		for (int32_t i = 0; $nc(iter)->hasNext(); ++i) {
			$var($MarkerSegment, seg, $cast($MarkerSegment, iter->next()));
			if ($nc(cls)->isInstance(seg)) {
				return i;
			}
		}
	} else {
		$var($ListIterator, iter, $nc(this->markerSequence)->listIterator($nc(this->markerSequence)->size()));
		for (int32_t i = $nc(this->markerSequence)->size() - 1; $nc(iter)->hasPrevious(); --i) {
			$var($MarkerSegment, seg, $cast($MarkerSegment, iter->previous()));
			if ($nc(cls)->isInstance(seg)) {
				return i;
			}
		}
	}
	return -1;
}

int32_t JPEGMetadata::findLastUnknownMarkerSegmentPosition() {
	$useLocalCurrentObjectStackCache();
	$var($ListIterator, iter, $nc(this->markerSequence)->listIterator($nc(this->markerSequence)->size()));
	for (int32_t i = $nc(this->markerSequence)->size() - 1; $nc(iter)->hasPrevious(); --i) {
		$var($MarkerSegment, seg, $cast($MarkerSegment, iter->previous()));
		if ($nc(seg)->unknown == true) {
			return i;
		}
	}
	return -1;
}

$Object* JPEGMetadata::clone() {
	$var(JPEGMetadata, newGuy, nullptr);
	try {
		$assign(newGuy, $cast(JPEGMetadata, $IIOMetadata::clone()));
	} catch ($CloneNotSupportedException&) {
		$catch();
	}
	if (this->markerSequence != nullptr) {
		$set($nc(newGuy), markerSequence, cloneSequence());
	}
	$set($nc(newGuy), resetSequence, nullptr);
	return $of(newGuy);
}

$List* JPEGMetadata::cloneSequence() {
	$useLocalCurrentObjectStackCache();
	if (this->markerSequence == nullptr) {
		return nullptr;
	}
	$var($List, retval, $new($ArrayList, $nc(this->markerSequence)->size()));
	{
		$var($Iterator, i$, $nc(this->markerSequence)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MarkerSegment, seg, $cast($MarkerSegment, i$->next()));
			{
				retval->add($cast($MarkerSegment, $($nc(seg)->clone())));
			}
		}
	}
	return retval;
}

$Node* JPEGMetadata::getAsTree($String* formatName) {
	if (formatName == nullptr) {
		$throwNew($IllegalArgumentException, "null formatName!"_s);
	}
	if (this->isStream) {
		$init($JPEG);
		if ($nc(formatName)->equals($JPEG::nativeStreamMetadataFormatName)) {
			return getNativeTree();
		}
	} else {
		$init($JPEG);
		if ($nc(formatName)->equals($JPEG::nativeImageMetadataFormatName)) {
			return getNativeTree();
		}
		$init($IIOMetadataFormatImpl);
		if ($nc(formatName)->equals($IIOMetadataFormatImpl::standardMetadataFormatName)) {
			return getStandardTree();
		}
	}
	$throwNew($IllegalArgumentException, $$str({"Unsupported format name: "_s, formatName}));
}

$IIOMetadataNode* JPEGMetadata::getNativeTree() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, root, nullptr);
	$var($IIOMetadataNode, top, nullptr);
	$var($Iterator, iter, $nc(this->markerSequence)->iterator());
	if (this->isStream) {
		$init($JPEG);
		$assign(root, $new($IIOMetadataNode, $JPEG::nativeStreamMetadataFormatName));
		$assign(top, root);
	} else {
		$var($IIOMetadataNode, sequence, $new($IIOMetadataNode, "markerSequence"_s));
		if (!this->inThumb) {
			$init($JPEG);
			$assign(root, $new($IIOMetadataNode, $JPEG::nativeImageMetadataFormatName));
			$var($IIOMetadataNode, header, $new($IIOMetadataNode, "JPEGvariety"_s));
			root->appendChild(header);
			$load($JFIFMarkerSegment);
			$var($JFIFMarkerSegment, jfif, $cast($JFIFMarkerSegment, findMarkerSegment($JFIFMarkerSegment::class$, true)));
			if (jfif != nullptr) {
				$nc(iter)->next();
				header->appendChild($(jfif->getNativeNode()));
			}
			root->appendChild(sequence);
		} else {
			$assign(root, sequence);
		}
		$assign(top, sequence);
	}
	while ($nc(iter)->hasNext()) {
		$var($MarkerSegment, seg, $cast($MarkerSegment, iter->next()));
		$nc(top)->appendChild($($nc(seg)->getNativeNode()));
	}
	return root;
}

$IIOMetadataNode* JPEGMetadata::getStandardChromaNode() {
	$useLocalCurrentObjectStackCache();
	this->hasAlpha = false;
	$load($SOFMarkerSegment);
	$var($SOFMarkerSegment, sof, $cast($SOFMarkerSegment, findMarkerSegment($SOFMarkerSegment::class$, true)));
	if (sof == nullptr) {
		return nullptr;
	}
	$var($IIOMetadataNode, chroma, $new($IIOMetadataNode, "Chroma"_s));
	$var($IIOMetadataNode, csType, $new($IIOMetadataNode, "ColorSpaceType"_s));
	chroma->appendChild(csType);
	int32_t numChannels = $nc($nc(sof)->componentSpecs)->length;
	$var($IIOMetadataNode, numChanNode, $new($IIOMetadataNode, "NumChannels"_s));
	chroma->appendChild(numChanNode);
	numChanNode->setAttribute("value"_s, $($Integer::toString(numChannels)));
	$load($JFIFMarkerSegment);
	if (findMarkerSegment($JFIFMarkerSegment::class$, true) != nullptr) {
		if (numChannels == 1) {
			csType->setAttribute("name"_s, "GRAY"_s);
		} else {
			csType->setAttribute("name"_s, "YCbCr"_s);
		}
		return chroma;
	}
	$load($AdobeMarkerSegment);
	$var($AdobeMarkerSegment, adobe, $cast($AdobeMarkerSegment, findMarkerSegment($AdobeMarkerSegment::class$, true)));
	if (adobe != nullptr) {
		switch (adobe->transform) {
		case $JPEG::ADOBE_YCCK:
			{
				csType->setAttribute("name"_s, "YCCK"_s);
				break;
			}
		case $JPEG::ADOBE_YCC:
			{
				csType->setAttribute("name"_s, "YCbCr"_s);
				break;
			}
		case $JPEG::ADOBE_UNKNOWN:
			{
				if (numChannels == 3) {
					csType->setAttribute("name"_s, "RGB"_s);
				} else if (numChannels == 4) {
					csType->setAttribute("name"_s, "CMYK"_s);
				}
				break;
			}
		}
		return chroma;
	}
	if (numChannels < 3) {
		csType->setAttribute("name"_s, "GRAY"_s);
		if (numChannels == 2) {
			this->hasAlpha = true;
		}
		return chroma;
	}
	bool idsAreJFIF = false;
	int32_t cid0 = $nc($nc(sof->componentSpecs)->get(0))->componentId;
	int32_t cid1 = $nc($nc(sof->componentSpecs)->get(1))->componentId;
	int32_t cid2 = $nc($nc(sof->componentSpecs)->get(2))->componentId;
	if ((cid0 == 1) && (cid1 == 2) && (cid2 == 3)) {
		idsAreJFIF = true;
	}
	if (idsAreJFIF) {
		csType->setAttribute("name"_s, "YCbCr"_s);
		if (numChannels == 4) {
			this->hasAlpha = true;
		}
		return chroma;
	}
	if (($nc($nc(sof->componentSpecs)->get(0))->componentId == u'R') && ($nc($nc(sof->componentSpecs)->get(1))->componentId == u'G') && ($nc($nc(sof->componentSpecs)->get(2))->componentId == u'B')) {
		csType->setAttribute("name"_s, "RGB"_s);
		if ((numChannels == 4) && ($nc($nc(sof->componentSpecs)->get(3))->componentId == u'A')) {
			this->hasAlpha = true;
		}
		return chroma;
	}
	if (($nc($nc(sof->componentSpecs)->get(0))->componentId == u'Y') && ($nc($nc(sof->componentSpecs)->get(1))->componentId == u'C') && ($nc($nc(sof->componentSpecs)->get(2))->componentId == u'c')) {
		csType->setAttribute("name"_s, "PhotoYCC"_s);
		if ((numChannels == 4) && ($nc($nc(sof->componentSpecs)->get(3))->componentId == u'A')) {
			this->hasAlpha = true;
		}
		return chroma;
	}
	bool subsampled = false;
	int32_t hfactor = $nc($nc(sof->componentSpecs)->get(0))->HsamplingFactor;
	int32_t vfactor = $nc($nc(sof->componentSpecs)->get(0))->VsamplingFactor;
	for (int32_t i = 1; i < $nc(sof->componentSpecs)->length; ++i) {
		if (($nc($nc(sof->componentSpecs)->get(i))->HsamplingFactor != hfactor) || ($nc($nc(sof->componentSpecs)->get(i))->VsamplingFactor != vfactor)) {
			subsampled = true;
			break;
		}
	}
	if (subsampled) {
		csType->setAttribute("name"_s, "YCbCr"_s);
		if (numChannels == 4) {
			this->hasAlpha = true;
		}
		return chroma;
	}
	if (numChannels == 3) {
		csType->setAttribute("name"_s, "RGB"_s);
	} else {
		csType->setAttribute("name"_s, "CMYK"_s);
	}
	return chroma;
}

$IIOMetadataNode* JPEGMetadata::getStandardCompressionNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, compression, $new($IIOMetadataNode, "Compression"_s));
	$var($IIOMetadataNode, name, $new($IIOMetadataNode, "CompressionTypeName"_s));
	name->setAttribute("value"_s, "JPEG"_s);
	compression->appendChild(name);
	$var($IIOMetadataNode, lossless, $new($IIOMetadataNode, "Lossless"_s));
	lossless->setAttribute("value"_s, "FALSE"_s);
	compression->appendChild(lossless);
	int32_t sosCount = 0;
	{
		$var($Iterator, i$, $nc(this->markerSequence)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MarkerSegment, ms, $cast($MarkerSegment, i$->next()));
			{
				if ($nc(ms)->tag == $JPEG::SOS) {
					++sosCount;
				}
			}
		}
	}
	if (sosCount != 0) {
		$var($IIOMetadataNode, prog, $new($IIOMetadataNode, "NumProgressiveScans"_s));
		prog->setAttribute("value"_s, $($Integer::toString(sosCount)));
		compression->appendChild(prog);
	}
	return compression;
}

$IIOMetadataNode* JPEGMetadata::getStandardDimensionNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, dim, $new($IIOMetadataNode, "Dimension"_s));
	$var($IIOMetadataNode, orient, $new($IIOMetadataNode, "ImageOrientation"_s));
	orient->setAttribute("value"_s, "normal"_s);
	dim->appendChild(orient);
	$load($JFIFMarkerSegment);
	$var($JFIFMarkerSegment, jfif, $cast($JFIFMarkerSegment, findMarkerSegment($JFIFMarkerSegment::class$, true)));
	if (jfif != nullptr) {
		float aspectRatio = 0.0;
		if (jfif->resUnits == 0) {
			aspectRatio = ((float)jfif->Xdensity) / jfif->Ydensity;
		} else {
			aspectRatio = ((float)jfif->Ydensity) / jfif->Xdensity;
		}
		$var($IIOMetadataNode, aspect, $new($IIOMetadataNode, "PixelAspectRatio"_s));
		aspect->setAttribute("value"_s, $($Float::toString(aspectRatio)));
		dim->insertBefore(aspect, orient);
		if (jfif->resUnits != 0) {
			float scale = (jfif->resUnits == 1) ? 25.4f : 10.0f;
			$var($IIOMetadataNode, horiz, $new($IIOMetadataNode, "HorizontalPixelSize"_s));
			horiz->setAttribute("value"_s, $($Float::toString(scale / jfif->Xdensity)));
			dim->appendChild(horiz);
			$var($IIOMetadataNode, vert, $new($IIOMetadataNode, "VerticalPixelSize"_s));
			vert->setAttribute("value"_s, $($Float::toString(scale / jfif->Ydensity)));
			dim->appendChild(vert);
		}
	}
	return dim;
}

$IIOMetadataNode* JPEGMetadata::getStandardTextNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, text, nullptr);
	if (findMarkerSegment($JPEG::COM) != nullptr) {
		$assign(text, $new($IIOMetadataNode, "Text"_s));
		{
			$var($Iterator, i$, $nc(this->markerSequence)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($MarkerSegment, seg, $cast($MarkerSegment, i$->next()));
				{
					if ($nc(seg)->tag == $JPEG::COM) {
						$var($COMMarkerSegment, com, $cast($COMMarkerSegment, seg));
						$var($IIOMetadataNode, entry, $new($IIOMetadataNode, "TextEntry"_s));
						entry->setAttribute("keyword"_s, "comment"_s);
						entry->setAttribute("value"_s, $(com->getComment()));
						text->appendChild(entry);
					}
				}
			}
		}
	}
	return text;
}

$IIOMetadataNode* JPEGMetadata::getStandardTransparencyNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, trans, nullptr);
	if (this->hasAlpha == true) {
		$assign(trans, $new($IIOMetadataNode, "Transparency"_s));
		$var($IIOMetadataNode, alpha, $new($IIOMetadataNode, "Alpha"_s));
		alpha->setAttribute("value"_s, "nonpremultiplied"_s);
		trans->appendChild(alpha);
	}
	return trans;
}

bool JPEGMetadata::isReadOnly() {
	return false;
}

void JPEGMetadata::mergeTree($String* formatName, $Node* root) {
	$useLocalCurrentObjectStackCache();
	if (formatName == nullptr) {
		$throwNew($IllegalArgumentException, "null formatName!"_s);
	}
	if (root == nullptr) {
		$throwNew($IllegalArgumentException, "null root!"_s);
	}
	$var($List, copy, nullptr);
	if (this->resetSequence == nullptr) {
		$set(this, resetSequence, cloneSequence());
		$assign(copy, this->resetSequence);
	} else {
		$assign(copy, cloneSequence());
	}
	$init($JPEG);
	if (this->isStream && ($nc(formatName)->equals($JPEG::nativeStreamMetadataFormatName))) {
		mergeNativeTree(root);
	} else {
		if (!this->isStream && (formatName->equals($JPEG::nativeImageMetadataFormatName))) {
			mergeNativeTree(root);
		} else {
			$init($IIOMetadataFormatImpl);
			if (!this->isStream && (formatName->equals($IIOMetadataFormatImpl::standardMetadataFormatName))) {
				mergeStandardTree(root);
			} else {
				$throwNew($IllegalArgumentException, $$str({"Unsupported format name: "_s, formatName}));
			}
		}
	}
	if (!isConsistent()) {
		$set(this, markerSequence, copy);
		$throwNew($IIOInvalidTreeException, "Merged tree is invalid; original restored"_s, root);
	}
}

void JPEGMetadata::mergeNativeTree($Node* root) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, $nc(root)->getNodeName());
	$init($JPEG);
	if (name != ((this->isStream) ? $JPEG::nativeStreamMetadataFormatName : $JPEG::nativeImageMetadataFormatName)) {
		$throwNew($IIOInvalidTreeException, $$str({"Invalid root node name: "_s, name}), root);
	}
	if ($nc($(root->getChildNodes()))->getLength() != 2) {
		$throwNew($IIOInvalidTreeException, "JPEGvariety and markerSequence nodes must be present"_s, root);
	}
	mergeJFIFsubtree($(root->getFirstChild()));
	mergeSequenceSubtree($(root->getLastChild()));
}

void JPEGMetadata::mergeJFIFsubtree($Node* JPEGvariety) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(JPEGvariety)->getChildNodes()))->getLength() != 0) {
		$var($Node, jfifNode, JPEGvariety->getFirstChild());
		$load($JFIFMarkerSegment);
		$var($JFIFMarkerSegment, jfifSeg, $cast($JFIFMarkerSegment, findMarkerSegment($JFIFMarkerSegment::class$, true)));
		if (jfifSeg != nullptr) {
			jfifSeg->updateFromNativeNode(jfifNode, false);
		} else {
			$nc(this->markerSequence)->add(0, $$new($JFIFMarkerSegment, jfifNode));
		}
	}
}

void JPEGMetadata::mergeSequenceSubtree($Node* sequenceTree) {
	$useLocalCurrentObjectStackCache();
	$var($NodeList, children, $nc(sequenceTree)->getChildNodes());
	for (int32_t i = 0; i < $nc(children)->getLength(); ++i) {
		$var($Node, node, children->item(i));
		$var($String, name, $nc(node)->getNodeName());
		if ($nc(name)->equals("dqt"_s)) {
			mergeDQTNode(node);
		} else if (name->equals("dht"_s)) {
			mergeDHTNode(node);
		} else if (name->equals("dri"_s)) {
			mergeDRINode(node);
		} else if (name->equals("com"_s)) {
			mergeCOMNode(node);
		} else if (name->equals("app14Adobe"_s)) {
			mergeAdobeNode(node);
		} else if (name->equals("unknown"_s)) {
			mergeUnknownNode(node);
		} else if (name->equals("sof"_s)) {
			mergeSOFNode(node);
		} else if (name->equals("sos"_s)) {
			mergeSOSNode(node);
		} else {
			$throwNew($IIOInvalidTreeException, $$str({"Invalid node: "_s, name}), node);
		}
	}
}

void JPEGMetadata::mergeDQTNode($Node* node) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, oldDQTs, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(this->markerSequence)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MarkerSegment, seg, $cast($MarkerSegment, i$->next()));
			{
				if ($instanceOf($DQTMarkerSegment, seg)) {
					oldDQTs->add($cast($DQTMarkerSegment, seg));
				}
			}
		}
	}
	if (!oldDQTs->isEmpty()) {
		$var($NodeList, children, $nc(node)->getChildNodes());
		for (int32_t i = 0; i < $nc(children)->getLength(); ++i) {
			$var($Node, child, children->item(i));
			int32_t childID = $MarkerSegment::getAttributeValue(child, nullptr, "qtableId"_s, 0, 3, true);
			$var($DQTMarkerSegment, dqt, nullptr);
			int32_t tableIndex = -1;
			for (int32_t j = 0; j < oldDQTs->size(); ++j) {
				$var($DQTMarkerSegment, testDQT, $cast($DQTMarkerSegment, oldDQTs->get(j)));
				for (int32_t k = 0; k < $nc($nc(testDQT)->tables)->size(); ++k) {
					$var($DQTMarkerSegment$Qtable, testTable, $cast($DQTMarkerSegment$Qtable, $nc(testDQT->tables)->get(k)));
					if (childID == $nc(testTable)->tableID) {
						$assign(dqt, testDQT);
						tableIndex = k;
						break;
					}
				}
				if (dqt != nullptr) {
					break;
				}
			}
			if (dqt != nullptr) {
				$nc(dqt->tables)->set(tableIndex, $(dqt->getQtableFromNode(child)));
			} else {
				$assign(dqt, $cast($DQTMarkerSegment, oldDQTs->get(oldDQTs->size() - 1)));
				$nc($nc(dqt)->tables)->add($(dqt->getQtableFromNode(child)));
			}
		}
	} else {
		$var($DQTMarkerSegment, newGuy, $new($DQTMarkerSegment, node));
		$load($DHTMarkerSegment);
		int32_t firstDHT = findMarkerSegmentPosition($DHTMarkerSegment::class$, true);
		$load($SOFMarkerSegment);
		int32_t firstSOF = findMarkerSegmentPosition($SOFMarkerSegment::class$, true);
		$load($SOSMarkerSegment);
		int32_t firstSOS = findMarkerSegmentPosition($SOSMarkerSegment::class$, true);
		if (firstDHT != -1) {
			$nc(this->markerSequence)->add(firstDHT, newGuy);
		} else if (firstSOF != -1) {
			$nc(this->markerSequence)->add(firstSOF, newGuy);
		} else if (firstSOS != -1) {
			$nc(this->markerSequence)->add(firstSOS, newGuy);
		} else {
			$nc(this->markerSequence)->add(newGuy);
		}
	}
}

void JPEGMetadata::mergeDHTNode($Node* node) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, oldDHTs, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(this->markerSequence)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MarkerSegment, seg, $cast($MarkerSegment, i$->next()));
			{
				if ($instanceOf($DHTMarkerSegment, seg)) {
					oldDHTs->add($cast($DHTMarkerSegment, seg));
				}
			}
		}
	}
	if (!oldDHTs->isEmpty()) {
		$var($NodeList, children, $nc(node)->getChildNodes());
		for (int32_t i = 0; i < $nc(children)->getLength(); ++i) {
			$var($Node, child, children->item(i));
			$var($NamedNodeMap, attrs, $nc(child)->getAttributes());
			int32_t childID = $MarkerSegment::getAttributeValue(child, attrs, "htableId"_s, 0, 3, true);
			int32_t childClass = $MarkerSegment::getAttributeValue(child, attrs, "class"_s, 0, 1, true);
			$var($DHTMarkerSegment, dht, nullptr);
			int32_t tableIndex = -1;
			for (int32_t j = 0; j < oldDHTs->size(); ++j) {
				$var($DHTMarkerSegment, testDHT, $cast($DHTMarkerSegment, oldDHTs->get(j)));
				for (int32_t k = 0; k < $nc($nc(testDHT)->tables)->size(); ++k) {
					$var($DHTMarkerSegment$Htable, testTable, $cast($DHTMarkerSegment$Htable, $nc(testDHT->tables)->get(k)));
					if ((childID == $nc(testTable)->tableID) && (childClass == testTable->tableClass)) {
						$assign(dht, testDHT);
						tableIndex = k;
						break;
					}
				}
				if (dht != nullptr) {
					break;
				}
			}
			if (dht != nullptr) {
				$nc(dht->tables)->set(tableIndex, $(dht->getHtableFromNode(child)));
			} else {
				$assign(dht, $cast($DHTMarkerSegment, oldDHTs->get(oldDHTs->size() - 1)));
				$nc($nc(dht)->tables)->add($(dht->getHtableFromNode(child)));
			}
		}
	} else {
		$var($DHTMarkerSegment, newGuy, $new($DHTMarkerSegment, node));
		$load($DQTMarkerSegment);
		int32_t lastDQT = findMarkerSegmentPosition($DQTMarkerSegment::class$, false);
		$load($SOFMarkerSegment);
		int32_t firstSOF = findMarkerSegmentPosition($SOFMarkerSegment::class$, true);
		$load($SOSMarkerSegment);
		int32_t firstSOS = findMarkerSegmentPosition($SOSMarkerSegment::class$, true);
		if (lastDQT != -1) {
			$nc(this->markerSequence)->add(lastDQT + 1, newGuy);
		} else if (firstSOF != -1) {
			$nc(this->markerSequence)->add(firstSOF, newGuy);
		} else if (firstSOS != -1) {
			$nc(this->markerSequence)->add(firstSOS, newGuy);
		} else {
			$nc(this->markerSequence)->add(newGuy);
		}
	}
}

void JPEGMetadata::mergeDRINode($Node* node) {
	$useLocalCurrentObjectStackCache();
	$load($DRIMarkerSegment);
	$var($DRIMarkerSegment, dri, $cast($DRIMarkerSegment, findMarkerSegment($DRIMarkerSegment::class$, true)));
	if (dri != nullptr) {
		dri->updateFromNativeNode(node, false);
	} else {
		$var($DRIMarkerSegment, newGuy, $new($DRIMarkerSegment, node));
		$load($SOFMarkerSegment);
		int32_t firstSOF = findMarkerSegmentPosition($SOFMarkerSegment::class$, true);
		$load($SOSMarkerSegment);
		int32_t firstSOS = findMarkerSegmentPosition($SOSMarkerSegment::class$, true);
		if (firstSOF != -1) {
			$nc(this->markerSequence)->add(firstSOF, newGuy);
		} else if (firstSOS != -1) {
			$nc(this->markerSequence)->add(firstSOS, newGuy);
		} else {
			$nc(this->markerSequence)->add(newGuy);
		}
	}
}

void JPEGMetadata::mergeCOMNode($Node* node) {
	$var($COMMarkerSegment, newGuy, $new($COMMarkerSegment, node));
	insertCOMMarkerSegment(newGuy);
}

void JPEGMetadata::insertCOMMarkerSegment($COMMarkerSegment* newGuy) {
	$load($COMMarkerSegment);
	int32_t lastCOM = findMarkerSegmentPosition($COMMarkerSegment::class$, false);
	$load($JFIFMarkerSegment);
	bool hasJFIF = (findMarkerSegment($JFIFMarkerSegment::class$, true) != nullptr);
	$load($AdobeMarkerSegment);
	int32_t firstAdobe = findMarkerSegmentPosition($AdobeMarkerSegment::class$, true);
	if (lastCOM != -1) {
		$nc(this->markerSequence)->add(lastCOM + 1, newGuy);
	} else if (hasJFIF) {
		$nc(this->markerSequence)->add(1, newGuy);
	} else if (firstAdobe != -1) {
		$nc(this->markerSequence)->add(firstAdobe + 1, newGuy);
	} else {
		$nc(this->markerSequence)->add(0, newGuy);
	}
}

void JPEGMetadata::mergeAdobeNode($Node* node) {
	$useLocalCurrentObjectStackCache();
	$load($AdobeMarkerSegment);
	$var($AdobeMarkerSegment, adobe, $cast($AdobeMarkerSegment, findMarkerSegment($AdobeMarkerSegment::class$, true)));
	if (adobe != nullptr) {
		adobe->updateFromNativeNode(node, false);
	} else {
		$var($AdobeMarkerSegment, newGuy, $new($AdobeMarkerSegment, node));
		insertAdobeMarkerSegment(newGuy);
	}
}

void JPEGMetadata::insertAdobeMarkerSegment($AdobeMarkerSegment* newGuy) {
	$load($JFIFMarkerSegment);
	bool hasJFIF = (findMarkerSegment($JFIFMarkerSegment::class$, true) != nullptr);
	int32_t lastUnknown = findLastUnknownMarkerSegmentPosition();
	if (hasJFIF) {
		$nc(this->markerSequence)->add(1, newGuy);
	} else if (lastUnknown != -1) {
		$nc(this->markerSequence)->add(lastUnknown + 1, newGuy);
	} else {
		$nc(this->markerSequence)->add(0, newGuy);
	}
}

void JPEGMetadata::mergeUnknownNode($Node* node) {
	$var($MarkerSegment, newGuy, $new($MarkerSegment, node));
	int32_t lastUnknown = findLastUnknownMarkerSegmentPosition();
	$load($JFIFMarkerSegment);
	bool hasJFIF = (findMarkerSegment($JFIFMarkerSegment::class$, true) != nullptr);
	$load($AdobeMarkerSegment);
	int32_t firstAdobe = findMarkerSegmentPosition($AdobeMarkerSegment::class$, true);
	if (lastUnknown != -1) {
		$nc(this->markerSequence)->add(lastUnknown + 1, newGuy);
	} else if (hasJFIF) {
		$nc(this->markerSequence)->add(1, newGuy);
	}
	if (firstAdobe != -1) {
		$nc(this->markerSequence)->add(firstAdobe, newGuy);
	} else {
		$nc(this->markerSequence)->add(0, newGuy);
	}
}

void JPEGMetadata::mergeSOFNode($Node* node) {
	$useLocalCurrentObjectStackCache();
	$load($SOFMarkerSegment);
	$var($SOFMarkerSegment, sof, $cast($SOFMarkerSegment, findMarkerSegment($SOFMarkerSegment::class$, true)));
	if (sof != nullptr) {
		sof->updateFromNativeNode(node, false);
	} else {
		$var($SOFMarkerSegment, newGuy, $new($SOFMarkerSegment, node));
		$load($SOSMarkerSegment);
		int32_t firstSOS = findMarkerSegmentPosition($SOSMarkerSegment::class$, true);
		if (firstSOS != -1) {
			$nc(this->markerSequence)->add(firstSOS, newGuy);
		} else {
			$nc(this->markerSequence)->add(newGuy);
		}
	}
}

void JPEGMetadata::mergeSOSNode($Node* node) {
	$useLocalCurrentObjectStackCache();
	$load($SOSMarkerSegment);
	$var($SOSMarkerSegment, firstSOS, $cast($SOSMarkerSegment, findMarkerSegment($SOSMarkerSegment::class$, true)));
	$var($SOSMarkerSegment, lastSOS, $cast($SOSMarkerSegment, findMarkerSegment($SOSMarkerSegment::class$, false)));
	if (firstSOS != nullptr) {
		if (firstSOS != lastSOS) {
			$throwNew($IIOInvalidTreeException, "Can\'t merge SOS node into a tree with > 1 SOS node"_s, node);
		}
		firstSOS->updateFromNativeNode(node, false);
	} else {
		$nc(this->markerSequence)->add($$new($SOSMarkerSegment, node));
	}
}

void JPEGMetadata::mergeStandardTree($Node* root) {
	$useLocalCurrentObjectStackCache();
	this->transparencyDone = false;
	$var($NodeList, children, $nc(root)->getChildNodes());
	for (int32_t i = 0; i < $nc(children)->getLength(); ++i) {
		$var($Node, node, children->item(i));
		$var($String, name, $nc(node)->getNodeName());
		if ($nc(name)->equals("Chroma"_s)) {
			mergeStandardChromaNode(node, children);
		} else if (name->equals("Compression"_s)) {
			mergeStandardCompressionNode(node);
		} else if (name->equals("Data"_s)) {
			mergeStandardDataNode(node);
		} else if (name->equals("Dimension"_s)) {
			mergeStandardDimensionNode(node);
		} else if (name->equals("Document"_s)) {
			mergeStandardDocumentNode(node);
		} else if (name->equals("Text"_s)) {
			mergeStandardTextNode(node);
		} else if (name->equals("Transparency"_s)) {
			mergeStandardTransparencyNode(node);
		} else {
			$throwNew($IIOInvalidTreeException, $$str({"Invalid node: "_s, name}), node);
		}
	}
}

void JPEGMetadata::mergeStandardChromaNode($Node* node, $NodeList* siblings) {
	$useLocalCurrentObjectStackCache();
	if (this->transparencyDone) {
		$throwNew($IIOInvalidTreeException, "Transparency node must follow Chroma node"_s, node);
	}
	$var($Node, csType, $nc(node)->getFirstChild());
	if ((csType == nullptr) || !$nc($($nc(csType)->getNodeName()))->equals("ColorSpaceType"_s)) {
		return;
	}
	$var($String, csName, $nc($($nc($($nc(csType)->getAttributes()))->getNamedItem("name"_s)))->getNodeValue());
	int32_t numChannels = 0;
	bool wantJFIF = false;
	bool wantAdobe = false;
	int32_t transform = 0;
	bool willSubsample = false;
	$var($bytes, ids, $new($bytes, {
		(int8_t)1,
		(int8_t)2,
		(int8_t)3,
		(int8_t)4
	}));
	if ($nc(csName)->equals("GRAY"_s)) {
		numChannels = 1;
		wantJFIF = true;
	} else if (csName->equals("YCbCr"_s)) {
		numChannels = 3;
		wantJFIF = true;
		willSubsample = true;
	} else if (csName->equals("PhotoYCC"_s)) {
		numChannels = 3;
		wantAdobe = true;
		transform = $JPEG::ADOBE_YCC;
		ids->set(0, (int8_t)u'Y');
		ids->set(1, (int8_t)u'C');
		ids->set(2, (int8_t)u'c');
	} else if (csName->equals("RGB"_s)) {
		numChannels = 3;
		wantAdobe = true;
		transform = $JPEG::ADOBE_UNKNOWN;
		ids->set(0, (int8_t)u'R');
		ids->set(1, (int8_t)u'G');
		ids->set(2, (int8_t)u'B');
	} else {
		bool var$13 = (csName->equals("XYZ"_s));
		bool var$12 = var$13 || (csName->equals("Lab"_s));
		bool var$11 = var$12 || (csName->equals("Luv"_s));
		bool var$10 = var$11 || (csName->equals("YxY"_s));
		bool var$9 = var$10 || (csName->equals("HSV"_s));
		bool var$8 = var$9 || (csName->equals("HLS"_s));
		bool var$7 = var$8 || (csName->equals("CMY"_s));
		if (var$7 || (csName->equals("3CLR"_s))) {
			numChannels = 3;
		} else if (csName->equals("YCCK"_s)) {
			numChannels = 4;
			wantAdobe = true;
			transform = $JPEG::ADOBE_YCCK;
			willSubsample = true;
		} else if (csName->equals("CMYK"_s)) {
			numChannels = 4;
			wantAdobe = true;
			transform = $JPEG::ADOBE_UNKNOWN;
		} else if (csName->equals("4CLR"_s)) {
			numChannels = 4;
		} else {
			return;
		}
	}
	bool wantAlpha = false;
	for (int32_t i = 0; i < $nc(siblings)->getLength(); ++i) {
		$var($Node, trans, siblings->item(i));
		if ($nc($($nc(trans)->getNodeName()))->equals("Transparency"_s)) {
			wantAlpha = this->wantAlpha(trans);
			break;
		}
	}
	if (wantAlpha) {
		++numChannels;
		wantJFIF = false;
		if (ids->get(0) == (int8_t)u'R') {
			ids->set(3, (int8_t)u'A');
			wantAdobe = false;
		}
	}
	$load($JFIFMarkerSegment);
	$var($JFIFMarkerSegment, jfif, $cast($JFIFMarkerSegment, findMarkerSegment($JFIFMarkerSegment::class$, true)));
	$load($AdobeMarkerSegment);
	$var($AdobeMarkerSegment, adobe, $cast($AdobeMarkerSegment, findMarkerSegment($AdobeMarkerSegment::class$, true)));
	$load($SOFMarkerSegment);
	$var($SOFMarkerSegment, sof, $cast($SOFMarkerSegment, findMarkerSegment($SOFMarkerSegment::class$, true)));
	$load($SOSMarkerSegment);
	$var($SOSMarkerSegment, sos, $cast($SOSMarkerSegment, findMarkerSegment($SOSMarkerSegment::class$, true)));
	if ((sof != nullptr) && (sof->tag == $JPEG::SOF2)) {
		if (($nc(sof->componentSpecs)->length != numChannels) && (sos != nullptr)) {
			return;
		}
	}
	if (!wantJFIF && (jfif != nullptr)) {
		$nc(this->markerSequence)->remove($of(jfif));
	}
	if (wantJFIF && !this->isStream) {
		$nc(this->markerSequence)->add(0, $$new($JFIFMarkerSegment));
	}
	if (wantAdobe) {
		if ((adobe == nullptr) && !this->isStream) {
			$assign(adobe, $new($AdobeMarkerSegment, transform));
			insertAdobeMarkerSegment(adobe);
		} else {
			$nc(adobe)->transform = transform;
		}
	} else if (adobe != nullptr) {
		$nc(this->markerSequence)->remove($of(adobe));
	}
	bool updateQtables = false;
	bool updateHtables = false;
	bool progressive = false;
	$var($ints, subsampledSelectors, $new($ints, {
		0,
		1,
		1,
		0
	}));
	$var($ints, nonSubsampledSelectors, $new($ints, {
		0,
		0,
		0,
		0
	}));
	$var($ints, newTableSelectors, willSubsample ? subsampledSelectors : nonSubsampledSelectors);
	$var($SOFMarkerSegment$ComponentSpecArray, oldCompSpecs, nullptr);
	if (sof != nullptr) {
		$assign(oldCompSpecs, sof->componentSpecs);
		progressive = (sof->tag == $JPEG::SOF2);
		int32_t var$14 = $nc(this->markerSequence)->indexOf(sof);
		$nc(this->markerSequence)->set(var$14, $$new($SOFMarkerSegment, progressive, false, willSubsample, ids, numChannels));
		for (int32_t i = 0; i < $nc(oldCompSpecs)->length; ++i) {
			if ($nc(oldCompSpecs->get(i))->QtableSelector != $nc(newTableSelectors)->get(i)) {
				updateQtables = true;
			}
		}
		if (progressive) {
			bool idsDiffer = false;
			for (int32_t i = 0; i < $nc(oldCompSpecs)->length; ++i) {
				if (ids->get(i) != $nc(oldCompSpecs->get(i))->componentId) {
					idsDiffer = true;
				}
			}
			if (idsDiffer) {
				{
					$var($Iterator, iter, $nc(this->markerSequence)->iterator());
					for (; $nc(iter)->hasNext();) {
						$var($MarkerSegment, seg, $cast($MarkerSegment, iter->next()));
						if ($instanceOf($SOSMarkerSegment, seg)) {
							$var($SOSMarkerSegment, target, $cast($SOSMarkerSegment, seg));
							for (int32_t i = 0; i < $nc($nc(target)->componentSpecs)->length; ++i) {
								int32_t oldSelector = $nc($nc(target->componentSpecs)->get(i))->componentSelector;
								for (int32_t j = 0; j < $nc(oldCompSpecs)->length; ++j) {
									if ($nc(oldCompSpecs->get(j))->componentId == oldSelector) {
										$nc($nc(target->componentSpecs)->get(i))->componentSelector = ids->get(j);
									}
								}
							}
						}
					}
				}
			}
		} else if (sos != nullptr) {
			for (int32_t i = 0; i < $nc(sos->componentSpecs)->length; ++i) {
				if (($nc($nc(sos->componentSpecs)->get(i))->dcHuffTable != $nc(newTableSelectors)->get(i)) || ($nc($nc(sos->componentSpecs)->get(i))->acHuffTable != $nc(newTableSelectors)->get(i))) {
					updateHtables = true;
				}
			}
			int32_t var$15 = $nc(this->markerSequence)->indexOf(sos);
			$nc(this->markerSequence)->set(var$15, $$new($SOSMarkerSegment, willSubsample, ids, numChannels));
		}
	} else if (this->isStream) {
		updateQtables = true;
		updateHtables = true;
	}
	if (updateQtables) {
		$var($List, tableSegments, $new($ArrayList));
		{
			$var($Iterator, iter, $nc(this->markerSequence)->iterator());
			for (; $nc(iter)->hasNext();) {
				$var($MarkerSegment, seg, $cast($MarkerSegment, iter->next()));
				if ($instanceOf($DQTMarkerSegment, seg)) {
					tableSegments->add($cast($DQTMarkerSegment, seg));
				}
			}
		}
		if (!tableSegments->isEmpty() && willSubsample) {
			bool found = false;
			{
				$var($Iterator, iter, tableSegments->iterator());
				for (; $nc(iter)->hasNext();) {
					$var($DQTMarkerSegment, testdqt, $cast($DQTMarkerSegment, iter->next()));
					{
						$var($Iterator, tabiter, $nc($nc(testdqt)->tables)->iterator());
						for (; $nc(tabiter)->hasNext();) {
							$var($DQTMarkerSegment$Qtable, tab, $cast($DQTMarkerSegment$Qtable, tabiter->next()));
							if ($nc(tab)->tableID == 1) {
								found = true;
							}
						}
					}
				}
			}
			if (!found) {
				$var($DQTMarkerSegment$Qtable, table0, nullptr);
				{
					$var($Iterator, iter, tableSegments->iterator());
					for (; $nc(iter)->hasNext();) {
						$var($DQTMarkerSegment, testdqt, $cast($DQTMarkerSegment, iter->next()));
						{
							$var($Iterator, tabiter, $nc($nc(testdqt)->tables)->iterator());
							for (; $nc(tabiter)->hasNext();) {
								$var($DQTMarkerSegment$Qtable, tab, $cast($DQTMarkerSegment$Qtable, tabiter->next()));
								if ($nc(tab)->tableID == 0) {
									$assign(table0, tab);
								}
							}
						}
					}
				}
				$var($DQTMarkerSegment, dqt, $cast($DQTMarkerSegment, tableSegments->get(tableSegments->size() - 1)));
				$nc($nc(dqt)->tables)->add($(dqt->getChromaForLuma(table0)));
			}
		}
	}
	if (updateHtables) {
		$var($List, tableSegments, $new($ArrayList));
		{
			$var($Iterator, iter, $nc(this->markerSequence)->iterator());
			for (; $nc(iter)->hasNext();) {
				$var($MarkerSegment, seg, $cast($MarkerSegment, iter->next()));
				if ($instanceOf($DHTMarkerSegment, seg)) {
					tableSegments->add($cast($DHTMarkerSegment, seg));
				}
			}
		}
		if (!tableSegments->isEmpty() && willSubsample) {
			bool found = false;
			{
				$var($Iterator, iter, tableSegments->iterator());
				for (; $nc(iter)->hasNext();) {
					$var($DHTMarkerSegment, testdht, $cast($DHTMarkerSegment, iter->next()));
					{
						$var($Iterator, tabiter, $nc($nc(testdht)->tables)->iterator());
						for (; $nc(tabiter)->hasNext();) {
							$var($DHTMarkerSegment$Htable, tab, $cast($DHTMarkerSegment$Htable, tabiter->next()));
							if ($nc(tab)->tableID == 1) {
								found = true;
							}
						}
					}
				}
			}
			if (!found) {
				$var($DHTMarkerSegment, lastDHT, $cast($DHTMarkerSegment, tableSegments->get(tableSegments->size() - 1)));
				$init($JPEGHuffmanTable);
				$nc(lastDHT)->addHtable($JPEGHuffmanTable::StdDCLuminance, true, 1);
				lastDHT->addHtable($JPEGHuffmanTable::StdACLuminance, true, 1);
			}
		}
	}
}

bool JPEGMetadata::wantAlpha($Node* transparency) {
	$useLocalCurrentObjectStackCache();
	bool returnValue = false;
	$var($Node, alpha, $nc(transparency)->getFirstChild());
	if ($nc($($nc(alpha)->getNodeName()))->equals("Alpha"_s)) {
		if (alpha->hasAttributes()) {
			$var($String, value, $nc($($nc($(alpha->getAttributes()))->getNamedItem("value"_s)))->getNodeValue());
			if (!$nc(value)->equals("none"_s)) {
				returnValue = true;
			}
		}
	}
	this->transparencyDone = true;
	return returnValue;
}

void JPEGMetadata::mergeStandardCompressionNode($Node* node) {
}

void JPEGMetadata::mergeStandardDataNode($Node* node) {
}

void JPEGMetadata::mergeStandardDimensionNode($Node* node) {
	$useLocalCurrentObjectStackCache();
	$load($JFIFMarkerSegment);
	$var($JFIFMarkerSegment, jfif, $cast($JFIFMarkerSegment, findMarkerSegment($JFIFMarkerSegment::class$, true)));
	if (jfif == nullptr) {
		bool canHaveJFIF = false;
		$load($SOFMarkerSegment);
		$var($SOFMarkerSegment, sof, $cast($SOFMarkerSegment, findMarkerSegment($SOFMarkerSegment::class$, true)));
		if (sof != nullptr) {
			int32_t numChannels = $nc(sof->componentSpecs)->length;
			if ((numChannels == 1) || (numChannels == 3)) {
				canHaveJFIF = true;
				for (int32_t i = 0; i < $nc(sof->componentSpecs)->length; ++i) {
					if ($nc($nc(sof->componentSpecs)->get(i))->componentId != i + 1) {
						canHaveJFIF = false;
					}
				}
				$load($AdobeMarkerSegment);
				$var($AdobeMarkerSegment, adobe, $cast($AdobeMarkerSegment, findMarkerSegment($AdobeMarkerSegment::class$, true)));
				if (adobe != nullptr) {
					if (adobe->transform != ((numChannels == 1) ? $JPEG::ADOBE_UNKNOWN : $JPEG::ADOBE_YCC)) {
						canHaveJFIF = false;
					}
				}
			}
		}
		if (canHaveJFIF) {
			$assign(jfif, $new($JFIFMarkerSegment));
			$nc(this->markerSequence)->add(0, jfif);
		}
	}
	if (jfif != nullptr) {
		$var($NodeList, children, $nc(node)->getChildNodes());
		for (int32_t i = 0; i < $nc(children)->getLength(); ++i) {
			$var($Node, child, children->item(i));
			$var($NamedNodeMap, attrs, $nc(child)->getAttributes());
			$var($String, name, child->getNodeName());
			if ($nc(name)->equals("PixelAspectRatio"_s)) {
				$var($String, valueString, $nc($($nc(attrs)->getNamedItem("value"_s)))->getNodeValue());
				float value = $Float::parseFloat(valueString);
				$var($Point, p, findIntegerRatio(value));
				jfif->resUnits = $JPEG::DENSITY_UNIT_ASPECT_RATIO;
				jfif->Xdensity = $nc(p)->x;
				jfif->Xdensity = p->y;
			} else if (name->equals("HorizontalPixelSize"_s)) {
				$var($String, valueString, $nc($($nc(attrs)->getNamedItem("value"_s)))->getNodeValue());
				float value = $Float::parseFloat(valueString);
				int32_t dpcm = (int32_t)$Math::round(1.0 / (value * 10.0));
				jfif->resUnits = $JPEG::DENSITY_UNIT_DOTS_CM;
				jfif->Xdensity = dpcm;
			} else if (name->equals("VerticalPixelSize"_s)) {
				$var($String, valueString, $nc($($nc(attrs)->getNamedItem("value"_s)))->getNodeValue());
				float value = $Float::parseFloat(valueString);
				int32_t dpcm = (int32_t)$Math::round(1.0 / (value * 10.0));
				jfif->resUnits = $JPEG::DENSITY_UNIT_DOTS_CM;
				jfif->Ydensity = dpcm;
			}
		}
	}
}

$Point* JPEGMetadata::findIntegerRatio(float value) {
	$init(JPEGMetadata);
	float epsilon = 0.005f;
	value = $Math::abs(value);
	if (value <= epsilon) {
		return $new($Point, 1, 255);
	}
	if (value >= 255) {
		return $new($Point, 255, 1);
	}
	bool inverted = false;
	if (value < 1.0) {
		value = 1.0f / value;
		inverted = true;
	}
	int32_t y = 1;
	int32_t x = $Math::round(value);
	float ratio = (float)x;
	float delta = $Math::abs(value - ratio);
	while (delta > epsilon) {
		++y;
		x = $Math::round(y * value);
		ratio = (float)x / (float)y;
		delta = $Math::abs(value - ratio);
	}
	return inverted ? $new($Point, y, x) : $new($Point, x, y);
}

void JPEGMetadata::mergeStandardDocumentNode($Node* node) {
}

void JPEGMetadata::mergeStandardTextNode($Node* node) {
	$useLocalCurrentObjectStackCache();
	$var($NodeList, children, $nc(node)->getChildNodes());
	for (int32_t i = 0; i < $nc(children)->getLength(); ++i) {
		$var($Node, child, children->item(i));
		$var($NamedNodeMap, attrs, $nc(child)->getAttributes());
		$var($Node, comp, $nc(attrs)->getNamedItem("compression"_s));
		bool copyIt = true;
		if (comp != nullptr) {
			$var($String, compString, comp->getNodeValue());
			if (!$nc(compString)->equals("none"_s)) {
				copyIt = false;
			}
		}
		if (copyIt) {
			$var($String, value, $nc($(attrs->getNamedItem("value"_s)))->getNodeValue());
			$var($COMMarkerSegment, com, $new($COMMarkerSegment, value));
			insertCOMMarkerSegment(com);
		}
	}
}

void JPEGMetadata::mergeStandardTransparencyNode($Node* node) {
	$useLocalCurrentObjectStackCache();
	if (!this->transparencyDone && !this->isStream) {
		bool wantAlpha = this->wantAlpha(node);
		$load($JFIFMarkerSegment);
		$var($JFIFMarkerSegment, jfif, $cast($JFIFMarkerSegment, findMarkerSegment($JFIFMarkerSegment::class$, true)));
		$load($AdobeMarkerSegment);
		$var($AdobeMarkerSegment, adobe, $cast($AdobeMarkerSegment, findMarkerSegment($AdobeMarkerSegment::class$, true)));
		$load($SOFMarkerSegment);
		$var($SOFMarkerSegment, sof, $cast($SOFMarkerSegment, findMarkerSegment($SOFMarkerSegment::class$, true)));
		$load($SOSMarkerSegment);
		$var($SOSMarkerSegment, sos, $cast($SOSMarkerSegment, findMarkerSegment($SOSMarkerSegment::class$, true)));
		if ((sof != nullptr) && (sof->tag == $JPEG::SOF2)) {
			return;
		}
		if (sof != nullptr) {
			int32_t numChannels = $nc(sof->componentSpecs)->length;
			bool hadAlpha = (numChannels == 2) || (numChannels == 4);
			if (hadAlpha != wantAlpha) {
				if (wantAlpha) {
					++numChannels;
					if (jfif != nullptr) {
						$nc(this->markerSequence)->remove($of(jfif));
					}
					if (adobe != nullptr) {
						adobe->transform = $JPEG::ADOBE_UNKNOWN;
					}
					$var($SOFMarkerSegment$ComponentSpecArray, newSpecs, $new($SOFMarkerSegment$ComponentSpecArray, numChannels));
					for (int32_t i = 0; i < $nc(sof->componentSpecs)->length; ++i) {
						newSpecs->set(i, $nc(sof->componentSpecs)->get(i));
					}
					int8_t oldFirstID = (int8_t)$nc($nc(sof->componentSpecs)->get(0))->componentId;
					int8_t newID = (int8_t)((oldFirstID > 1) ? u'A' : (char16_t)4);
					newSpecs->set(numChannels - 1, $(sof->getComponentSpec(newID, $nc($nc(sof->componentSpecs)->get(0))->HsamplingFactor, $nc($nc(sof->componentSpecs)->get(0))->QtableSelector)));
					$set(sof, componentSpecs, newSpecs);
					$var($SOSMarkerSegment$ScanComponentSpecArray, newScanSpecs, $new($SOSMarkerSegment$ScanComponentSpecArray, numChannels));
					for (int32_t i = 0; i < $nc($nc(sos)->componentSpecs)->length; ++i) {
						newScanSpecs->set(i, $nc(sos->componentSpecs)->get(i));
					}
					newScanSpecs->set(numChannels - 1, $($nc(sos)->getScanComponentSpec(newID, 0)));
					$set(sos, componentSpecs, newScanSpecs);
				} else {
					--numChannels;
					$var($SOFMarkerSegment$ComponentSpecArray, newSpecs, $new($SOFMarkerSegment$ComponentSpecArray, numChannels));
					for (int32_t i = 0; i < numChannels; ++i) {
						newSpecs->set(i, $nc(sof->componentSpecs)->get(i));
					}
					$set(sof, componentSpecs, newSpecs);
					$var($SOSMarkerSegment$ScanComponentSpecArray, newScanSpecs, $new($SOSMarkerSegment$ScanComponentSpecArray, numChannels));
					for (int32_t i = 0; i < numChannels; ++i) {
						newScanSpecs->set(i, $nc($nc(sos)->componentSpecs)->get(i));
					}
					$set($nc(sos), componentSpecs, newScanSpecs);
				}
			}
		}
	}
}

void JPEGMetadata::setFromTree($String* formatName, $Node* root) {
	if (formatName == nullptr) {
		$throwNew($IllegalArgumentException, "null formatName!"_s);
	}
	if (root == nullptr) {
		$throwNew($IllegalArgumentException, "null root!"_s);
	}
	$init($JPEG);
	if (this->isStream && ($nc(formatName)->equals($JPEG::nativeStreamMetadataFormatName))) {
		setFromNativeTree(root);
	} else {
		if (!this->isStream && (formatName->equals($JPEG::nativeImageMetadataFormatName))) {
			setFromNativeTree(root);
		} else {
			$init($IIOMetadataFormatImpl);
			if (!this->isStream && (formatName->equals($IIOMetadataFormatImpl::standardMetadataFormatName))) {
				$IIOMetadata::setFromTree(formatName, root);
			} else {
				$throwNew($IllegalArgumentException, $$str({"Unsupported format name: "_s, formatName}));
			}
		}
	}
}

void JPEGMetadata::setFromNativeTree($Node* root) {
	$useLocalCurrentObjectStackCache();
	if (this->resetSequence == nullptr) {
		$set(this, resetSequence, this->markerSequence);
	}
	$set(this, markerSequence, $new($ArrayList));
	$var($String, name, $nc(root)->getNodeName());
	$init($JPEG);
	if (name != ((this->isStream) ? $JPEG::nativeStreamMetadataFormatName : $JPEG::nativeImageMetadataFormatName)) {
		$throwNew($IIOInvalidTreeException, $$str({"Invalid root node name: "_s, name}), root);
	}
	if (!this->isStream) {
		if ($nc($(root->getChildNodes()))->getLength() != 2) {
			$throwNew($IIOInvalidTreeException, "JPEGvariety and markerSequence nodes must be present"_s, root);
		}
		$var($Node, JPEGvariety, root->getFirstChild());
		if ($nc($($nc(JPEGvariety)->getChildNodes()))->getLength() != 0) {
			$nc(this->markerSequence)->add($$new($JFIFMarkerSegment, $(JPEGvariety->getFirstChild())));
		}
	}
	$var($Node, markerSequenceNode, this->isStream ? root : root->getLastChild());
	setFromMarkerSequenceNode(markerSequenceNode);
}

void JPEGMetadata::setFromMarkerSequenceNode($Node* markerSequenceNode) {
	$useLocalCurrentObjectStackCache();
	$var($NodeList, children, $nc(markerSequenceNode)->getChildNodes());
	for (int32_t i = 0; i < $nc(children)->getLength(); ++i) {
		$var($Node, node, children->item(i));
		$var($String, childName, $nc(node)->getNodeName());
		if ($nc(childName)->equals("dqt"_s)) {
			$nc(this->markerSequence)->add($$new($DQTMarkerSegment, node));
		} else if (childName->equals("dht"_s)) {
			$nc(this->markerSequence)->add($$new($DHTMarkerSegment, node));
		} else if (childName->equals("dri"_s)) {
			$nc(this->markerSequence)->add($$new($DRIMarkerSegment, node));
		} else if (childName->equals("com"_s)) {
			$nc(this->markerSequence)->add($$new($COMMarkerSegment, node));
		} else if (childName->equals("app14Adobe"_s)) {
			$nc(this->markerSequence)->add($$new($AdobeMarkerSegment, node));
		} else if (childName->equals("unknown"_s)) {
			$nc(this->markerSequence)->add($$new($MarkerSegment, node));
		} else if (childName->equals("sof"_s)) {
			$nc(this->markerSequence)->add($$new($SOFMarkerSegment, node));
		} else if (childName->equals("sos"_s)) {
			$nc(this->markerSequence)->add($$new($SOSMarkerSegment, node));
		} else {
			$throwNew($IIOInvalidTreeException, $$str({"Invalid "_s, (this->isStream ? "stream "_s : "image "_s), "child: "_s, childName}), node);
		}
	}
}

bool JPEGMetadata::isConsistent() {
	$useLocalCurrentObjectStackCache();
	$load($SOFMarkerSegment);
	$var($SOFMarkerSegment, sof, $cast($SOFMarkerSegment, findMarkerSegment($SOFMarkerSegment::class$, true)));
	$load($JFIFMarkerSegment);
	$var($JFIFMarkerSegment, jfif, $cast($JFIFMarkerSegment, findMarkerSegment($JFIFMarkerSegment::class$, true)));
	$load($AdobeMarkerSegment);
	$var($AdobeMarkerSegment, adobe, $cast($AdobeMarkerSegment, findMarkerSegment($AdobeMarkerSegment::class$, true)));
	bool retval = true;
	if (!this->isStream) {
		if (sof != nullptr) {
			int32_t numSOFBands = $nc(sof->componentSpecs)->length;
			int32_t numScanBands = countScanBands();
			if (numScanBands != 0) {
				if (numScanBands != numSOFBands) {
					retval = false;
				}
			}
			if (jfif != nullptr) {
				if ((numSOFBands != 1) && (numSOFBands != 3)) {
					retval = false;
				}
				for (int32_t i = 0; i < numSOFBands; ++i) {
					if ($nc($nc(sof->componentSpecs)->get(i))->componentId != i + 1) {
						retval = false;
					}
				}
				if ((adobe != nullptr) && (((numSOFBands == 1) && (adobe->transform != $JPEG::ADOBE_UNKNOWN)) || ((numSOFBands == 3) && ($nc(adobe)->transform != $JPEG::ADOBE_YCC)))) {
					retval = false;
				}
			}
		} else {
			$load($SOSMarkerSegment);
			$var($SOSMarkerSegment, sos, $cast($SOSMarkerSegment, findMarkerSegment($SOSMarkerSegment::class$, true)));
			if ((jfif != nullptr) || (adobe != nullptr) || (sof != nullptr) || (sos != nullptr)) {
				retval = false;
			}
		}
	}
	return retval;
}

int32_t JPEGMetadata::countScanBands() {
	$useLocalCurrentObjectStackCache();
	$var($List, ids, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(this->markerSequence)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MarkerSegment, seg, $cast($MarkerSegment, i$->next()));
			{
				if ($instanceOf($SOSMarkerSegment, seg)) {
					$var($SOSMarkerSegment, sos, $cast($SOSMarkerSegment, seg));
					$var($SOSMarkerSegment$ScanComponentSpecArray, specs, $nc(sos)->componentSpecs);
					for (int32_t i = 0; i < $nc(specs)->length; ++i) {
						$var($Integer, id, $Integer::valueOf($nc(specs->get(i))->componentSelector));
						if (!ids->contains(id)) {
							ids->add(id);
						}
					}
				}
			}
		}
	}
	return ids->size();
}

void JPEGMetadata::writeToStream($ImageOutputStream* ios, bool ignoreJFIF, bool forceJFIF, $List* thumbnails, $ICC_Profile* iccProfile, bool ignoreAdobe, int32_t newAdobeTransform, $JPEGImageWriter* writer) {
	$useLocalCurrentObjectStackCache();
	if (forceJFIF) {
		$JFIFMarkerSegment::writeDefaultJFIF(ios, thumbnails, iccProfile, writer);
		if ((ignoreAdobe == false) && (newAdobeTransform != $JPEG::ADOBE_IMPOSSIBLE)) {
			if ((newAdobeTransform != $JPEG::ADOBE_UNKNOWN) && (newAdobeTransform != $JPEG::ADOBE_YCC)) {
				ignoreAdobe = true;
				$nc(writer)->warningOccurred($JPEGImageWriter::WARNING_METADATA_ADJUSTED_FOR_THUMB);
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->markerSequence)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($MarkerSegment, seg, $cast($MarkerSegment, i$->next()));
			{
				if ($instanceOf($JFIFMarkerSegment, seg)) {
					if (ignoreJFIF == false) {
						$var($JFIFMarkerSegment, jfif, $cast($JFIFMarkerSegment, seg));
						$nc(jfif)->writeWithThumbs(ios, thumbnails, writer);
						if (iccProfile != nullptr) {
							$JFIFMarkerSegment::writeICC(iccProfile, ios);
						}
					}
				} else if ($instanceOf($AdobeMarkerSegment, seg)) {
					if (ignoreAdobe == false) {
						if (newAdobeTransform != $JPEG::ADOBE_IMPOSSIBLE) {
							$var($AdobeMarkerSegment, newAdobe, $cast($AdobeMarkerSegment, $nc(seg)->clone()));
							$nc(newAdobe)->transform = newAdobeTransform;
							newAdobe->write(ios);
						} else if (forceJFIF) {
							$var($AdobeMarkerSegment, adobe, $cast($AdobeMarkerSegment, seg));
							if (($nc(adobe)->transform == $JPEG::ADOBE_UNKNOWN) || ($nc(adobe)->transform == $JPEG::ADOBE_YCC)) {
								adobe->write(ios);
							} else {
								$nc(writer)->warningOccurred($JPEGImageWriter::WARNING_METADATA_ADJUSTED_FOR_THUMB);
							}
						} else {
							$nc(seg)->write(ios);
						}
					}
				} else {
					$nc(seg)->write(ios);
				}
			}
		}
	}
}

void JPEGMetadata::reset() {
	if (this->resetSequence != nullptr) {
		$set(this, markerSequence, this->resetSequence);
		$set(this, resetSequence, nullptr);
	}
}

void JPEGMetadata::print() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->markerSequence)->size(); ++i) {
		$var($MarkerSegment, seg, $cast($MarkerSegment, $nc(this->markerSequence)->get(i)));
		$nc(seg)->print();
	}
}

JPEGMetadata::JPEGMetadata() {
}

$Class* JPEGMetadata::load$($String* name, bool initialize) {
	$loadClass(JPEGMetadata, name, initialize, &_JPEGMetadata_ClassInfo_, allocate$JPEGMetadata);
	return class$;
}

$Class* JPEGMetadata::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com