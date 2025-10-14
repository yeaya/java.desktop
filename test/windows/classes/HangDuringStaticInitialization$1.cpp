#include <HangDuringStaticInitialization$1.h>

#include <HangDuringStaticInitialization.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileVisitResult.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <jcpp.h>

#undef CONTINUE

using $HangDuringStaticInitialization = ::HangDuringStaticInitialization;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileVisitResult = ::java::nio::file::FileVisitResult;
using $Path = ::java::nio::file::Path;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;

$MethodInfo _HangDuringStaticInitialization$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HangDuringStaticInitialization$1::*)()>(&HangDuringStaticInitialization$1::init$))},
	{"visitFile", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC},
	{"visitFile", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _HangDuringStaticInitialization$1_EnclosingMethodInfo_ = {
	"HangDuringStaticInitialization",
	"test",
	"(Ljava/nio/file/FileSystem;Ljava/lang/String;)V"
};

$InnerClassInfo _HangDuringStaticInitialization$1_InnerClassesInfo_[] = {
	{"HangDuringStaticInitialization$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HangDuringStaticInitialization$1_ClassInfo_ = {
	$ACC_SUPER,
	"HangDuringStaticInitialization$1",
	"java.nio.file.SimpleFileVisitor",
	nullptr,
	nullptr,
	_HangDuringStaticInitialization$1_MethodInfo_,
	"Ljava/nio/file/SimpleFileVisitor<Ljava/nio/file/Path;>;",
	&_HangDuringStaticInitialization$1_EnclosingMethodInfo_,
	_HangDuringStaticInitialization$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HangDuringStaticInitialization"
};

$Object* allocate$HangDuringStaticInitialization$1($Class* clazz) {
	return $of($alloc(HangDuringStaticInitialization$1));
}

void HangDuringStaticInitialization$1::init$() {
	$SimpleFileVisitor::init$();
}

$FileVisitResult* HangDuringStaticInitialization$1::visitFile($Path* file$renamed, $BasicFileAttributes* attrs) {
	$var($Path, file, file$renamed);
	$beforeCallerSensitive();
	$assign(file, $nc(file)->subpath(2, file->getNameCount()));
	$var($String, name, file->toString());
	if ($nc(name)->endsWith(".class"_s)) {
		$assign(name, $(name->substring(0, name->indexOf("."_s)))->replace(u'/', u'.'));
		try {
			$Class::forName(name, true, nullptr);
		} catch ($Throwable&) {
			$catch();
		}
	}
	$init($FileVisitResult);
	return $FileVisitResult::CONTINUE;
}

$FileVisitResult* HangDuringStaticInitialization$1::visitFile(Object$* file, $BasicFileAttributes* attrs) {
	return this->visitFile($cast($Path, file), attrs);
}

HangDuringStaticInitialization$1::HangDuringStaticInitialization$1() {
}

$Class* HangDuringStaticInitialization$1::load$($String* name, bool initialize) {
	$loadClass(HangDuringStaticInitialization$1, name, initialize, &_HangDuringStaticInitialization$1_ClassInfo_, allocate$HangDuringStaticInitialization$1);
	return class$;
}

$Class* HangDuringStaticInitialization$1::class$ = nullptr;