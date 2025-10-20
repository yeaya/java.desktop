#include <com/sun/imageio/plugins/jpeg/JPEGMetadataFormatResources.h>

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
				namespace jpeg {

$FieldInfo _JPEGMetadataFormatResources_FieldInfo_[] = {
	{"commonContents", "[[Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(JPEGMetadataFormatResources, commonContents)},
	{}
};

$MethodInfo _JPEGMetadataFormatResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JPEGMetadataFormatResources::*)()>(&JPEGMetadataFormatResources::init$))},
	{}
};

$ClassInfo _JPEGMetadataFormatResources_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.imageio.plugins.jpeg.JPEGMetadataFormatResources",
	"java.util.ListResourceBundle",
	nullptr,
	_JPEGMetadataFormatResources_FieldInfo_,
	_JPEGMetadataFormatResources_MethodInfo_
};

$Object* allocate$JPEGMetadataFormatResources($Class* clazz) {
	return $of($alloc(JPEGMetadataFormatResources));
}

$ObjectArray2* JPEGMetadataFormatResources::commonContents = nullptr;

void JPEGMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

void clinit$JPEGMetadataFormatResources($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JPEGMetadataFormatResources::commonContents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("dqt"_s),
			$of("A Define Quantization Table(s) marker segment"_s)
		}),
		$$new($ObjectArray, {
			$of("dqtable"_s),
			$of("A single quantization table"_s)
		}),
		$$new($ObjectArray, {
			$of("dht"_s),
			$of("A Define Huffman Table(s) marker segment"_s)
		}),
		$$new($ObjectArray, {
			$of("dhtable"_s),
			$of("A single Huffman table"_s)
		}),
		$$new($ObjectArray, {
			$of("dri"_s),
			$of("A Define Restart Interval marker segment"_s)
		}),
		$$new($ObjectArray, {
			$of("com"_s),
			$of("A Comment marker segment.  The user object contains the actual bytes."_s)
		}),
		$$new($ObjectArray, {
			$of("unknown"_s),
			$of("An unrecognized marker segment.  The user object contains the data not including length."_s)
		}),
		$$new($ObjectArray, {
			$of("dqtable/elementPrecision"_s),
			$of("The number of bits in each table element (0 = 8, 1 = 16)"_s)
		}),
		$$new($ObjectArray, {
			$of("dgtable/qtableId"_s),
			$of("The table id"_s)
		}),
		$$new($ObjectArray, {
			$of("dhtable/class"_s),
			$of("Indicates whether this is a DC (0) or an AC (1) table"_s)
		}),
		$$new($ObjectArray, {
			$of("dhtable/htableId"_s),
			$of("The table id"_s)
		}),
		$$new($ObjectArray, {
			$of("dri/interval"_s),
			$of("The restart interval in MCUs"_s)
		}),
		$$new($ObjectArray, {
			$of("com/comment"_s),
			$of("The comment as a string (used only if user object is null)"_s)
		}),
		$$new($ObjectArray, {
			$of("unknown/MarkerTag"_s),
			$of("The tag identifying this marker segment"_s)
		})
	}));
}

JPEGMetadataFormatResources::JPEGMetadataFormatResources() {
}

$Class* JPEGMetadataFormatResources::load$($String* name, bool initialize) {
	$loadClass(JPEGMetadataFormatResources, name, initialize, &_JPEGMetadataFormatResources_ClassInfo_, clinit$JPEGMetadataFormatResources, allocate$JPEGMetadataFormatResources);
	return class$;
}

$Class* JPEGMetadataFormatResources::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com