#ifndef _sun_awt_shell_Win32ShellFolderManager2$ComInvoker_h_
#define _sun_awt_shell_Win32ShellFolderManager2$ComInvoker_h_
//$ class sun.awt.shell.Win32ShellFolderManager2$ComInvoker
//$ extends java.util.concurrent.ThreadPoolExecutor
//$ implements java.util.concurrent.ThreadFactory,sun.awt.shell.ShellFolder$Invoker

#include <java/util/concurrent/ThreadFactory.h>
#include <java/util/concurrent/ThreadPoolExecutor.h>
#include <sun/awt/shell/ShellFolder$Invoker.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
		class Void;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}

namespace sun {
	namespace awt {
		namespace shell {

class $export Win32ShellFolderManager2$ComInvoker : public ::java::util::concurrent::ThreadPoolExecutor, public ::java::util::concurrent::ThreadFactory, public ::sun::awt::shell::ShellFolder$Invoker {
	$class(Win32ShellFolderManager2$ComInvoker, $NO_CLASS_INIT, ::java::util::concurrent::ThreadPoolExecutor, ::java::util::concurrent::ThreadFactory, ::sun::awt::shell::ShellFolder$Invoker)
public:
	Win32ShellFolderManager2$ComInvoker();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* invoke(::java::util::concurrent::Callable* task) override;
	::java::lang::Void* lambda$new$0();
	void lambda$new$1();
	static ::java::lang::Void* lambda$new$2(::java::lang::Runnable* shutdownHook);
	static $Thread* lambda$newThread$3(::java::lang::Runnable* comRun);
	virtual $Thread* newThread(::java::lang::Runnable* task) override;
	virtual $String* toString() override;
	static $Thread* comThread;
};

		} // shell
	} // awt
} // sun

#endif // _sun_awt_shell_Win32ShellFolderManager2$ComInvoker_h_