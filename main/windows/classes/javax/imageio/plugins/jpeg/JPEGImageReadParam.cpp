#include <javax/imageio/plugins/jpeg/JPEGImageReadParam.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/plugins/jpeg/JPEGHuffmanTable.h>
#include <javax/imageio/plugins/jpeg/JPEGQTable.h>
#include <jcpp.h>

using $JPEGHuffmanTableArray = $Array<::javax::imageio::plugins::jpeg::JPEGHuffmanTable>;
using $JPEGQTableArray = $Array<::javax::imageio::plugins::jpeg::JPEGQTable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $JPEGHuffmanTable = ::javax::imageio::plugins::jpeg::JPEGHuffmanTable;
using $JPEGQTable = ::javax::imageio::plugins::jpeg::JPEGQTable;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace jpeg {

$FieldInfo _JPEGImageReadParam_FieldInfo_[] = {
	{"qTables", "[Ljavax/imageio/plugins/jpeg/JPEGQTable;", nullptr, $PRIVATE, $field(JPEGImageReadParam, qTables)},
	{"DCHuffmanTables", "[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PRIVATE, $field(JPEGImageReadParam, DCHuffmanTables)},
	{"ACHuffmanTables", "[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PRIVATE, $field(JPEGImageReadParam, ACHuffmanTables)},
	{}
};

$MethodInfo _JPEGImageReadParam_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JPEGImageReadParam::*)()>(&JPEGImageReadParam::init$))},
	{"areTablesSet", "()Z", nullptr, $PUBLIC},
	{"getACHuffmanTables", "()[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PUBLIC},
	{"getDCHuffmanTables", "()[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PUBLIC},
	{"getQTables", "()[Ljavax/imageio/plugins/jpeg/JPEGQTable;", nullptr, $PUBLIC},
	{"setDecodeTables", "([Ljavax/imageio/plugins/jpeg/JPEGQTable;[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;[Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;)V", nullptr, $PUBLIC},
	{"unsetDecodeTables", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JPEGImageReadParam_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.plugins.jpeg.JPEGImageReadParam",
	"javax.imageio.ImageReadParam",
	nullptr,
	_JPEGImageReadParam_FieldInfo_,
	_JPEGImageReadParam_MethodInfo_
};

$Object* allocate$JPEGImageReadParam($Class* clazz) {
	return $of($alloc(JPEGImageReadParam));
}

void JPEGImageReadParam::init$() {
	$ImageReadParam::init$();
	$set(this, qTables, nullptr);
	$set(this, DCHuffmanTables, nullptr);
	$set(this, ACHuffmanTables, nullptr);
}

bool JPEGImageReadParam::areTablesSet() {
	return (this->qTables != nullptr);
}

void JPEGImageReadParam::setDecodeTables($JPEGQTableArray* qTables, $JPEGHuffmanTableArray* DCHuffmanTables, $JPEGHuffmanTableArray* ACHuffmanTables) {
	if ((qTables == nullptr) || (DCHuffmanTables == nullptr) || (ACHuffmanTables == nullptr) || ($nc(qTables)->length > 4) || ($nc(DCHuffmanTables)->length > 4) || ($nc(ACHuffmanTables)->length > 4) || ($nc(DCHuffmanTables)->length != $nc(ACHuffmanTables)->length)) {
		$throwNew($IllegalArgumentException, "Invalid JPEG table arrays"_s);
	}
	$set(this, qTables, $cast($JPEGQTableArray, $nc(qTables)->clone()));
	$set(this, DCHuffmanTables, $cast($JPEGHuffmanTableArray, $nc(DCHuffmanTables)->clone()));
	$set(this, ACHuffmanTables, $cast($JPEGHuffmanTableArray, $nc(ACHuffmanTables)->clone()));
}

void JPEGImageReadParam::unsetDecodeTables() {
	$set(this, qTables, nullptr);
	$set(this, DCHuffmanTables, nullptr);
	$set(this, ACHuffmanTables, nullptr);
}

$JPEGQTableArray* JPEGImageReadParam::getQTables() {
	return (this->qTables != nullptr) ? $cast($JPEGQTableArray, $nc(this->qTables)->clone()) : ($JPEGQTableArray*)nullptr;
}

$JPEGHuffmanTableArray* JPEGImageReadParam::getDCHuffmanTables() {
	return (this->DCHuffmanTables != nullptr) ? $cast($JPEGHuffmanTableArray, $nc(this->DCHuffmanTables)->clone()) : ($JPEGHuffmanTableArray*)nullptr;
}

$JPEGHuffmanTableArray* JPEGImageReadParam::getACHuffmanTables() {
	return (this->ACHuffmanTables != nullptr) ? $cast($JPEGHuffmanTableArray, $nc(this->ACHuffmanTables)->clone()) : ($JPEGHuffmanTableArray*)nullptr;
}

JPEGImageReadParam::JPEGImageReadParam() {
}

$Class* JPEGImageReadParam::load$($String* name, bool initialize) {
	$loadClass(JPEGImageReadParam, name, initialize, &_JPEGImageReadParam_ClassInfo_, allocate$JPEGImageReadParam);
	return class$;
}

$Class* JPEGImageReadParam::class$ = nullptr;

			} // jpeg
		} // plugins
	} // imageio
} // javax