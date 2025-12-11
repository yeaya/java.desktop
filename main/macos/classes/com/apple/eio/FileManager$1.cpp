#include <com/apple/eio/FileManager$1.h>

#include <com/apple/eio/FileManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eio {

$MethodInfo _FileManager$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileManager$1::*)()>(&FileManager$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileManager$1_EnclosingMethodInfo_ = {
	"com.apple.eio.FileManager",
	nullptr,
	nullptr
};

$InnerClassInfo _FileManager$1_InnerClassesInfo_[] = {
	{"com.apple.eio.FileManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.eio.FileManager$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_FileManager$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_FileManager$1_EnclosingMethodInfo_,
	_FileManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.eio.FileManager"
};

$Object* allocate$FileManager$1($Class* clazz) {
	return $of($alloc(FileManager$1));
}

void FileManager$1::init$() {
}

$Object* FileManager$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("osx"_s);
	return $of(nullptr);
}

FileManager$1::FileManager$1() {
}

$Class* FileManager$1::load$($String* name, bool initialize) {
	$loadClass(FileManager$1, name, initialize, &_FileManager$1_ClassInfo_, allocate$FileManager$1);
	return class$;
}

$Class* FileManager$1::class$ = nullptr;

		} // eio
	} // apple
} // com