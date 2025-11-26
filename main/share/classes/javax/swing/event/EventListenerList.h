#ifndef _javax_swing_event_EventListenerList_h_
#define _javax_swing_event_EventListenerList_h_
//$ class javax.swing.event.EventListenerList
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("NULL_ARRAY")
#undef NULL_ARRAY

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class EventListener;
	}
}

namespace javax {
	namespace swing {
		namespace event {

class $export EventListenerList : public ::java::io::Serializable {
	$class(EventListenerList, 0, ::java::io::Serializable)
public:
	EventListenerList();
	void init$();
	virtual void add($Class* t, ::java::util::EventListener* l);
	virtual int32_t getListenerCount();
	virtual int32_t getListenerCount($Class* t);
	int32_t getListenerCount($ObjectArray* list, $Class* t);
	virtual $ObjectArray* getListenerList();
	virtual $Array<::java::util::EventListener>* getListeners($Class* t);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void remove($Class* t, ::java::util::EventListener* l);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $ObjectArray* NULL_ARRAY;
	$volatile($ObjectArray*) listenerList = nullptr;
};

		} // event
	} // swing
} // javax

#pragma pop_macro("NULL_ARRAY")

#endif // _javax_swing_event_EventListenerList_h_