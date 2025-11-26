#ifndef _bug6868611$MyThread_h_
#define _bug6868611$MyThread_h_
//$ class bug6868611$MyThread
//$ extends java.lang.Thread

#include <java/lang/Thread.h>

namespace java {
	namespace io {
		class File;
	}
}

class bug6868611$MyThread : public ::java::lang::Thread {
	$class(bug6868611$MyThread, $NO_CLASS_INIT, ::java::lang::Thread)
public:
	bug6868611$MyThread();
	void init$(::java::io::File* dir);
	virtual void run() override;
	::java::io::File* dir = nullptr;
};

#endif // _bug6868611$MyThread_h_