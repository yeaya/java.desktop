#include <javax/swing/InputMap.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/HashMap.h>
#include <java/util/Set.h>
#include <javax/swing/ArrayTable.h>
#include <javax/swing/KeyStroke.h>
#include <jcpp.h>

using $KeyStrokeArray = $Array<::javax::swing::KeyStroke>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Set = ::java::util::Set;
using $ArrayTable = ::javax::swing::ArrayTable;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace javax {
	namespace swing {

$FieldInfo _InputMap_FieldInfo_[] = {
	{"arrayTable", "Ljavax/swing/ArrayTable;", nullptr, $PRIVATE | $TRANSIENT, $field(InputMap, arrayTable)},
	{"parent", "Ljavax/swing/InputMap;", nullptr, $PRIVATE, $field(InputMap, parent)},
	{}
};

$MethodInfo _InputMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InputMap::*)()>(&InputMap::init$))},
	{"allKeys", "()[Ljavax/swing/KeyStroke;", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"get", "(Ljavax/swing/KeyStroke;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getParent", "()Ljavax/swing/InputMap;", nullptr, $PUBLIC},
	{"keys", "()[Ljavax/swing/KeyStroke;", nullptr, $PUBLIC},
	{"put", "(Ljavax/swing/KeyStroke;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(InputMap::*)($ObjectInputStream*)>(&InputMap::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"remove", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/InputMap;)V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(InputMap::*)($ObjectOutputStream*)>(&InputMap::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _InputMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.InputMap",
	"java.lang.Object",
	"java.io.Serializable",
	_InputMap_FieldInfo_,
	_InputMap_MethodInfo_
};

$Object* allocate$InputMap($Class* clazz) {
	return $of($alloc(InputMap));
}

void InputMap::init$() {
}

void InputMap::setParent(InputMap* map) {
	$set(this, parent, map);
}

InputMap* InputMap::getParent() {
	return this->parent;
}

void InputMap::put($KeyStroke* keyStroke, Object$* actionMapKey) {
	if (keyStroke == nullptr) {
		return;
	}
	if (actionMapKey == nullptr) {
		remove(keyStroke);
	} else {
		if (this->arrayTable == nullptr) {
			$set(this, arrayTable, $new($ArrayTable));
		}
		$nc(this->arrayTable)->put(keyStroke, actionMapKey);
	}
}

$Object* InputMap::get($KeyStroke* keyStroke) {
	$useLocalCurrentObjectStackCache();
	if (this->arrayTable == nullptr) {
		$var(InputMap, parent, getParent());
		if (parent != nullptr) {
			return $of(parent->get(keyStroke));
		}
		return $of(nullptr);
	}
	$var($Object, value, $nc(this->arrayTable)->get(keyStroke));
	if (value == nullptr) {
		$var(InputMap, parent, getParent());
		if (parent != nullptr) {
			return $of(parent->get(keyStroke));
		}
	}
	return $of(value);
}

void InputMap::remove($KeyStroke* key) {
	if (this->arrayTable != nullptr) {
		$nc(this->arrayTable)->remove(key);
	}
}

void InputMap::clear() {
	if (this->arrayTable != nullptr) {
		$nc(this->arrayTable)->clear();
	}
}

$KeyStrokeArray* InputMap::keys() {
	if (this->arrayTable == nullptr) {
		return nullptr;
	}
	$var($KeyStrokeArray, keys, $new($KeyStrokeArray, $nc(this->arrayTable)->size()));
	$nc(this->arrayTable)->getKeys(keys);
	return keys;
}

int32_t InputMap::size() {
	if (this->arrayTable == nullptr) {
		return 0;
	}
	return $nc(this->arrayTable)->size();
}

$KeyStrokeArray* InputMap::allKeys() {
	$useLocalCurrentObjectStackCache();
	int32_t count = size();
	$var(InputMap, parent, getParent());
	if (count == 0) {
		if (parent != nullptr) {
			return parent->allKeys();
		}
		return this->keys();
	}
	if (parent == nullptr) {
		return this->keys();
	}
	$var($KeyStrokeArray, keys, this->keys());
	$var($KeyStrokeArray, pKeys, $nc(parent)->allKeys());
	if (pKeys == nullptr) {
		return keys;
	}
	if (keys == nullptr) {
		return pKeys;
	}
	$var($HashMap, keyMap, $new($HashMap));
	int32_t counter = 0;
	for (counter = $nc(keys)->length - 1; counter >= 0; --counter) {
		keyMap->put(keys->get(counter), keys->get(counter));
	}
	for (counter = $nc(pKeys)->length - 1; counter >= 0; --counter) {
		keyMap->put(pKeys->get(counter), pKeys->get(counter));
	}
	$var($KeyStrokeArray, allKeys, $new($KeyStrokeArray, keyMap->size()));
	return $fcast($KeyStrokeArray, $nc($(keyMap->keySet()))->toArray(allKeys));
}

void InputMap::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	$ArrayTable::writeArrayTable(s, this->arrayTable);
}

void InputMap::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	for (int32_t counter = s->readInt() - 1; counter >= 0; --counter) {
		$var($KeyStroke, var$0, $cast($KeyStroke, s->readObject()));
		put(var$0, $(s->readObject()));
	}
}

InputMap::InputMap() {
}

$Class* InputMap::load$($String* name, bool initialize) {
	$loadClass(InputMap, name, initialize, &_InputMap_ClassInfo_, allocate$InputMap);
	return class$;
}

$Class* InputMap::class$ = nullptr;

	} // swing
} // javax