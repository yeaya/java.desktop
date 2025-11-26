#include <sun/font/TrueTypeFont$DirectoryEntry.h>

#include <sun/font/TrueTypeFont.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TrueTypeFont = ::sun::font::TrueTypeFont;

namespace sun {
	namespace font {

$FieldInfo _TrueTypeFont$DirectoryEntry_FieldInfo_[] = {
	{"tag", "I", nullptr, 0, $field(TrueTypeFont$DirectoryEntry, tag)},
	{"offset", "I", nullptr, 0, $field(TrueTypeFont$DirectoryEntry, offset)},
	{"length", "I", nullptr, 0, $field(TrueTypeFont$DirectoryEntry, length)},
	{}
};

$MethodInfo _TrueTypeFont$DirectoryEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TrueTypeFont$DirectoryEntry::*)()>(&TrueTypeFont$DirectoryEntry::init$))},
	{}
};

$InnerClassInfo _TrueTypeFont$DirectoryEntry_InnerClassesInfo_[] = {
	{"sun.font.TrueTypeFont$DirectoryEntry", "sun.font.TrueTypeFont", "DirectoryEntry", $STATIC},
	{}
};

$ClassInfo _TrueTypeFont$DirectoryEntry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.TrueTypeFont$DirectoryEntry",
	"java.lang.Object",
	nullptr,
	_TrueTypeFont$DirectoryEntry_FieldInfo_,
	_TrueTypeFont$DirectoryEntry_MethodInfo_,
	nullptr,
	nullptr,
	_TrueTypeFont$DirectoryEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.TrueTypeFont"
};

$Object* allocate$TrueTypeFont$DirectoryEntry($Class* clazz) {
	return $of($alloc(TrueTypeFont$DirectoryEntry));
}

void TrueTypeFont$DirectoryEntry::init$() {
}

TrueTypeFont$DirectoryEntry::TrueTypeFont$DirectoryEntry() {
}

$Class* TrueTypeFont$DirectoryEntry::load$($String* name, bool initialize) {
	$loadClass(TrueTypeFont$DirectoryEntry, name, initialize, &_TrueTypeFont$DirectoryEntry_ClassInfo_, allocate$TrueTypeFont$DirectoryEntry);
	return class$;
}

$Class* TrueTypeFont$DirectoryEntry::class$ = nullptr;

	} // font
} // sun