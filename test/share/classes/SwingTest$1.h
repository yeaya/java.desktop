#ifndef _SwingTest$1_h_
#define _SwingTest$1_h_
//$ class SwingTest$1
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

class SwingTest;
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

class SwingTest$1 : public ::java::util::Comparator {
	$class(SwingTest$1, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	SwingTest$1();
	void init$(::SwingTest* this$0);
	virtual int32_t compare(::java::lang::reflect::Method* first, ::java::lang::reflect::Method* second);
	virtual int32_t compare(Object$* first, Object$* second) override;
	::SwingTest* this$0 = nullptr;
};

#endif // _SwingTest$1_h_