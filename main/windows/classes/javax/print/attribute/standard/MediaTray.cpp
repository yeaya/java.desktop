#include <javax/print/attribute/standard/MediaTray.h>

#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/standard/Media.h>
#include <jcpp.h>

#undef BOTTOM
#undef ENVELOPE
#undef LARGE_CAPACITY
#undef MAIN
#undef MANUAL
#undef MIDDLE
#undef SIDE
#undef TOP

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $MediaTrayArray = $Array<::javax::print::attribute::standard::MediaTray>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $Media = ::javax::print::attribute::standard::Media;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _MediaTray_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MediaTray, serialVersionUID)},
	{"TOP", "Ljavax/print/attribute/standard/MediaTray;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaTray, TOP)},
	{"MIDDLE", "Ljavax/print/attribute/standard/MediaTray;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaTray, MIDDLE)},
	{"BOTTOM", "Ljavax/print/attribute/standard/MediaTray;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaTray, BOTTOM)},
	{"ENVELOPE", "Ljavax/print/attribute/standard/MediaTray;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaTray, ENVELOPE)},
	{"MANUAL", "Ljavax/print/attribute/standard/MediaTray;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaTray, MANUAL)},
	{"LARGE_CAPACITY", "Ljavax/print/attribute/standard/MediaTray;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaTray, LARGE_CAPACITY)},
	{"MAIN", "Ljavax/print/attribute/standard/MediaTray;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaTray, MAIN)},
	{"SIDE", "Ljavax/print/attribute/standard/MediaTray;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaTray, SIDE)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MediaTray, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/MediaTray;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MediaTray, myEnumValueTable)},
	{}
};

$MethodInfo _MediaTray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PROTECTED, $method(static_cast<void(MediaTray::*)(int32_t)>(&MediaTray::init$))},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MediaTray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.standard.MediaTray",
	"javax.print.attribute.standard.Media",
	nullptr,
	_MediaTray_FieldInfo_,
	_MediaTray_MethodInfo_
};

$Object* allocate$MediaTray($Class* clazz) {
	return $of($alloc(MediaTray));
}

MediaTray* MediaTray::TOP = nullptr;
MediaTray* MediaTray::MIDDLE = nullptr;
MediaTray* MediaTray::BOTTOM = nullptr;
MediaTray* MediaTray::ENVELOPE = nullptr;
MediaTray* MediaTray::MANUAL = nullptr;
MediaTray* MediaTray::LARGE_CAPACITY = nullptr;
MediaTray* MediaTray::MAIN = nullptr;
MediaTray* MediaTray::SIDE = nullptr;
$StringArray* MediaTray::myStringTable = nullptr;
$MediaTrayArray* MediaTray::myEnumValueTable = nullptr;

void MediaTray::init$(int32_t value) {
	$Media::init$(value);
}

$StringArray* MediaTray::getStringTable() {
	return $cast($StringArray, $nc(MediaTray::myStringTable)->clone());
}

$EnumSyntaxArray* MediaTray::getEnumValueTable() {
	return $cast($EnumSyntaxArray, $nc(MediaTray::myEnumValueTable)->clone());
}

void clinit$MediaTray($Class* class$) {
	$assignStatic(MediaTray::TOP, $new(MediaTray, 0));
	$assignStatic(MediaTray::MIDDLE, $new(MediaTray, 1));
	$assignStatic(MediaTray::BOTTOM, $new(MediaTray, 2));
	$assignStatic(MediaTray::ENVELOPE, $new(MediaTray, 3));
	$assignStatic(MediaTray::MANUAL, $new(MediaTray, 4));
	$assignStatic(MediaTray::LARGE_CAPACITY, $new(MediaTray, 5));
	$assignStatic(MediaTray::MAIN, $new(MediaTray, 6));
	$assignStatic(MediaTray::SIDE, $new(MediaTray, 7));
	$assignStatic(MediaTray::myStringTable, $new($StringArray, {
		"top"_s,
		"middle"_s,
		"bottom"_s,
		"envelope"_s,
		"manual"_s,
		"large-capacity"_s,
		"main"_s,
		"side"_s
	}));
	$assignStatic(MediaTray::myEnumValueTable, $new($MediaTrayArray, {
		MediaTray::TOP,
		MediaTray::MIDDLE,
		MediaTray::BOTTOM,
		MediaTray::ENVELOPE,
		MediaTray::MANUAL,
		MediaTray::LARGE_CAPACITY,
		MediaTray::MAIN,
		MediaTray::SIDE
	}));
}

MediaTray::MediaTray() {
}

$Class* MediaTray::load$($String* name, bool initialize) {
	$loadClass(MediaTray, name, initialize, &_MediaTray_ClassInfo_, clinit$MediaTray, allocate$MediaTray);
	return class$;
}

$Class* MediaTray::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax