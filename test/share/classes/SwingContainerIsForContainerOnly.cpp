#include <SwingContainerIsForContainerOnly.h>

#include <SwingContainerIsForContainerOnly$1.h>
#include <java/lang/Iterable.h>
#include <java/net/URI.h>
#include <java/nio/file/FileSystem.h>
#include <java/nio/file/FileSystems.h>
#include <java/nio/file/FileVisitor.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <jcpp.h>

using $SwingContainerIsForContainerOnly$1 = ::SwingContainerIsForContainerOnly$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $FileSystem = ::java::nio::file::FileSystem;
using $FileSystems = ::java::nio::file::FileSystems;
using $FileVisitor = ::java::nio::file::FileVisitor;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;

$MethodInfo _SwingContainerIsForContainerOnly_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SwingContainerIsForContainerOnly::*)()>(&SwingContainerIsForContainerOnly::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SwingContainerIsForContainerOnly::main)), "java.io.IOException"},
	{}
};

$InnerClassInfo _SwingContainerIsForContainerOnly_InnerClassesInfo_[] = {
	{"SwingContainerIsForContainerOnly$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingContainerIsForContainerOnly_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"SwingContainerIsForContainerOnly",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SwingContainerIsForContainerOnly_MethodInfo_,
	nullptr,
	nullptr,
	_SwingContainerIsForContainerOnly_InnerClassesInfo_,
	nullptr,
	nullptr,
	"SwingContainerIsForContainerOnly$1"
};

$Object* allocate$SwingContainerIsForContainerOnly($Class* clazz) {
	return $of($alloc(SwingContainerIsForContainerOnly));
}

void SwingContainerIsForContainerOnly::init$() {
}

void SwingContainerIsForContainerOnly::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($FileSystem, fs, $FileSystems::getFileSystem($($URI::create("jrt:/"_s))));
	$nc(fs)->getFileStores();
	$var($Path, var$0, fs->getPath("/modules/java.desktop"_s, $$new($StringArray, 0)));
	$Files::walkFileTree(var$0, $$new($SwingContainerIsForContainerOnly$1));
}

SwingContainerIsForContainerOnly::SwingContainerIsForContainerOnly() {
}

$Class* SwingContainerIsForContainerOnly::load$($String* name, bool initialize) {
	$loadClass(SwingContainerIsForContainerOnly, name, initialize, &_SwingContainerIsForContainerOnly_ClassInfo_, allocate$SwingContainerIsForContainerOnly);
	return class$;
}

$Class* SwingContainerIsForContainerOnly::class$ = nullptr;