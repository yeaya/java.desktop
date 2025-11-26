#ifndef _bug4492274_h_
#define _bug4492274_h_
//$ class bug4492274
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class URL;
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
		class JFrame;
	}
}

class $export bug4492274 : public ::java::lang::Object {
	$class(bug4492274, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4492274();
	void init$();
	static void createAndShowGUI();
	static $String* getPageAnchor();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::java::net::URL* page;
	static ::javax::swing::JEditorPane* jep;
	static ::javax::swing::JFrame* f;
};

#endif // _bug4492274_h_