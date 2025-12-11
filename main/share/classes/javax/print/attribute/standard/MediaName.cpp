#include <javax/print/attribute/standard/MediaName.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/standard/Media.h>
#include <jcpp.h>

#undef ISO_A4_TRANSPARENT
#undef ISO_A4_WHITE
#undef NA_LETTER_TRANSPARENT
#undef NA_LETTER_WHITE

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $MediaNameArray = $Array<::javax::print::attribute::standard::MediaName>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Media = ::javax::print::attribute::standard::Media;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _MediaName_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MediaName, serialVersionUID)},
	{"NA_LETTER_WHITE", "Ljavax/print/attribute/standard/MediaName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaName, NA_LETTER_WHITE)},
	{"NA_LETTER_TRANSPARENT", "Ljavax/print/attribute/standard/MediaName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaName, NA_LETTER_TRANSPARENT)},
	{"ISO_A4_WHITE", "Ljavax/print/attribute/standard/MediaName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaName, ISO_A4_WHITE)},
	{"ISO_A4_TRANSPARENT", "Ljavax/print/attribute/standard/MediaName;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaName, ISO_A4_TRANSPARENT)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MediaName, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/MediaName;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MediaName, myEnumValueTable)},
	{}
};

$MethodInfo _MediaName_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(MediaName::*)(int32_t)>(&MediaName::init$))},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MediaName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.standard.MediaName",
	"javax.print.attribute.standard.Media",
	nullptr,
	_MediaName_FieldInfo_,
	_MediaName_MethodInfo_
};

$Object* allocate$MediaName($Class* clazz) {
	return $of($alloc(MediaName));
}

MediaName* MediaName::NA_LETTER_WHITE = nullptr;
MediaName* MediaName::NA_LETTER_TRANSPARENT = nullptr;
MediaName* MediaName::ISO_A4_WHITE = nullptr;
MediaName* MediaName::ISO_A4_TRANSPARENT = nullptr;
$StringArray* MediaName::myStringTable = nullptr;
$MediaNameArray* MediaName::myEnumValueTable = nullptr;

void MediaName::init$(int32_t value) {
	$Media::init$(value);
}

$StringArray* MediaName::getStringTable() {
	return $cast($StringArray, $nc(MediaName::myStringTable)->clone());
}

$EnumSyntaxArray* MediaName::getEnumValueTable() {
	return $cast($EnumSyntaxArray, $nc(MediaName::myEnumValueTable)->clone());
}

void clinit$MediaName($Class* class$) {
	$assignStatic(MediaName::NA_LETTER_WHITE, $new(MediaName, 0));
	$assignStatic(MediaName::NA_LETTER_TRANSPARENT, $new(MediaName, 1));
	$assignStatic(MediaName::ISO_A4_WHITE, $new(MediaName, 2));
	$assignStatic(MediaName::ISO_A4_TRANSPARENT, $new(MediaName, 3));
	$assignStatic(MediaName::myStringTable, $new($StringArray, {
		"na-letter-white"_s,
		"na-letter-transparent"_s,
		"iso-a4-white"_s,
		"iso-a4-transparent"_s
	}));
	$assignStatic(MediaName::myEnumValueTable, $new($MediaNameArray, {
		MediaName::NA_LETTER_WHITE,
		MediaName::NA_LETTER_TRANSPARENT,
		MediaName::ISO_A4_WHITE,
		MediaName::ISO_A4_TRANSPARENT
	}));
}

MediaName::MediaName() {
}

$Class* MediaName::load$($String* name, bool initialize) {
	$loadClass(MediaName, name, initialize, &_MediaName_ClassInfo_, clinit$MediaName, allocate$MediaName);
	return class$;
}

$Class* MediaName::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax