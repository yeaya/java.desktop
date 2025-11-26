#ifndef _java_beans_MetaData$java_awt_BorderLayout_PersistenceDelegate_h_
#define _java_beans_MetaData$java_awt_BorderLayout_PersistenceDelegate_h_
//$ class java.beans.MetaData$java_awt_BorderLayout_PersistenceDelegate
//$ extends java.beans.DefaultPersistenceDelegate

#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/lang/Array.h>

#pragma push_macro("CONSTRAINTS")
#undef CONSTRAINTS

namespace java {
	namespace beans {
		class Encoder;
	}
}

namespace java {
	namespace beans {

class MetaData$java_awt_BorderLayout_PersistenceDelegate : public ::java::beans::DefaultPersistenceDelegate {
	$class(MetaData$java_awt_BorderLayout_PersistenceDelegate, 0, ::java::beans::DefaultPersistenceDelegate)
public:
	MetaData$java_awt_BorderLayout_PersistenceDelegate();
	void init$();
	virtual void initialize($Class* type, Object$* oldInstance, Object$* newInstance, ::java::beans::Encoder* out) override;
	static $StringArray* CONSTRAINTS;
};

	} // beans
} // java

#pragma pop_macro("CONSTRAINTS")

#endif // _java_beans_MetaData$java_awt_BorderLayout_PersistenceDelegate_h_