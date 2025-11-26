#ifndef _bug7199708$1_h_
#define _bug7199708$1_h_
//$ class bug7199708$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class File;
	}
}

class bug7199708$1 : public ::java::lang::Runnable {
	$class(bug7199708$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug7199708$1();
	void init$(::java::io::File* val$folder);
	virtual void run() override;
	::java::io::File* val$folder = nullptr;
};

#endif // _bug7199708$1_h_