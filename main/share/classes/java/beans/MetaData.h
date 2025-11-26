#ifndef _java_beans_MetaData_h_
#define _java_beans_MetaData_h_
//$ class java.beans.MetaData
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace beans {
		class PersistenceDelegate;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Map;
	}
}

namespace java {
	namespace beans {

class MetaData : public ::java::lang::Object {
	$class(MetaData, 0, ::java::lang::Object)
public:
	MetaData();
	void init$();
	static $StringArray* getAnnotationValue(::java::lang::reflect::Constructor* constructor);
	static $Object* getBeanAttribute($Class* type, $String* attribute);
	static $StringArray* getConstructorProperties($Class* type);
	static ::java::beans::PersistenceDelegate* getPersistenceDelegate($Class* type);
	static $Object* getPrivateFieldValue(Object$* instance, $String* name);
	static bool isValid(::java::lang::reflect::Constructor* constructor, $StringArray* names);
	static ::java::util::Map* fields;
	static ::java::util::Hashtable* internalPersistenceDelegates;
	static ::java::beans::PersistenceDelegate* nullPersistenceDelegate;
	static ::java::beans::PersistenceDelegate* enumPersistenceDelegate;
	static ::java::beans::PersistenceDelegate* primitivePersistenceDelegate;
	static ::java::beans::PersistenceDelegate* defaultPersistenceDelegate;
	static ::java::beans::PersistenceDelegate* arrayPersistenceDelegate;
	static ::java::beans::PersistenceDelegate* proxyPersistenceDelegate;
};

	} // beans
} // java

#endif // _java_beans_MetaData_h_