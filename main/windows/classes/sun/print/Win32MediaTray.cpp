#include <sun/print/Win32MediaTray.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/standard/MediaTray.h>
#include <jcpp.h>

#undef AUTO
#undef ENVELOPE_MANUAL
#undef FORMSOURCE
#undef LARGE_FORMAT
#undef SMALL_FORMAT
#undef TRACTOR

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $MediaTrayArray = $Array<::javax::print::attribute::standard::MediaTray>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $EnumSyntax = ::javax::print::attribute::EnumSyntax;
using $MediaTray = ::javax::print::attribute::standard::MediaTray;

namespace sun {
	namespace print {

$FieldInfo _Win32MediaTray_FieldInfo_[] = {
	{"ENVELOPE_MANUAL", "Lsun/print/Win32MediaTray;", nullptr, $STATIC | $FINAL, $staticField(Win32MediaTray, ENVELOPE_MANUAL)},
	{"AUTO", "Lsun/print/Win32MediaTray;", nullptr, $STATIC | $FINAL, $staticField(Win32MediaTray, AUTO)},
	{"TRACTOR", "Lsun/print/Win32MediaTray;", nullptr, $STATIC | $FINAL, $staticField(Win32MediaTray, TRACTOR)},
	{"SMALL_FORMAT", "Lsun/print/Win32MediaTray;", nullptr, $STATIC | $FINAL, $staticField(Win32MediaTray, SMALL_FORMAT)},
	{"LARGE_FORMAT", "Lsun/print/Win32MediaTray;", nullptr, $STATIC | $FINAL, $staticField(Win32MediaTray, LARGE_FORMAT)},
	{"FORMSOURCE", "Lsun/print/Win32MediaTray;", nullptr, $STATIC | $FINAL, $staticField(Win32MediaTray, FORMSOURCE)},
	{"winStringTable", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(Win32MediaTray, winStringTable)},
	{"winEnumTable", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lsun/print/Win32MediaTray;>;", $PRIVATE | $STATIC, $staticField(Win32MediaTray, winEnumTable)},
	{"winID", "I", nullptr, $PUBLIC, $field(Win32MediaTray, winID)},
	{"myStringTable", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Win32MediaTray, myStringTable)},
	{"myEnumValueTable", "[Ljavax/print/attribute/standard/MediaTray;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Win32MediaTray, myEnumValueTable)},
	{}
};

$MethodInfo _Win32MediaTray_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(Win32MediaTray::*)(int32_t,int32_t)>(&Win32MediaTray::init$))},
	{"<init>", "(ILjava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(Win32MediaTray::*)(int32_t,$String*)>(&Win32MediaTray::init$))},
	{"getDMBinID", "()I", nullptr, $PUBLIC},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED},
	{"getTraySize", "()I", nullptr, $PROTECTED | $STATIC, $method(static_cast<int32_t(*)()>(&Win32MediaTray::getTraySize))},
	{"nextValue", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<int32_t(*)($String*)>(&Win32MediaTray::nextValue))},
	{}
};

$ClassInfo _Win32MediaTray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.Win32MediaTray",
	"javax.print.attribute.standard.MediaTray",
	nullptr,
	_Win32MediaTray_FieldInfo_,
	_Win32MediaTray_MethodInfo_
};

$Object* allocate$Win32MediaTray($Class* clazz) {
	return $of($alloc(Win32MediaTray));
}

Win32MediaTray* Win32MediaTray::ENVELOPE_MANUAL = nullptr;
Win32MediaTray* Win32MediaTray::AUTO = nullptr;
Win32MediaTray* Win32MediaTray::TRACTOR = nullptr;
Win32MediaTray* Win32MediaTray::SMALL_FORMAT = nullptr;
Win32MediaTray* Win32MediaTray::LARGE_FORMAT = nullptr;
Win32MediaTray* Win32MediaTray::FORMSOURCE = nullptr;
$ArrayList* Win32MediaTray::winStringTable = nullptr;
$ArrayList* Win32MediaTray::winEnumTable = nullptr;
$StringArray* Win32MediaTray::myStringTable = nullptr;
$MediaTrayArray* Win32MediaTray::myEnumValueTable = nullptr;

void Win32MediaTray::init$(int32_t value, int32_t id) {
	$MediaTray::init$(value);
	this->winID = id;
}

int32_t Win32MediaTray::nextValue($String* name) {
	$load(Win32MediaTray);
	$synchronized(class$) {
		$init(Win32MediaTray);
		$nc(Win32MediaTray::winStringTable)->add(name);
		return (getTraySize() - 1);
	}
}

void Win32MediaTray::init$(int32_t id, $String* name) {
	$MediaTray::init$(nextValue(name));
	this->winID = id;
	$nc(Win32MediaTray::winEnumTable)->add(this);
}

int32_t Win32MediaTray::getDMBinID() {
	return this->winID;
}

int32_t Win32MediaTray::getTraySize() {
	$init(Win32MediaTray);
	return ($nc(Win32MediaTray::myStringTable)->length + $nc(Win32MediaTray::winStringTable)->size());
}

$StringArray* Win32MediaTray::getStringTable() {
	$var($ArrayList, completeList, $new($ArrayList));
	for (int32_t i = 0; i < $nc(Win32MediaTray::myStringTable)->length; ++i) {
		completeList->add($nc(Win32MediaTray::myStringTable)->get(i));
	}
	completeList->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(Win32MediaTray::winStringTable))));
	$var($StringArray, nameTable, $new($StringArray, completeList->size()));
	return $fcast($StringArray, completeList->toArray(nameTable));
}

$EnumSyntaxArray* Win32MediaTray::getEnumValueTable() {
	$var($ArrayList, completeList, $new($ArrayList));
	for (int32_t i = 0; i < $nc(Win32MediaTray::myEnumValueTable)->length; ++i) {
		completeList->add($nc(Win32MediaTray::myEnumValueTable)->get(i));
	}
	completeList->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(Win32MediaTray::winEnumTable))));
	$var($MediaTrayArray, enumTable, $new($MediaTrayArray, completeList->size()));
	return $fcast($EnumSyntaxArray, completeList->toArray(enumTable));
}

void clinit$Win32MediaTray($Class* class$) {
	$assignStatic(Win32MediaTray::ENVELOPE_MANUAL, $new(Win32MediaTray, 0, 6));
	$assignStatic(Win32MediaTray::AUTO, $new(Win32MediaTray, 1, 7));
	$assignStatic(Win32MediaTray::TRACTOR, $new(Win32MediaTray, 2, 8));
	$assignStatic(Win32MediaTray::SMALL_FORMAT, $new(Win32MediaTray, 3, 9));
	$assignStatic(Win32MediaTray::LARGE_FORMAT, $new(Win32MediaTray, 4, 10));
	$assignStatic(Win32MediaTray::FORMSOURCE, $new(Win32MediaTray, 5, 15));
	$assignStatic(Win32MediaTray::winStringTable, $new($ArrayList));
	$assignStatic(Win32MediaTray::winEnumTable, $new($ArrayList));
	$assignStatic(Win32MediaTray::myStringTable, $new($StringArray, {
		"Manual-Envelope"_s,
		"Automatic-Feeder"_s,
		"Tractor-Feeder"_s,
		"Small-Format"_s,
		"Large-Format"_s,
		"Form-Source"_s
	}));
	$assignStatic(Win32MediaTray::myEnumValueTable, $new($MediaTrayArray, {
		static_cast<$MediaTray*>(Win32MediaTray::ENVELOPE_MANUAL),
		static_cast<$MediaTray*>(Win32MediaTray::AUTO),
		static_cast<$MediaTray*>(Win32MediaTray::TRACTOR),
		static_cast<$MediaTray*>(Win32MediaTray::SMALL_FORMAT),
		static_cast<$MediaTray*>(Win32MediaTray::LARGE_FORMAT),
		static_cast<$MediaTray*>(Win32MediaTray::FORMSOURCE)
	}));
}

Win32MediaTray::Win32MediaTray() {
}

$Class* Win32MediaTray::load$($String* name, bool initialize) {
	$loadClass(Win32MediaTray, name, initialize, &_Win32MediaTray_ClassInfo_, clinit$Win32MediaTray, allocate$Win32MediaTray);
	return class$;
}

$Class* Win32MediaTray::class$ = nullptr;

	} // print
} // sun