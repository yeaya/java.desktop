#include <sun/font/FileFont$CreatedFontFileDisposerRecord.h>

#include <java/io/File.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/font/CreatedFontTracker.h>
#include <sun/font/FileFont$CreatedFontFileDisposerRecord$1.h>
#include <sun/font/FileFont.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $CreatedFontTracker = ::sun::font::CreatedFontTracker;
using $FileFont = ::sun::font::FileFont;
using $FileFont$CreatedFontFileDisposerRecord$1 = ::sun::font::FileFont$CreatedFontFileDisposerRecord$1;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace font {

$FieldInfo _FileFont$CreatedFontFileDisposerRecord_FieldInfo_[] = {
	{"fontFile", "Ljava/io/File;", nullptr, 0, $field(FileFont$CreatedFontFileDisposerRecord, fontFile)},
	{"count", "I", nullptr, 0, $field(FileFont$CreatedFontFileDisposerRecord, count)},
	{"tracker", "Lsun/font/CreatedFontTracker;", nullptr, 0, $field(FileFont$CreatedFontFileDisposerRecord, tracker)},
	{}
};

$MethodInfo _FileFont$CreatedFontFileDisposerRecord_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;ILsun/font/CreatedFontTracker;)V", nullptr, $PRIVATE, $method(static_cast<void(FileFont$CreatedFontFileDisposerRecord::*)($File*,int32_t,$CreatedFontTracker*)>(&FileFont$CreatedFontFileDisposerRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FileFont$CreatedFontFileDisposerRecord_InnerClassesInfo_[] = {
	{"sun.font.FileFont$CreatedFontFileDisposerRecord", "sun.font.FileFont", "CreatedFontFileDisposerRecord", $PRIVATE | $STATIC},
	{"sun.font.FileFont$CreatedFontFileDisposerRecord$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileFont$CreatedFontFileDisposerRecord_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.FileFont$CreatedFontFileDisposerRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_FileFont$CreatedFontFileDisposerRecord_FieldInfo_,
	_FileFont$CreatedFontFileDisposerRecord_MethodInfo_,
	nullptr,
	nullptr,
	_FileFont$CreatedFontFileDisposerRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.FileFont"
};

$Object* allocate$FileFont$CreatedFontFileDisposerRecord($Class* clazz) {
	return $of($alloc(FileFont$CreatedFontFileDisposerRecord));
}

void FileFont$CreatedFontFileDisposerRecord::init$($File* file, int32_t cnt, $CreatedFontTracker* tracker) {
	$set(this, fontFile, nullptr);
	this->count = 0;
	$set(this, fontFile, file);
	this->count = (cnt > 0) ? cnt : 1;
	$set(this, tracker, tracker);
}

void FileFont$CreatedFontFileDisposerRecord::dispose() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($FileFont$CreatedFontFileDisposerRecord$1, this)));
}

FileFont$CreatedFontFileDisposerRecord::FileFont$CreatedFontFileDisposerRecord() {
}

$Class* FileFont$CreatedFontFileDisposerRecord::load$($String* name, bool initialize) {
	$loadClass(FileFont$CreatedFontFileDisposerRecord, name, initialize, &_FileFont$CreatedFontFileDisposerRecord_ClassInfo_, allocate$FileFont$CreatedFontFileDisposerRecord);
	return class$;
}

$Class* FileFont$CreatedFontFileDisposerRecord::class$ = nullptr;

	} // font
} // sun