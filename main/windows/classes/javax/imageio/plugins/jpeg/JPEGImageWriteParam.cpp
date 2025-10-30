#include <javax/imageio/plugins/jpeg/JPEGImageWriteParam.h>

#include <com/sun/imageio/plugins/jpeg/JPEG.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/Locale.h>
#include <javax/imageio/ImageWriteParam.h>
#include <javax/imageio/plugins/jpeg/JPEGHuffmanTable.h>
#include <javax/imageio/plugins/jpeg/JPEGQTable.h>
#include <jcpp.h>

#undef DEFAULT_QUALITY
#undef MODE_DISABLED
#undef MODE_EXPLICIT

using $JPEGHuffmanTableArray = $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>;
using $JPEGQTableArray = $Array<::javax::imageio::plugins::jpeg::JPEGQTable>;
using $JPEG = ::com::sun::imageio::plugins::jpeg::JPEG;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;
using $JPEGHuffmanTable = ::javax::imageio::plugins::jpeg::JPEGHuffmanTable;
using $JPEGQTable = ::javax::imageio::plugins::jpeg::JPEGQTable;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace jpeg {

$FieldInfo _JPEGImageWriteParam_FieldInfo_[] = {
	{"qTables", "[Ljavax/imageio/plugins/jpeg/JPEGQTable;", nullptr, $PRIVATE, $field(JPEGImageWriteParam, qTables)},
	{"DCHuffmanTables", "[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PRIVATE, $field(JPEGImageWriteParam, DCHuffmanTables)},
	{"ACHuffmanTables", "[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PRIVATE, $field(JPEGImageWriteParam, ACHuffmanTables)},
	{"optimizeHuffman", "Z", nullptr, $PRIVATE, $field(JPEGImageWriteParam, optimizeHuffman)},
	{"compressionNames", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(JPEGImageWriteParam, compressionNames)},
	{"qualityVals", "[F", nullptr, $PRIVATE, $field(JPEGImageWriteParam, qualityVals)},
	{"qualityDescs", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(JPEGImageWriteParam, qualityDescs)},
	{}
};

$MethodInfo _JPEGImageWriteParam_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(static_cast<void(JPEGImageWriteParam::*)($Locale*)>(&JPEGImageWriteParam::init$))},
	{"areTablesSet", "()Z", nullptr, $PUBLIC},
	{"getACHuffmanTables", "()[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PUBLIC},
	{"getCompressionQualityDescriptions", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCompressionQualityValues", "()[F", nullptr, $PUBLIC},
	{"getDCHuffmanTables", "()[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PUBLIC},
	{"getOptimizeHuffmanTables", "()Z", nullptr, $PUBLIC},
	{"getQTables", "()[Ljavax/imageio/plugins/jpeg/JPEGQTable;", nullptr, $PUBLIC},
	{"isCompressionLossless", "()Z", nullptr, $PUBLIC},
	{"setEncodeTables", "([Ljavax/imageio/plugins/jpeg/JPEGQTable;[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;)V", nullptr, $PUBLIC},
	{"setOptimizeHuffmanTables", "(Z)V", nullptr, $PUBLIC},
	{"unsetCompression", "()V", nullptr, $PUBLIC},
	{"unsetEncodeTables", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JPEGImageWriteParam_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.plugins.jpeg.JPEGImageWriteParam",
	"javax.imageio.ImageWriteParam",
	nullptr,
	_JPEGImageWriteParam_FieldInfo_,
	_JPEGImageWriteParam_MethodInfo_
};

$Object* allocate$JPEGImageWriteParam($Class* clazz) {
	return $of($alloc(JPEGImageWriteParam));
}

void JPEGImageWriteParam::init$($Locale* locale) {
	$ImageWriteParam::init$(locale);
	$set(this, qTables, nullptr);
	$set(this, DCHuffmanTables, nullptr);
	$set(this, ACHuffmanTables, nullptr);
	this->optimizeHuffman = false;
	$set(this, compressionNames, $new($StringArray, {"JPEG"_s}));
	$set(this, qualityVals, $new($floats, {
		0.0f,
		0.3f,
		0.75f,
		1.0f
	}));
	$set(this, qualityDescs, $new($StringArray, {
		"Low quality"_s,
		"Medium quality"_s,
		"Visually lossless"_s
	}));
	this->canWriteProgressive$ = true;
	this->progressiveMode = $ImageWriteParam::MODE_DISABLED;
	this->canWriteCompressed$ = true;
	$set(this, compressionTypes, this->compressionNames);
	$set(this, compressionType, $nc(this->compressionTypes)->get(0));
	$init($JPEG);
	this->compressionQuality = $JPEG::DEFAULT_QUALITY;
}

void JPEGImageWriteParam::unsetCompression() {
	if (getCompressionMode() != $ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Compression mode not MODE_EXPLICIT!"_s);
	}
	$init($JPEG);
	this->compressionQuality = $JPEG::DEFAULT_QUALITY;
}

bool JPEGImageWriteParam::isCompressionLossless() {
	if (getCompressionMode() != $ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Compression mode not MODE_EXPLICIT!"_s);
	}
	return false;
}

$StringArray* JPEGImageWriteParam::getCompressionQualityDescriptions() {
	if (getCompressionMode() != $ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Compression mode not MODE_EXPLICIT!"_s);
	}
	bool var$0 = (getCompressionTypes() != nullptr);
	if (var$0 && (getCompressionType() == nullptr)) {
		$throwNew($IllegalStateException, "No compression type set!"_s);
	}
	return $cast($StringArray, $nc(this->qualityDescs)->clone());
}

$floats* JPEGImageWriteParam::getCompressionQualityValues() {
	if (getCompressionMode() != $ImageWriteParam::MODE_EXPLICIT) {
		$throwNew($IllegalStateException, "Compression mode not MODE_EXPLICIT!"_s);
	}
	bool var$0 = (getCompressionTypes() != nullptr);
	if (var$0 && (getCompressionType() == nullptr)) {
		$throwNew($IllegalStateException, "No compression type set!"_s);
	}
	return $cast($floats, $nc(this->qualityVals)->clone());
}

bool JPEGImageWriteParam::areTablesSet() {
	return (this->qTables != nullptr);
}

void JPEGImageWriteParam::setEncodeTables($JPEGQTableArray* qTables, $JPEGHuffmanTableArray* DCHuffmanTables, $JPEGHuffmanTableArray* ACHuffmanTables) {
	if ((qTables == nullptr) || (DCHuffmanTables == nullptr) || (ACHuffmanTables == nullptr) || ($nc(qTables)->length > 4) || ($nc(DCHuffmanTables)->length > 4) || ($nc(ACHuffmanTables)->length > 4) || ($nc(DCHuffmanTables)->length != $nc(ACHuffmanTables)->length)) {
		$throwNew($IllegalArgumentException, "Invalid JPEG table arrays"_s);
	}
	$set(this, qTables, $cast($JPEGQTableArray, $nc(qTables)->clone()));
	$set(this, DCHuffmanTables, $cast($JPEGHuffmanTableArray, $nc(DCHuffmanTables)->clone()));
	$set(this, ACHuffmanTables, $cast($JPEGHuffmanTableArray, $nc(ACHuffmanTables)->clone()));
}

void JPEGImageWriteParam::unsetEncodeTables() {
	$set(this, qTables, nullptr);
	$set(this, DCHuffmanTables, nullptr);
	$set(this, ACHuffmanTables, nullptr);
}

$JPEGQTableArray* JPEGImageWriteParam::getQTables() {
	return (this->qTables != nullptr) ? $cast($JPEGQTableArray, $nc(this->qTables)->clone()) : ($JPEGQTableArray*)nullptr;
}

$JPEGHuffmanTableArray* JPEGImageWriteParam::getDCHuffmanTables() {
	return (this->DCHuffmanTables != nullptr) ? $cast($JPEGHuffmanTableArray, $nc(this->DCHuffmanTables)->clone()) : ($JPEGHuffmanTableArray*)nullptr;
}

$JPEGHuffmanTableArray* JPEGImageWriteParam::getACHuffmanTables() {
	return (this->ACHuffmanTables != nullptr) ? $cast($JPEGHuffmanTableArray, $nc(this->ACHuffmanTables)->clone()) : ($JPEGHuffmanTableArray*)nullptr;
}

void JPEGImageWriteParam::setOptimizeHuffmanTables(bool optimize) {
	this->optimizeHuffman = optimize;
}

bool JPEGImageWriteParam::getOptimizeHuffmanTables() {
	return this->optimizeHuffman;
}

JPEGImageWriteParam::JPEGImageWriteParam() {
}

$Class* JPEGImageWriteParam::load$($String* name, bool initialize) {
	$loadClass(JPEGImageWriteParam, name, initialize, &_JPEGImageWriteParam_ClassInfo_, allocate$JPEGImageWriteParam);
	return class$;
}

$Class* JPEGImageWriteParam::class$ = nullptr;

			} // jpeg
		} // plugins
	} // imageio
} // javax