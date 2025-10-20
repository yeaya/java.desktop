#include <com/sun/imageio/plugins/tiff/TIFFImageMetadataFormatResources.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$FieldInfo _TIFFImageMetadataFormatResources_FieldInfo_[] = {
	{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFImageMetadataFormatResources, contents)},
	{}
};

$MethodInfo _TIFFImageMetadataFormatResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TIFFImageMetadataFormatResources::*)()>(&TIFFImageMetadataFormatResources::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TIFFImageMetadataFormatResources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.tiff.TIFFImageMetadataFormatResources",
	"java.util.ListResourceBundle",
	nullptr,
	_TIFFImageMetadataFormatResources_FieldInfo_,
	_TIFFImageMetadataFormatResources_MethodInfo_
};

$Object* allocate$TIFFImageMetadataFormatResources($Class* clazz) {
	return $of($alloc(TIFFImageMetadataFormatResources));
}

$ObjectArray2* TIFFImageMetadataFormatResources::contents = nullptr;

void TIFFImageMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* TIFFImageMetadataFormatResources::getContents() {
	return $cast($ObjectArray2, $nc(TIFFImageMetadataFormatResources::contents)->clone());
}

void clinit$TIFFImageMetadataFormatResources($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(TIFFImageMetadataFormatResources::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TIFFIFD"_s),
			$of("An IFD (directory) containing fields"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFIFD/parentTagNumber"_s),
			$of("The tag number of the field pointing to this IFD"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFIFD/parentTagName"_s),
			$of("A mnemonic name for the field pointing to this IFD, if known"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFField"_s),
			$of("A field containing data"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFField/number"_s),
			$of("The tag number asociated with the field"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFField/name"_s),
			$of("A mnemonic name associated with the field, if known"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFUndefined"_s),
			$of("Uninterpreted byte data"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFUndefined/value"_s),
			$of("A list of comma-separated byte values"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFBytes"_s),
			$of("A sequence of TIFFByte nodes"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFByte"_s),
			$of("An integral value between 0 and 255"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFByte/value"_s),
			$of("The value"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFByte/description"_s),
			$of("A description, if available"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFAsciis"_s),
			$of("A sequence of TIFFAscii nodes"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFAscii"_s),
			$of("A String value"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFAscii/value"_s),
			$of("The value"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFShorts"_s),
			$of("A sequence of TIFFShort nodes"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFShort"_s),
			$of("An integral value between 0 and 65535"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFShort/value"_s),
			$of("The value"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFShort/description"_s),
			$of("A description, if available"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFSShorts"_s),
			$of("A sequence of TIFFSShort nodes"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFSShort"_s),
			$of("An integral value between -32768 and 32767"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFSShort/value"_s),
			$of("The value"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFSShort/description"_s),
			$of("A description, if available"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFLongs"_s),
			$of("A sequence of TIFFLong nodes"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFLong"_s),
			$of("An integral value between 0 and 4294967295"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFLong/value"_s),
			$of("The value"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFLong/description"_s),
			$of("A description, if available"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFSLongs"_s),
			$of("A sequence of TIFFSLong nodes"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFSLong"_s),
			$of("An integral value between -2147483648 and 2147483647"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFSLong/value"_s),
			$of("The value"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFSLong/description"_s),
			$of("A description, if available"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFRationals"_s),
			$of("A sequence of TIFFRational nodes"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFRational"_s),
			$of("A rational value consisting of an unsigned numerator and denominator"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFRational/value"_s),
			$of("The numerator and denominator, separated by a slash"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFSRationals"_s),
			$of("A sequence of TIFFSRational nodes"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFSRational"_s),
			$of("A rational value consisting of a signed numerator and denominator"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFSRational/value"_s),
			$of("The numerator and denominator, separated by a slash"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFFloats"_s),
			$of("A sequence of TIFFFloat nodes"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFFloat"_s),
			$of("A single-precision floating-point value"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFFloat/value"_s),
			$of("The value"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFDoubles"_s),
			$of("A sequence of TIFFDouble nodes"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFDouble"_s),
			$of("A double-precision floating-point value"_s)
		}),
		$$new($ObjectArray, {
			$of("TIFFDouble/value"_s),
			$of("The value"_s)
		})
	}));
}

TIFFImageMetadataFormatResources::TIFFImageMetadataFormatResources() {
}

$Class* TIFFImageMetadataFormatResources::load$($String* name, bool initialize) {
	$loadClass(TIFFImageMetadataFormatResources, name, initialize, &_TIFFImageMetadataFormatResources_ClassInfo_, clinit$TIFFImageMetadataFormatResources, allocate$TIFFImageMetadataFormatResources);
	return class$;
}

$Class* TIFFImageMetadataFormatResources::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com