#include <com/sun/imageio/plugins/tiff/TIFFCompressor.h>

#include <com/sun/imageio/plugins/tiff/TIFFImageWriter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/metadata/IIOMetadata.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <jcpp.h>

using $TIFFImageWriter = ::com::sun::imageio::plugins::tiff::TIFFImageWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $IIOMetadata = ::javax::imageio::metadata::IIOMetadata;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFCompressor_FieldInfo_[] = {
	{"writer", "Ljavax/imageio/ImageWriter;", nullptr, $PROTECTED, $field(TIFFCompressor, writer)},
	{"metadata", "Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PROTECTED, $field(TIFFCompressor, metadata)},
	{"compressionType", "Ljava/lang/String;", nullptr, $PROTECTED, $field(TIFFCompressor, compressionType)},
	{"compressionTagValue", "I", nullptr, $PROTECTED, $field(TIFFCompressor, compressionTagValue)},
	{"isCompressionLossless", "Z", nullptr, $PROTECTED, $field(TIFFCompressor, isCompressionLossless$)},
	{"stream", "Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PROTECTED, $field(TIFFCompressor, stream)},
	{}
};

$MethodInfo _TIFFCompressor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(TIFFCompressor::*)($String*,int32_t,bool)>(&TIFFCompressor::init$))},
	{"encode", "([BIII[II)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getCompressionTagValue", "()I", nullptr, $PUBLIC},
	{"getCompressionType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMetadata", "()Ljavax/imageio/metadata/IIOMetadata;", nullptr, $PUBLIC},
	{"getStream", "()Ljavax/imageio/stream/ImageOutputStream;", nullptr, $PUBLIC},
	{"getWriter", "()Ljavax/imageio/ImageWriter;", nullptr, $PUBLIC},
	{"isCompressionLossless", "()Z", nullptr, $PUBLIC},
	{"setMetadata", "(Ljavax/imageio/metadata/IIOMetadata;)V", nullptr, $PUBLIC},
	{"setStream", "(Ljavax/imageio/stream/ImageOutputStream;)V", nullptr, $PUBLIC},
	{"setWriter", "(Ljavax/imageio/ImageWriter;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFCompressor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.imageio.plugins.tiff.TIFFCompressor",
	"java.lang.Object",
	nullptr,
	_TIFFCompressor_FieldInfo_,
	_TIFFCompressor_MethodInfo_
};

$Object* allocate$TIFFCompressor($Class* clazz) {
	return $of($alloc(TIFFCompressor));
}

void TIFFCompressor::init$($String* compressionType, int32_t compressionTagValue, bool isCompressionLossless) {
	if (compressionType == nullptr) {
		$throwNew($NullPointerException, "compressionType == null"_s);
	} else if (compressionTagValue < 1) {
		$throwNew($IllegalArgumentException, "compressionTagValue < 1"_s);
	}
	$set(this, compressionType, compressionType);
	int32_t compressionIndex = -1;
	$init($TIFFImageWriter);
	$var($StringArray, compressionTypes, $TIFFImageWriter::compressionTypes);
	int32_t len = $nc(compressionTypes)->length;
	for (int32_t i = 0; i < len; ++i) {
		if ($nc(compressionTypes->get(i))->equals(compressionType)) {
			compressionIndex = i;
			break;
		}
	}
	if (compressionIndex != -1) {
		this->compressionTagValue = $nc($TIFFImageWriter::compressionNumbers)->get(compressionIndex);
		this->isCompressionLossless$ = $nc($TIFFImageWriter::isCompressionLossless)->get(compressionIndex);
	} else {
		this->compressionTagValue = compressionTagValue;
		this->isCompressionLossless$ = isCompressionLossless;
	}
}

$String* TIFFCompressor::getCompressionType() {
	return this->compressionType;
}

int32_t TIFFCompressor::getCompressionTagValue() {
	return this->compressionTagValue;
}

bool TIFFCompressor::isCompressionLossless() {
	return this->isCompressionLossless$;
}

void TIFFCompressor::setStream($ImageOutputStream* stream) {
	$set(this, stream, stream);
}

$ImageOutputStream* TIFFCompressor::getStream() {
	return this->stream;
}

void TIFFCompressor::setWriter($ImageWriter* writer) {
	$set(this, writer, writer);
}

$ImageWriter* TIFFCompressor::getWriter() {
	return this->writer;
}

void TIFFCompressor::setMetadata($IIOMetadata* metadata) {
	$set(this, metadata, metadata);
}

$IIOMetadata* TIFFCompressor::getMetadata() {
	return this->metadata;
}

TIFFCompressor::TIFFCompressor() {
}

$Class* TIFFCompressor::load$($String* name, bool initialize) {
	$loadClass(TIFFCompressor, name, initialize, &_TIFFCompressor_ClassInfo_, allocate$TIFFCompressor);
	return class$;
}

$Class* TIFFCompressor::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com