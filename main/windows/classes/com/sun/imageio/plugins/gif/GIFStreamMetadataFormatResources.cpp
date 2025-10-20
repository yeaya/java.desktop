#include <com/sun/imageio/plugins/gif/GIFStreamMetadataFormatResources.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace gif {

$MethodInfo _GIFStreamMetadataFormatResources_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GIFStreamMetadataFormatResources::*)()>(&GIFStreamMetadataFormatResources::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _GIFStreamMetadataFormatResources_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.imageio.plugins.gif.GIFStreamMetadataFormatResources",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_GIFStreamMetadataFormatResources_MethodInfo_
};

$Object* allocate$GIFStreamMetadataFormatResources($Class* clazz) {
	return $of($alloc(GIFStreamMetadataFormatResources));
}

void GIFStreamMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* GIFStreamMetadataFormatResources::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Version"_s),
			$of("The file version, either 87a or 89a"_s)
		}),
		$$new($ObjectArray, {
			$of("LogicalScreenDescriptor"_s),
			$of("The logical screen descriptor, except for the global color table"_s)
		}),
		$$new($ObjectArray, {
			$of("GlobalColorTable"_s),
			$of("The global color table"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorTableEntry"_s),
			$of("A global color table entry"_s)
		}),
		$$new($ObjectArray, {
			$of("Version/value"_s),
			$of("The version string"_s)
		}),
		$$new($ObjectArray, {
			$of("LogicalScreenDescriptor/logicalScreenWidth"_s),
			$of("The width in pixels of the whole picture"_s)
		}),
		$$new($ObjectArray, {
			$of("LogicalScreenDescriptor/logicalScreenHeight"_s),
			$of("The height in pixels of the whole picture"_s)
		}),
		$$new($ObjectArray, {
			$of("LogicalScreenDescriptor/colorResolution"_s),
			$of("The number of bits of color resolution, beteen 1 and 8"_s)
		}),
		$$new($ObjectArray, {
			$of("LogicalScreenDescriptor/pixelAspectRatio"_s),
			$of("If 0, indicates square pixels, else W/H = (value + 15)/64"_s)
		}),
		$$new($ObjectArray, {
			$of("GlobalColorTable/sizeOfGlobalColorTable"_s),
			$of("The number of entries in the global color table"_s)
		}),
		$$new($ObjectArray, {
			$of("GlobalColorTable/backgroundColorIndex"_s),
			$of("The index of the color table entry to be used as a background"_s)
		}),
		$$new($ObjectArray, {
			$of("GlobalColorTable/sortFlag"_s),
			$of("True if the global color table is sorted by frequency"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorTableEntry/index"_s),
			$of("The index of the color table entry"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorTableEntry/red"_s),
			$of("The red value for the color table entry"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorTableEntry/green"_s),
			$of("The green value for the color table entry"_s)
		}),
		$$new($ObjectArray, {
			$of("ColorTableEntry/blue"_s),
			$of("The blue value for the color table entry"_s)
		})
	});
}

GIFStreamMetadataFormatResources::GIFStreamMetadataFormatResources() {
}

$Class* GIFStreamMetadataFormatResources::load$($String* name, bool initialize) {
	$loadClass(GIFStreamMetadataFormatResources, name, initialize, &_GIFStreamMetadataFormatResources_ClassInfo_, allocate$GIFStreamMetadataFormatResources);
	return class$;
}

$Class* GIFStreamMetadataFormatResources::class$ = nullptr;

				} // gif
			} // plugins
		} // imageio
	} // sun
} // com