#include <com/sun/imageio/plugins/gif/GIFImageReader.h>

#include <com/sun/imageio/plugins/common/ReaderUtil.h>
#include <com/sun/imageio/plugins/gif/GIFImageMetadata.h>
#include <com/sun/imageio/plugins/gif/GIFMetadata.h>
#include <com/sun/imageio/plugins/gif/GIFStreamMetadata.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ComponentSampleModel.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/IndexColorModel.h>
#include <java/awt/image/MultiPixelPackedSampleModel.h>
#include <java/awt/image/PixelInterleavedSampleModel.h>
#include <java/awt/image/SampleModel.h>
#include <java/awt/image/WritableRaster.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteOrder.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <jcpp.h>

#undef LITTLE_ENDIAN
#undef MAX_VALUE
#undef TYPE_BYTE
#undef TYPE_BYTE_INDEXED

using $ReaderUtil = ::com::sun::imageio::plugins::common::ReaderUtil;
using $GIFImageMetadata = ::com::sun::imageio::plugins::gif::GIFImageMetadata;
using $GIFMetadata = ::com::sun::imageio::plugins::gif::GIFMetadata;
using $GIFStreamMetadata = ::com::sun::imageio::plugins::gif::GIFStreamMetadata;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ComponentSampleModel = ::java::awt::image::ComponentSampleModel;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $IndexColorModel = ::java::awt::image::IndexColorModel;
using $MultiPixelPackedSampleModel = ::java::awt::image::MultiPixelPackedSampleModel;
using $PixelInterleavedSampleModel = ::java::awt::image::PixelInterleavedSampleModel;
using $SampleModel = ::java::awt::image::SampleModel;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ByteOrder = ::java::nio::ByteOrder;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $IIOException = ::javax::imageio::IIOException;
using $IIOParam = ::javax::imageio::IIOParam;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace gif {

$FieldInfo _GIFImageReader_FieldInfo_[] = {
	{"stream", "Ljavax/imageio/stream/ImageInputStream;", nullptr, 0, $field(GIFImageReader, stream)},
	{"gotHeader", "Z", nullptr, 0, $field(GIFImageReader, gotHeader)},
	{"streamMetadata", "Lcom/sun/imageio/plugins/gif/GIFStreamMetadata;", nullptr, 0, $field(GIFImageReader, streamMetadata)},
	{"currIndex", "I", nullptr, 0, $field(GIFImageReader, currIndex)},
	{"imageMetadata", "Lcom/sun/imageio/plugins/gif/GIFImageMetadata;", nullptr, 0, $field(GIFImageReader, imageMetadata)},
	{"imageStartPosition", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Long;>;", 0, $field(GIFImageReader, imageStartPosition)},
	{"imageMetadataLength", "I", nullptr, 0, $field(GIFImageReader, imageMetadataLength)},
	{"numImages", "I", nullptr, 0, $field(GIFImageReader, numImages)},
	{"block", "[B", nullptr, 0, $field(GIFImageReader, block)},
	{"blockLength", "I", nullptr, 0, $field(GIFImageReader, blockLength)},
	{"bitPos", "I", nullptr, 0, $field(GIFImageReader, bitPos)},
	{"nextByte", "I", nullptr, 0, $field(GIFImageReader, nextByte)},
	{"initCodeSize", "I", nullptr, 0, $field(GIFImageReader, initCodeSize)},
	{"clearCode", "I", nullptr, 0, $field(GIFImageReader, clearCode)},
	{"eofCode", "I", nullptr, 0, $field(GIFImageReader, eofCode)},
	{"next32Bits", "I", nullptr, 0, $field(GIFImageReader, next32Bits)},
	{"lastBlockFound", "Z", nullptr, 0, $field(GIFImageReader, lastBlockFound)},
	{"theImage", "Ljava/awt/image/BufferedImage;", nullptr, 0, $field(GIFImageReader, theImage)},
	{"theTile", "Ljava/awt/image/WritableRaster;", nullptr, 0, $field(GIFImageReader, theTile)},
	{"width", "I", nullptr, 0, $field(GIFImageReader, width)},
	{"height", "I", nullptr, 0, $field(GIFImageReader, height)},
	{"streamX", "I", nullptr, 0, $field(GIFImageReader, streamX)},
	{"streamY", "I", nullptr, 0, $field(GIFImageReader, streamY)},
	{"rowsDone", "I", nullptr, 0, $field(GIFImageReader, rowsDone)},
	{"interlacePass", "I", nullptr, 0, $field(GIFImageReader, interlacePass)},
	{"fallbackColorTable", "[B", nullptr, $PRIVATE, $field(GIFImageReader, fallbackColorTable)},
	{"interlaceIncrement", "[I", nullptr, $STATIC | $FINAL, $staticField(GIFImageReader, interlaceIncrement)},
	{"interlaceOffset", "[I", nullptr, $STATIC | $FINAL, $staticField(GIFImageReader, interlaceOffset)},
	{"sourceRegion", "Ljava/awt/Rectangle;", nullptr, 0, $field(GIFImageReader, sourceRegion)},
	{"sourceXSubsampling", "I", nullptr, 0, $field(GIFImageReader, sourceXSubsampling)},
	{"sourceYSubsampling", "I", nullptr, 0, $field(GIFImageReader, sourceYSubsampling)},
	{"sourceMinProgressivePass", "I", nullptr, 0, $field(GIFImageReader, sourceMinProgressivePass)},
	{"sourceMaxProgressivePass", "I", nullptr, 0, $field(GIFImageReader, sourceMaxProgressivePass)},
	{"destinationOffset", "Ljava/awt/Point;", nullptr, 0, $field(GIFImageReader, destinationOffset)},
	{"destinationRegion", "Ljava/awt/Rectangle;", nullptr, 0, $field(GIFImageReader, destinationRegion)},
	{"updateMinY", "I", nullptr, 0, $field(GIFImageReader, updateMinY)},
	{"updateYStep", "I", nullptr, 0, $field(GIFImageReader, updateYStep)},
	{"decodeThisRow", "Z", nullptr, 0, $field(GIFImageReader, decodeThisRow)},
	{"destY", "I", nullptr, 0, $field(GIFImageReader, destY)},
	{"rowBuf", "[B", nullptr, 0, $field(GIFImageReader, rowBuf)},
	{"defaultPalette", "[B", nullptr, $PRIVATE | $STATIC, $staticField(GIFImageReader, defaultPalette)},
	{}
};

$MethodInfo _GIFImageReader_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/spi/ImageReaderSpi;)V", nullptr, $PUBLIC, $method(static_cast<void(GIFImageReader::*)($ImageReaderSpi*)>(&GIFImageReader::init$))},
	{"checkIndex", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageReader::*)(int32_t)>(&GIFImageReader::checkIndex))},
	{"computeDecodeThisRow", "()V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageReader::*)()>(&GIFImageReader::computeDecodeThisRow))},
	{"concatenateBlocks", "()[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(GIFImageReader::*)()>(&GIFImageReader::concatenateBlocks)), "java.io.IOException"},
	{"copyData", "([BI[B)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GIFImageReader::*)($bytes*,int32_t,$bytes*)>(&GIFImageReader::copyData))},
	{"createIndexed", "([B[B[BI)Ljavax/imageio/ImageTypeSpecifier;", nullptr, $PRIVATE, $method(static_cast<$ImageTypeSpecifier*(GIFImageReader::*)($bytes*,$bytes*,$bytes*,int32_t)>(&GIFImageReader::createIndexed))},
	{"getCode", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GIFImageReader::*)(int32_t,int32_t)>(&GIFImageReader::getCode)), "java.io.IOException"},
	{"getDefaultPalette", "()[B", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<$bytes*(*)()>(&GIFImageReader::getDefaultPalette))},
	{"getDefaultReadParam", "()Ljavax/imageio/ImageReadParam;", nullptr, $PUBLIC},
	{"getHeight", "(I)I", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getImageMetadata", "(I)Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getImageTypes", "(I)Ljava/util/Iterator;", "(I)Ljava/util/Iterator<Ljavax/imageio/ImageTypeSpecifier;>;", $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getNumImages", "(Z)I", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getStreamMetadata", "()Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"getWidth", "(I)I", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"initNext32Bits", "()V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageReader::*)()>(&GIFImageReader::initNext32Bits))},
	{"initializeStringTable", "([I[B[B[I)V", nullptr, $PUBLIC},
	{"locateImage", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GIFImageReader::*)(int32_t)>(&GIFImageReader::locateImage)), "javax.imageio.IIOException"},
	{"outputPixels", "([BI)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageReader::*)($bytes*,int32_t)>(&GIFImageReader::outputPixels))},
	{"outputRow", "()V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageReader::*)()>(&GIFImageReader::outputRow))},
	{"read", "(ILjavax/imageio/ImageReadParam;)Ljava/awt/image/BufferedImage;", nullptr, $PUBLIC, nullptr, "javax.imageio.IIOException"},
	{"readHeader", "()V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageReader::*)()>(&GIFImageReader::readHeader)), "javax.imageio.IIOException"},
	{"readMetadata", "()V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageReader::*)()>(&GIFImageReader::readMetadata)), "javax.imageio.IIOException"},
	{"reset", "()V", nullptr, $PUBLIC},
	{"resetStreamSettings", "()V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageReader::*)()>(&GIFImageReader::resetStreamSettings))},
	{"setInput", "(Ljava/lang/Object;ZZ)V", nullptr, $PUBLIC},
	{"skipImage", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(GIFImageReader::*)()>(&GIFImageReader::skipImage)), "javax.imageio.IIOException"},
	{"startPass", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(GIFImageReader::*)(int32_t)>(&GIFImageReader::startPass))},
	{}
};

$ClassInfo _GIFImageReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.gif.GIFImageReader",
	"javax.imageio.ImageReader",
	nullptr,
	_GIFImageReader_FieldInfo_,
	_GIFImageReader_MethodInfo_
};

$Object* allocate$GIFImageReader($Class* clazz) {
	return $of($alloc(GIFImageReader));
}

$ints* GIFImageReader::interlaceIncrement = nullptr;
$ints* GIFImageReader::interlaceOffset = nullptr;
$bytes* GIFImageReader::defaultPalette = nullptr;

void GIFImageReader::init$($ImageReaderSpi* originatingProvider) {
	$ImageReader::init$(originatingProvider);
	$set(this, stream, nullptr);
	this->gotHeader = false;
	$set(this, streamMetadata, nullptr);
	this->currIndex = -1;
	$set(this, imageMetadata, nullptr);
	$set(this, imageStartPosition, $new($ArrayList));
	this->numImages = -1;
	$set(this, block, $new($bytes, 255));
	this->blockLength = 0;
	this->bitPos = 0;
	this->nextByte = 0;
	this->next32Bits = 0;
	this->lastBlockFound = false;
	$set(this, theImage, nullptr);
	$set(this, theTile, nullptr);
	this->width = -1;
	this->height = -1;
	this->streamX = -1;
	this->streamY = -1;
	this->rowsDone = 0;
	this->interlacePass = 0;
	$set(this, fallbackColorTable, nullptr);
	this->decodeThisRow = true;
	this->destY = 0;
}

void GIFImageReader::setInput(Object$* input, bool seekForwardOnly, bool ignoreMetadata) {
	$ImageReader::setInput(input, seekForwardOnly, ignoreMetadata);
	if (input != nullptr) {
		if (!($instanceOf($ImageInputStream, input))) {
			$throwNew($IllegalArgumentException, "input not an ImageInputStream!"_s);
		}
		$set(this, stream, $cast($ImageInputStream, input));
	} else {
		$set(this, stream, nullptr);
	}
	resetStreamSettings();
}

int32_t GIFImageReader::getNumImages(bool allowSearch) {
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "Input not set!"_s);
	}
	if (this->seekForwardOnly && allowSearch) {
		$throwNew($IllegalStateException, "seekForwardOnly and allowSearch can\'t both be true!"_s);
	}
	if (this->numImages > 0) {
		return this->numImages;
	}
	if (allowSearch) {
		this->numImages = locateImage($Integer::MAX_VALUE) + 1;
	}
	return this->numImages;
}

void GIFImageReader::checkIndex(int32_t imageIndex) {
	if (imageIndex < this->minIndex) {
		$throwNew($IndexOutOfBoundsException, "imageIndex < minIndex!"_s);
	}
	if (this->seekForwardOnly) {
		this->minIndex = imageIndex;
	}
}

int32_t GIFImageReader::getWidth(int32_t imageIndex) {
	checkIndex(imageIndex);
	int32_t index = locateImage(imageIndex);
	if (index != imageIndex) {
		$throwNew($IndexOutOfBoundsException);
	}
	readMetadata();
	return $nc(this->imageMetadata)->imageWidth;
}

int32_t GIFImageReader::getHeight(int32_t imageIndex) {
	checkIndex(imageIndex);
	int32_t index = locateImage(imageIndex);
	if (index != imageIndex) {
		$throwNew($IndexOutOfBoundsException);
	}
	readMetadata();
	return $nc(this->imageMetadata)->imageHeight;
}

$ImageTypeSpecifier* GIFImageReader::createIndexed($bytes* r, $bytes* g, $bytes* b, int32_t bits) {
	$useLocalCurrentObjectStackCache();
	$var($ColorModel, colorModel, nullptr);
	if ($nc(this->imageMetadata)->transparentColorFlag) {
		int32_t idx = $Math::min($nc(this->imageMetadata)->transparentColorIndex, $nc(r)->length - 1);
		$assign(colorModel, $new($IndexColorModel, bits, $nc(r)->length, r, g, b, idx));
	} else {
		$assign(colorModel, $new($IndexColorModel, bits, $nc(r)->length, r, g, b));
	}
	$var($SampleModel, sampleModel, nullptr);
	if (bits == 8) {
		$var($ints, bandOffsets, $new($ints, {0}));
		$assign(sampleModel, $new($PixelInterleavedSampleModel, $DataBuffer::TYPE_BYTE, 1, 1, 1, 1, bandOffsets));
	} else {
		$assign(sampleModel, $new($MultiPixelPackedSampleModel, $DataBuffer::TYPE_BYTE, 1, 1, bits));
	}
	return $new($ImageTypeSpecifier, colorModel, sampleModel);
}

$Iterator* GIFImageReader::getImageTypes(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	checkIndex(imageIndex);
	int32_t index = locateImage(imageIndex);
	if (index != imageIndex) {
		$throwNew($IndexOutOfBoundsException);
	}
	readMetadata();
	$var($List, l, $new($ArrayList, 1));
	$var($bytes, colorTable, nullptr);
	if ($nc(this->imageMetadata)->localColorTable != nullptr) {
		$assign(colorTable, $nc(this->imageMetadata)->localColorTable);
		$set(this, fallbackColorTable, $nc(this->imageMetadata)->localColorTable);
	} else {
		$assign(colorTable, $nc(this->streamMetadata)->globalColorTable);
	}
	if (colorTable == nullptr) {
		if (this->fallbackColorTable == nullptr) {
			this->processWarningOccurred("Use default color table."_s);
			$set(this, fallbackColorTable, getDefaultPalette());
		}
		$assign(colorTable, this->fallbackColorTable);
	}
	int32_t length = $nc(colorTable)->length / 3;
	int32_t bits = 0;
	if (length == 2) {
		bits = 1;
	} else if (length == 4) {
		bits = 2;
	} else if (length == 8 || length == 16) {
		bits = 4;
	} else {
		bits = 8;
	}
	int32_t lutLength = $sl(1, bits);
	$var($bytes, r, $new($bytes, lutLength));
	$var($bytes, g, $new($bytes, lutLength));
	$var($bytes, b, $new($bytes, lutLength));
	int32_t rgbIndex = 0;
	for (int32_t i = 0; i < length; ++i) {
		r->set(i, colorTable->get(rgbIndex++));
		g->set(i, colorTable->get(rgbIndex++));
		b->set(i, colorTable->get(rgbIndex++));
	}
	l->add($(createIndexed(r, g, b, bits)));
	return l->iterator();
}

$ImageReadParam* GIFImageReader::getDefaultReadParam() {
	return $new($ImageReadParam);
}

$IIOMetadata* GIFImageReader::getStreamMetadata() {
	readHeader();
	return this->streamMetadata;
}

$IIOMetadata* GIFImageReader::getImageMetadata(int32_t imageIndex) {
	checkIndex(imageIndex);
	int32_t index = locateImage(imageIndex);
	if (index != imageIndex) {
		$throwNew($IndexOutOfBoundsException, "Bad image index!"_s);
	}
	readMetadata();
	return this->imageMetadata;
}

void GIFImageReader::initNext32Bits() {
	this->next32Bits = (int32_t)($nc(this->block)->get(0) & (uint32_t)255);
	this->next32Bits |= ((int32_t)($nc(this->block)->get(1) & (uint32_t)255)) << 8;
	this->next32Bits |= ((int32_t)($nc(this->block)->get(2) & (uint32_t)255)) << 16;
	this->next32Bits |= $nc(this->block)->get(3) << 24;
	this->nextByte = 4;
}

int32_t GIFImageReader::getCode(int32_t codeSize, int32_t codeMask) {
	if (this->bitPos + codeSize > 32) {
		return this->eofCode;
	}
	int32_t code = (int32_t)(($sr(this->next32Bits, this->bitPos)) & (uint32_t)codeMask);
	this->bitPos += codeSize;
	while (this->bitPos >= 8 && !this->lastBlockFound) {
		$usrAssign(this->next32Bits, 8);
		this->bitPos -= 8;
		if (this->nextByte >= this->blockLength) {
			this->blockLength = $nc(this->stream)->readUnsignedByte();
			if (this->blockLength == 0) {
				this->lastBlockFound = true;
				return code;
			} else {
				int32_t left = this->blockLength;
				int32_t off = 0;
				while (left > 0) {
					int32_t nbytes = $nc(this->stream)->read(this->block, off, left);
					if (nbytes == -1) {
						$throwNew($IIOException, "Invalid block length for LZW encoded image data"_s);
					}
					off += nbytes;
					left -= nbytes;
				}
				this->nextByte = 0;
			}
		}
		this->next32Bits |= $nc(this->block)->get(this->nextByte++) << 24;
	}
	return code;
}

void GIFImageReader::initializeStringTable($ints* prefix, $bytes* suffix, $bytes* initial, $ints* length) {
	int32_t numEntries = $sl(1, this->initCodeSize);
	for (int32_t i = 0; i < numEntries; ++i) {
		$nc(prefix)->set(i, -1);
		$nc(suffix)->set(i, (int8_t)i);
		$nc(initial)->set(i, (int8_t)i);
		$nc(length)->set(i, 1);
	}
	for (int32_t i = numEntries; i < 4096; ++i) {
		$nc(prefix)->set(i, -1);
		$nc(length)->set(i, 1);
	}
}

void GIFImageReader::outputRow() {
	int32_t width = $Math::min($nc(this->sourceRegion)->width, $nc(this->destinationRegion)->width * this->sourceXSubsampling);
	int32_t destX = $nc(this->destinationRegion)->x;
	if (this->sourceXSubsampling == 1) {
		$nc(this->theTile)->setDataElements(destX, this->destY, width, 1, this->rowBuf);
	} else {
		for (int32_t x = 0; x < width; x += this->sourceXSubsampling, ++destX) {
			$nc(this->theTile)->setSample(destX, this->destY, 0, (int32_t)($nc(this->rowBuf)->get(x) & (uint32_t)255));
		}
	}
	if (this->updateListeners != nullptr) {
		$var($ints, bands, $new($ints, {0}));
		processImageUpdate(this->theImage, destX, this->destY, width, 1, 1, this->updateYStep, bands);
	}
}

void GIFImageReader::computeDecodeThisRow() {
	this->decodeThisRow = (this->destY < $nc(this->destinationRegion)->y + $nc(this->destinationRegion)->height) && (this->streamY >= $nc(this->sourceRegion)->y) && (this->streamY < $nc(this->sourceRegion)->y + $nc(this->sourceRegion)->height) && (($mod((this->streamY - $nc(this->sourceRegion)->y), this->sourceYSubsampling)) == 0);
}

void GIFImageReader::outputPixels($bytes* string, int32_t len) {
	if (this->interlacePass < this->sourceMinProgressivePass || this->interlacePass > this->sourceMaxProgressivePass) {
		return;
	}
	for (int32_t i = 0; i < len; ++i) {
		if (this->streamX >= $nc(this->sourceRegion)->x) {
			$nc(this->rowBuf)->set(this->streamX - $nc(this->sourceRegion)->x, $nc(string)->get(i));
		}
		++this->streamX;
		if (this->streamX == this->width) {
			++this->rowsDone;
			processImageProgress(100.0f * this->rowsDone / this->height);
			if (abortRequested()) {
				return;
			}
			if (this->decodeThisRow) {
				outputRow();
			}
			this->streamX = 0;
			if ($nc(this->imageMetadata)->interlaceFlag) {
				this->streamY += $nc(GIFImageReader::interlaceIncrement)->get(this->interlacePass);
				if (this->streamY >= this->height) {
					if (this->updateListeners != nullptr) {
						processPassComplete(this->theImage);
					}
					++this->interlacePass;
					if (this->interlacePass > this->sourceMaxProgressivePass) {
						return;
					}
					this->streamY = $nc(GIFImageReader::interlaceOffset)->get(this->interlacePass);
					startPass(this->interlacePass);
				}
			} else {
				++this->streamY;
			}
			this->destY = $nc(this->destinationRegion)->y + $div((this->streamY - $nc(this->sourceRegion)->y), this->sourceYSubsampling);
			computeDecodeThisRow();
		}
	}
}

void GIFImageReader::readHeader() {
	$useLocalCurrentObjectStackCache();
	if (this->gotHeader) {
		return;
	}
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "Input not set!"_s);
	}
	$set(this, streamMetadata, $new($GIFStreamMetadata));
	try {
		$init($ByteOrder);
		$nc(this->stream)->setByteOrder($ByteOrder::LITTLE_ENDIAN);
		$var($bytes, signature, $new($bytes, 6));
		$nc(this->stream)->readFully(signature);
		$var($StringBuilder, version, $new($StringBuilder, 3));
		version->append((char16_t)signature->get(3));
		version->append((char16_t)signature->get(4));
		version->append((char16_t)signature->get(5));
		$set($nc(this->streamMetadata), version, version->toString());
		$nc(this->streamMetadata)->logicalScreenWidth = $nc(this->stream)->readUnsignedShort();
		$nc(this->streamMetadata)->logicalScreenHeight = $nc(this->stream)->readUnsignedShort();
		int32_t packedFields = $nc(this->stream)->readUnsignedByte();
		bool globalColorTableFlag = ((int32_t)(packedFields & (uint32_t)128)) != 0;
		$nc(this->streamMetadata)->colorResolution = ((int32_t)((packedFields >> 4) & (uint32_t)7)) + 1;
		$nc(this->streamMetadata)->sortFlag = ((int32_t)(packedFields & (uint32_t)8)) != 0;
		int32_t numGCTEntries = $sl(1, ((int32_t)(packedFields & (uint32_t)7)) + 1);
		$nc(this->streamMetadata)->backgroundColorIndex = $nc(this->stream)->readUnsignedByte();
		$nc(this->streamMetadata)->pixelAspectRatio = $nc(this->stream)->readUnsignedByte();
		if (globalColorTableFlag) {
			$set($nc(this->streamMetadata), globalColorTable, $new($bytes, 3 * numGCTEntries));
			$nc(this->stream)->readFully($nc(this->streamMetadata)->globalColorTable);
		} else {
			$set($nc(this->streamMetadata), globalColorTable, nullptr);
		}
		$nc(this->imageStartPosition)->add($($Long::valueOf($nc(this->stream)->getStreamPosition())));
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($IIOException, "I/O error reading header!"_s, e);
	}
	this->gotHeader = true;
}

bool GIFImageReader::skipImage() {
	$useLocalCurrentObjectStackCache();
	try {
		while (true) {
			int32_t blockType = $nc(this->stream)->readUnsignedByte();
			if (blockType == 44) {
				$nc(this->stream)->skipBytes(8);
				int32_t packedFields = $nc(this->stream)->readUnsignedByte();
				if (((int32_t)(packedFields & (uint32_t)128)) != 0) {
					int32_t bits = ((int32_t)(packedFields & (uint32_t)7)) + 1;
					$nc(this->stream)->skipBytes(3 * ($sl(1, bits)));
				}
				$nc(this->stream)->skipBytes(1);
				int32_t length = 0;
				do {
					length = $nc(this->stream)->readUnsignedByte();
					$nc(this->stream)->skipBytes(length);
				} while (length > 0);
				return true;
			} else if (blockType == 59) {
				return false;
			} else if (blockType == 33) {
				int32_t label = $nc(this->stream)->readUnsignedByte();
				int32_t length = 0;
				do {
					length = $nc(this->stream)->readUnsignedByte();
					$nc(this->stream)->skipBytes(length);
				} while (length > 0);
			} else if (blockType == 0) {
				return false;
			} else {
				int32_t length = 0;
				do {
					length = $nc(this->stream)->readUnsignedByte();
					$nc(this->stream)->skipBytes(length);
				} while (length > 0);
			}
		}
	} catch ($EOFException&) {
		$var($EOFException, e, $catch());
		return false;
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($IIOException, "I/O error locating image!"_s, e);
	}
	$shouldNotReachHere();
}

int32_t GIFImageReader::locateImage(int32_t imageIndex) {
	$useLocalCurrentObjectStackCache();
	readHeader();
	try {
		int32_t index = $Math::min(imageIndex, $nc(this->imageStartPosition)->size() - 1);
		$var($Long, l, $cast($Long, $nc(this->imageStartPosition)->get(index)));
		$nc(this->stream)->seek($nc(l)->longValue());
		while (index < imageIndex) {
			if (!skipImage()) {
				--index;
				return index;
			}
			$var($Long, l1, $Long::valueOf($nc(this->stream)->getStreamPosition()));
			$nc(this->imageStartPosition)->add(l1);
			++index;
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($IIOException, "Couldn\'t seek!"_s, e);
	}
	if (this->currIndex != imageIndex) {
		$set(this, imageMetadata, nullptr);
	}
	this->currIndex = imageIndex;
	return imageIndex;
}

$bytes* GIFImageReader::concatenateBlocks() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, data, $new($bytes, 0));
	while (true) {
		int32_t length = $nc(this->stream)->readUnsignedByte();
		if (length == 0) {
			break;
		}
		$var($bytes, newData, $new($bytes, $nc(data)->length + length));
		$System::arraycopy(data, 0, newData, 0, data->length);
		$nc(this->stream)->readFully(newData, data->length, length);
		$assign(data, newData);
	}
	return data;
}

void GIFImageReader::readMetadata() {
	$useLocalCurrentObjectStackCache();
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "Input not set!"_s);
	}
	try {
		$set(this, imageMetadata, $new($GIFImageMetadata));
		int64_t startPosition = $nc(this->stream)->getStreamPosition();
		while (true) {
			int32_t blockType = $nc(this->stream)->readUnsignedByte();
			if (blockType == 44) {
				$nc(this->imageMetadata)->imageLeftPosition = $nc(this->stream)->readUnsignedShort();
				$nc(this->imageMetadata)->imageTopPosition = $nc(this->stream)->readUnsignedShort();
				$nc(this->imageMetadata)->imageWidth = $nc(this->stream)->readUnsignedShort();
				$nc(this->imageMetadata)->imageHeight = $nc(this->stream)->readUnsignedShort();
				int32_t idPackedFields = $nc(this->stream)->readUnsignedByte();
				bool localColorTableFlag = ((int32_t)(idPackedFields & (uint32_t)128)) != 0;
				$nc(this->imageMetadata)->interlaceFlag = ((int32_t)(idPackedFields & (uint32_t)64)) != 0;
				$nc(this->imageMetadata)->sortFlag = ((int32_t)(idPackedFields & (uint32_t)32)) != 0;
				int32_t numLCTEntries = $sl(1, ((int32_t)(idPackedFields & (uint32_t)7)) + 1);
				if (localColorTableFlag) {
					$set($nc(this->imageMetadata), localColorTable, $new($bytes, 3 * numLCTEntries));
					$nc(this->stream)->readFully($nc(this->imageMetadata)->localColorTable);
				} else {
					$set($nc(this->imageMetadata), localColorTable, nullptr);
				}
				this->imageMetadataLength = (int32_t)($nc(this->stream)->getStreamPosition() - startPosition);
				return;
			} else if (blockType == 33) {
				int32_t label = $nc(this->stream)->readUnsignedByte();
				if (label == 249) {
					int32_t gceLength = $nc(this->stream)->readUnsignedByte();
					int32_t gcePackedFields = $nc(this->stream)->readUnsignedByte();
					$nc(this->imageMetadata)->disposalMethod = (int32_t)((gcePackedFields >> 2) & (uint32_t)3);
					$nc(this->imageMetadata)->userInputFlag = ((int32_t)(gcePackedFields & (uint32_t)2)) != 0;
					$nc(this->imageMetadata)->transparentColorFlag = ((int32_t)(gcePackedFields & (uint32_t)1)) != 0;
					$nc(this->imageMetadata)->delayTime = $nc(this->stream)->readUnsignedShort();
					$nc(this->imageMetadata)->transparentColorIndex = $nc(this->stream)->readUnsignedByte();
					int32_t terminator = $nc(this->stream)->readUnsignedByte();
				} else if (label == 1) {
					int32_t length = $nc(this->stream)->readUnsignedByte();
					$nc(this->imageMetadata)->hasPlainTextExtension = true;
					$nc(this->imageMetadata)->textGridLeft = $nc(this->stream)->readUnsignedShort();
					$nc(this->imageMetadata)->textGridTop = $nc(this->stream)->readUnsignedShort();
					$nc(this->imageMetadata)->textGridWidth = $nc(this->stream)->readUnsignedShort();
					$nc(this->imageMetadata)->textGridHeight = $nc(this->stream)->readUnsignedShort();
					$nc(this->imageMetadata)->characterCellWidth = $nc(this->stream)->readUnsignedByte();
					$nc(this->imageMetadata)->characterCellHeight = $nc(this->stream)->readUnsignedByte();
					$nc(this->imageMetadata)->textForegroundColor = $nc(this->stream)->readUnsignedByte();
					$nc(this->imageMetadata)->textBackgroundColor = $nc(this->stream)->readUnsignedByte();
					$set($nc(this->imageMetadata), text, concatenateBlocks());
				} else if (label == 254) {
					$var($bytes, comment, concatenateBlocks());
					if ($nc(this->imageMetadata)->comments == nullptr) {
						$set($nc(this->imageMetadata), comments, $new($ArrayList));
					}
					$nc($nc(this->imageMetadata)->comments)->add(comment);
				} else if (label == 255) {
					int32_t blockSize = $nc(this->stream)->readUnsignedByte();
					$var($bytes, applicationID, $new($bytes, 8));
					$var($bytes, authCode, $new($bytes, 3));
					$var($bytes, blockData, $new($bytes, blockSize));
					$nc(this->stream)->readFully(blockData);
					int32_t offset = copyData(blockData, 0, applicationID);
					offset = copyData(blockData, offset, authCode);
					$var($bytes, applicationData, concatenateBlocks());
					if (offset < blockSize) {
						int32_t len = blockSize - offset;
						$var($bytes, data, $new($bytes, len + $nc(applicationData)->length));
						$System::arraycopy(blockData, offset, data, 0, len);
						$System::arraycopy(applicationData, 0, data, len, applicationData->length);
						$assign(applicationData, data);
					}
					if ($nc(this->imageMetadata)->applicationIDs == nullptr) {
						$set($nc(this->imageMetadata), applicationIDs, $new($ArrayList));
						$set($nc(this->imageMetadata), authenticationCodes, $new($ArrayList));
						$set($nc(this->imageMetadata), applicationData, $new($ArrayList));
					}
					$nc($nc(this->imageMetadata)->applicationIDs)->add(applicationID);
					$nc($nc(this->imageMetadata)->authenticationCodes)->add(authCode);
					$nc($nc(this->imageMetadata)->applicationData)->add(applicationData);
				} else {
					int32_t length = 0;
					do {
						length = $nc(this->stream)->readUnsignedByte();
						$nc(this->stream)->skipBytes(length);
					} while (length > 0);
				}
			} else if (blockType == 59) {
				$throwNew($IndexOutOfBoundsException, "Attempt to read past end of image sequence!"_s);
			} else {
				$throwNew($IIOException, $$str({"Unexpected block type "_s, $$str(blockType), "!"_s}));
			}
		}
	} catch ($IIOException&) {
		$var($IIOException, iioe, $catch());
		$throw(iioe);
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($IIOException, "I/O error reading image metadata!"_s, ioe);
	}
}

int32_t GIFImageReader::copyData($bytes* src, int32_t offset, $bytes* dst) {
	int32_t len = $nc(dst)->length;
	int32_t rest = $nc(src)->length - offset;
	if (len > rest) {
		len = rest;
	}
	$System::arraycopy(src, offset, dst, 0, len);
	return offset + len;
}

void GIFImageReader::startPass(int32_t pass) {
	$useLocalCurrentObjectStackCache();
	if (this->updateListeners == nullptr || !$nc(this->imageMetadata)->interlaceFlag) {
		return;
	}
	int32_t y = $nc(GIFImageReader::interlaceOffset)->get(this->interlacePass);
	int32_t yStep = $nc(GIFImageReader::interlaceIncrement)->get(this->interlacePass);
	$var($ints, vals, $ReaderUtil::computeUpdatedPixels(this->sourceRegion, this->destinationOffset, $nc(this->destinationRegion)->x, $nc(this->destinationRegion)->y, $nc(this->destinationRegion)->x + $nc(this->destinationRegion)->width - 1, $nc(this->destinationRegion)->y + $nc(this->destinationRegion)->height - 1, this->sourceXSubsampling, this->sourceYSubsampling, 0, y, $nc(this->destinationRegion)->width, $div(($nc(this->destinationRegion)->height + yStep - 1), yStep), 1, yStep));
	this->updateMinY = $nc(vals)->get(1);
	this->updateYStep = vals->get(5);
	$var($ints, bands, $new($ints, {0}));
	processPassStarted(this->theImage, this->interlacePass, this->sourceMinProgressivePass, this->sourceMaxProgressivePass, 0, this->updateMinY, 1, this->updateYStep, bands);
}

$BufferedImage* GIFImageReader::read(int32_t imageIndex, $ImageReadParam* param$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ImageReadParam, param, param$renamed);
	if (this->stream == nullptr) {
		$throwNew($IllegalStateException, "Input not set!"_s);
	}
	checkIndex(imageIndex);
	int32_t index = locateImage(imageIndex);
	if (index != imageIndex) {
		$throwNew($IndexOutOfBoundsException, "imageIndex out of bounds!"_s);
	}
	readMetadata();
	if (param == nullptr) {
		$assign(param, getDefaultReadParam());
	}
	$var($Iterator, imageTypes, getImageTypes(imageIndex));
	$set(this, theImage, getDestination(param, imageTypes, $nc(this->imageMetadata)->imageWidth, $nc(this->imageMetadata)->imageHeight));
	$set(this, theTile, $nc(this->theImage)->getWritableTile(0, 0));
	this->width = $nc(this->imageMetadata)->imageWidth;
	this->height = $nc(this->imageMetadata)->imageHeight;
	this->streamX = 0;
	this->streamY = 0;
	this->rowsDone = 0;
	this->interlacePass = 0;
	$set(this, sourceRegion, $new($Rectangle, 0, 0, 0, 0));
	$set(this, destinationRegion, $new($Rectangle, 0, 0, 0, 0));
	computeRegions(param, this->width, this->height, this->theImage, this->sourceRegion, this->destinationRegion);
	$set(this, destinationOffset, $new($Point, $nc(this->destinationRegion)->x, $nc(this->destinationRegion)->y));
	this->sourceXSubsampling = $nc(param)->getSourceXSubsampling();
	this->sourceYSubsampling = param->getSourceYSubsampling();
	this->sourceMinProgressivePass = $Math::max(param->getSourceMinProgressivePass(), 0);
	this->sourceMaxProgressivePass = $Math::min(param->getSourceMaxProgressivePass(), 3);
	this->destY = $nc(this->destinationRegion)->y + $div((this->streamY - $nc(this->sourceRegion)->y), this->sourceYSubsampling);
	computeDecodeThisRow();
	clearAbortRequest();
	processImageStarted(imageIndex);
	if (abortRequested()) {
		processReadAborted();
		return this->theImage;
	}
	startPass(0);
	$set(this, rowBuf, $new($bytes, this->width));
	try {
		this->initCodeSize = $nc(this->stream)->readUnsignedByte();
		if (this->initCodeSize < 1 || this->initCodeSize > 8) {
			$throwNew($IIOException, $$str({"Bad code size:"_s, $$str(this->initCodeSize)}));
		}
		this->blockLength = $nc(this->stream)->readUnsignedByte();
		int32_t left = this->blockLength;
		int32_t off = 0;
		while (left > 0) {
			int32_t nbytes = $nc(this->stream)->read(this->block, off, left);
			if (nbytes == -1) {
				$throwNew($IIOException, "Invalid block length for LZW encoded image data"_s);
			}
			left -= nbytes;
			off += nbytes;
		}
		this->bitPos = 0;
		this->nextByte = 0;
		this->lastBlockFound = false;
		this->interlacePass = 0;
		initNext32Bits();
		this->clearCode = $sl(1, this->initCodeSize);
		this->eofCode = this->clearCode + 1;
		int32_t code = 0;
		int32_t oldCode = 0;
		$var($ints, prefix, $new($ints, 4096));
		$var($bytes, suffix, $new($bytes, 4096));
		$var($bytes, initial, $new($bytes, 4096));
		$var($ints, length, $new($ints, 4096));
		$var($bytes, string, $new($bytes, 4096));
		initializeStringTable(prefix, suffix, initial, length);
		int32_t tableIndex = ($sl(1, this->initCodeSize)) + 2;
		int32_t codeSize = this->initCodeSize + 1;
		int32_t codeMask = ($sl(1, codeSize)) - 1;
		do {
			code = getCode(codeSize, codeMask);
			if (code == this->clearCode) {
				initializeStringTable(prefix, suffix, initial, length);
				tableIndex = ($sl(1, this->initCodeSize)) + 2;
				codeSize = this->initCodeSize + 1;
				codeMask = ($sl(1, codeSize)) - 1;
				code = getCode(codeSize, codeMask);
				if (code == this->eofCode) {
					processImageComplete();
					return this->theImage;
				}
			} else if (code == this->eofCode) {
				processImageComplete();
				return this->theImage;
			} else {
				int32_t newSuffixIndex = 0;
				if (code < tableIndex) {
					newSuffixIndex = code;
				} else {
					newSuffixIndex = oldCode;
					if (code != tableIndex) {
						processWarningOccurred("Out-of-sequence code!"_s);
					}
				}
				int32_t ti = tableIndex;
				int32_t oc = oldCode;
				prefix->set(ti, oc);
				suffix->set(ti, initial->get(newSuffixIndex));
				initial->set(ti, initial->get(oc));
				length->set(ti, length->get(oc) + 1);
				++tableIndex;
				if ((tableIndex == ($sl(1, codeSize))) && (tableIndex < 4096)) {
					++codeSize;
					codeMask = ($sl(1, codeSize)) - 1;
				}
			}
			int32_t c = code;
			int32_t len = length->get(c);
			for (int32_t i = len - 1; i >= 0; --i) {
				string->set(i, suffix->get(c));
				c = prefix->get(c);
			}
			outputPixels(string, len);
			oldCode = code;
		} while (!abortRequested());
		processReadAborted();
		return this->theImage;
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($IIOException, "I/O error reading image!"_s, e);
	}
	$shouldNotReachHere();
}

void GIFImageReader::reset() {
	$ImageReader::reset();
	resetStreamSettings();
}

void GIFImageReader::resetStreamSettings() {
	this->gotHeader = false;
	$set(this, streamMetadata, nullptr);
	this->currIndex = -1;
	$set(this, imageMetadata, nullptr);
	$set(this, imageStartPosition, $new($ArrayList));
	this->numImages = -1;
	this->blockLength = 0;
	this->bitPos = 0;
	this->nextByte = 0;
	this->next32Bits = 0;
	this->lastBlockFound = false;
	$set(this, theImage, nullptr);
	$set(this, theTile, nullptr);
	this->width = -1;
	this->height = -1;
	this->streamX = -1;
	this->streamY = -1;
	this->rowsDone = 0;
	this->interlacePass = 0;
	$set(this, fallbackColorTable, nullptr);
}

$bytes* GIFImageReader::getDefaultPalette() {
	$load(GIFImageReader);
	$synchronized(class$) {
		$init(GIFImageReader);
		$useLocalCurrentObjectStackCache();
		if (GIFImageReader::defaultPalette == nullptr) {
			$var($BufferedImage, img, $new($BufferedImage, 1, 1, $BufferedImage::TYPE_BYTE_INDEXED));
			$var($IndexColorModel, icm, $cast($IndexColorModel, img->getColorModel()));
			int32_t size = $nc(icm)->getMapSize();
			$var($bytes, r, $new($bytes, size));
			$var($bytes, g, $new($bytes, size));
			$var($bytes, b, $new($bytes, size));
			icm->getReds(r);
			icm->getGreens(g);
			icm->getBlues(b);
			$assignStatic(GIFImageReader::defaultPalette, $new($bytes, size * 3));
			for (int32_t i = 0; i < size; ++i) {
				$nc(GIFImageReader::defaultPalette)->set(3 * i + 0, r->get(i));
				$nc(GIFImageReader::defaultPalette)->set(3 * i + 1, g->get(i));
				$nc(GIFImageReader::defaultPalette)->set(3 * i + 2, b->get(i));
			}
		}
		return GIFImageReader::defaultPalette;
	}
}

void clinit$GIFImageReader($Class* class$) {
	$assignStatic(GIFImageReader::interlaceIncrement, $new($ints, {
		8,
		8,
		4,
		2,
		-1
	}));
	$assignStatic(GIFImageReader::interlaceOffset, $new($ints, {
		0,
		4,
		2,
		1,
		-1
	}));
	$assignStatic(GIFImageReader::defaultPalette, nullptr);
}

GIFImageReader::GIFImageReader() {
}

$Class* GIFImageReader::load$($String* name, bool initialize) {
	$loadClass(GIFImageReader, name, initialize, &_GIFImageReader_ClassInfo_, clinit$GIFImageReader, allocate$GIFImageReader);
	return class$;
}

$Class* GIFImageReader::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com