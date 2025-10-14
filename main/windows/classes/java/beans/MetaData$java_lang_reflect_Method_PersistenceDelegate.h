#ifndef _java_beans_MetaData$java_lang_reflect_Method_PersistenceDelegate_h_
#define _java_beans_MetaData$java_lang_reflect_Method_PersistenceDelegate_h_
//$ class java.beans.MetaData$java_lang_reflect_Method_PersistenceDelegate
//$ extends java.beans.PersistenceDelegate

#include <java/beans/PersistenceDelegate.h>

namespace java {
	namespace beans {
		class Encoder;
		class Expression;
	}
}

namespace java {
	namespace beans {

class MetaData$java_lang_reflect_Method_PersistenceDelegate : public ::java::beans::PersistenceDelegate {
	$class(MetaData$java_lang_reflect_Method_PersistenceDelegate, $NO_CLASS_INIT, ::java::beans::PersistenceDelegate)
public:
	MetaData$java_lang_reflect_Method_PersistenceDelegate();
	void init$();
	virtual ::java::beans::Expression* instantiate(Object$* oldInstance, ::java::beans::Encoder* out) override;
	virtual bool mutatesTo(Object$* oldInstance, Object$* newInstance) override;
};

	} // beans
} // java

#endif // _java_beans_MetaData$java_lang_reflect_Method_PersistenceDelegate_h_