#include <com/sun/imageio/plugins/tiff/TIFFJPEGCompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFBaseJPEGCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>
#include <com/sun/imageio/plugins/tiff/TIFFIFD.h>
#include <com/sun/imageio/plugins/tiff/TIFFImageMetadata.h>
#include <com/sun/imageio/plugins/tiff/TIFFJPEGCompressor$JPEGSPIFilter.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/plugins/jpeg/JPEGImageWriteParam.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFField.h>
#include <javax/imageio/plugins/tiff/TIFFTag.h>
#include <javax/imageio/spi/IIORegistry.h>
#include <javax/imageio/spi/ImageReaderSpi.h>
#include <javax/imageio/spi/ServiceRegistry$Filter.h>
#include <javax/imageio/stream/MemoryCacheImageInputStream.h>
#include <javax/imageio/stream/MemoryCacheImageOutputStream.h>
#include <jcpp.h>

#undef CHROMA_SUBSAMPLING
#undef COMPRESSION_JPEG
#undef TAG_JPEG_TABLES
#undef TAG_REFERENCE_BLACK_WHITE
#undef TAG_SAMPLES_PER_PIXEL
#undef TAG_Y_CB_CR_POSITIONING
#undef TAG_Y_CB_CR_SUBSAMPLING
#undef TIFF_RATIONAL
#undef TIFF_SHORT
#undef TIFF_UNDEFINED
#undef Y_CB_CR_POSITIONING_CENTERED

using $longArray2 = $Array<int64_t, 2>;
using $TIFFBaseJPEGCompressor = ::com::sun::imageio::plugins::tiff::TIFFBaseJPEGCompressor;
using $TIFFCompressor = ::com::sun::imageio::plugins::tiff::TIFFCompressor;
using $TIFFIFD = ::com::sun::imageio::plugins::tiff::TIFFIFD;
using $TIFFImageMetadata = ::com::sun::imageio::plugins::tiff::TIFFImageMetadata;
using $TIFFJPEGCompressor$JPEGSPIFilter = ::com::sun::imageio::plugins::tiff::TIFFJPEGCompressor$JPEGSPIFilter;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $JPEGImageWriteParam = ::javax::imageio::plugins::jpeg::JPEGImageWriteParam;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $TIFFDirectory = ::javax::imageio::plugins::tiff::TIFFDirectory;
using $TIFFField = ::javax::imageio::plugins::tiff::TIFFField;
using $TIFFTag = ::javax::imageio::plugins::tiff::TIFFTag;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;
using $IIORegistry = ::javax::imageio::spi::IIORegistry;
using $ImageReaderSpi = ::javax::imageio::spi::ImageReaderSpi;
using $ServiceRegistry = ::javax::imageio::spi::ServiceRegistry;
using $ServiceRegistry$Filter = ::javax::imageio::spi::ServiceRegistry$Filter;
using $ImageInputStreamImpl = ::javax::imageio::stream::ImageInputStreamImpl;
using $MemoryCacheImageInputStream = ::javax::imageio::stream::MemoryCacheImageInputStream;
using $MemoryCacheImageOutputStream = ::javax::imageio::stream::MemoryCacheImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFJPEGCompressor_FieldInfo_[] = {
	{"CHROMA_SUBSAMPLING", "I", nullptr, $STATIC | $FINAL, $constField(TIFFJPEGCompressor, CHROMA_SUBSAMPLING)},
	{}
};

$MethodInfo _TIFFJPEGCompressor_MethodInfo_[] = {
	{"<init>", "(Ljavax/imageio/ImageWriteParam;)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFJPEGCompressor::*)($ImageWriteParam*)>(&TIFFJPEGCompressor::init$))},
	{"getJPEGTablesReader", "()Ljavax/imageio/ImageReader;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ImageReader*(*)()>(&TIFFJPEGCompressor::getJPEGTablesReader))},
	{"setMetadata", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TIFFJPEGCompressor_InnerClassesInfo_[] = {
	{"com.sun.imageio.plugins.tiff.TIFFJPEGCompressor$JPEGSPIFilter", "com.sun.imageio.plugins.tiff.TIFFJPEGCompressor", "JPEGSPIFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TIFFJPEGCompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFJPEGCompressor",
	"com.sun.imageio.plugins.tiff.TIFFBaseJPEGCompressor",
	nullptr,
	_TIFFJPEGCompressor_FieldInfo_,
	_TIFFJPEGCompressor_MethodInfo_,
	nullptr,
	nullptr,
	_TIFFJPEGCompressor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.imageio.plugins.tiff.TIFFJPEGCompressor$JPEGSPIFilter"
};

$Object* allocate$TIFFJPEGCompressor($Class* clazz) {
	return $of($alloc(TIFFJPEGCompressor));
}

$ImageReader* TIFFJPEGCompressor::getJPEGTablesReader() {
	$init(TIFFJPEGCompressor);
	$var($ImageReader, jpegReader, nullptr);
	try {
		$var($IIORegistry, registry, $IIORegistry::getDefaultInstance());
		$load($ImageReaderSpi);
		$var($Iterator, readerSPIs, $nc(registry)->getServiceProviders($ImageReaderSpi::class$, $$new($TIFFJPEGCompressor$JPEGSPIFilter), true));
		if ($nc(readerSPIs)->hasNext()) {
			$var($ImageReaderSpi, jpegReaderSPI, $cast($ImageReaderSpi, readerSPIs->next()));
			$assign(jpegReader, $nc(jpegReaderSPI)->createReaderInstance());
		}
	} catch ($Exception&) {
		$catch();
	}
	return jpegReader;
}

void TIFFJPEGCompressor::init$($ImageWriteParam* param) {
	$TIFFBaseJPEGCompressor::init$("JPEG"_s, $BaselineTIFFTagSet::COMPRESSION_JPEG, false, param);
}

void TIFFJPEGCompressor::setMetadata($IIOMetadata* metadata) {
	$TIFFBaseJPEGCompressor::setMetadata(metadata);
	if ($instanceOf($TIFFImageMetadata, metadata)) {
		$var($TIFFImageMetadata, tim, $cast($TIFFImageMetadata, metadata));
		$var($TIFFIFD, rootIFD, $nc(tim)->getRootIFD());
		$var($BaselineTIFFTagSet, base, $BaselineTIFFTagSet::getInstance());
		$var($TIFFField, f, tim->getTIFFField($BaselineTIFFTagSet::TAG_SAMPLES_PER_PIXEL));
		int32_t numBands = $nc(f)->getAsInt(0);
		if (numBands == 1) {
			$nc(rootIFD)->removeTIFFField($BaselineTIFFTagSet::TAG_Y_CB_CR_SUBSAMPLING);
			rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_Y_CB_CR_POSITIONING);
			rootIFD->removeTIFFField($BaselineTIFFTagSet::TAG_REFERENCE_BLACK_WHITE);
		} else {
			$var($TIFFField, YCbCrSubSamplingField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_Y_CB_CR_SUBSAMPLING)), $TIFFTag::TIFF_SHORT, 2, $of($$new($chars, {
				(char16_t)TIFFJPEGCompressor::CHROMA_SUBSAMPLING,
				(char16_t)TIFFJPEGCompressor::CHROMA_SUBSAMPLING
			}))));
			$nc(rootIFD)->addTIFFField(YCbCrSubSamplingField);
			$var($TIFFField, YCbCrPositioningField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_Y_CB_CR_POSITIONING)), $TIFFTag::TIFF_SHORT, 1, $of($$new($chars, {(char16_t)$BaselineTIFFTagSet::Y_CB_CR_POSITIONING_CENTERED}))));
			rootIFD->addTIFFField(YCbCrPositioningField);
			$var($TIFFField, referenceBlackWhiteField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_REFERENCE_BLACK_WHITE)), $TIFFTag::TIFF_RATIONAL, 6, $of($$new($longArray2, {
				$$new($longs, {
					(int64_t)0,
					(int64_t)1
				}),
				$$new($longs, {
					(int64_t)255,
					(int64_t)1
				}),
				$$new($longs, {
					(int64_t)128,
					(int64_t)1
				}),
				$$new($longs, {
					(int64_t)255,
					(int64_t)1
				}),
				$$new($longs, {
					(int64_t)128,
					(int64_t)1
				}),
				$$new($longs, {
					(int64_t)255,
					(int64_t)1
				})
			}))));
			rootIFD->addTIFFField(referenceBlackWhiteField);
		}
		$var($TIFFField, JPEGTablesField, tim->getTIFFField($BaselineTIFFTagSet::TAG_JPEG_TABLES));
		if (JPEGTablesField != nullptr) {
			initJPEGWriter(true, false);
		}
		if (JPEGTablesField != nullptr && this->JPEGWriter != nullptr) {
			this->writeAbbreviatedStream = true;
			if (JPEGTablesField->getCount() > 0) {
				$var($bytes, tables, JPEGTablesField->getAsBytes());
				$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, tables));
				$var($MemoryCacheImageInputStream, iis, $new($MemoryCacheImageInputStream, bais));
				$var($ImageReader, jpegReader, getJPEGTablesReader());
				$nc(jpegReader)->setInput(iis);
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							$set(this, JPEGStreamMetadata, jpegReader->getStreamMetadata());
						} catch ($Exception&) {
							$var($Exception, e, $catch());
							$set(this, JPEGStreamMetadata, nullptr);
						}
					} catch ($Throwable&) {
						$assign(var$0, $catch());
					} /*finally*/ {
						jpegReader->reset();
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
			if (this->JPEGStreamMetadata == nullptr) {
				$set(this, JPEGStreamMetadata, $nc(this->JPEGWriter)->getDefaultStreamMetadata(this->JPEGParam));
				$var($ByteArrayOutputStream, tableByteStream, $new($ByteArrayOutputStream));
				$var($MemoryCacheImageOutputStream, tableStream, $new($MemoryCacheImageOutputStream, tableByteStream));
				$nc(this->JPEGWriter)->setOutput(tableStream);
				try {
					$nc(this->JPEGWriter)->prepareWriteSequence(this->JPEGStreamMetadata);
					tableStream->flush();
					$nc(this->JPEGWriter)->endWriteSequence();
					$var($bytes, tables, tableByteStream->toByteArray());
					$assign(JPEGTablesField, $new($TIFFField, $($nc(base)->getTag($BaselineTIFFTagSet::TAG_JPEG_TABLES)), $TIFFTag::TIFF_UNDEFINED, $nc(tables)->length, $of(tables)));
					$nc(rootIFD)->addTIFFField(JPEGTablesField);
				} catch ($Exception&) {
					$var($Exception, e, $catch());
					$nc(rootIFD)->removeTIFFField($BaselineTIFFTagSet::TAG_JPEG_TABLES);
					this->writeAbbreviatedStream = false;
				}
			}
		} else {
			$nc(rootIFD)->removeTIFFField($BaselineTIFFTagSet::TAG_JPEG_TABLES);
			initJPEGWriter(false, false);
		}
	}
}

TIFFJPEGCompressor::TIFFJPEGCompressor() {
}

$Class* TIFFJPEGCompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFJPEGCompressor, name, initialize, &_TIFFJPEGCompressor_ClassInfo_, allocate$TIFFJPEGCompressor);
	return class$;
}

$Class* TIFFJPEGCompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com