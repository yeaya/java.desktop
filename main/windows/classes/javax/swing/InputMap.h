#ifndef _javax_swing_InputMap_h_
#define _javax_swing_InputMap_h_
//$ class javax.swing.InputMap
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
		class ArrayTable;
		class KeyStroke;
	}
}

namespace javax {
	namespace swing {

class $export InputMap : public ::java::io::Serializable {
	$class(InputMap, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	InputMap();
	void init$();
	virtual $Array<::javax::swing::KeyStroke>* allKeys();
	virtual void clear();
	virtual $Object* get(::javax::swing::KeyStroke* keyStroke);
	virtual ::javax::swing::InputMap* getParent();
	virtual $Array<::javax::swing::KeyStroke>* keys();
	virtual void put(::javax::swing::KeyStroke* keyStroke, Object$* actionMapKey);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void remove(::javax::swing::KeyStroke* key);
	virtual void setParent(::javax::swing::InputMap* map);
	virtual int32_t size();
	void writeObject(::java::io::ObjectOutputStream* s);
	::javax::swing::ArrayTable* arrayTable = nullptr;
	::javax::swing::InputMap* parent = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_InputMap_h_