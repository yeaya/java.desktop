#ifndef _java_beans_MetaData$java_sql_Timestamp_PersistenceDelegate_h_
#define _java_beans_MetaData$java_sql_Timestamp_PersistenceDelegate_h_
//$ class java.beans.MetaData$java_sql_Timestamp_PersistenceDelegate
//$ extends java.beans.MetaData$java_util_Date_PersistenceDelegate

#include <java/beans/MetaData$java_util_Date_PersistenceDelegate.h>

namespace java {
	namespace beans {
		class Encoder;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace java {
	namespace beans {

class MetaData$java_sql_Timestamp_PersistenceDelegate : public ::java::beans::MetaData$java_util_Date_PersistenceDelegate {
	$class(MetaData$java_sql_Timestamp_PersistenceDelegate, 0, ::java::beans::MetaData$java_util_Date_PersistenceDelegate)
public:
	MetaData$java_sql_Timestamp_PersistenceDelegate();
	void init$();
	static int32_t getNanos(Object$* obj);
	static ::java::lang::reflect::Method* getNanosMethod();
	virtual void initialize($Class* type, Object$* oldInstance, Object$* newInstance, ::java::beans::Encoder* out) override;
	static ::java::lang::reflect::Method* getNanosMethod$;
};

	} // beans
} // java

#endif // _java_beans_MetaData$java_sql_Timestamp_PersistenceDelegate_h_