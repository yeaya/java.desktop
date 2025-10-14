#include <sun/font/FileFont$1.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/font/FileFont.h>
#include <jcpp.h>

#undef TRUE

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $FileFont = ::sun::font::FileFont;

namespace sun {
	namespace font {

$FieldInfo _FileFont$1_FieldInfo_[] = {
	{"this$0", "Lsun/font/FileFont;", nullptr, $FINAL | $SYNTHETIC, $field(FileFont$1, this$0)},
	{"val$f", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(FileFont$1, val$f)},
	{}
};

$MethodInfo _FileFont$1_MethodInfo_[] = {
	{"<init>", "(Lsun/font/FileFont;Ljava/io/File;)V", "()V", 0, $method(static_cast<void(FileFont$1::*)($FileFont*,$File*)>(&FileFont$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileFont$1_EnclosingMethodInfo_ = {
	"sun.font.FileFont",
	"getPublicFileName",
	"()Ljava/lang/String;"
};

$InnerClassInfo _FileFont$1_InnerClassesInfo_[] = {
	{"sun.font.FileFont$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileFont$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.FileFont$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_FileFont$1_FieldInfo_,
	_FileFont$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Boolean;>;",
	&_FileFont$1_EnclosingMethodInfo_,
	_FileFont$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.FileFont"
};

$Object* allocate$FileFont$1($Class* clazz) {
	return $of($alloc(FileFont$1));
}

void FileFont$1::init$($FileFont* this$0, $File* val$f) {
	$set(this, this$0, this$0);
	$set(this, val$f, val$f);
}

$Object* FileFont$1::run() {
	$var($File, tmp, $new($File, $($System::getProperty("java.io.tmpdir"_s))));
	try {
		$var($String, tpath, tmp->getCanonicalPath());
		$var($String, fpath, $nc(this->val$f)->getCanonicalPath());
		return $of($Boolean::valueOf((fpath == nullptr) || $nc(fpath)->startsWith(tpath)));
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$init($Boolean);
		return $of($Boolean::TRUE);
	}
	$shouldNotReachHere();
}

FileFont$1::FileFont$1() {
}

$Class* FileFont$1::load$($String* name, bool initialize) {
	$loadClass(FileFont$1, name, initialize, &_FileFont$1_ClassInfo_, allocate$FileFont$1);
	return class$;
}

$Class* FileFont$1::class$ = nullptr;

	} // font
} // sun