#include <HangDuringStaticInitialization.h>

#include <HangDuringStaticInitialization$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/FileVisitor.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <jcpp.h>

using $HangDuringStaticInitialization$1 = ::HangDuringStaticInitialization$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $FileVisitor = ::java::nio::file::FileVisitor;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;

$MethodInfo _HangDuringStaticInitialization_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HangDuringStaticInitialization::*)()>(&HangDuringStaticInitialization::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HangDuringStaticInitialization::main)), "java.lang.Exception"},
	{"test", "(Ljava/nio/file/FileSystem;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($FileSystem*,$String*)>(&HangDuringStaticInitialization::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _HangDuringStaticInitialization_InnerClassesInfo_[] = {
	{"HangDuringStaticInitialization$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HangDuringStaticInitialization_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"HangDuringStaticInitialization",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HangDuringStaticInitialization_MethodInfo_,
	nullptr,
	nullptr,
	_HangDuringStaticInitialization_InnerClassesInfo_,
	nullptr,
	nullptr,
	"HangDuringStaticInitialization$1"
};

$Object* allocate$HangDuringStaticInitialization($Class* clazz) {
	return $of($alloc(HangDuringStaticInitialization));
}

void HangDuringStaticInitialization::init$() {
}

void HangDuringStaticInitialization::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($FileSystem, fs, $FileSystems::getFileSystem($($URI::create("jrt:/"_s))));
	test(fs, "/modules/java.desktop"_s);
	test(fs, "/modules/java.datatransfer"_s);
}

void HangDuringStaticInitialization::test($FileSystem* fs, $String* s) {
	$useLocalCurrentObjectStackCache();
	$var($Path, var$0, $nc(fs)->getPath(s, $$new($StringArray, 0)));
	$Files::walkFileTree(var$0, $$new($HangDuringStaticInitialization$1));
}

HangDuringStaticInitialization::HangDuringStaticInitialization() {
}

$Class* HangDuringStaticInitialization::load$($String* name, bool initialize) {
	$loadClass(HangDuringStaticInitialization, name, initialize, &_HangDuringStaticInitialization_ClassInfo_, allocate$HangDuringStaticInitialization);
	return class$;
}

$Class* HangDuringStaticInitialization::class$ = nullptr;