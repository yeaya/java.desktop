#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment.h>

#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$ICCMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$IllegalThumbException.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFExtensionMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumb.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbRGB.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/color/ICC_ColorSpace.h>
#include <java/awt/color/ICC_Profile.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef APP0
#undef APP2
#undef COUNTS_LENGTH
#undef DATA_SIZE
#undef DENSITY_UNIT_ASPECT_RATIO
#undef ID
#undef ID_LENGTH
#undef ID_SIZE
#undef LENGTH_LENGTH
#undef LENGTH_SIZE
#undef MAX_ICC_CHUNK_SIZE
#undef MAX_THUMB_HEIGHT
#undef MAX_THUMB_WIDTH
#undef THUMB_JPEG
#undef THUMB_PALETTE
#undef THUMB_RGB
#undef THUMB_UNASSIGNED
#undef TYPE_GRAY
#undef TYPE_INT_RGB
#undef TYPE_RGB
#undef WARNING_ILLEGAL_THUMBNAIL
#undef WARNING_NO_GRAY_THUMB_AS_INDEXED
#undef WARNING_NO_RGB_THUMB_AS_INDEXED
#undef WARNING_THUMB_CLIPPED

using $JFIFMarkerSegment$ICCMarkerSegment = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$ICCMarkerSegment;
using $JFIFMarkerSegment$IllegalThumbException = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$IllegalThumbException;
using $JFIFMarkerSegment$JFIFExtensionMarkerSegment = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFExtensionMarkerSegment;
using $JFIFMarkerSegment$JFIFThumb = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumb;
using $JFIFMarkerSegment$JFIFThumbRGB = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbRGB;
using $JFIFMarkerSegment$JFIFThumbUncompressed = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbUncompressed;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $JPEGImageWriter = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $ICC_ColorSpace = ::java::awt::color::ICC_ColorSpace;
using $ICC_Profile = ::java::awt::color::ICC_Profile;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $IIOException = ::javax::imageio::IIOException;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
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

$FieldInfo _JFIFMarkerSegment_FieldInfo_[] = {
	{"majorVersion", "I", nullptr, 0, $field(JFIFMarkerSegment, majorVersion)},
	{"minorVersion", "I", nullptr, 0, $field(JFIFMarkerSegment, minorVersion)},
	{"resUnits", "I", nullptr, 0, $field(JFIFMarkerSegment, resUnits)},
	{"Xdensity", "I", nullptr, 0, $field(JFIFMarkerSegment, Xdensity)},
	{"Ydensity", "I", nullptr, 0, $field(JFIFMarkerSegment, Ydensity)},
	{"thumbWidth", "I", nullptr, 0, $field(JFIFMarkerSegment, thumbWidth)},
	{"thumbHeight", "I", nullptr, 0, $field(JFIFMarkerSegment, thumbHeight)},
	{"thumb", "Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbRGB;", nullptr, 0, $field(JFIFMarkerSegment, thumb)},
	{"extSegments", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFExtensionMarkerSegment;>;", 0, $field(JFIFMarkerSegment, extSegments)},
	{"iccSegment", "Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment$ICCMarkerSegment;", nullptr, 0, $field(JFIFMarkerSegment, iccSegment)},
	{"THUMB_JPEG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JFIFMarkerSegment, THUMB_JPEG)},
	{"THUMB_PALETTE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JFIFMarkerSegment, THUMB_PALETTE)},
	{"THUMB_UNASSIGNED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JFIFMarkerSegment, THUMB_UNASSIGNED)},
	{"THUMB_RGB", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JFIFMarkerSegment, THUMB_RGB)},
	{"DATA_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JFIFMarkerSegment, DATA_SIZE)},
	{"ID_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JFIFMarkerSegment, ID_SIZE)},
	{"MAX_THUMB_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JFIFMarkerSegment, MAX_THUMB_WIDTH)},
	{"MAX_THUMB_HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JFIFMarkerSegment, MAX_THUMB_HEIGHT)},
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JFIFMarkerSegment, debug)},
	{"inICC", "Z", nullptr, $PRIVATE, $field(JFIFMarkerSegment, inICC)},
	{"tempICCSegment", "Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment$ICCMarkerSegment;", nullptr, $PRIVATE, $field(JFIFMarkerSegment, tempICCSegment)},
	{}
};

$MethodInfo _JFIFMarkerSegment_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment::*)()>(&JFIFMarkerSegment::init$))},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment::*)($JPEGBuffer*)>(&JFIFMarkerSegment::init$)), "java.io.IOException"},
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment::*)($Node*)>(&JFIFMarkerSegment::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"addICC", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"addICC", "(Ljava/awt/color/ICC_ColorSpace;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"addJFXX", "(Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;Lcom/sun/imageio/plugins/jpeg/JPEGImageReader;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"expandGrayThumb", "(Ljava/awt/image/BufferedImage;)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BufferedImage*(*)($BufferedImage*)>(&JFIFMarkerSegment::expandGrayThumb))},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"getThumbnail", "(Ljavax/imageio/stream/ImageInputStream;ILcom/sun/imageio/plugins/jpeg/JPEGImageReader;)Ljava/awt/image/BufferedImage;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getThumbnailHeight", "(I)I", nullptr, 0},
	{"getThumbnailWidth", "(I)I", nullptr, 0},
	{"print", "()V", nullptr, 0},
	{"updateFromNativeNode", "(Lorg/w3c/dom/Node;Z)V", nullptr, 0, nullptr, "javax.imageio.metadata.IIOInvalidTreeException"},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;Ljava/awt/image/BufferedImage;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"writeDefaultJFIF", "(Ljavax/imageio/stream/ImageOutputStream;Ljava/util/List;Ljava/awt/color/ICC_Profile;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", "(Ljavax/imageio/stream/ImageOutputStream;Ljava/util/List<+Ljava/awt/image/BufferedImage;>;Ljava/awt/color/ICC_Profile;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", $STATIC, $method(static_cast<void(*)($ImageOutputStream*,$List*,$ICC_Profile*,$JPEGImageWriter*)>(&JFIFMarkerSegment::writeDefaultJFIF)), "java.io.IOException"},
	{"writeICC", "(Ljava/awt/color/ICC_Profile;Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, $STATIC, $method(static_cast<void(*)($ICC_Profile*,$ImageOutputStream*)>(&JFIFMarkerSegment::writeICC)), "java.io.IOException"},
	{"writeJFXXSegment", "(ILjava/awt/image/BufferedImage;Ljavax/imageio/stream/ImageOutputStream;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", nullptr, $PRIVATE, $method(static_cast<void(JFIFMarkerSegment::*)(int32_t,$BufferedImage*,$ImageOutputStream*,$JPEGImageWriter*)>(&JFIFMarkerSegment::writeJFXXSegment)), "java.io.IOException"},
	{"writeThumb", "(Ljavax/imageio/stream/ImageOutputStream;Ljava/awt/image/BufferedImage;Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFExtensionMarkerSegment;IZLcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", nullptr, $PRIVATE, $method(static_cast<void(JFIFMarkerSegment::*)($ImageOutputStream*,$BufferedImage*,$JFIFMarkerSegment$JFIFExtensionMarkerSegment*,int32_t,bool,$JPEGImageWriter*)>(&JFIFMarkerSegment::writeThumb)), "java.io.IOException"},
	{"writeThumbnailData", "(Ljavax/imageio/stream/ImageOutputStream;[ILcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"writeWithThumbs", "(Ljavax/imageio/stream/ImageOutputStream;Ljava/util/List;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", "(Ljavax/imageio/stream/ImageOutputStream;Ljava/util/List<+Ljava/awt/image/BufferedImage;>;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JFIFMarkerSegment_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$ICCMarkerSegment", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "ICCMarkerSegment", 0},
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbJPEG", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFThumbJPEG", 0},
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbPalette", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFThumbPalette", 0},
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbRGB", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFThumbRGB", 0},
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbUncompressed", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFThumbUncompressed", $ABSTRACT},
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumb", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFThumb", $ABSTRACT},
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFExtensionMarkerSegment", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFExtensionMarkerSegment", 0},
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$IllegalThumbException", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "IllegalThumbException", $PRIVATE},
	{}
};

$ClassInfo _JFIFMarkerSegment_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment",
	"com.sun.imageio.plugins.jpeg.MarkerSegment",
	nullptr,
	_JFIFMarkerSegment_FieldInfo_,
	_JFIFMarkerSegment_MethodInfo_,
	nullptr,
	nullptr,
	_JFIFMarkerSegment_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$ICCMarkerSegment,com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbJPEG,com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener,com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbPalette,com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbRGB,com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbUncompressed,com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumb,com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFExtensionMarkerSegment,com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$IllegalThumbException"
};

$Object* allocate$JFIFMarkerSegment($Class* clazz) {
	return $of($alloc(JFIFMarkerSegment));
}

void JFIFMarkerSegment::init$() {
	$MarkerSegment::init$($JPEG::APP0);
	$set(this, thumb, nullptr);
	$set(this, extSegments, $new($ArrayList));
	$set(this, iccSegment, nullptr);
	this->inICC = false;
	$set(this, tempICCSegment, nullptr);
	this->majorVersion = 1;
	this->minorVersion = 2;
	this->resUnits = $JPEG::DENSITY_UNIT_ASPECT_RATIO;
	this->Xdensity = 1;
	this->Ydensity = 1;
	this->thumbWidth = 0;
	this->thumbHeight = 0;
}

void JFIFMarkerSegment::init$($JPEGBuffer* buffer) {
	$MarkerSegment::init$(buffer);
	$set(this, thumb, nullptr);
	$set(this, extSegments, $new($ArrayList));
	$set(this, iccSegment, nullptr);
	this->inICC = false;
	$set(this, tempICCSegment, nullptr);
	$nc(buffer)->bufPtr += JFIFMarkerSegment::ID_SIZE;
	this->majorVersion = $nc(buffer->buf)->get(buffer->bufPtr++);
	this->minorVersion = $nc(buffer->buf)->get(buffer->bufPtr++);
	this->resUnits = $nc(buffer->buf)->get(buffer->bufPtr++);
	this->Xdensity = ((int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255)) << 8;
	this->Xdensity |= (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	this->Ydensity = ((int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255)) << 8;
	this->Ydensity |= (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	this->thumbWidth = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	this->thumbHeight = (int32_t)($nc(buffer->buf)->get(buffer->bufPtr++) & (uint32_t)255);
	buffer->bufAvail -= JFIFMarkerSegment::DATA_SIZE;
	if (this->thumbWidth > 0) {
		$set(this, thumb, $new($JFIFMarkerSegment$JFIFThumbRGB, this, buffer, this->thumbWidth, this->thumbHeight));
	}
}

void JFIFMarkerSegment::init$($Node* node) {
	JFIFMarkerSegment::init$();
	updateFromNativeNode(node, true);
}

$Object* JFIFMarkerSegment::clone() {
	$useLocalCurrentObjectStackCache();
	$var(JFIFMarkerSegment, newGuy, $cast(JFIFMarkerSegment, $MarkerSegment::clone()));
	if (!$nc(this->extSegments)->isEmpty()) {
		$set($nc(newGuy), extSegments, $new($ArrayList));
		{
			$var($Iterator, iter, $nc(this->extSegments)->iterator());
			for (; $nc(iter)->hasNext();) {
				$var($JFIFMarkerSegment$JFIFExtensionMarkerSegment, jfxx, $cast($JFIFMarkerSegment$JFIFExtensionMarkerSegment, iter->next()));
				$nc(newGuy->extSegments)->add($cast($JFIFMarkerSegment$JFIFExtensionMarkerSegment, $($nc(jfxx)->clone())));
			}
		}
	}
	if (this->iccSegment != nullptr) {
		$set($nc(newGuy), iccSegment, $cast($JFIFMarkerSegment$ICCMarkerSegment, $nc(this->iccSegment)->clone()));
	}
	return $of(newGuy);
}

void JFIFMarkerSegment::addJFXX($JPEGBuffer* buffer, $JPEGImageReader* reader) {
	$nc(this->extSegments)->add($$new($JFIFMarkerSegment$JFIFExtensionMarkerSegment, this, buffer, reader));
}

void JFIFMarkerSegment::addICC($JPEGBuffer* buffer) {
	if (this->inICC == false) {
		if (this->iccSegment != nullptr) {
			$throwNew($IIOException, "> 1 ICC APP2 Marker Segment not supported"_s);
		}
		$set(this, tempICCSegment, $new($JFIFMarkerSegment$ICCMarkerSegment, this, buffer));
		if (this->inICC == false) {
			$set(this, iccSegment, this->tempICCSegment);
			$set(this, tempICCSegment, nullptr);
		}
	} else if ($nc(this->tempICCSegment)->addData(buffer) == true) {
		$set(this, iccSegment, this->tempICCSegment);
		$set(this, tempICCSegment, nullptr);
	}
}

void JFIFMarkerSegment::addICC($ICC_ColorSpace* cs) {
	if (this->iccSegment != nullptr) {
		$throwNew($IIOException, "> 1 ICC APP2 Marker Segment not supported"_s);
	}
	$set(this, iccSegment, $new($JFIFMarkerSegment$ICCMarkerSegment, this, cs));
}

$IIOMetadataNode* JFIFMarkerSegment::getNativeNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "app0JFIF"_s));
	node->setAttribute("majorVersion"_s, $($Integer::toString(this->majorVersion)));
	node->setAttribute("minorVersion"_s, $($Integer::toString(this->minorVersion)));
	node->setAttribute("resUnits"_s, $($Integer::toString(this->resUnits)));
	node->setAttribute("Xdensity"_s, $($Integer::toString(this->Xdensity)));
	node->setAttribute("Ydensity"_s, $($Integer::toString(this->Ydensity)));
	node->setAttribute("thumbWidth"_s, $($Integer::toString(this->thumbWidth)));
	node->setAttribute("thumbHeight"_s, $($Integer::toString(this->thumbHeight)));
	if (!$nc(this->extSegments)->isEmpty()) {
		$var($IIOMetadataNode, JFXXnode, $new($IIOMetadataNode, "JFXX"_s));
		node->appendChild(JFXXnode);
		{
			$var($Iterator, iter, $nc(this->extSegments)->iterator());
			for (; $nc(iter)->hasNext();) {
				$var($JFIFMarkerSegment$JFIFExtensionMarkerSegment, seg, $cast($JFIFMarkerSegment$JFIFExtensionMarkerSegment, iter->next()));
				JFXXnode->appendChild($($nc(seg)->getNativeNode()));
			}
		}
	}
	if (this->iccSegment != nullptr) {
		node->appendChild($($nc(this->iccSegment)->getNativeNode()));
	}
	return node;
}

void JFIFMarkerSegment::updateFromNativeNode($Node* node, bool fromScratch) {
	$useLocalCurrentObjectStackCache();
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	if ($nc(attrs)->getLength() > 0) {
		int32_t value = getAttributeValue(node, attrs, "majorVersion"_s, 0, 255, false);
		this->majorVersion = (value != -1) ? value : this->majorVersion;
		value = getAttributeValue(node, attrs, "minorVersion"_s, 0, 255, false);
		this->minorVersion = (value != -1) ? value : this->minorVersion;
		value = getAttributeValue(node, attrs, "resUnits"_s, 0, 2, false);
		this->resUnits = (value != -1) ? value : this->resUnits;
		value = getAttributeValue(node, attrs, "Xdensity"_s, 1, 0x0000FFFF, false);
		this->Xdensity = (value != -1) ? value : this->Xdensity;
		value = getAttributeValue(node, attrs, "Ydensity"_s, 1, 0x0000FFFF, false);
		this->Ydensity = (value != -1) ? value : this->Ydensity;
		value = getAttributeValue(node, attrs, "thumbWidth"_s, 0, 255, false);
		this->thumbWidth = (value != -1) ? value : this->thumbWidth;
		value = getAttributeValue(node, attrs, "thumbHeight"_s, 0, 255, false);
		this->thumbHeight = (value != -1) ? value : this->thumbHeight;
	}
	if (node->hasChildNodes()) {
		$var($NodeList, children, node->getChildNodes());
		int32_t count = $nc(children)->getLength();
		if (count > 2) {
			$throwNew($IIOInvalidTreeException, "app0JFIF node cannot have > 2 children"_s, node);
		}
		for (int32_t i = 0; i < count; ++i) {
			$var($Node, child, children->item(i));
			$var($String, name, $nc(child)->getNodeName());
			if ($nc(name)->equals("JFXX"_s)) {
				if ((!$nc(this->extSegments)->isEmpty()) && fromScratch) {
					$throwNew($IIOInvalidTreeException, "app0JFIF node cannot have > 1 JFXX node"_s, node);
				}
				$var($NodeList, exts, child->getChildNodes());
				int32_t extCount = $nc(exts)->getLength();
				for (int32_t j = 0; j < extCount; ++j) {
					$var($Node, ext, exts->item(j));
					$nc(this->extSegments)->add($$new($JFIFMarkerSegment$JFIFExtensionMarkerSegment, this, ext));
				}
			}
			if ($nc(name)->equals("app2ICC"_s)) {
				if ((this->iccSegment != nullptr) && fromScratch) {
					$throwNew($IIOInvalidTreeException, "> 1 ICC APP2 Marker Segment not supported"_s, node);
				}
				$set(this, iccSegment, $new($JFIFMarkerSegment$ICCMarkerSegment, this, child));
			}
		}
	}
}

int32_t JFIFMarkerSegment::getThumbnailWidth(int32_t index) {
	if (this->thumb != nullptr) {
		if (index == 0) {
			return $nc(this->thumb)->getWidth();
		}
		--index;
	}
	$var($JFIFMarkerSegment$JFIFExtensionMarkerSegment, jfxx, $cast($JFIFMarkerSegment$JFIFExtensionMarkerSegment, $nc(this->extSegments)->get(index)));
	return $nc($nc(jfxx)->thumb)->getWidth();
}

int32_t JFIFMarkerSegment::getThumbnailHeight(int32_t index) {
	if (this->thumb != nullptr) {
		if (index == 0) {
			return $nc(this->thumb)->getHeight();
		}
		--index;
	}
	$var($JFIFMarkerSegment$JFIFExtensionMarkerSegment, jfxx, $cast($JFIFMarkerSegment$JFIFExtensionMarkerSegment, $nc(this->extSegments)->get(index)));
	return $nc($nc(jfxx)->thumb)->getHeight();
}

$BufferedImage* JFIFMarkerSegment::getThumbnail($ImageInputStream* iis, int32_t index, $JPEGImageReader* reader) {
	$useLocalCurrentObjectStackCache();
	$nc(reader)->thumbnailStarted(index);
	$var($BufferedImage, ret, nullptr);
	if ((this->thumb != nullptr) && (index == 0)) {
		$assign(ret, $nc(this->thumb)->getThumbnail(iis, reader));
	} else {
		if (this->thumb != nullptr) {
			--index;
		}
		$var($JFIFMarkerSegment$JFIFExtensionMarkerSegment, jfxx, $cast($JFIFMarkerSegment$JFIFExtensionMarkerSegment, $nc(this->extSegments)->get(index)));
		$assign(ret, $nc($nc(jfxx)->thumb)->getThumbnail(iis, reader));
	}
	reader->thumbnailComplete();
	return ret;
}

void JFIFMarkerSegment::write($ImageOutputStream* ios, $JPEGImageWriter* writer) {
	write(ios, nullptr, writer);
}

void JFIFMarkerSegment::write($ImageOutputStream* ios, $BufferedImage* thumb, $JPEGImageWriter* writer) {
	$useLocalCurrentObjectStackCache();
	int32_t thumbWidth = 0;
	int32_t thumbHeight = 0;
	int32_t thumbLength = 0;
	$var($ints, thumbData, nullptr);
	if (thumb != nullptr) {
		thumbWidth = thumb->getWidth();
		thumbHeight = thumb->getHeight();
		if ((thumbWidth > this->MAX_THUMB_WIDTH) || (thumbHeight > this->MAX_THUMB_HEIGHT)) {
			$nc(writer)->warningOccurred($JPEGImageWriter::WARNING_THUMB_CLIPPED);
		}
		thumbWidth = $Math::min(thumbWidth, this->MAX_THUMB_WIDTH);
		thumbHeight = $Math::min(thumbHeight, this->MAX_THUMB_HEIGHT);
		$assign(thumbData, $nc($(thumb->getRaster()))->getPixels(0, 0, thumbWidth, thumbHeight, ($ints*)nullptr));
		thumbLength = $nc(thumbData)->length;
	}
	this->length = JFIFMarkerSegment::DATA_SIZE + $MarkerSegment::LENGTH_SIZE + thumbLength;
	writeTag(ios);
	$var($bytes, id, $new($bytes, {
		(int8_t)74,
		(int8_t)70,
		(int8_t)73,
		(int8_t)70,
		(int8_t)0
	}));
	$nc(ios)->write(id);
	ios->write(this->majorVersion);
	ios->write(this->minorVersion);
	ios->write(this->resUnits);
	write2bytes(ios, this->Xdensity);
	write2bytes(ios, this->Ydensity);
	ios->write(thumbWidth);
	ios->write(thumbHeight);
	if (thumbData != nullptr) {
		$nc(writer)->thumbnailStarted(0);
		writeThumbnailData(ios, thumbData, writer);
		writer->thumbnailComplete();
	}
}

void JFIFMarkerSegment::writeThumbnailData($ImageOutputStream* ios, $ints* thumbData, $JPEGImageWriter* writer) {
	int32_t progInterval = $nc(thumbData)->length / 20;
	if (progInterval == 0) {
		progInterval = 1;
	}
	for (int32_t i = 0; i < thumbData->length; ++i) {
		$nc(ios)->write(thumbData->get(i));
		if ((i > progInterval) && ($mod(i, progInterval) == 0)) {
			$nc(writer)->thumbnailProgress(((float)i * 100) / ((float)thumbData->length));
		}
	}
}

void JFIFMarkerSegment::writeWithThumbs($ImageOutputStream* ios, $List* thumbnails, $JPEGImageWriter* writer) {
	$useLocalCurrentObjectStackCache();
	if (thumbnails != nullptr) {
		$var($JFIFMarkerSegment$JFIFExtensionMarkerSegment, jfxx, nullptr);
		if (thumbnails->size() == 1) {
			if (!$nc(this->extSegments)->isEmpty()) {
				$assign(jfxx, $cast($JFIFMarkerSegment$JFIFExtensionMarkerSegment, $nc(this->extSegments)->get(0)));
			}
			writeThumb(ios, $cast($BufferedImage, $(thumbnails->get(0))), jfxx, 0, true, writer);
		} else {
			write(ios, writer);
			for (int32_t i = 0; i < thumbnails->size(); ++i) {
				$assign(jfxx, nullptr);
				if (i < $nc(this->extSegments)->size()) {
					$assign(jfxx, $cast($JFIFMarkerSegment$JFIFExtensionMarkerSegment, $nc(this->extSegments)->get(i)));
				}
				writeThumb(ios, $cast($BufferedImage, $(thumbnails->get(i))), jfxx, i, false, writer);
			}
		}
	} else {
		write(ios, writer);
	}
}

void JFIFMarkerSegment::writeThumb($ImageOutputStream* ios, $BufferedImage* thumb, $JFIFMarkerSegment$JFIFExtensionMarkerSegment* jfxx, int32_t index, bool onlyOne, $JPEGImageWriter* writer) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, cm, $nc(thumb)->getColorModel());
	$var($ColorSpace, cs, $nc(cm)->getColorSpace());
	if ($instanceOf($IndexColorModel, cm)) {
		if (onlyOne) {
			write(ios, writer);
		}
		if ((jfxx == nullptr) || ($nc(jfxx)->code == JFIFMarkerSegment::THUMB_PALETTE)) {
			writeJFXXSegment(index, thumb, ios, writer);
		} else {
			$var($BufferedImage, thumbRGB, $nc(($cast($IndexColorModel, cm)))->convertToIntDiscrete($(thumb->getRaster()), false));
			jfxx->setThumbnail(thumbRGB);
			$nc(writer)->thumbnailStarted(index);
			jfxx->write(ios, writer);
			writer->thumbnailComplete();
		}
	} else if ($nc(cs)->getType() == $ColorSpace::TYPE_RGB) {
		if (jfxx == nullptr) {
			if (onlyOne) {
				write(ios, thumb, writer);
			} else {
				writeJFXXSegment(index, thumb, ios, writer);
			}
		} else {
			if (onlyOne) {
				write(ios, writer);
			}
			if ($nc(jfxx)->code == JFIFMarkerSegment::THUMB_PALETTE) {
				writeJFXXSegment(index, thumb, ios, writer);
				$nc(writer)->warningOccurred($JPEGImageWriter::WARNING_NO_RGB_THUMB_AS_INDEXED);
			} else {
				jfxx->setThumbnail(thumb);
				$nc(writer)->thumbnailStarted(index);
				jfxx->write(ios, writer);
				writer->thumbnailComplete();
			}
		}
	} else if (cs->getType() == $ColorSpace::TYPE_GRAY) {
		if (jfxx == nullptr) {
			if (onlyOne) {
				$var($BufferedImage, thumbRGB, expandGrayThumb(thumb));
				write(ios, thumbRGB, writer);
			} else {
				writeJFXXSegment(index, thumb, ios, writer);
			}
		} else {
			if (onlyOne) {
				write(ios, writer);
			}
			if ($nc(jfxx)->code == JFIFMarkerSegment::THUMB_RGB) {
				$var($BufferedImage, thumbRGB, expandGrayThumb(thumb));
				writeJFXXSegment(index, thumbRGB, ios, writer);
			} else if (jfxx->code == JFIFMarkerSegment::THUMB_JPEG) {
				jfxx->setThumbnail(thumb);
				$nc(writer)->thumbnailStarted(index);
				jfxx->write(ios, writer);
				writer->thumbnailComplete();
			} else if (jfxx->code == JFIFMarkerSegment::THUMB_PALETTE) {
				writeJFXXSegment(index, thumb, ios, writer);
				$nc(writer)->warningOccurred($JPEGImageWriter::WARNING_NO_GRAY_THUMB_AS_INDEXED);
			}
		}
	} else {
		$nc(writer)->warningOccurred($JPEGImageWriter::WARNING_ILLEGAL_THUMBNAIL);
	}
}

void JFIFMarkerSegment::writeJFXXSegment(int32_t index, $BufferedImage* thumbnail, $ImageOutputStream* ios, $JPEGImageWriter* writer) {
	$useLocalCurrentObjectStackCache();
	$var($JFIFMarkerSegment$JFIFExtensionMarkerSegment, jfxx, nullptr);
	try {
		$assign(jfxx, $new($JFIFMarkerSegment$JFIFExtensionMarkerSegment, this, thumbnail));
	} catch ($JFIFMarkerSegment$IllegalThumbException&) {
		$var($JFIFMarkerSegment$IllegalThumbException, e, $catch());
		$nc(writer)->warningOccurred($JPEGImageWriter::WARNING_ILLEGAL_THUMBNAIL);
		return;
	}
	$nc(writer)->thumbnailStarted(index);
	$nc(jfxx)->write(ios, writer);
	writer->thumbnailComplete();
}

$BufferedImage* JFIFMarkerSegment::expandGrayThumb($BufferedImage* thumb) {
	$init(JFIFMarkerSegment);
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(thumb)->getWidth();
	$var($BufferedImage, ret, $new($BufferedImage, var$0, thumb->getHeight(), $BufferedImage::TYPE_INT_RGB));
	$var($Graphics, g, ret->getGraphics());
	$nc(g)->drawImage(thumb, 0, 0, nullptr);
	return ret;
}

void JFIFMarkerSegment::writeDefaultJFIF($ImageOutputStream* ios, $List* thumbnails, $ICC_Profile* iccProfile, $JPEGImageWriter* writer) {
	$init(JFIFMarkerSegment);
	$var(JFIFMarkerSegment, jfif, $new(JFIFMarkerSegment));
	jfif->writeWithThumbs(ios, thumbnails, writer);
	if (iccProfile != nullptr) {
		writeICC(iccProfile, ios);
	}
}

void JFIFMarkerSegment::print() {
	$useLocalCurrentObjectStackCache();
	printTag("JFIF"_s);
	$init($System);
	$nc($System::out)->print("Version "_s);
	$nc($System::out)->print(this->majorVersion);
	$nc($System::out)->println($$str({".0"_s, $($Integer::toString(this->minorVersion))}));
	$nc($System::out)->print("Resolution units: "_s);
	$nc($System::out)->println(this->resUnits);
	$nc($System::out)->print("X density: "_s);
	$nc($System::out)->println(this->Xdensity);
	$nc($System::out)->print("Y density: "_s);
	$nc($System::out)->println(this->Ydensity);
	$nc($System::out)->print("Thumbnail Width: "_s);
	$nc($System::out)->println(this->thumbWidth);
	$nc($System::out)->print("Thumbnail Height: "_s);
	$nc($System::out)->println(this->thumbHeight);
	if (!$nc(this->extSegments)->isEmpty()) {
		{
			$var($Iterator, iter, $nc(this->extSegments)->iterator());
			for (; $nc(iter)->hasNext();) {
				$var($JFIFMarkerSegment$JFIFExtensionMarkerSegment, extSegment, $cast($JFIFMarkerSegment$JFIFExtensionMarkerSegment, iter->next()));
				$nc(extSegment)->print();
			}
		}
	}
	if (this->iccSegment != nullptr) {
		$nc(this->iccSegment)->print();
	}
}

void JFIFMarkerSegment::writeICC($ICC_Profile* profile, $ImageOutputStream* ios) {
	$init(JFIFMarkerSegment);
	$useLocalCurrentObjectStackCache();
	int32_t LENGTH_LENGTH = 2;
	$var($String, ID, "ICC_PROFILE"_s);
	int32_t ID_LENGTH = ID->length() + 1;
	int32_t COUNTS_LENGTH = 2;
	int32_t MAX_ICC_CHUNK_SIZE = 0x0000FFFF - LENGTH_LENGTH - ID_LENGTH - COUNTS_LENGTH;
	$var($bytes, data, $nc(profile)->getData());
	int32_t numChunks = $div($nc(data)->length, MAX_ICC_CHUNK_SIZE);
	if (($mod(data->length, MAX_ICC_CHUNK_SIZE)) != 0) {
		++numChunks;
	}
	int32_t chunkNum = 1;
	int32_t offset = 0;
	for (int32_t i = 0; i < numChunks; ++i) {
		int32_t dataLength = $Math::min(data->length - offset, MAX_ICC_CHUNK_SIZE);
		int32_t segLength = dataLength + COUNTS_LENGTH + ID_LENGTH + LENGTH_LENGTH;
		$nc(ios)->write(255);
		ios->write($JPEG::APP2);
		$MarkerSegment::write2bytes(ios, segLength);
		$var($bytes, id, ID->getBytes("US-ASCII"_s));
		ios->write(id);
		ios->write(0);
		ios->write(chunkNum++);
		ios->write(numChunks);
		ios->write(data, offset, dataLength);
		offset += dataLength;
	}
}

JFIFMarkerSegment::JFIFMarkerSegment() {
}

$Class* JFIFMarkerSegment::load$($String* name, bool initialize) {
	$loadClass(JFIFMarkerSegment, name, initialize, &_JFIFMarkerSegment_ClassInfo_, allocate$JFIFMarkerSegment);
	return class$;
}

$Class* JFIFMarkerSegment::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com