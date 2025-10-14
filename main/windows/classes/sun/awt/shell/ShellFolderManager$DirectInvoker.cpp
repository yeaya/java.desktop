#include <sun/awt/shell/ShellFolderManager$DirectInvoker.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/Callable.h>
#include <sun/awt/shell/ShellFolderManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;
using $ShellFolder$Invoker = ::sun::awt::shell::ShellFolder$Invoker;
using $ShellFolderManager = ::sun::awt::shell::ShellFolderManager;

namespace sun {
	namespace awt {
		namespace shell {

$MethodInfo _ShellFolderManager$DirectInvoker_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ShellFolderManager$DirectInvoker::*)()>(&ShellFolderManager$DirectInvoker::init$))},
	{"invoke", "(Ljava/util/concurrent/Callable;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)TT;", $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _ShellFolderManager$DirectInvoker_InnerClassesInfo_[] = {
	{"sun.awt.shell.ShellFolderManager$DirectInvoker", "sun.awt.shell.ShellFolderManager", "DirectInvoker", $PRIVATE | $STATIC},
	{"sun.awt.shell.ShellFolder$Invoker", "sun.awt.shell.ShellFolder", "Invoker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ShellFolderManager$DirectInvoker_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.shell.ShellFolderManager$DirectInvoker",
	"java.lang.Object",
	"sun.awt.shell.ShellFolder$Invoker",
	nullptr,
	_ShellFolderManager$DirectInvoker_MethodInfo_,
	nullptr,
	nullptr,
	_ShellFolderManager$DirectInvoker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.shell.ShellFolderManager"
};

$Object* allocate$ShellFolderManager$DirectInvoker($Class* clazz) {
	return $of($alloc(ShellFolderManager$DirectInvoker));
}

void ShellFolderManager$DirectInvoker::init$() {
}

$Object* ShellFolderManager$DirectInvoker::invoke($Callable* task) {
	return $of($nc(task)->call());
}

ShellFolderManager$DirectInvoker::ShellFolderManager$DirectInvoker() {
}

$Class* ShellFolderManager$DirectInvoker::load$($String* name, bool initialize) {
	$loadClass(ShellFolderManager$DirectInvoker, name, initialize, &_ShellFolderManager$DirectInvoker_ClassInfo_, allocate$ShellFolderManager$DirectInvoker);
	return class$;
}

$Class* ShellFolderManager$DirectInvoker::class$ = nullptr;

		} // shell
	} // awt
} // sun