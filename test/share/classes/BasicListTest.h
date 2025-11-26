#ifndef _BasicListTest_h_
#define _BasicListTest_h_
//$ class BasicListTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

class MyList;
namespace java {
	namespace awt {
		class Point;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JScrollPane;
		class UIManager$LookAndFeelInfo;
	}
}

class $export BasicListTest : public ::java::lang::Object {
	$class(BasicListTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BasicListTest();
	void init$();
	static void initComponents();
	static void lambda$main$0(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$main$1();
	static void lambda$main$2();
	static void main($StringArray* args);
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static ::javax::swing::JScrollPane* jScrollPane1;
	static ::MyList* list1;
	static ::java::awt::Point* p;
	static ::javax::swing::JFrame* f;
};

#endif // _BasicListTest_h_