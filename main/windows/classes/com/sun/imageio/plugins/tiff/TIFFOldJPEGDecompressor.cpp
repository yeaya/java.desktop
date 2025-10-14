#include <com/sun/imageio/plugins/tiff/TIFFOldJPEGDecompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFDecompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageReader.h>
#include <com/sun/imageio/plugins/tiff/TIFFJPEGDecompressor.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/IIOException.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageInputStreamImpl.h>
#include <javax/imageio/stream/MemoryCacheImageInputStream.h>
#include <jcpp.h>

#undef DHT
#undef DQT
#undef DRI
#undef EOI
#undef SOF0
#undef SOI
#undef SOS
#undef TAG_JPEG_AC_TABLES
#undef TAG_JPEG_DC_TABLES
#undef TAG_JPEG_INTERCHANGE_FORMAT
#undef TAG_JPEG_INTERCHANGE_FORMAT_LENGTH
#undef TAG_JPEG_Q_TABLES
#undef TAG_JPEG_RESTART_INTERVAL
#undef TAG_STRIP_OFFSETS
#undef TAG_TILE_OFFSETS
#undef TAG_Y_CB_CR_SUBSAMPLING

using $TIFFDecompressor = ::com::sun::imageio::plugins::tiff::TIFFDecompressor;
using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $TIFFImageReader = ::com::sun::imageio::plugins::tiff::TIFFImageReader;
using $TIFFJPEGDecompressor = ::com::sun::imageio::plugins::tiff::TIFFJPEGDecompressor;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOException = ::javax::imageio::IIOException;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $ImageReader = ::javax::imageio::ImageReader;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;
using $MemoryCacheImageInputStream = ::javax::imageio::stream::MemoryCacheImageInputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFOldJPEGDecompressor_FieldInfo_[] = {
	{"DHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFOldJPEGDecompressor, DHT)},
	{"DQT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFOldJPEGDecompressor, DQT)},
	{"DRI", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFOldJPEGDecompressor, DRI)},
	{"SOF0", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFOldJPEGDecompressor, SOF0)},
	{"SOS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TIFFOldJPEGDecompressor, SOS)},
	{"isInitialized", "Z", nullptr, $PRIVATE, $field(TIFFOldJPEGDecompressor, isInitialized)},
	{"JPEGStreamOffset", "Ljava/lang/Long;", nullptr, $PRIVATE, $field(TIFFOldJPEGDecompressor, JPEGStreamOffset)},
	{"SOFPosition", "I", nullptr, $PRIVATE, $field(TIFFOldJPEGDecompressor, SOFPosition)},
	{"SOSMarker", "[B", nullptr, $PRIVATE, $field(TIFFOldJPEGDecompressor, SOSMarker)},
	{"subsamplingX", "I", nullptr, $PRIVATE, $field(TIFFOldJPEGDecompressor, subsamplingX)},
	{"subsamplingY", "I", nullptr, $PRIVATE, $field(TIFFOldJPEGDecompressor, subsamplingY)},
	{}
};

$MethodInfo _TIFFOldJPEGDecompressor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFOldJPEGDecompressor::*)()>(&TIFFOldJPEGDecompressor::init$))},
	{"decodeRaw", "([BIII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"finalize", "()V", nullptr, $PROTECTED, nullptr, "java.lang.Throwable"},
	{"initialize", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(TIFFOldJPEGDecompressor::*)()>(&TIFFOldJPEGDecompressor::initialize)), "java.io.IOException"},
	{}
};

$ClassInfo _TIFFOldJPEGDecompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFOldJPEGDecompressor",
	"com.sun.imageio.plugins.tiff.TIFFJPEGDecompressor",
	nullptr,
	_TIFFOldJPEGDecompressor_FieldInfo_,
	_TIFFOldJPEGDecompressor_MethodInfo_
};

$Object* allocate$TIFFOldJPEGDecompressor($Class* clazz) {
	return $of($alloc(TIFFOldJPEGDecompressor));
}

void TIFFOldJPEGDecompressor::init$() {
	$TIFFJPEGDecompressor::init$();
	this->isInitialized = false;
	$set(this, JPEGStreamOffset, nullptr);
	this->SOFPosition = -1;
	$set(this, SOSMarker, nullptr);
	this->subsamplingX = 2;
	this->subsamplingY = 2;
}

void TIFFOldJPEGDecompressor::initialize() {
	$synchronized(this) {
		if (this->isInitialized) {
			return;
		}
		$var($TIFFImageMetadata, tim, $cast($TIFFImageMetadata, this->metadata));
		$var($TIFFField, JPEGInterchangeFormatField, $nc(tim)->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT));
		$var($TIFFField, segmentOffsetField, tim->getTIFFField($BaselineTIFFTagSet::TAG_TILE_OFFSETS));
		if (segmentOffsetField == nullptr) {
			$assign(segmentOffsetField, tim->getTIFFField($BaselineTIFFTagSet::TAG_STRIP_OFFSETS));
			if (segmentOffsetField == nullptr) {
				$assign(segmentOffsetField, JPEGInterchangeFormatField);
			}
		}
		$var($longs, segmentOffsets, $nc(segmentOffsetField)->getAsLongs());
		bool isTiled = $nc(segmentOffsets)->length > 1;
		if (!isTiled) {
			$nc(this->stream)->seek(this->offset);
			$nc(this->stream)->mark();
			bool var$0 = $nc(this->stream)->read() == 255;
			if (var$0 && $nc(this->stream)->read() == $TIFFJPEGDecompressor::SOI) {
				$set(this, JPEGStreamOffset, $Long::valueOf(this->offset));
				$nc(($cast($TIFFImageReader, this->reader)))->forwardWarningMessage("SOI marker detected at start of strip or tile."_s);
				this->isInitialized = true;
				return;
			}
			$nc(this->stream)->reset();
			if (JPEGInterchangeFormatField != nullptr) {
				int64_t jpegInterchangeOffset = JPEGInterchangeFormatField->getAsLong(0);
				$var($TIFFField, JPEGInterchangeFormatLengthField, tim->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH));
				if (JPEGInterchangeFormatLengthField == nullptr) {
					$set(this, JPEGStreamOffset, $Long::valueOf(jpegInterchangeOffset));
					$nc(($cast($TIFFImageReader, this->reader)))->forwardWarningMessage("JPEGInterchangeFormatLength field is missing"_s);
					this->isInitialized = true;
					return;
				} else {
					int64_t jpegInterchangeLength = $nc(JPEGInterchangeFormatLengthField)->getAsLong(0);
					if (jpegInterchangeOffset < segmentOffsets->get(0) && (jpegInterchangeOffset + jpegInterchangeLength) > segmentOffsets->get(0)) {
						$set(this, JPEGStreamOffset, $Long::valueOf(jpegInterchangeOffset));
						this->isInitialized = true;
						return;
					}
				}
			}
		}
		$var($TIFFField, YCbCrSubsamplingField, tim->getTIFFField($BaselineTIFFTagSet::TAG_Y_CB_CR_SUBSAMPLING));
		if (YCbCrSubsamplingField != nullptr) {
			this->subsamplingX = $nc($(YCbCrSubsamplingField->getAsChars()))->get(0);
			this->subsamplingY = $nc($(YCbCrSubsamplingField->getAsChars()))->get(1);
		}
		if (JPEGInterchangeFormatField != nullptr) {
			int64_t jpegInterchangeOffset = JPEGInterchangeFormatField->getAsLong(0);
			$var($TIFFField, JPEGInterchangeFormatLengthField, tim->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH));
			if (JPEGInterchangeFormatLengthField != nullptr) {
				int64_t jpegInterchangeLength = JPEGInterchangeFormatLengthField->getAsLong(0);
				if (jpegInterchangeLength >= 2 && jpegInterchangeOffset + jpegInterchangeLength <= segmentOffsets->get(0)) {
					$nc(this->stream)->mark();
					$nc(this->stream)->seek(jpegInterchangeOffset + jpegInterchangeLength - 2);
					bool var$1 = $nc(this->stream)->read() == 255;
					if (var$1 && $nc(this->stream)->read() == $TIFFJPEGDecompressor::EOI) {
						$set(this, tables, $new($bytes, (int32_t)(jpegInterchangeLength - 2)));
					} else {
						$set(this, tables, $new($bytes, (int32_t)jpegInterchangeLength));
					}
					$nc(this->stream)->reset();
					$nc(this->stream)->mark();
					$nc(this->stream)->seek(jpegInterchangeOffset);
					$nc(this->stream)->readFully(this->tables);
					$nc(this->stream)->reset();
					$nc(($cast($TIFFImageReader, this->reader)))->forwardWarningMessage("Incorrect JPEG interchange format: using JPEGInterchangeFormat offset to derive tables."_s);
				} else {
					$nc(($cast($TIFFImageReader, this->reader)))->forwardWarningMessage("JPEGInterchangeFormat+JPEGInterchangeFormatLength > offset to first strip or tile."_s);
				}
			}
		}
		if (this->tables == nullptr) {
			$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
			int64_t streamLength = $nc(this->stream)->length();
			baos->write(255);
			baos->write($TIFFJPEGDecompressor::SOI);
			$var($TIFFField, f, tim->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_Q_TABLES));
			if (f == nullptr) {
				$throwNew($IIOException, "JPEGQTables field missing!"_s);
			}
			$var($longs, off, $nc(f)->getAsLongs());
			for (int32_t i = 0; i < $nc(off)->length; ++i) {
				baos->write(255);
				baos->write(TIFFOldJPEGDecompressor::DQT);
				char16_t markerLength = (char16_t)67;
				baos->write((int32_t)(((int32_t)((uint32_t)markerLength >> 8)) & (uint32_t)255));
				baos->write((int32_t)(markerLength & (uint32_t)255));
				baos->write(i);
				$var($bytes, qtable, $new($bytes, 64));
				if (streamLength != -1 && off->get(i) > streamLength) {
					$throwNew($IIOException, $$str({"JPEGQTables offset for index "_s, $$str(i), " is not in the stream!"_s}));
				}
				$nc(this->stream)->seek(off->get(i));
				$nc(this->stream)->readFully(qtable);
				baos->write(qtable);
			}
			for (int32_t k = 0; k < 2; ++k) {
				int32_t tableTagNumber = k == 0 ? $BaselineTIFFTagSet::TAG_JPEG_DC_TABLES : $BaselineTIFFTagSet::TAG_JPEG_AC_TABLES;
				$assign(f, tim->getTIFFField(tableTagNumber));
				$var($String, fieldName, tableTagNumber == $BaselineTIFFTagSet::TAG_JPEG_DC_TABLES ? "JPEGDCTables"_s : "JPEGACTables"_s);
				if (f == nullptr) {
					$throwNew($IIOException, $$str({fieldName, " field missing!"_s}));
				}
				$assign(off, $nc(f)->getAsLongs());
				for (int32_t i = 0; i < $nc(off)->length; ++i) {
					baos->write(255);
					baos->write(TIFFOldJPEGDecompressor::DHT);
					$var($bytes, blengths, $new($bytes, 16));
					if (streamLength != -1 && off->get(i) > streamLength) {
						$throwNew($IIOException, $$str({fieldName, " offset for index "_s, $$str(i), " is not in the stream!"_s}));
					}
					$nc(this->stream)->seek(off->get(i));
					$nc(this->stream)->readFully(blengths);
					int32_t numCodes = 0;
					for (int32_t j = 0; j < 16; ++j) {
						numCodes += (int32_t)(blengths->get(j) & (uint32_t)255);
					}
					char16_t markerLength = (char16_t)(19 + numCodes);
					baos->write((int32_t)(((int32_t)((uint32_t)markerLength >> 8)) & (uint32_t)255));
					baos->write((int32_t)(markerLength & (uint32_t)255));
					baos->write(i | (k << 4));
					baos->write(blengths);
					$var($bytes, bcodes, $new($bytes, numCodes));
					$nc(this->stream)->readFully(bcodes);
					baos->write(bcodes);
				}
			}
			baos->write((int32_t)(int8_t)255);
			baos->write((int32_t)(int8_t)TIFFOldJPEGDecompressor::SOF0);
			int16_t sval = (int16_t)(8 + 3 * this->samplesPerPixel);
			baos->write((int32_t)(int8_t)((int32_t)(((int32_t)((uint32_t)sval >> 8)) & (uint32_t)255)));
			baos->write((int32_t)(int8_t)((int32_t)(sval & (uint32_t)255)));
			baos->write((int32_t)(int8_t)8);
			sval = (int16_t)this->srcHeight;
			baos->write((int32_t)(int8_t)((int32_t)(((int32_t)((uint32_t)sval >> 8)) & (uint32_t)255)));
			baos->write((int32_t)(int8_t)((int32_t)(sval & (uint32_t)255)));
			sval = (int16_t)this->srcWidth;
			baos->write((int32_t)(int8_t)((int32_t)(((int32_t)((uint32_t)sval >> 8)) & (uint32_t)255)));
			baos->write((int32_t)(int8_t)((int32_t)(sval & (uint32_t)255)));
			baos->write((int32_t)(int8_t)this->samplesPerPixel);
			if (this->samplesPerPixel == 1) {
				baos->write((int32_t)(int8_t)1);
				baos->write((int32_t)(int8_t)17);
				baos->write((int32_t)(int8_t)0);
			} else {
				for (int32_t i = 0; i < 3; ++i) {
					baos->write((int32_t)(int8_t)(i + 1));
					baos->write((int32_t)((i != 0) ? (int8_t)17 : (int8_t)((((int32_t)(this->subsamplingX & (uint32_t)15)) << 4) | ((int32_t)(this->subsamplingY & (uint32_t)15)))));
					baos->write((int32_t)(int8_t)i);
				}
			}
			$assign(f, tim->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_RESTART_INTERVAL));
			if (f != nullptr) {
				char16_t restartInterval = $nc($(f->getAsChars()))->get(0);
				if (restartInterval != 0) {
					baos->write((int32_t)(int8_t)255);
					baos->write((int32_t)(int8_t)TIFFOldJPEGDecompressor::DRI);
					sval = (int16_t)4;
					baos->write((int32_t)(int8_t)((int32_t)(((int32_t)((uint32_t)sval >> 8)) & (uint32_t)255)));
					baos->write((int32_t)(int8_t)((int32_t)(sval & (uint32_t)255)));
					baos->write((int32_t)(int8_t)((int32_t)(((int32_t)((uint32_t)restartInterval >> 8)) & (uint32_t)255)));
					baos->write((int32_t)(int8_t)((int32_t)(restartInterval & (uint32_t)255)));
				}
			}
			$set(this, tables, baos->toByteArray());
		}
		int32_t idx = 0;
		int32_t idxMax = $nc(this->tables)->length - 1;
		while (idx < idxMax) {
			if (((int32_t)($nc(this->tables)->get(idx) & (uint32_t)255)) == 255 && ((int32_t)($nc(this->tables)->get(idx + 1) & (uint32_t)255)) == TIFFOldJPEGDecompressor::SOF0) {
				this->SOFPosition = idx;
				break;
			}
			++idx;
		}
		if (this->SOFPosition == -1) {
			$var($bytes, tmpTables, $new($bytes, $nc(this->tables)->length + 10 + 3 * this->samplesPerPixel));
			$System::arraycopy(this->tables, 0, tmpTables, 0, $nc(this->tables)->length);
			int32_t tmpOffset = $nc(this->tables)->length;
			this->SOFPosition = $nc(this->tables)->length;
			$set(this, tables, tmpTables);
			$nc(this->tables)->set(tmpOffset++, (int8_t)255);
			$nc(this->tables)->set(tmpOffset++, (int8_t)TIFFOldJPEGDecompressor::SOF0);
			int16_t sval = (int16_t)(8 + 3 * this->samplesPerPixel);
			$nc(this->tables)->set(tmpOffset++, (int8_t)((int32_t)(((int32_t)((uint32_t)sval >> 8)) & (uint32_t)255)));
			$nc(this->tables)->set(tmpOffset++, (int8_t)((int32_t)(sval & (uint32_t)255)));
			$nc(this->tables)->set(tmpOffset++, (int8_t)8);
			sval = (int16_t)this->srcHeight;
			$nc(this->tables)->set(tmpOffset++, (int8_t)((int32_t)(((int32_t)((uint32_t)sval >> 8)) & (uint32_t)255)));
			$nc(this->tables)->set(tmpOffset++, (int8_t)((int32_t)(sval & (uint32_t)255)));
			sval = (int16_t)this->srcWidth;
			$nc(this->tables)->set(tmpOffset++, (int8_t)((int32_t)(((int32_t)((uint32_t)sval >> 8)) & (uint32_t)255)));
			$nc(this->tables)->set(tmpOffset++, (int8_t)((int32_t)(sval & (uint32_t)255)));
			$nc(this->tables)->set(tmpOffset++, (int8_t)this->samplesPerPixel);
			if (this->samplesPerPixel == 1) {
				$nc(this->tables)->set(tmpOffset++, (int8_t)1);
				$nc(this->tables)->set(tmpOffset++, (int8_t)17);
				$nc(this->tables)->set(tmpOffset++, (int8_t)0);
			} else {
				for (int32_t i = 0; i < 3; ++i) {
					$nc(this->tables)->set(tmpOffset++, (int8_t)(i + 1));
					$nc(this->tables)->set(tmpOffset++, (i != 0) ? (int8_t)17 : (int8_t)((((int32_t)(this->subsamplingX & (uint32_t)15)) << 4) | ((int32_t)(this->subsamplingY & (uint32_t)15))));
					$nc(this->tables)->set(tmpOffset++, (int8_t)i);
				}
			}
		}
		$nc(this->stream)->mark();
		$nc(this->stream)->seek(segmentOffsets->get(0));
		bool var$2 = $nc(this->stream)->read() == 255;
		if (var$2 && $nc(this->stream)->read() == TIFFOldJPEGDecompressor::SOS) {
			int32_t var$3 = ($nc(this->stream)->read() << 8);
			int32_t SOSLength = var$3 | $nc(this->stream)->read();
			$set(this, SOSMarker, $new($bytes, SOSLength + 2));
			$nc(this->SOSMarker)->set(0, (int8_t)255);
			$nc(this->SOSMarker)->set(1, (int8_t)TIFFOldJPEGDecompressor::SOS);
			$nc(this->SOSMarker)->set(2, (int8_t)(((int32_t)(SOSLength & (uint32_t)0x0000FF00)) >> 8));
			$nc(this->SOSMarker)->set(3, (int8_t)((int32_t)(SOSLength & (uint32_t)255)));
			$nc(this->stream)->readFully(this->SOSMarker, 4, SOSLength - 2);
		} else {
			$set(this, SOSMarker, $new($bytes, 2 + 6 + 2 * this->samplesPerPixel));
			int32_t SOSMarkerIndex = 0;
			$nc(this->SOSMarker)->set(SOSMarkerIndex++, (int8_t)255);
			$nc(this->SOSMarker)->set(SOSMarkerIndex++, (int8_t)TIFFOldJPEGDecompressor::SOS);
			int16_t sval = (int16_t)(6 + 2 * this->samplesPerPixel);
			$nc(this->SOSMarker)->set(SOSMarkerIndex++, (int8_t)((int32_t)(((int32_t)((uint32_t)sval >> 8)) & (uint32_t)255)));
			$nc(this->SOSMarker)->set(SOSMarkerIndex++, (int8_t)((int32_t)(sval & (uint32_t)255)));
			$nc(this->SOSMarker)->set(SOSMarkerIndex++, (int8_t)this->samplesPerPixel);
			if (this->samplesPerPixel == 1) {
				$nc(this->SOSMarker)->set(SOSMarkerIndex++, (int8_t)1);
				$nc(this->SOSMarker)->set(SOSMarkerIndex++, (int8_t)0);
			} else {
				for (int32_t i = 0; i < 3; ++i) {
					$nc(this->SOSMarker)->set(SOSMarkerIndex++, (int8_t)(i + 1));
					$nc(this->SOSMarker)->set(SOSMarkerIndex++, (int8_t)((i << 4) | i));
				}
			}
			$nc(this->SOSMarker)->set(SOSMarkerIndex++, (int8_t)0);
			$nc(this->SOSMarker)->set(SOSMarkerIndex++, (int8_t)63);
			$nc(this->SOSMarker)->set(SOSMarkerIndex++, (int8_t)0);
		}
		$nc(this->stream)->reset();
		this->isInitialized = true;
	}
}

void TIFFOldJPEGDecompressor::decodeRaw($bytes* b, int32_t dstOffset, int32_t bitsPerPixel, int32_t scanlineStride) {
	initialize();
	$var($TIFFImageMetadata, tim, $cast($TIFFImageMetadata, this->metadata));
	if (this->JPEGStreamOffset != nullptr) {
		$nc(this->stream)->seek($nc(this->JPEGStreamOffset)->longValue());
		$nc(this->JPEGReader)->setInput(this->stream, false, true);
	} else {
		int32_t tableLength = $nc(this->tables)->length;
		int32_t bufLength = tableLength + $nc(this->SOSMarker)->length + this->byteCount + 2;
		$var($bytes, buf, $new($bytes, bufLength));
		$System::arraycopy(this->tables, 0, buf, 0, tableLength);
		int32_t bufOffset = tableLength;
		int16_t sval = (int16_t)this->srcHeight;
		buf->set(this->SOFPosition + 5, (int8_t)((int32_t)(((int32_t)((uint32_t)sval >> 8)) & (uint32_t)255)));
		buf->set(this->SOFPosition + 6, (int8_t)((int32_t)(sval & (uint32_t)255)));
		sval = (int16_t)this->srcWidth;
		buf->set(this->SOFPosition + 7, (int8_t)((int32_t)(((int32_t)((uint32_t)sval >> 8)) & (uint32_t)255)));
		buf->set(this->SOFPosition + 8, (int8_t)((int32_t)(sval & (uint32_t)255)));
		$nc(this->stream)->seek(this->offset);
		$var($bytes, twoBytes, $new($bytes, 2));
		$nc(this->stream)->readFully(twoBytes);
		if (!(((int32_t)(twoBytes->get(0) & (uint32_t)255)) == 255 && ((int32_t)(twoBytes->get(1) & (uint32_t)255)) == TIFFOldJPEGDecompressor::SOS)) {
			$System::arraycopy(this->SOSMarker, 0, buf, bufOffset, $nc(this->SOSMarker)->length);
			bufOffset += $nc(this->SOSMarker)->length;
		}
		buf->set(bufOffset++, twoBytes->get(0));
		buf->set(bufOffset++, twoBytes->get(1));
		$nc(this->stream)->readFully(buf, bufOffset, this->byteCount - 2);
		bufOffset += this->byteCount - 2;
		buf->set(bufOffset++, (int8_t)255);
		buf->set(bufOffset++, (int8_t)$TIFFJPEGDecompressor::EOI);
		$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, buf, 0, bufOffset));
		$var($ImageInputStream, is, $new($MemoryCacheImageInputStream, bais));
		$nc(this->JPEGReader)->setInput(is, true, true);
	}
	$nc(this->JPEGParam)->setDestination(this->rawImage);
	$nc(this->JPEGReader)->read(0, this->JPEGParam);
}

void TIFFOldJPEGDecompressor::finalize() {
	$TIFFJPEGDecompressor::finalize();
	$nc(this->JPEGReader)->dispose();
}

TIFFOldJPEGDecompressor::TIFFOldJPEGDecompressor() {
}

$Class* TIFFOldJPEGDecompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFOldJPEGDecompressor, name, initialize, &_TIFFOldJPEGDecompressor_ClassInfo_, allocate$TIFFOldJPEGDecompressor);
	return class$;
}

$Class* TIFFOldJPEGDecompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com