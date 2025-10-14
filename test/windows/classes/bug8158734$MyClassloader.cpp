#include <bug8158734$MyClassloader.h>

#include <bug8158734.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug8158734 = ::bug8158734;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug8158734$MyClassloader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug8158734$MyClassloader::*)()>(&bug8158734$MyClassloader::init$))},
	{"loadClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PUBLIC, nullptr, "java.lang.ClassNotFoundException"},
	{}
};

$InnerClassInfo _bug8158734$MyClassloader_InnerClassesInfo_[] = {
	{"bug8158734$MyClassloader", "bug8158734", "MyClassloader", $STATIC},
	{}
};

$ClassInfo _bug8158734$MyClassloader_ClassInfo_ = {
	$ACC_SUPER,
	"bug8158734$MyClassloader",
	"java.lang.ClassLoader",
	nullptr,
	nullptr,
	_bug8158734$MyClassloader_MethodInfo_,
	nullptr,
	nullptr,
	_bug8158734$MyClassloader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8158734"
};

$Object* allocate$bug8158734$MyClassloader($Class* clazz) {
	return $of($alloc(bug8158734$MyClassloader));
}

void bug8158734$MyClassloader::init$() {
	$ClassLoader::init$();
}

$Class* bug8158734$MyClassloader::loadClass($String* name) {
	$init($bug8158734);
	$bug8158734::myClassloaderWasUsed = true;
	return $ClassLoader::loadClass(name);
}

bug8158734$MyClassloader::bug8158734$MyClassloader() {
}

$Class* bug8158734$MyClassloader::load$($String* name, bool initialize) {
	$loadClass(bug8158734$MyClassloader, name, initialize, &_bug8158734$MyClassloader_ClassInfo_, allocate$bug8158734$MyClassloader);
	return class$;
}

$Class* bug8158734$MyClassloader::class$ = nullptr;