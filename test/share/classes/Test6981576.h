#ifndef _Test6981576_h_
#define _Test6981576_h_
//$ class Test6981576
//$ extends javax.swing.border.TitledBorder

#include <java/lang/Array.h>
#include <javax/swing/border/TitledBorder.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace java {
	namespace lang {
		class Thread;
		class Throwable;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class UIManager$LookAndFeelInfo;
	}
}

class $export Test6981576 : public ::javax::swing::border::TitledBorder {
	$class(Test6981576, $NO_CLASS_INIT, ::javax::swing::border::TitledBorder)
public:
	Test6981576();
	using ::javax::swing::border::TitledBorder::getBorderInsets;
	void init$();
	static void lambda$main$0($Thread* t, $Throwable* e);
	static void lambda$main$1(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static void lambda$main$2();
	static void lambda$main$3();
	static void lambda$main$4();
	static void main($StringArray* args);
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
	static $volatile($Throwable*) failed;
	static ::javax::swing::JFrame* frame;
};

#endif // _Test6981576_h_