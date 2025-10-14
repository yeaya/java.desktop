#ifndef _java_beans_beancontext_BeanContextSupport$BCSIterator_h_
#define _java_beans_beancontext_BeanContextSupport$BCSIterator_h_
//$ class java.beans.beancontext.BeanContextSupport$BCSIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace beans {
		namespace beancontext {

class $import BeanContextSupport$BCSIterator : public ::java::util::Iterator {
	$class(BeanContextSupport$BCSIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	BeanContextSupport$BCSIterator();
	void init$(::java::util::Iterator* i);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::Iterator* src = nullptr;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextSupport$BCSIterator_h_