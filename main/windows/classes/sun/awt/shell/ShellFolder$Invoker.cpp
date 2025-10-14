#include <sun/awt/shell/ShellFolder$Invoker.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Callable.h>
#include <sun/awt/shell/ShellFolder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $ShellFolder = ::sun::awt::shell::ShellFolder;

namespace sun {
	namespace awt {
		namespace shell {

$MethodInfo _ShellFolder$Invoker_MethodInfo_[] = {
	{"invoke", "(Ljava/util/concurrent/Callable;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)TT;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _ShellFolder$Invoker_InnerClassesInfo_[] = {
	{"sun.awt.shell.ShellFolder$Invoker", "sun.awt.shell.ShellFolder", "Invoker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ShellFolder$Invoker_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.shell.ShellFolder$Invoker",
	nullptr,
	nullptr,
	nullptr,
	_ShellFolder$Invoker_MethodInfo_,
	nullptr,
	nullptr,
	_ShellFolder$Invoker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.ShellFolder"
};

$Object* allocate$ShellFolder$Invoker($Class* clazz) {
	return $of($alloc(ShellFolder$Invoker));
}

$Class* ShellFolder$Invoker::load$($String* name, bool initialize) {
	$loadClass(ShellFolder$Invoker, name, initialize, &_ShellFolder$Invoker_ClassInfo_, allocate$ShellFolder$Invoker);
	return class$;
}

$Class* ShellFolder$Invoker::class$ = nullptr;

		} // shell
	} // awt
} // sun