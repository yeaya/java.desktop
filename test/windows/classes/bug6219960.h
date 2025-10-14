#ifndef _bug6219960_h_
#define _bug6219960_h_
//$ class bug6219960
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("QUESTION")
#undef QUESTION

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JButton;
		class JFrame;
		class JInternalFrame;
		class JTable;
	}
}

class $export bug6219960 : public ::java::lang::Object {
	$class(bug6219960, 0, ::java::lang::Object)
public:
	bug6219960();
	void init$();
	static void createAndShowGUI();
	static ::javax::swing::JTable* createTable();
	static ::javax::swing::JButton* findButton(::java::awt::Component* comp);
	static ::javax::swing::JInternalFrame* findModalInternalFrame(::java::awt::Component* comp, $String* title);
	static void lambda$showModal$0();
	static void lambda$showModal$1($String* msg);
	static void main($StringArray* args);
	static bool pressOK(::java::awt::Component* comp);
	static void showModal($String* msg);
	static $String* QUESTION;
	static $volatile(::javax::swing::JFrame*) frame;
	static ::javax::swing::JTable* table;
};

#pragma pop_macro("QUESTION")

#endif // _bug6219960_h_