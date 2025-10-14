#include <sun/print/Win32MediaSize.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <jcpp.h>

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $MediaSizeArray = $Array<::javax::print::attribute::standard::MediaSize>;
using $MediaSizeNameArray = $Array<::javax::print::attribute::standard::MediaSizeName>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;

namespace sun {
	namespace print {

$FieldInfo _Win32MediaSize_FieldInfo_[] = {
	{"winStringTable", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(Win32MediaSize, winStringTable)},
	{"winEnumTable", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/print/Win32MediaSize;>;", $PRIVATE | $STATIC, $staticField(Win32MediaSize, winEnumTable)},
	{"predefMedia", "[Ljavax/print/attribute/standard/MediaSize;", nullptr, $PRIVATE | $STATIC, $staticField(Win32MediaSize, predefMedia)},
	{"dmPaperID", "I", nullptr, $PRIVATE, $field(Win32MediaSize, dmPaperID)},
	{}
};

$MethodInfo _Win32MediaSize_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Win32MediaSize::*)(int32_t)>(&Win32MediaSize::init$))},
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(Win32MediaSize::*)($String*,int32_t)>(&Win32MediaSize::init$))},
	{"findMediaName", "(Ljava/lang/String;)Lsun/print/Win32MediaSize;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<Win32MediaSize*(*)($String*)>(&Win32MediaSize::findMediaName))},
	{"getDMPaper", "()I", nullptr, 0},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getPredefMedia", "()[Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$MediaSizeArray*(*)()>(&Win32MediaSize::getPredefMedia))},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"getSuperEnumTable", "()[Ljavax/print/attribute/standard/MediaSizeName;", nullptr, $PRIVATE, $method(static_cast<$MediaSizeNameArray*(Win32MediaSize::*)()>(&Win32MediaSize::getSuperEnumTable))},
	{"nextValue", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<int32_t(*)($String*)>(&Win32MediaSize::nextValue))},
	{}
};

$ClassInfo _Win32MediaSize_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.Win32MediaSize",
	"javax.print.attribute.standard.MediaSizeName",
	nullptr,
	_Win32MediaSize_FieldInfo_,
	_Win32MediaSize_MethodInfo_
};

$Object* allocate$Win32MediaSize($Class* clazz) {
	return $of($alloc(Win32MediaSize));
}

$ArrayList* Win32MediaSize::winStringTable = nullptr;
$ArrayList* Win32MediaSize::winEnumTable = nullptr;
$MediaSizeArray* Win32MediaSize::predefMedia = nullptr;

void Win32MediaSize::init$(int32_t x) {
	$MediaSizeName::init$(x);
}

int32_t Win32MediaSize::nextValue($String* name) {
	$load(Win32MediaSize);
	$synchronized(class$) {
		$init(Win32MediaSize);
		$nc(Win32MediaSize::winStringTable)->add(name);
		return ($nc(Win32MediaSize::winStringTable)->size() - 1);
	}
}

Win32MediaSize* Win32MediaSize::findMediaName($String* name) {
	$load(Win32MediaSize);
	$synchronized(class$) {
		$init(Win32MediaSize);
		int32_t nameIndex = $nc(Win32MediaSize::winStringTable)->indexOf(name);
		if (nameIndex != -1) {
			return $cast(Win32MediaSize, $nc(Win32MediaSize::winEnumTable)->get(nameIndex));
		}
		return nullptr;
	}
}

$MediaSizeArray* Win32MediaSize::getPredefMedia() {
	$init(Win32MediaSize);
	return Win32MediaSize::predefMedia;
}

void Win32MediaSize::init$($String* name, int32_t dmPaper) {
	$MediaSizeName::init$(nextValue(name));
	this->dmPaperID = dmPaper;
	$nc(Win32MediaSize::winEnumTable)->add(this);
}

$MediaSizeNameArray* Win32MediaSize::getSuperEnumTable() {
	return $fcast($MediaSizeNameArray, $MediaSizeName::getEnumValueTable());
}

int32_t Win32MediaSize::getDMPaper() {
	return this->dmPaperID;
}

$StringArray* Win32MediaSize::getStringTable() {
	$var($StringArray, nameTable, $new($StringArray, $nc(Win32MediaSize::winStringTable)->size()));
	return $fcast($StringArray, $nc(Win32MediaSize::winStringTable)->toArray(nameTable));
}

$EnumSyntaxArray* Win32MediaSize::getEnumValueTable() {
	$var($MediaSizeNameArray, enumTable, $new($MediaSizeNameArray, $nc(Win32MediaSize::winEnumTable)->size()));
	return $fcast($EnumSyntaxArray, $nc(Win32MediaSize::winEnumTable)->toArray(enumTable));
}

void clinit$Win32MediaSize($Class* class$) {
	$assignStatic(Win32MediaSize::winStringTable, $new($ArrayList));
	$assignStatic(Win32MediaSize::winEnumTable, $new($ArrayList));
	{
		{
			$var(Win32MediaSize, winMedia, $new(Win32MediaSize, -1));
			$var($MediaSizeNameArray, enumMedia, winMedia->getSuperEnumTable());
			if (enumMedia != nullptr) {
				$assignStatic(Win32MediaSize::predefMedia, $new($MediaSizeArray, enumMedia->length));
				for (int32_t i = 0; i < enumMedia->length; ++i) {
					$nc(Win32MediaSize::predefMedia)->set(i, $($MediaSize::getMediaSizeForName(enumMedia->get(i))));
				}
			}
		}
	}
}

Win32MediaSize::Win32MediaSize() {
}

$Class* Win32MediaSize::load$($String* name, bool initialize) {
	$loadClass(Win32MediaSize, name, initialize, &_Win32MediaSize_ClassInfo_, clinit$Win32MediaSize, allocate$Win32MediaSize);
	return class$;
}

$Class* Win32MediaSize::class$ = nullptr;

	} // print
} // sun