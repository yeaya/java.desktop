#include <com/sun/imageio/plugins/tiff/TIFFBaseJPEGCompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFBaseJPEGCompressor$IIOByteArrayOutputStream.h>
#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageWriter.h>
#include <java/awt/Point.h>
#include <java/awt/Transparency.h>
#include <java/awt/color/ColorSpace.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferByte.h>
#include <java/awt/image/PixelInterleavedSampleModel.h>
#include <java/awt/image/Raster.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/IIOImage.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/metadata/IIOInvalidTreeException.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/metadata/IIOMetadataNode.h>
#include <javax/imageio/plugins/jpeg/JPEGImageWriteParam.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <javax/imageio/stream/ImageOutputStreamImpl.h>
#include <javax/imageio/stream/MemoryCacheImageOutputStream.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef CS_GRAY
#undef IMAGE_METADATA_NAME
#undef MODE_EXPLICIT
#undef OPAQUE
#undef STREAM_METADATA_NAME
#undef TYPE_BYTE

using $TIFFBaseJPEGCompressor$IIOByteArrayOutputStream = ::com::sun::imageio::plugins::tiff::TIFFBaseJPEGCompressor$IIOByteArrayOutputStream;
using $TIFFCompressor = ::com::sun::imageio::plugins::tiff::TIFFCompressor;
using $TIFFImageWriter = ::com::sun::imageio::plugins::tiff::TIFFImageWriter;
using $Point = ::java::awt::Point;
using $Transparency = ::java::awt::Transparency;
using $ColorSpace = ::java::awt::color::ColorSpace;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentColorModel = ::java::awt::image::ComponentColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferByte = ::java::awt::image::DataBufferByte;
using $PixelInterleavedSampleModel = ::java::awt::image::PixelInterleavedSampleModel;
using $Raster = ::java::awt::image::Raster;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $IIOException = ::javax::imageio::IIOException;
using $IIOImage = ::javax::imageio::IIOImage;
using $ImageIO = ::javax::imageio::ImageIO;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $IIOInvalidTreeException = ::javax::imageio::metadata::IIOInvalidTreeException;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $IIOMetadataNode = ::javax::imageio::metadata::IIOMetadataNode;
using $JPEGImageWriteParam = ::javax::imageio::plugins::jpeg::JPEGImageWriteParam;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $ImageOutputStreamImpl = ::javax::imageio::stream::ImageOutputStreamImpl;
using $MemoryCacheImageOutputStream = ::javax::imageio::stream::MemoryCacheImageOutputStream;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFBaseJPEGCompressor_FieldInfo_[] = {
	{"STREAM_METADATA_NAME", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFBaseJPEGCompressor, STREAM_METADATA_NAME)},
	{"IMAGE_METADATA_NAME", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(TIFFBaseJPEGCompressor, IMAGE_METADATA_NAME)},
	{"param", "Ljavax/imageio/ImageWriteParam;", nullptr, $PRIVATE, $field(TIFFBaseJPEGCompressor, param)},
	{"JPEGParam", "Ljavax/imageio/plugins/jpeg/JPEGImageWriteParam;", nullptr, $PROTECTED, $field(TIFFBaseJPEGCompressor, JPEGParam)},
	{"JPEGWriter", "Ljavax/imageio/ImageWriter;", nullptr, $PROTECTED, $field(TIFFBaseJPEGCompressor, JPEGWriter)},
	{"writeAbbreviatedStream", "Z", nullptr, $PROTECTED, $field(TIFFBaseJPEGCompressor, writeAbbreviatedStream)},
	{"JPEGStreamMetadata", "Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PROTECTED, $field(TIFFBaseJPEGCompressor, JPEGStreamMetadata)},
	{"JPEGImageMetadata", "Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PRIVATE, $field(TIFFBaseJPEGCompressor, JPEGImageMetadata)},
	{"baos", "Lcom/sun/imageio/plugins/tiff/TIFFBaseJPEGCompressor$IIOByteArrayOutputStream;", nullptr, $PRIVATE, $field(TIFFBaseJPEGCompressor, baos)},
	{}
};

$MethodInfo _TIFFBaseJPEGCompressor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;IZLjavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFBaseJPEGCompressor::*)($String*,int32_t,bool,$ImageWriteParam*)>(&TIFFBaseJPEGCompressor::init$))},
	{"encode", "([BIII[II)I", nullptr, $PUBLIC | $FINAL, nullptr, "java.io.IOException"},
	{"finalize", "()V", nullptr, $PROTECTED, nullptr, "java.lang.Throwable"},
	{"getAllNodes", "(Ljavax/imageio/metadata/IIOMetadataNode;Ljava/util/List;)Ljava/util/List;", "(Ljavax/imageio/metadata/IIOMetadataNode;Ljava/util/List<Lorg/w3c/dom/Node;>;)Ljava/util/List<Lorg/w3c/dom/Node;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($IIOMetadataNode*,$List*)>(&TIFFBaseJPEGCompressor::getAllNodes))},
	{"getImageMetadata", "(Z)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PRIVATE, $method(static_cast<$IIOMetadata*(TIFFBaseJPEGCompressor::*)(bool)>(&TIFFBaseJPEGCompressor::getImageMetadata)), "javax.imageio.IIOException"},
	{"initJPEGWriter", "(ZZ)V", nullptr, $PROTECTED},
	{"pruneNodes", "(Lorg/w3c/dom/Node;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Node*,bool)>(&TIFFBaseJPEGCompressor::pruneNodes))},
	{}
};

$InnerClassInfo _TIFFBaseJPEGCompressor_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.tiff.TIFFBaseJPEGCompressor$IIOByteArrayOutputStream", "com.sun.imageio.plugins.tiff.TIFFBaseJPEGCompressor", "IIOByteArrayOutputStream", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TIFFBaseJPEGCompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.imageio.plugins.tiff.TIFFBaseJPEGCompressor",
	"com.sun.imageio.plugins.tiff.TIFFCompressor",
	nullptr,
	_TIFFBaseJPEGCompressor_FieldInfo_,
	_TIFFBaseJPEGCompressor_MethodInfo_,
	nullptr,
	nullptr,
	_TIFFBaseJPEGCompressor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.tiff.TIFFBaseJPEGCompressor$IIOByteArrayOutputStream"
};

$Object* allocate$TIFFBaseJPEGCompressor($Class* clazz) {
	return $of($alloc(TIFFBaseJPEGCompressor));
}

$String* TIFFBaseJPEGCompressor::STREAM_METADATA_NAME = nullptr;
$String* TIFFBaseJPEGCompressor::IMAGE_METADATA_NAME = nullptr;

void TIFFBaseJPEGCompressor::pruneNodes($Node* tree, bool pruneTables) {
	$init(TIFFBaseJPEGCompressor);
	$useLocalCurrentObjectStackCache();
	if (tree == nullptr) {
		$throwNew($NullPointerException, "tree == null!"_s);
	}
	if (!$nc($($nc(tree)->getNodeName()))->equals(TIFFBaseJPEGCompressor::IMAGE_METADATA_NAME)) {
		$throwNew($IllegalArgumentException, $$str({"root node name is not "_s, TIFFBaseJPEGCompressor::IMAGE_METADATA_NAME, "!"_s}));
	}
	$var($List, wantedNodes, $new($ArrayList));
	wantedNodes->addAll($($Arrays::asList($$new($StringArray, {
		"JPEGvariety"_s,
		"markerSequence"_s,
		"sof"_s,
		"componentSpec"_s,
		"sos"_s,
		"scanComponentSpec"_s
	}))));
	if (!pruneTables) {
		wantedNodes->add("dht"_s);
		wantedNodes->add("dhtable"_s);
		wantedNodes->add("dqt"_s);
		wantedNodes->add("dqtable"_s);
	}
	$var($IIOMetadataNode, iioTree, $cast($IIOMetadataNode, tree));
	$var($List, nodes, getAllNodes(iioTree, nullptr));
	int32_t numNodes = $nc(nodes)->size();
	for (int32_t i = 0; i < numNodes; ++i) {
		$var($Node, node, $cast($Node, nodes->get(i)));
		if (!wantedNodes->contains($($nc(node)->getNodeName()))) {
			$nc($($nc(node)->getParentNode()))->removeChild(node);
		}
	}
}

$List* TIFFBaseJPEGCompressor::getAllNodes($IIOMetadataNode* root, $List* nodes$renamed) {
	$init(TIFFBaseJPEGCompressor);
	$useLocalCurrentObjectStackCache();
	$var($List, nodes, nodes$renamed);
	if (nodes == nullptr) {
		$assign(nodes, $new($ArrayList));
	}
	if ($nc(root)->hasChildNodes()) {
		$var($Node, sibling, root->getFirstChild());
		while (sibling != nullptr) {
			$nc(nodes)->add(sibling);
			$assign(nodes, getAllNodes($cast($IIOMetadataNode, sibling), nodes));
			$assign(sibling, sibling->getNextSibling());
		}
	}
	return nodes;
}

void TIFFBaseJPEGCompressor::init$($String* compressionType, int32_t compressionTagValue, bool isCompressionLossless, $ImageWriteParam* param) {
	$TIFFCompressor::init$(compressionType, compressionTagValue, isCompressionLossless);
	$set(this, param, nullptr);
	$set(this, JPEGParam, nullptr);
	$set(this, JPEGWriter, nullptr);
	this->writeAbbreviatedStream = false;
	$set(this, JPEGStreamMetadata, nullptr);
	$set(this, JPEGImageMetadata, nullptr);
	$set(this, param, param);
}

void TIFFBaseJPEGCompressor::initJPEGWriter(bool supportsStreamMetadata, bool supportsImageMetadata) {
	$useLocalCurrentObjectStackCache();
	if (this->JPEGWriter != nullptr && (supportsStreamMetadata || supportsImageMetadata)) {
		$var($ImageWriterSpi, spi, $nc(this->JPEGWriter)->getOriginatingProvider());
		if (supportsStreamMetadata) {
			$var($String, smName, $nc(spi)->getNativeStreamMetadataFormatName());
			if (smName == nullptr || !$nc(smName)->equals(TIFFBaseJPEGCompressor::STREAM_METADATA_NAME)) {
				$set(this, JPEGWriter, nullptr);
			}
		}
		if (this->JPEGWriter != nullptr && supportsImageMetadata) {
			$var($String, imName, $nc(spi)->getNativeImageMetadataFormatName());
			if (imName == nullptr || !$nc(imName)->equals(TIFFBaseJPEGCompressor::IMAGE_METADATA_NAME)) {
				$set(this, JPEGWriter, nullptr);
			}
		}
	}
	if (this->JPEGWriter == nullptr) {
		$var($Iterator, iter, $ImageIO::getImageWritersByFormatName("jpeg"_s));
		while ($nc(iter)->hasNext()) {
			$var($ImageWriter, writer, $cast($ImageWriter, iter->next()));
			if (supportsStreamMetadata || supportsImageMetadata) {
				$var($ImageWriterSpi, spi, $nc(writer)->getOriginatingProvider());
				if (supportsStreamMetadata) {
					$var($String, smName, $nc(spi)->getNativeStreamMetadataFormatName());
					if (smName == nullptr || !$nc(smName)->equals(TIFFBaseJPEGCompressor::STREAM_METADATA_NAME)) {
						continue;
					}
				}
				if (supportsImageMetadata) {
					$var($String, imName, $nc(spi)->getNativeImageMetadataFormatName());
					if (imName == nullptr || !$nc(imName)->equals(TIFFBaseJPEGCompressor::IMAGE_METADATA_NAME)) {
						continue;
					}
				}
			}
			$set(this, JPEGWriter, writer);
			break;
		}
		if (this->JPEGWriter == nullptr) {
			$throwNew($NullPointerException, "No appropriate JPEG writers found!"_s);
		}
	}
	if (this->JPEGParam == nullptr) {
		if (this->param != nullptr && $instanceOf($JPEGImageWriteParam, this->param)) {
			$set(this, JPEGParam, $cast($JPEGImageWriteParam, this->param));
		} else {
			$set(this, JPEGParam, $new($JPEGImageWriteParam, this->writer != nullptr ? $($nc(this->writer)->getLocale()) : ($Locale*)nullptr));
			if (this->param != nullptr && $nc(this->param)->getCompressionMode() == $ImageWriteParam::MODE_EXPLICIT) {
				$nc(this->JPEGParam)->setCompressionMode($ImageWriteParam::MODE_EXPLICIT);
				$nc(this->JPEGParam)->setCompressionQuality($nc(this->param)->getCompressionQuality());
			}
		}
	}
}

$IIOMetadata* TIFFBaseJPEGCompressor::getImageMetadata(bool pruneTables) {
	$useLocalCurrentObjectStackCache();
	if (this->JPEGImageMetadata == nullptr && $nc(TIFFBaseJPEGCompressor::IMAGE_METADATA_NAME)->equals($($nc($($nc(this->JPEGWriter)->getOriginatingProvider()))->getNativeImageMetadataFormatName()))) {
		$var($TIFFImageWriter, tiffWriter, $cast($TIFFImageWriter, this->writer));
		$set(this, JPEGImageMetadata, $nc(this->JPEGWriter)->getDefaultImageMetadata($($nc(tiffWriter)->getImageType()), this->JPEGParam));
		$var($Node, tree, $nc(this->JPEGImageMetadata)->getAsTree(TIFFBaseJPEGCompressor::IMAGE_METADATA_NAME));
		try {
			pruneNodes(tree, pruneTables);
		} catch ($IllegalArgumentException& e) {
			$throwNew($IIOException, "Error pruning unwanted nodes"_s, e);
		}
		try {
			$nc(this->JPEGImageMetadata)->setFromTree(TIFFBaseJPEGCompressor::IMAGE_METADATA_NAME, tree);
		} catch ($IIOInvalidTreeException& e) {
			$throwNew($IIOException, "Cannot set pruned image metadata!"_s, e);
		}
	}
	return this->JPEGImageMetadata;
}

int32_t TIFFBaseJPEGCompressor::encode($bytes* b, int32_t off, int32_t width, int32_t height, $ints* bitsPerSample, int32_t scanlineStride) {
	$useLocalCurrentObjectStackCache();
	if (this->JPEGWriter == nullptr) {
		$throwNew($IIOException, "JPEG writer has not been initialized!"_s);
	}
	if (!(($nc(bitsPerSample)->length == 3 && bitsPerSample->get(0) == 8 && bitsPerSample->get(1) == 8 && bitsPerSample->get(2) == 8) || ($nc(bitsPerSample)->length == 1 && bitsPerSample->get(0) == 8))) {
		$throwNew($IIOException, "Can only JPEG compress 8- and 24-bit images!"_s);
	}
	if (this->baos == nullptr) {
		$set(this, baos, $new($TIFFBaseJPEGCompressor$IIOByteArrayOutputStream));
	} else {
		$nc(this->baos)->reset();
	}
	$var($ImageOutputStream, ios, $new($MemoryCacheImageOutputStream, this->baos));
	$nc(this->JPEGWriter)->setOutput(ios);
	$var($DataBufferByte, dbb, nullptr);
	if (off == 0) {
		$assign(dbb, $new($DataBufferByte, b, $nc(b)->length));
	} else {
		int32_t bytesPerSegment = scanlineStride * height;
		$var($bytes, btmp, $new($bytes, bytesPerSegment));
		$System::arraycopy(b, off, btmp, 0, bytesPerSegment);
		$assign(dbb, $new($DataBufferByte, btmp, bytesPerSegment));
		off = 0;
	}
	$var($ints, offsets, nullptr);
	$var($ColorSpace, cs, nullptr);
	if ($nc(bitsPerSample)->length == 3) {
		$assign(offsets, $new($ints, {
			off,
			off + 1,
			off + 2
		}));
		$assign(cs, $ColorSpace::getInstance($ColorSpace::CS_sRGB));
	} else {
		$assign(offsets, $new($ints, {off}));
		$assign(cs, $ColorSpace::getInstance($ColorSpace::CS_GRAY));
	}
	$var($ColorModel, cm, $new($ComponentColorModel, cs, false, false, $Transparency::OPAQUE, $DataBuffer::TYPE_BYTE));
	$var($SampleModel, sm, $new($PixelInterleavedSampleModel, $DataBuffer::TYPE_BYTE, width, height, $nc(bitsPerSample)->length, scanlineStride, offsets));
	$var($WritableRaster, wras, $Raster::createWritableRaster(sm, dbb, $$new($Point, 0, 0)));
	$var($BufferedImage, bi, $new($BufferedImage, cm, wras, false, ($Hashtable*)nullptr));
	$var($IIOMetadata, imageMetadata, getImageMetadata(this->writeAbbreviatedStream));
	int32_t compDataLength = 0;
	if (this->writeAbbreviatedStream) {
		$nc(this->JPEGWriter)->prepareWriteSequence(this->JPEGStreamMetadata);
		ios->flush();
		$nc(this->baos)->reset();
		$var($IIOImage, image, $new($IIOImage, static_cast<$RenderedImage*>(bi), ($List*)nullptr, imageMetadata));
		$nc(this->JPEGWriter)->writeToSequence(image, this->JPEGParam);
		$nc(this->JPEGWriter)->endWriteSequence();
	} else {
		$nc(this->JPEGWriter)->write(nullptr, $$new($IIOImage, static_cast<$RenderedImage*>(bi), ($List*)nullptr, imageMetadata), this->JPEGParam);
	}
	compDataLength = $nc(this->baos)->size();
	$nc(this->baos)->writeTo(this->stream);
	$nc(this->baos)->reset();
	return compDataLength;
}

void TIFFBaseJPEGCompressor::finalize() {
	$TIFFCompressor::finalize();
	if (this->JPEGWriter != nullptr) {
		$nc(this->JPEGWriter)->dispose();
	}
}

TIFFBaseJPEGCompressor::TIFFBaseJPEGCompressor() {
}

void clinit$TIFFBaseJPEGCompressor($Class* class$) {
	$assignStatic(TIFFBaseJPEGCompressor::STREAM_METADATA_NAME, "javax_imageio_jpeg_stream_1.0"_s);
	$assignStatic(TIFFBaseJPEGCompressor::IMAGE_METADATA_NAME, "javax_imageio_jpeg_image_1.0"_s);
}

$Class* TIFFBaseJPEGCompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFBaseJPEGCompressor, name, initialize, &_TIFFBaseJPEGCompressor_ClassInfo_, clinit$TIFFBaseJPEGCompressor, allocate$TIFFBaseJPEGCompressor);
	return class$;
}

$Class* TIFFBaseJPEGCompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com