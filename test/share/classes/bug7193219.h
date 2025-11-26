#ifndef _bug7193219_h_
#define _bug7193219_h_
//$ class bug7193219
//$ extends java.lang.Object

#include <java/lang/Array.h>

class $export bug7193219 : public ::java::lang::Object {
	$class(bug7193219, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug7193219();
	void init$();
	static void deserializeGUI($bytes* serializedData);
	static void main($StringArray* args);
	static $bytes* serializeGUI();
};

#endif // _bug7193219_h_