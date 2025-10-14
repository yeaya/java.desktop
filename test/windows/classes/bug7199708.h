#ifndef _bug7199708_h_
#define _bug7199708_h_
//$ class bug7199708
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FILE_NUMBER")
#undef FILE_NUMBER

class bug7199708$ComponentAction;
namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
	}
}

class $export bug7199708 : public ::java::lang::Object {
	$class(bug7199708, 0, ::java::lang::Object)
public:
	bug7199708();
	void init$();
	static ::java::io::File* createLargeFolder();
	static void doAction(::java::awt::Component* component, ::bug7199708$ComponentAction* action);
	static void main($StringArray* args);
	static int32_t FILE_NUMBER;
	static $volatile(::javax::swing::JFileChooser*) fileChooser;
	static $volatile(int32_t) locationX;
	static $volatile(int32_t) locationY;
	static $volatile(int32_t) width;
	static ::java::io::File* largeFolder;
	static $Array<::java::io::File>* files;
};

#pragma pop_macro("FILE_NUMBER")

#endif // _bug7199708_h_