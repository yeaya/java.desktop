#ifndef _bug8158734$MyClassloader_h_
#define _bug8158734$MyClassloader_h_
//$ class bug8158734$MyClassloader
//$ extends java.lang.ClassLoader

#include <java/lang/ClassLoader.h>

class $export bug8158734$MyClassloader : public ::java::lang::ClassLoader {
	$class(bug8158734$MyClassloader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	bug8158734$MyClassloader();
	void init$();
	using ::java::lang::ClassLoader::loadClass;
	virtual $Class* loadClass($String* name) override;
};

#endif // _bug8158734$MyClassloader_h_