#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbJPEG.h>

#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$IllegalThumbException.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumb.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener.h>
#include <com/sun/imageio/plugins/jpeg/JFIFMarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/JPEGBuffer.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageWriter.h>
#include <com/sun/imageio/plugins/jpeg/JPEGMetadata.h>
#include <com/sun/imageio/plugins/jpeg/MarkerSegment.h>
#include <com/sun/imageio/plugins/jpeg/SOFMarkerSegment.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <javax/imageio/IIOImage.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/event/IIOReadProgressListener.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <javax/imageio/stream/MemoryCacheImageOutputStream.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef INITIAL_BUFSIZE
#undef MAZ_BUFSIZE
#undef PREAMBLE_SIZE

using $JFIFMarkerSegment = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment;
using $JFIFMarkerSegment$IllegalThumbException = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$IllegalThumbException;
using $JFIFMarkerSegment$JFIFThumb = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumb;
using $JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener = ::com::sun::imageio::plugins::jpeg::JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener;
using $JPEGBuffer = ::com::sun::imageio::plugins::jpeg::JPEGBuffer;
using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $JPEGImageWriter = ::com::sun::imageio::plugins::jpeg::JPEGImageWriter;
using $JPEGMetadata = ::com::sun::imageio::plugins::jpeg::JPEGMetadata;
using $MarkerSegment = ::com::sun::imageio::plugins::jpeg::MarkerSegment;
using $SOFMarkerSegment = ::com::sun::imageio::plugins::jpeg::SOFMarkerSegment;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $IIOImage = ::javax::imageio::IIOImage;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $IIOReadProgressListener = ::javax::imageio::event::IIOReadProgressListener;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $MemoryCacheImageOutputStream = ::javax::imageio::stream::MemoryCacheImageOutputStream;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

$FieldInfo _JFIFMarkerSegment$JFIFThumbJPEG_FieldInfo_[] = {
	{"this$0", "Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;", nullptr, $FINAL | $SYNTHETIC, $field(JFIFMarkerSegment$JFIFThumbJPEG, this$0)},
	{"thumbMetadata", "Lcom/sun/imageio/plugins/jpeg/JPEGMetadata;", nullptr, 0, $field(JFIFMarkerSegment$JFIFThumbJPEG, thumbMetadata)},
	{"data", "[B", nullptr, 0, $field(JFIFMarkerSegment$JFIFThumbJPEG, data)},
	{"PREAMBLE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JFIFMarkerSegment$JFIFThumbJPEG, PREAMBLE_SIZE)},
	{}
};

$MethodInfo _JFIFMarkerSegment$JFIFThumbJPEG_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Lcom/sun/imageio/plugins/jpeg/JPEGBuffer;ILcom/sun/imageio/plugins/jpeg/JPEGImageReader;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$JFIFThumbJPEG::*)($JFIFMarkerSegment*,$JPEGBuffer*,int32_t,$JPEGImageReader*)>(&JFIFMarkerSegment$JFIFThumbJPEG::init$)), "java.io.IOException"},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$JFIFThumbJPEG::*)($JFIFMarkerSegment*,$Node*)>(&JFIFMarkerSegment$JFIFThumbJPEG::init$)), "javax.imageio.metadata.IIOInvalidTreeException"},
	{"<init>", "(Lcom/sun/imageio/plugins/jpeg/JFIFMarkerSegment;Ljava/awt/image/BufferedImage;)V", nullptr, 0, $method(static_cast<void(JFIFMarkerSegment$JFIFThumbJPEG::*)($JFIFMarkerSegment*,$BufferedImage*)>(&JFIFMarkerSegment$JFIFThumbJPEG::init$)), "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$IllegalThumbException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getHeight", "()I", nullptr, 0},
	{"getLength", "()I", nullptr, 0},
	{"getNativeNode", "()Ljavax/imageio/metadata/IIOMetadataNode;", nullptr, 0},
	{"getThumbnail", "(Ljavax/imageio/stream/ImageInputStream;Lcom/sun/imageio/plugins/jpeg/JPEGImageReader;)Ljava/awt/image/BufferedImage;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getWidth", "()I", nullptr, 0},
	{"print", "()V", nullptr, 0},
	{"write", "(Ljavax/imageio/stream/ImageOutputStream;Lcom/sun/imageio/plugins/jpeg/JPEGImageWriter;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JFIFMarkerSegment$JFIFThumbJPEG_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbJPEG", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFThumbJPEG", 0},
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumb", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment", "JFIFThumb", $ABSTRACT},
	{"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener", "com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbJPEG", "ThumbnailReadListener", $PRIVATE},
	{}
};

$ClassInfo _JFIFMarkerSegment$JFIFThumbJPEG_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumbJPEG",
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment$JFIFThumb",
	nullptr,
	_JFIFMarkerSegment$JFIFThumbJPEG_FieldInfo_,
	_JFIFMarkerSegment$JFIFThumbJPEG_MethodInfo_,
	nullptr,
	nullptr,
	_JFIFMarkerSegment$JFIFThumbJPEG_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.jpeg.JFIFMarkerSegment"
};

$Object* allocate$JFIFMarkerSegment$JFIFThumbJPEG($Class* clazz) {
	return $of($alloc(JFIFMarkerSegment$JFIFThumbJPEG));
}

void JFIFMarkerSegment$JFIFThumbJPEG::init$($JFIFMarkerSegment* this$0, $JPEGBuffer* buffer, int32_t length, $JPEGImageReader* reader) {
	$set(this, this$0, this$0);
	$JFIFMarkerSegment$JFIFThumb::init$(this$0, buffer);
	$set(this, thumbMetadata, nullptr);
	$set(this, data, nullptr);
	int64_t finalPos = this->streamPos + (length - JFIFMarkerSegment$JFIFThumbJPEG::PREAMBLE_SIZE);
	$nc($nc(buffer)->iis)->seek(this->streamPos);
	$set(this, thumbMetadata, $new($JPEGMetadata, false, true, buffer->iis, reader));
	$nc(buffer->iis)->seek(finalPos);
	buffer->bufAvail = 0;
	buffer->bufPtr = 0;
}

void JFIFMarkerSegment$JFIFThumbJPEG::init$($JFIFMarkerSegment* this$0, $Node* node) {
	$set(this, this$0, this$0);
	$JFIFMarkerSegment$JFIFThumb::init$(this$0);
	$set(this, thumbMetadata, nullptr);
	$set(this, data, nullptr);
	if ($nc($($nc(node)->getChildNodes()))->getLength() > 1) {
		$throwNew($IIOInvalidTreeException, "JFIFThumbJPEG node must have 0 or 1 child"_s, node);
	}
	$var($Node, child, $nc(node)->getFirstChild());
	if (child != nullptr) {
		$var($String, name, child->getNodeName());
		if (!$nc(name)->equals("markerSequence"_s)) {
			$throwNew($IIOInvalidTreeException, "JFIFThumbJPEG child must be a markerSequence node"_s, node);
		}
		$set(this, thumbMetadata, $new($JPEGMetadata, false, true));
		$nc(this->thumbMetadata)->setFromMarkerSequenceNode(child);
	}
}

void JFIFMarkerSegment$JFIFThumbJPEG::init$($JFIFMarkerSegment* this$0, $BufferedImage* thumb) {
	$set(this, this$0, this$0);
	$JFIFMarkerSegment$JFIFThumb::init$(this$0);
	$set(this, thumbMetadata, nullptr);
	$set(this, data, nullptr);
	int32_t INITIAL_BUFSIZE = 4096;
	int32_t MAZ_BUFSIZE = 0x0000FFFF - 2 - JFIFMarkerSegment$JFIFThumbJPEG::PREAMBLE_SIZE;
	try {
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream, INITIAL_BUFSIZE));
		$var($MemoryCacheImageOutputStream, mos, $new($MemoryCacheImageOutputStream, baos));
		$var($JPEGImageWriter, thumbWriter, $new($JPEGImageWriter, nullptr));
		thumbWriter->setOutput(mos);
		$var($JPEGMetadata, metadata, $cast($JPEGMetadata, thumbWriter->getDefaultImageMetadata($$new($ImageTypeSpecifier, thumb), nullptr)));
		$load($JFIFMarkerSegment);
		$var($MarkerSegment, jfif, $nc(metadata)->findMarkerSegment($JFIFMarkerSegment::class$, true));
		if (jfif == nullptr) {
			$throwNew($JFIFMarkerSegment$IllegalThumbException, this$0);
		}
		$nc(metadata->markerSequence)->remove($of(jfif));
		thumbWriter->write($$new($IIOImage, static_cast<$RenderedImage*>(thumb), ($List*)nullptr, static_cast<$IIOMetadata*>(metadata)));
		thumbWriter->dispose();
		if (baos->size() > MAZ_BUFSIZE) {
			$throwNew($JFIFMarkerSegment$IllegalThumbException, this$0);
		}
		$set(this, data, baos->toByteArray());
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($JFIFMarkerSegment$IllegalThumbException, this$0);
	}
}

int32_t JFIFMarkerSegment$JFIFThumbJPEG::getWidth() {
	int32_t retval = 0;
	$load($SOFMarkerSegment);
	$var($SOFMarkerSegment, sof, $cast($SOFMarkerSegment, $nc(this->thumbMetadata)->findMarkerSegment($SOFMarkerSegment::class$, true)));
	if (sof != nullptr) {
		retval = sof->samplesPerLine;
	}
	return retval;
}

int32_t JFIFMarkerSegment$JFIFThumbJPEG::getHeight() {
	int32_t retval = 0;
	$load($SOFMarkerSegment);
	$var($SOFMarkerSegment, sof, $cast($SOFMarkerSegment, $nc(this->thumbMetadata)->findMarkerSegment($SOFMarkerSegment::class$, true)));
	if (sof != nullptr) {
		retval = sof->numLines;
	}
	return retval;
}

$BufferedImage* JFIFMarkerSegment$JFIFThumbJPEG::getThumbnail($ImageInputStream* iis, $JPEGImageReader* reader) {
	$nc(iis)->mark();
	iis->seek(this->streamPos);
	$var($JPEGImageReader, thumbReader, $new($JPEGImageReader, nullptr));
	thumbReader->setInput(iis);
	thumbReader->addIIOReadProgressListener($$new($JFIFMarkerSegment$JFIFThumbJPEG$ThumbnailReadListener, this, reader));
	$var($BufferedImage, ret, thumbReader->read(0, nullptr));
	thumbReader->dispose();
	iis->reset();
	return ret;
}

$Object* JFIFMarkerSegment$JFIFThumbJPEG::clone() {
	$var(JFIFMarkerSegment$JFIFThumbJPEG, newGuy, $cast(JFIFMarkerSegment$JFIFThumbJPEG, $JFIFMarkerSegment$JFIFThumb::clone()));
	if (this->thumbMetadata != nullptr) {
		$set($nc(newGuy), thumbMetadata, $cast($JPEGMetadata, $nc(this->thumbMetadata)->clone()));
	}
	return $of(newGuy);
}

$IIOMetadataNode* JFIFMarkerSegment$JFIFThumbJPEG::getNativeNode() {
	$var($IIOMetadataNode, node, $new($IIOMetadataNode, "JFIFthumbJPEG"_s));
	if (this->thumbMetadata != nullptr) {
		node->appendChild($($nc(this->thumbMetadata)->getNativeTree()));
	}
	return node;
}

int32_t JFIFMarkerSegment$JFIFThumbJPEG::getLength() {
	if (this->data == nullptr) {
		return 0;
	} else {
		return $nc(this->data)->length;
	}
}

void JFIFMarkerSegment$JFIFThumbJPEG::write($ImageOutputStream* ios, $JPEGImageWriter* writer) {
	int32_t progInterval = $nc(this->data)->length / 20;
	if (progInterval == 0) {
		progInterval = 1;
	}
	for (int32_t offset = 0; offset < $nc(this->data)->length;) {
		int32_t len = $Math::min(progInterval, $nc(this->data)->length - offset);
		$nc(ios)->write(this->data, offset, len);
		offset += progInterval;
		float percentDone = ((float)offset * 100) / $nc(this->data)->length;
		if (percentDone > 100.0f) {
			percentDone = 100.0f;
		}
		$nc(writer)->thumbnailProgress(percentDone);
	}
}

void JFIFMarkerSegment$JFIFThumbJPEG::print() {
	$init($System);
	$nc($System::out)->println("JFIF thumbnail stored as JPEG"_s);
}

JFIFMarkerSegment$JFIFThumbJPEG::JFIFMarkerSegment$JFIFThumbJPEG() {
}

$Class* JFIFMarkerSegment$JFIFThumbJPEG::load$($String* name, bool initialize) {
	$loadClass(JFIFMarkerSegment$JFIFThumbJPEG, name, initialize, &_JFIFMarkerSegment$JFIFThumbJPEG_ClassInfo_, allocate$JFIFMarkerSegment$JFIFThumbJPEG);
	return class$;
}

$Class* JFIFMarkerSegment$JFIFThumbJPEG::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com