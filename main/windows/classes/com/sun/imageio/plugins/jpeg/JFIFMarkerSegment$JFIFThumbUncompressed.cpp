#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbUncompressed.h>

#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumb.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Math.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef WARNING_THUMB_CLIPPED

using $JFIFMarkerSegment = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment;
using $JFIFMarkerSegment$JFIFThumb = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumb;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $JPEGImageWriter = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JFIFMarkerSegment$JFIFThumbUncompressed_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;", nullptr, $FINAL | $SYNTHETIC, $field(JFIFMarkerSegment$JFIFThumbUncompressed, this$0)},
	{"thumbnail", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(JFIFMarkerSegment$JFIFThumbUncompressed, thumbnail)},
	{"thumbWidth", "I", nullptr, 0, $field(JFIFMarkerSegment$JFIFThumbUncompressed, thumbWidth)},
	{"thumbHeight", "I", nullptr, 0, $field(JFIFMarkerSegment$JFIFThumbUncompressed, thumbHeight)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(JFIFMarkerSegment$JFIFThumbUncompressed, name)},
	{}
};

$MethodInfo _JFIFMarkerSegment$JFIFThumbUncompressed_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;IIILjava/lang/String;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$JFIFThumbUncompressed::*)($JFIFMarkerSegment*,$JPEGBuffer*,int32_t,int32_t,int32_t,$String*)>(&JFIFMarkerSegment$JFIFThumbUncompressed::init$)), "java.io.IOException"},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Lorg/w3c/dom/Node;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$JFIFThumbUncompressed::*)($JFIFMarkerSegment*,$Node*,$String*)>(&JFIFMarkerSegment$JFIFThumbUncompressed::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Ljava/awt/image/BufferedImage;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$JFIFThumbUncompressed::*)($JFIFMarkerSegment*,$BufferedImage*)>(&JFIFMarkerSegment$JFIFThumbUncompressed::init$))},
	{"getHeight", "()I", nullptr, 0},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"getWidth", "()I", nullptr, 0},
	{"print", "()V", nullptr, 0},
	{"readByteBuffer", "(Ljavax/imageio/stream/ImageInputStream;[BLcom/sun/imageio/plugins/jpeg/JPEGImageReader;FF)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"writePixels", "(Ljavax/imageio/stream/ImageOutputStream;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JFIFMarkerSegment$JFIFThumbUncompressed_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbUncompressed", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFThumbUncompressed", $ABSTRACT},
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumb", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFThumb", $ABSTRACT},
	{}
};

$ClassInfo _JFIFMarkerSegment$JFIFThumbUncompressed_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbUncompressed",
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumb",
	nullptr,
	_JFIFMarkerSegment$JFIFThumbUncompressed_FieldInfo_,
	_JFIFMarkerSegment$JFIFThumbUncompressed_MethodInfo_,
	nullptr,
	nullptr,
	_JFIFMarkerSegment$JFIFThumbUncompressed_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment"
};

$Object* allocate$JFIFMarkerSegment$JFIFThumbUncompressed($Class* clazz) {
	return $of($alloc(JFIFMarkerSegment$JFIFThumbUncompressed));
}

void JFIFMarkerSegment$JFIFThumbUncompressed::init$($JFIFMarkerSegment* this$0, $JPEGBuffer* buffer, int32_t width, int32_t height, int32_t skip, $String* name) {
	$set(this, this$0, this$0);
	$JFIFMarkerSegment$JFIFThumb::init$(this$0, buffer);
	$set(this, thumbnail, nullptr);
	this->thumbWidth = width;
	this->thumbHeight = height;
	$nc(buffer)->skipData(skip);
	$set(this, name, name);
}

void JFIFMarkerSegment$JFIFThumbUncompressed::init$($JFIFMarkerSegment* this$0, $Node* node, $String* name) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JFIFMarkerSegment$JFIFThumb::init$(this$0);
	$set(this, thumbnail, nullptr);
	this->thumbWidth = 0;
	this->thumbHeight = 0;
	$set(this, name, name);
	$var($NamedNodeMap, attrs, $nc(node)->getAttributes());
	int32_t count = $nc(attrs)->getLength();
	if (count > 2) {
		$throwNew($IIOInvalidTreeException, $$str({name, " node cannot have > 2 attributes"_s}), node);
	}
	if (count != 0) {
		int32_t value = $MarkerSegment::getAttributeValue(node, attrs, "thumbWidth"_s, 0, 255, false);
		this->thumbWidth = (value != -1) ? value : this->thumbWidth;
		value = $MarkerSegment::getAttributeValue(node, attrs, "thumbHeight"_s, 0, 255, false);
		this->thumbHeight = (value != -1) ? value : this->thumbHeight;
	}
}

void JFIFMarkerSegment$JFIFThumbUncompressed::init$($JFIFMarkerSegment* this$0, $BufferedImage* thumb) {
	$set(this, this$0, this$0);
	$JFIFMarkerSegment$JFIFThumb::init$(this$0);
	$set(this, thumbnail, nullptr);
	$set(this, thumbnail, thumb);
	this->thumbWidth = $nc(thumb)->getWidth();
	this->thumbHeight = thumb->getHeight();
	$set(this, name, nullptr);
}

void JFIFMarkerSegment$JFIFThumbUncompressed::readByteBuffer($ImageInputStream* iis, $bytes* data, $JPEGImageReader* reader, float workPortion, float workOffset) {
	int32_t progInterval = $Math::max($cast(int32_t, ($nc(data)->length / 20 / workPortion)), 1);
	for (int32_t offset = 0; offset < $nc(data)->length;) {
		int32_t len = $Math::min(progInterval, data->length - offset);
		$nc(iis)->read(data, offset, len);
		offset += progInterval;
		float percentDone = ((float)offset * 100) / data->length * workPortion + workOffset;
		if (percentDone > 100.0f) {
			percentDone = 100.0f;
		}
		$nc(reader)->thumbnailProgress(percentDone);
	}
}

int32_t JFIFMarkerSegment$JFIFThumbUncompressed::getWidth() {
	return this->thumbWidth;
}

int32_t JFIFMarkerSegment$JFIFThumbUncompressed::getHeight() {
	return this->thumbHeight;
}

$IIOMetadataNode* JFIFMarkerSegment$JFIFThumbUncompressed::getNativeNode() {
	$useLocalCurrentObjectStackCache();
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, this->name));
	node->setAttribute("thumbWidth"_s, $($Integer::toString(this->thumbWidth)));
	node->setAttribute("thumbHeight"_s, $($Integer::toString(this->thumbHeight)));
	return node;
}

void JFIFMarkerSegment$JFIFThumbUncompressed::write($ImageOutputStream* ios, $JPEGImageWriter* writer) {
	if ((this->thumbWidth > 255) || (this->thumbHeight > 255)) {
		$nc(writer)->warningOccurred($JPEGImageWriter::WARNING_THUMB_CLIPPED);
	}
	this->thumbWidth = $Math::min(this->thumbWidth, 255);
	this->thumbHeight = $Math::min(this->thumbHeight, 255);
	$nc(ios)->write(this->thumbWidth);
	ios->write(this->thumbHeight);
}

void JFIFMarkerSegment$JFIFThumbUncompressed::writePixels($ImageOutputStream* ios, $JPEGImageWriter* writer) {
	$useLocalCurrentObjectStackCache();
	if ((this->thumbWidth > 255) || (this->thumbHeight > 255)) {
		$nc(writer)->warningOccurred($JPEGImageWriter::WARNING_THUMB_CLIPPED);
	}
	this->thumbWidth = $Math::min(this->thumbWidth, 255);
	this->thumbHeight = $Math::min(this->thumbHeight, 255);
	$var($ints, data, $nc($($nc(this->thumbnail)->getRaster()))->getPixels(0, 0, this->thumbWidth, this->thumbHeight, ($ints*)nullptr));
	this->this$0->writeThumbnailData(ios, data, writer);
}

void JFIFMarkerSegment$JFIFThumbUncompressed::print() {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->print($$str({this->name, " width: "_s}));
	$nc($System::out)->println(this->thumbWidth);
	$nc($System::out)->print($$str({this->name, " height: "_s}));
	$nc($System::out)->println(this->thumbHeight);
}

JFIFMarkerSegment$JFIFThumbUncompressed::JFIFMarkerSegment$JFIFThumbUncompressed() {
}

$Class* JFIFMarkerSegment$JFIFThumbUncompressed::load$($String* name, bool initialize) {
	$loadClass(JFIFMarkerSegment$JFIFThumbUncompressed, name, initialize, &_JFIFMarkerSegment$JFIFThumbUncompressed_ClassInfo_, allocate$JFIFMarkerSegment$JFIFThumbUncompressed);
	return class$;
}

$Class* JFIFMarkerSegment$JFIFThumbUncompressed::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com