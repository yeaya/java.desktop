#ifndef _java_beans_MetaData$java_lang_String_PersistenceDelegate_h_
#define _java_beans_MetaData$java_lang_String_PersistenceDelegate_h_
//$ class java.beans.MetaData$java_lang_String_PersistenceDelegate
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

class MetaData$java_lang_String_PersistenceDelegate : public ::java::beans::PersistenceDelegate {
	$class(MetaData$java_lang_String_PersistenceDelegate, $NO_CLASS_INIT, ::java::beans::PersistenceDelegate)
public:
	MetaData$java_lang_String_PersistenceDelegate();
	void init$();
	virtual ::java::beans::Expression* instantiate(Object$* oldInstance, ::java::beans::Encoder* out) override;
	virtual void writeObject(Object$* oldInstance, ::java::beans::Encoder* out) override;
};

	} // beans
} // java

#endif // _java_beans_MetaData$java_lang_String_PersistenceDelegate_h_