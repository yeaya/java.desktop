#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbRGB.h>

#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumb.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbUncompressed.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <java/awt/Point.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/WritableRaster.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef OPAQUE
#undef TYPE_BYTE

using $JFIFMarkerSegment = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment;
using $JFIFMarkerSegment$JFIFThumb = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumb;
using $JFIFMarkerSegment$JFIFThumbUncompressed = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbUncompressed;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $JPEGImageWriter = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter;
using $Point = ::java::awt::Point;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $Raster = ::java::awt::image::Raster;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JFIFMarkerSegment$JFIFThumbRGB_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;", nullptr, $FINAL | $SYNTHETIC, $field(JFIFMarkerSegment$JFIFThumbRGB, this$0)},
	{}
};

$MethodInfo _JFIFMarkerSegment$JFIFThumbRGB_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;II)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$JFIFThumbRGB::*)($JFIFMarkerSegment*,$JPEGBuffer*,int32_t,int32_t)>(&JFIFMarkerSegment$JFIFThumbRGB::init$)), "java.io.IOException"},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$JFIFThumbRGB::*)($JFIFMarkerSegment*,$Node*)>(&JFIFMarkerSegment$JFIFThumbRGB::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Ljava/awt/image/BufferedImage;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$JFIFThumbRGB::*)($JFIFMarkerSegment*,$BufferedImage*)>(&JFIFMarkerSegment$JFIFThumbRGB::init$)), "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$IllegalThumbException"},
	{"getLength", "()I", nullptr, 0},
	{"getThumbnail", "(Ljavax/imageio/stream/ImageInputStream;Lcom/sun/imageio/plugins/jpeg/JPEGImageReader;)Ljava/awt/image/BufferedImage;", nullptr, 0, nullptr, "java.io.IOException"},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JFIFMarkerSegment$JFIFThumbRGB_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbRGB", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFThumbRGB", 0},
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbUncompressed", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFThumbUncompressed", $ABSTRACT},
	{}
};

$ClassInfo _JFIFMarkerSegment$JFIFThumbRGB_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbRGB",
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbUncompressed",
	nullptr,
	_JFIFMarkerSegment$JFIFThumbRGB_FieldInfo_,
	_JFIFMarkerSegment$JFIFThumbRGB_MethodInfo_,
	nullptr,
	nullptr,
	_JFIFMarkerSegment$JFIFThumbRGB_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment"
};

$Object* allocate$JFIFMarkerSegment$JFIFThumbRGB($Class* clazz) {
	return $of($alloc(JFIFMarkerSegment$JFIFThumbRGB));
}

void JFIFMarkerSegment$JFIFThumbRGB::init$($JFIFMarkerSegment* this$0, $JPEGBuffer* buffer, int32_t width, int32_t height) {
	$set(this, this$0, this$0);
	$JFIFMarkerSegment$JFIFThumbUncompressed::init$(this$0, buffer, width, height, width * height * 3, "JFIFthumbRGB"_s);
}

void JFIFMarkerSegment$JFIFThumbRGB::init$($JFIFMarkerSegment* this$0, $Node* node) {
	$set(this, this$0, this$0);
	$JFIFMarkerSegment$JFIFThumbUncompressed::init$(this$0, node, "JFIFthumbRGB"_s);
}

void JFIFMarkerSegment$JFIFThumbRGB::init$($JFIFMarkerSegment* this$0, $BufferedImage* thumb) {
	$set(this, this$0, this$0);
	$JFIFMarkerSegment$JFIFThumbUncompressed::init$(this$0, thumb);
}

int32_t JFIFMarkerSegment$JFIFThumbRGB::getLength() {
	return (this->thumbWidth * this->thumbHeight * 3);
}

$BufferedImage* JFIFMarkerSegment$JFIFThumbRGB::getThumbnail($ImageInputStream* iis, $JPEGImageReader* reader) {
	$useLocalCurrentObjectStackCache();
	$nc(iis)->mark();
	iis->seek(this->streamPos);
	$var($DataBufferByte, buffer, $new($DataBufferByte, getLength()));
	readByteBuffer(iis, $(buffer->getData()), reader, 1.0f, 0.0f);
	iis->reset();
	$var($WritableRaster, raster, $Raster::createInterleavedRaster(static_cast<$DataBuffer*>(buffer), this->thumbWidth, this->thumbHeight, this->thumbWidth * 3, 3, $$new($ints, {
		0,
		1,
		2
	}), ($Point*)nullptr));
	$init($JPEG);
	$var($ColorModel, cm, $new($ComponentColorModel, $JPEG::sRGB, false, false, $ColorModel::OPAQUE, $DataBuffer::TYPE_BYTE));
	return $new($BufferedImage, cm, raster, false, ($Hashtable*)nullptr);
}

void JFIFMarkerSegment$JFIFThumbRGB::write($ImageOutputStream* ios, $JPEGImageWriter* writer) {
	$JFIFMarkerSegment$JFIFThumbUncompressed::write(ios, writer);
	writePixels(ios, writer);
}

JFIFMarkerSegment$JFIFThumbRGB::JFIFMarkerSegment$JFIFThumbRGB() {
}

$Class* JFIFMarkerSegment$JFIFThumbRGB::load$($String* name, bool initialize) {
	$loadClass(JFIFMarkerSegment$JFIFThumbRGB, name, initialize, &_JFIFMarkerSegment$JFIFThumbRGB_ClassInfo_, allocate$JFIFMarkerSegment$JFIFThumbRGB);
	return class$;
}

$Class* JFIFMarkerSegment$JFIFThumbRGB::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com