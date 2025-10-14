#include <com/sun/imageio/plugins/bmp/BMPConstants.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef BI_BITFIELDS
#undef BI_JPEG
#undef BI_PNG
#undef BI_RGB
#undef BI_RLE4
#undef BI_RLE8
#undef LCS_CALIBRATED_RGB
#undef LCS_WINDOWS_COLOR_SPACE
#undef PROFILE_EMBEDDED
#undef PROFILE_LINKED
#undef VERSION_2
#undef VERSION_3
#undef VERSION_3_EXT
#undef VERSION_3_NT
#undef VERSION_4
#undef VERSION_5

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace bmp {

$FieldInfo _BMPConstants_FieldInfo_[] = {
	{"VERSION_2", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BMPConstants, VERSION_2)},
	{"VERSION_3", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BMPConstants, VERSION_3)},
	{"VERSION_3_NT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BMPConstants, VERSION_3_NT)},
	{"VERSION_3_EXT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BMPConstants, VERSION_3_EXT)},
	{"VERSION_4", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BMPConstants, VERSION_4)},
	{"VERSION_5", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BMPConstants, VERSION_5)},
	{"LCS_CALIBRATED_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BMPConstants, LCS_CALIBRATED_RGB)},
	{"LCS_sRGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BMPConstants, LCS_sRGB)},
	{"LCS_WINDOWS_COLOR_SPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BMPConstants, LCS_WINDOWS_COLOR_SPACE)},
	{"PROFILE_LINKED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BMPConstants, PROFILE_LINKED)},
	{"PROFILE_EMBEDDED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BMPConstants, PROFILE_EMBEDDED)},
	{"BI_RGB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BMPConstants, BI_RGB)},
	{"BI_RLE8", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BMPConstants, BI_RLE8)},
	{"BI_RLE4", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BMPConstants, BI_RLE4)},
	{"BI_BITFIELDS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BMPConstants, BI_BITFIELDS)},
	{"BI_JPEG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BMPConstants, BI_JPEG)},
	{"BI_PNG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BMPConstants, BI_PNG)},
	{}
};

$ClassInfo _BMPConstants_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.imageio.plugins.bmp.BMPConstants",
	nullptr,
	nullptr,
	_BMPConstants_FieldInfo_
};

$Object* allocate$BMPConstants($Class* clazz) {
	return $of($alloc(BMPConstants));
}

$String* BMPConstants::VERSION_2 = nullptr;
$String* BMPConstants::VERSION_3 = nullptr;
$String* BMPConstants::VERSION_3_NT = nullptr;
$String* BMPConstants::VERSION_3_EXT = nullptr;
$String* BMPConstants::VERSION_4 = nullptr;
$String* BMPConstants::VERSION_5 = nullptr;

void clinit$BMPConstants($Class* class$) {
	$assignStatic(BMPConstants::VERSION_2, "BMP v. 2.x"_s);
	$assignStatic(BMPConstants::VERSION_3, "BMP v. 3.x"_s);
	$assignStatic(BMPConstants::VERSION_3_NT, "BMP v. 3.x NT"_s);
	$assignStatic(BMPConstants::VERSION_3_EXT, "BMP V2/V3 INFO"_s);
	$assignStatic(BMPConstants::VERSION_4, "BMP v. 4.x"_s);
	$assignStatic(BMPConstants::VERSION_5, "BMP v. 5.x"_s);
}

$Class* BMPConstants::load$($String* name, bool initialize) {
	$loadClass(BMPConstants, name, initialize, &_BMPConstants_ClassInfo_, clinit$BMPConstants, allocate$BMPConstants);
	return class$;
}

$Class* BMPConstants::class$ = nullptr;

				} // bmp
			} // plugins
		} // imageio
	} // sun
} // com