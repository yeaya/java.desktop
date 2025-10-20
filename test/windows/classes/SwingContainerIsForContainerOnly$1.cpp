#include <SwingContainerIsForContainerOnly$1.h>

#include <SwingContainerIsForContainerOnly.h>
#include <java/awt/Container.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/FileVisitResult.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/SimpleFileVisitor.h>
#include <java/nio/file/attribute/BasicFileAttributes.h>
#include <javax/swing/SwingContainer.h>
#include <jcpp.h>

#undef CONTINUE

using $SwingContainerIsForContainerOnly = ::SwingContainerIsForContainerOnly;
using $Container = ::java::awt::Container;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $FileVisitResult = ::java::nio::file::FileVisitResult;
using $Path = ::java::nio::file::Path;
using $SimpleFileVisitor = ::java::nio::file::SimpleFileVisitor;
using $BasicFileAttributes = ::java::nio::file::attribute::BasicFileAttributes;
using $SwingContainer = ::javax::swing::SwingContainer;

$MethodInfo _SwingContainerIsForContainerOnly$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SwingContainerIsForContainerOnly$1::*)()>(&SwingContainerIsForContainerOnly$1::init$))},
	{"visitFile", "(Ljava/nio/file/Path;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC},
	{"visitFile", "(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _SwingContainerIsForContainerOnly$1_EnclosingMethodInfo_ = {
	"SwingContainerIsForContainerOnly",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _SwingContainerIsForContainerOnly$1_InnerClassesInfo_[] = {
	{"SwingContainerIsForContainerOnly$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SwingContainerIsForContainerOnly$1_ClassInfo_ = {
	$ACC_SUPER,
	"SwingContainerIsForContainerOnly$1",
	"java.nio.file.SimpleFileVisitor",
	nullptr,
	nullptr,
	_SwingContainerIsForContainerOnly$1_MethodInfo_,
	"Ljava/nio/file/SimpleFileVisitor<Ljava/nio/file/Path;>;",
	&_SwingContainerIsForContainerOnly$1_EnclosingMethodInfo_,
	_SwingContainerIsForContainerOnly$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SwingContainerIsForContainerOnly"
};

$Object* allocate$SwingContainerIsForContainerOnly$1($Class* clazz) {
	return $of($alloc(SwingContainerIsForContainerOnly$1));
}

void SwingContainerIsForContainerOnly$1::init$() {
	$SimpleFileVisitor::init$();
}

$FileVisitResult* SwingContainerIsForContainerOnly$1::visitFile($Path* file$renamed, $BasicFileAttributes* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($Path, file, file$renamed);
	$beforeCallerSensitive();
	$assign(file, $nc(file)->subpath(2, file->getNameCount()));
	$var($String, name, file->toString());
	if ($nc(name)->endsWith(".class"_s)) {
		$assign(name, $(name->substring(0, name->indexOf("."_s)))->replace(u'/', u'.'));
		$Class* type = nullptr;
		try {
			type = $Class::forName(name, false, nullptr);
		} catch ($Throwable&) {
			$var($Throwable, e, $catch());
			$init($FileVisitResult);
			return $FileVisitResult::CONTINUE;
		}
		$load($SwingContainer);
		if ($nc(type)->isAnnotationPresent($SwingContainer::class$)) {
			$load($Container);
			if (!$Container::class$->isAssignableFrom(type)) {
				$init($System);
				$nc($System::err)->println($$str({"Wrong annotation for: "_s, type}));
				$throwNew($RuntimeException);
			}
		}
	}
	$init($FileVisitResult);
	return $FileVisitResult::CONTINUE;
}

$FileVisitResult* SwingContainerIsForContainerOnly$1::visitFile(Object$* file, $BasicFileAttributes* attrs) {
	return this->visitFile($cast($Path, file), attrs);
}

SwingContainerIsForContainerOnly$1::SwingContainerIsForContainerOnly$1() {
}

$Class* SwingContainerIsForContainerOnly$1::load$($String* name, bool initialize) {
	$loadClass(SwingContainerIsForContainerOnly$1, name, initialize, &_SwingContainerIsForContainerOnly$1_ClassInfo_, allocate$SwingContainerIsForContainerOnly$1);
	return class$;
}

$Class* SwingContainerIsForContainerOnly$1::class$ = nullptr;