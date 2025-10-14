#ifndef _bug6994419$1$1_h_
#define _bug6994419$1$1_h_
//$ class bug6994419$1$1
//$ extends java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>

class bug6994419$1;
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

class bug6994419$1$1 : public ::java::beans::PropertyChangeListener {
	$class(bug6994419$1$1, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener)
public:
	bug6994419$1$1();
	void init$(::bug6994419$1* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	::bug6994419$1* this$0 = nullptr;
};

#endif // _bug6994419$1$1_h_