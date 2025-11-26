#ifndef _bug8021253_h_
#define _bug8021253_h_
//$ class bug8021253
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace javax {
	namespace swing {
		class JFileChooser;
		class JFrame;
	}
}

class $export bug8021253 : public ::java::lang::Object {
	$class(bug8021253, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug8021253();
	void init$();
	static void createAndShowGUI();
	static ::java::io::File* getTempFile();
	static void main($StringArray* args);
	static $volatile(bool) defaultKeyPressed;
	static ::javax::swing::JFileChooser* fileChooser;
	static ::java::io::File* file;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug8021253_h_