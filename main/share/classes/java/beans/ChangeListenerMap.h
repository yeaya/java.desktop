#ifndef _java_beans_ChangeListenerMap_h_
#define _java_beans_ChangeListenerMap_h_
//$ class java.beans.ChangeListenerMap
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class EventListener;
		class Map;
		class Set;
	}
}

namespace java {
	namespace beans {

class ChangeListenerMap : public ::java::lang::Object {
	$class(ChangeListenerMap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ChangeListenerMap();
	void init$();
	void add($String* name, ::java::util::EventListener* listener);
	virtual ::java::util::EventListener* extract(::java::util::EventListener* listener) {return nullptr;}
	$Array<::java::util::EventListener>* get($String* name);
	::java::util::Set* getEntries();
	$Array<::java::util::EventListener>* getListeners();
	$Array<::java::util::EventListener>* getListeners($String* name);
	bool hasListeners($String* name);
	virtual $Array<::java::util::EventListener>* newArray(int32_t length) {return nullptr;}
	virtual ::java::util::EventListener* newProxy($String* name, ::java::util::EventListener* listener) {return nullptr;}
	void remove($String* name, ::java::util::EventListener* listener);
	void set($String* name, $Array<::java::util::EventListener>* listeners);
	::java::util::Map* map = nullptr;
};

	} // beans
} // java

#endif // _java_beans_ChangeListenerMap_h_