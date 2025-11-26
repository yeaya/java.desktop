#ifndef _bug6493680$Test$1_h_
#define _bug6493680$Test$1_h_
//$ class bug6493680$Test$1
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

class bug6493680$Test;
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

class bug6493680$Test$1 : public ::java::beans::PropertyChangeListener {
	$class(bug6493680$Test$1, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	bug6493680$Test$1();
	void init$(::bug6493680$Test* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	::bug6493680$Test* this$0 = nullptr;
};

#endif // _bug6493680$Test$1_h_