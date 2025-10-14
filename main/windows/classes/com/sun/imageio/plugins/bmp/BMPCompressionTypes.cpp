#include <com/sun/imageio/plugins/bmp/BMPCompressionTypes.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$FieldInfo _BMPCompressionTypes_FieldInfo_[] = {
	{"compressionTypeNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BMPCompressionTypes, compressionTypeNames)},
	{}
};

$MethodInfo _BMPCompressionTypes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BMPCompressionTypes::*)()>(&BMPCompressionTypes::init$))},
	{"getCompressionTypes", "()[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)()>(&BMPCompressionTypes::getCompressionTypes))},
	{"getName", "(I)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(int32_t)>(&BMPCompressionTypes::getName))},
	{"getType", "(Ljava/lang/String;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*)>(&BMPCompressionTypes::getType))},
	{}
};

$ClassInfo _BMPCompressionTypes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.bmp.BMPCompressionTypes",
	"java.lang.Object",
	nullptr,
	_BMPCompressionTypes_FieldInfo_,
	_BMPCompressionTypes_MethodInfo_
};

$Object* allocate$BMPCompressionTypes($Class* clazz) {
	return $of($alloc(BMPCompressionTypes));
}

$StringArray* BMPCompressionTypes::compressionTypeNames = nullptr;

void BMPCompressionTypes::init$() {
}

int32_t BMPCompressionTypes::getType($String* typeString) {
	$init(BMPCompressionTypes);
	for (int32_t i = 0; i < $nc(BMPCompressionTypes::compressionTypeNames)->length; ++i) {
		if ($nc($nc(BMPCompressionTypes::compressionTypeNames)->get(i))->equals(typeString)) {
			return i;
		}
	}
	return 0;
}

$String* BMPCompressionTypes::getName(int32_t type) {
	$init(BMPCompressionTypes);
	return $nc(BMPCompressionTypes::compressionTypeNames)->get(type);
}

$StringArray* BMPCompressionTypes::getCompressionTypes() {
	$init(BMPCompressionTypes);
	return $cast($StringArray, $nc(BMPCompressionTypes::compressionTypeNames)->clone());
}

void clinit$BMPCompressionTypes($Class* class$) {
	$assignStatic(BMPCompressionTypes::compressionTypeNames, $new($StringArray, {
		"BI_RGB"_s,
		"BI_RLE8"_s,
		"BI_RLE4"_s,
		"BI_BITFIELDS"_s,
		"BI_JPEG"_s,
		"BI_PNG"_s
	}));
}

BMPCompressionTypes::BMPCompressionTypes() {
}

$Class* BMPCompressionTypes::load$($String* name, bool initialize) {
	$loadClass(BMPCompressionTypes, name, initialize, &_BMPCompressionTypes_ClassInfo_, clinit$BMPCompressionTypes, allocate$BMPCompressionTypes);
	return class$;
}

$Class* BMPCompressionTypes::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com