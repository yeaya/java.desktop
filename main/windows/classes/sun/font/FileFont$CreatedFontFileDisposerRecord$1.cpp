#include <sun/font/FileFont$CreatedFontFileDisposerRecord$1.h>

#include <java/io/File.h>
#include <java/util/Vector.h>
#include <sun/font/CreatedFontTracker.h>
#include <sun/font/FileFont$CreatedFontFileDisposerRecord.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Vector = ::java::util::Vector;
using $CreatedFontTracker = ::sun::font::CreatedFontTracker;
using $FileFont$CreatedFontFileDisposerRecord = ::sun::font::FileFont$CreatedFontFileDisposerRecord;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

$FieldInfo _FileFont$CreatedFontFileDisposerRecord$1_FieldInfo_[] = {
	{"this$0", "Lsun/font/FileFont$CreatedFontFileDisposerRecord;", nullptr, $FINAL | $SYNTHETIC, $field(FileFont$CreatedFontFileDisposerRecord$1, this$0)},
	{}
};

$MethodInfo _FileFont$CreatedFontFileDisposerRecord$1_MethodInfo_[] = {
	{"<init>", "(Lsun/font/FileFont$CreatedFontFileDisposerRecord;)V", nullptr, 0, $method(static_cast<void(FileFont$CreatedFontFileDisposerRecord$1::*)($FileFont$CreatedFontFileDisposerRecord*)>(&FileFont$CreatedFontFileDisposerRecord$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileFont$CreatedFontFileDisposerRecord$1_EnclosingMethodInfo_ = {
	"sun.font.FileFont$CreatedFontFileDisposerRecord",
	"dispose",
	"()V"
};

$InnerClassInfo _FileFont$CreatedFontFileDisposerRecord$1_InnerClassesInfo_[] = {
	{"sun.font.FileFont$CreatedFontFileDisposerRecord", "sun.font.FileFont", "CreatedFontFileDisposerRecord", $PRIVATE | $STATIC},
	{"sun.font.FileFont$CreatedFontFileDisposerRecord$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileFont$CreatedFontFileDisposerRecord$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.FileFont$CreatedFontFileDisposerRecord$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_FileFont$CreatedFontFileDisposerRecord$1_FieldInfo_,
	_FileFont$CreatedFontFileDisposerRecord$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_FileFont$CreatedFontFileDisposerRecord$1_EnclosingMethodInfo_,
	_FileFont$CreatedFontFileDisposerRecord$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.FileFont"
};

$Object* allocate$FileFont$CreatedFontFileDisposerRecord$1($Class* clazz) {
	return $of($alloc(FileFont$CreatedFontFileDisposerRecord$1));
}

void FileFont$CreatedFontFileDisposerRecord$1::init$($FileFont$CreatedFontFileDisposerRecord* this$0) {
	$set(this, this$0, this$0);
}

$Object* FileFont$CreatedFontFileDisposerRecord$1::run() {
	$synchronized(this->this$0->fontFile) {
		--this->this$0->count;
		if (this->this$0->count > 0) {
			return $of(nullptr);
		}
	}
	if (this->this$0->fontFile != nullptr) {
		try {
			if (this->this$0->tracker != nullptr) {
				$nc(this->this$0->tracker)->subBytes((int32_t)$nc(this->this$0->fontFile)->length());
			}
			$nc(this->this$0->fontFile)->delete$();
			$nc($nc($($SunFontManager::getInstance()))->tmpFontFiles)->remove($of(this->this$0->fontFile));
		} catch ($Exception& e) {
		}
	}
	return $of(nullptr);
}

FileFont$CreatedFontFileDisposerRecord$1::FileFont$CreatedFontFileDisposerRecord$1() {
}

$Class* FileFont$CreatedFontFileDisposerRecord$1::load$($String* name, bool initialize) {
	$loadClass(FileFont$CreatedFontFileDisposerRecord$1, name, initialize, &_FileFont$CreatedFontFileDisposerRecord$1_ClassInfo_, allocate$FileFont$CreatedFontFileDisposerRecord$1);
	return class$;
}

$Class* FileFont$CreatedFontFileDisposerRecord$1::class$ = nullptr;

	} // font
} // sun