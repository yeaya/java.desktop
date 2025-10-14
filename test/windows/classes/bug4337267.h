#ifndef _bug4337267_h_
#define _bug4337267_h_
//$ class bug4337267
//$ extends java.lang.Object

#include <java/lang/Array.h>

class bug4337267$TestBufferedImage;
class bug4337267$TestJPanel;
namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JFrame;
	}
}

class $export bug4337267 : public ::java::lang::Object {
	$class(bug4337267, 0, ::java::lang::Object)
public:
	bug4337267();
	void init$();
	virtual void assertEquals(Object$* o1, Object$* o2);
	virtual ::java::awt::Component* createContentPane();
	virtual void fail($String* message);
	virtual void initUI();
	virtual void injectComponent(::javax::swing::JComponent* p, ::javax::swing::JComponent* c, bool shape);
	static void lambda$main$0();
	static void main($StringArray* args);
	virtual void printComponent(::javax::swing::JComponent* c, ::bug4337267$TestBufferedImage* i);
	virtual void run();
	virtual void setShaping(::javax::swing::JComponent* c);
	virtual void testNonTextComponentHTML();
	virtual void testNonTextComponentPlain();
	virtual void testTextComponent();
	::bug4337267$TestJPanel* p1 = nullptr;
	::bug4337267$TestJPanel* p2 = nullptr;
	::bug4337267$TestBufferedImage* i1 = nullptr;
	::bug4337267$TestBufferedImage* i2 = nullptr;
	$Array<::javax::swing::JComponent>* printq = nullptr;
	static ::javax::swing::JFrame* window;
	static bool testFailed;
	$String* shaped = nullptr;
	$String* text = nullptr;
};

#endif // _bug4337267_h_