#ifndef _javax_swing_ActionMap_h_
#define _javax_swing_ActionMap_h_
//$ class javax.swing.ActionMap
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class ArrayTable;
	}
}

namespace javax {
	namespace swing {

class $export ActionMap : public ::java::io::Serializable {
	$class(ActionMap, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	ActionMap();
	void init$();
	virtual $ObjectArray* allKeys();
	virtual void clear();
	virtual ::javax::swing::Action* get(Object$* key);
	virtual ::javax::swing::ActionMap* getParent();
	virtual $ObjectArray* keys();
	virtual void put(Object$* key, ::javax::swing::Action* action);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void remove(Object$* key);
	virtual void setParent(::javax::swing::ActionMap* map);
	virtual int32_t size();
	void writeObject(::java::io::ObjectOutputStream* s);
	::javax::swing::ArrayTable* arrayTable = nullptr;
	::javax::swing::ActionMap* parent = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_ActionMap_h_