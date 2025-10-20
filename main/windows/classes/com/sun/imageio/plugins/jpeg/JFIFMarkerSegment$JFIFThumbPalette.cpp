#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbPalette.h>

#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$IllegalThumbException.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumb.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbUncompressed.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <java/awt/Point.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/SampleModel.h>
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

#undef PALETTE_SIZE

using $JFIFMarkerSegment = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment;
using $JFIFMarkerSegment$IllegalThumbException = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$IllegalThumbException;
using $JFIFMarkerSegment$JFIFThumb = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumb;
using $JFIFMarkerSegment$JFIFThumbUncompressed = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbUncompressed;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $JPEGImageWriter = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter;
using $Point = ::java::awt::Point;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $Raster = ::java::awt::image::Raster;
using $SampleModel = ::java::awt::image::SampleModel;
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

$FieldInfo _JFIFMarkerSegment$JFIFThumbPalette_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;", nullptr, $FINAL | $SYNTHETIC, $field(JFIFMarkerSegment$JFIFThumbPalette, this$0)},
	{"PALETTE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JFIFMarkerSegment$JFIFThumbPalette, PALETTE_SIZE)},
	{}
};

$MethodInfo _JFIFMarkerSegment$JFIFThumbPalette_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;II)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$JFIFThumbPalette::*)($JFIFMarkerSegment*,$JPEGBuffer*,int32_t,int32_t)>(&JFIFMarkerSegment$JFIFThumbPalette::init$)), "java.io.IOException"},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$JFIFThumbPalette::*)($JFIFMarkerSegment*,$Node*)>(&JFIFMarkerSegment$JFIFThumbPalette::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Ljava/awt/image/BufferedImage;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$JFIFThumbPalette::*)($JFIFMarkerSegment*,$BufferedImage*)>(&JFIFMarkerSegment$JFIFThumbPalette::init$)), "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$IllegalThumbException"},
	{"getLength", "()I", nullptr, 0},
	{"getThumbnail", "(Ljavax/imageio/stream/ImageInputStream;Lcom/sun/imageio/plugins/jpeg/JPEGImageReader;)Ljava/awt/image/BufferedImage;", nullptr, 0, nullptr, "java.io.IOException"},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JFIFMarkerSegment$JFIFThumbPalette_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbPalette", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFThumbPalette", 0},
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbUncompressed", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFThumbUncompressed", $ABSTRACT},
	{}
};

$ClassInfo _JFIFMarkerSegment$JFIFThumbPalette_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbPalette",
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbUncompressed",
	nullptr,
	_JFIFMarkerSegment$JFIFThumbPalette_FieldInfo_,
	_JFIFMarkerSegment$JFIFThumbPalette_MethodInfo_,
	nullptr,
	nullptr,
	_JFIFMarkerSegment$JFIFThumbPalette_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment"
};

$Object* allocate$JFIFMarkerSegment$JFIFThumbPalette($Class* clazz) {
	return $of($alloc(JFIFMarkerSegment$JFIFThumbPalette));
}

void JFIFMarkerSegment$JFIFThumbPalette::init$($JFIFMarkerSegment* this$0, $JPEGBuffer* buffer, int32_t width, int32_t height) {
	$set(this, this$0, this$0);
	$JFIFMarkerSegment$JFIFThumbUncompressed::init$(this$0, buffer, width, height, JFIFMarkerSegment$JFIFThumbPalette::PALETTE_SIZE + width * height, "JFIFThumbPalette"_s);
}

void JFIFMarkerSegment$JFIFThumbPalette::init$($JFIFMarkerSegment* this$0, $Node* node) {
	$set(this, this$0, this$0);
	$JFIFMarkerSegment$JFIFThumbUncompressed::init$(this$0, node, "JFIFThumbPalette"_s);
}

void JFIFMarkerSegment$JFIFThumbPalette::init$($JFIFMarkerSegment* this$0, $BufferedImage* thumb) {
	$set(this, this$0, this$0);
	$JFIFMarkerSegment$JFIFThumbUncompressed::init$(this$0, thumb);
	$var($IndexColorModel, icm, $cast($IndexColorModel, $nc(this->thumbnail)->getColorModel()));
	if ($nc(icm)->getMapSize() > 256) {
		$throwNew($JFIFMarkerSegment$IllegalThumbException, this$0);
	}
}

int32_t JFIFMarkerSegment$JFIFThumbPalette::getLength() {
	return (this->thumbWidth * this->thumbHeight + JFIFMarkerSegment$JFIFThumbPalette::PALETTE_SIZE);
}

$BufferedImage* JFIFMarkerSegment$JFIFThumbPalette::getThumbnail($ImageInputStream* iis, $JPEGImageReader* reader) {
	$useLocalCurrentObjectStackCache();
	$nc(iis)->mark();
	iis->seek(this->streamPos);
	$var($bytes, palette, $new($bytes, JFIFMarkerSegment$JFIFThumbPalette::PALETTE_SIZE));
	float palettePart = ((float)JFIFMarkerSegment$JFIFThumbPalette::PALETTE_SIZE) / getLength();
	readByteBuffer(iis, palette, reader, palettePart, 0.0f);
	$var($DataBufferByte, buffer, $new($DataBufferByte, this->thumbWidth * this->thumbHeight));
	readByteBuffer(iis, $(buffer->getData()), reader, 1.0f - palettePart, palettePart);
	iis->read();
	iis->reset();
	$var($IndexColorModel, cm, $new($IndexColorModel, 8, 256, palette, 0, false));
	$var($SampleModel, sm, cm->createCompatibleSampleModel(this->thumbWidth, this->thumbHeight));
	$var($WritableRaster, raster, $Raster::createWritableRaster(sm, buffer, nullptr));
	return $new($BufferedImage, static_cast<$ColorModel*>(cm), raster, false, ($Hashtable*)nullptr);
}

void JFIFMarkerSegment$JFIFThumbPalette::write($ImageOutputStream* ios, $JPEGImageWriter* writer) {
	$useLocalCurrentObjectStackCache();
	$JFIFMarkerSegment$JFIFThumbUncompressed::write(ios, writer);
	$var($bytes, palette, $new($bytes, 768));
	$var($IndexColorModel, icm, $cast($IndexColorModel, $nc(this->thumbnail)->getColorModel()));
	$var($bytes, reds, $new($bytes, 256));
	$var($bytes, greens, $new($bytes, 256));
	$var($bytes, blues, $new($bytes, 256));
	$nc(icm)->getReds(reds);
	icm->getGreens(greens);
	icm->getBlues(blues);
	for (int32_t i = 0; i < 256; ++i) {
		palette->set(i * 3, reds->get(i));
		palette->set(i * 3 + 1, greens->get(i));
		palette->set(i * 3 + 2, blues->get(i));
	}
	$nc(ios)->write(palette);
	writePixels(ios, writer);
}

JFIFMarkerSegment$JFIFThumbPalette::JFIFMarkerSegment$JFIFThumbPalette() {
}

$Class* JFIFMarkerSegment$JFIFThumbPalette::load$($String* name, bool initialize) {
	$loadClass(JFIFMarkerSegment$JFIFThumbPalette, name, initialize, &_JFIFMarkerSegment$JFIFThumbPalette_ClassInfo_, allocate$JFIFMarkerSegment$JFIFThumbPalette);
	return class$;
}

$Class* JFIFMarkerSegment$JFIFThumbPalette::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com