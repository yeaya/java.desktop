#include <javax/swing/ActionMap.h>

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
#include <javax/swing/Action.h>
#include <javax/swing/ArrayTable.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Set = ::java::util::Set;
using $Action = ::javax::swing::Action;
using $ArrayTable = ::javax::swing::ArrayTable;

namespace javax {
	namespace swing {

$FieldInfo _ActionMap_FieldInfo_[] = {
	{"arrayTable", "Ljavax/swing/ArrayTable;", nullptr, $PRIVATE | $TRANSIENT, $field(ActionMap, arrayTable)},
	{"parent", "Ljavax/swing/ActionMap;", nullptr, $PRIVATE, $field(ActionMap, parent)},
	{}
};

$MethodInfo _ActionMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ActionMap::*)()>(&ActionMap::init$))},
	{"allKeys", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getParent", "()Ljavax/swing/ActionMap;", nullptr, $PUBLIC},
	{"keys", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/Object;Ljavax/swing/Action;)V", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ActionMap::*)($ObjectInputStream*)>(&ActionMap::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"remove", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/ActionMap;)V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(ActionMap::*)($ObjectOutputStream*)>(&ActionMap::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _ActionMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.ActionMap",
	"java.lang.Object",
	"java.io.Serializable",
	_ActionMap_FieldInfo_,
	_ActionMap_MethodInfo_
};

$Object* allocate$ActionMap($Class* clazz) {
	return $of($alloc(ActionMap));
}

void ActionMap::init$() {
}

void ActionMap::setParent(ActionMap* map) {
	$set(this, parent, map);
}

ActionMap* ActionMap::getParent() {
	return this->parent;
}

void ActionMap::put(Object$* key, $Action* action) {
	if (key == nullptr) {
		return;
	}
	if (action == nullptr) {
		remove(key);
	} else {
		if (this->arrayTable == nullptr) {
			$set(this, arrayTable, $new($ArrayTable));
		}
		$nc(this->arrayTable)->put(key, action);
	}
}

$Action* ActionMap::get(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($Action, value, (this->arrayTable == nullptr) ? ($Action*)nullptr : $cast($Action, $nc(this->arrayTable)->get(key)));
	if (value == nullptr) {
		$var(ActionMap, parent, getParent());
		if (parent != nullptr) {
			return parent->get(key);
		}
	}
	return value;
}

void ActionMap::remove(Object$* key) {
	if (this->arrayTable != nullptr) {
		$nc(this->arrayTable)->remove(key);
	}
}

void ActionMap::clear() {
	if (this->arrayTable != nullptr) {
		$nc(this->arrayTable)->clear();
	}
}

$ObjectArray* ActionMap::keys() {
	if (this->arrayTable == nullptr) {
		return nullptr;
	}
	return $nc(this->arrayTable)->getKeys(nullptr);
}

int32_t ActionMap::size() {
	if (this->arrayTable == nullptr) {
		return 0;
	}
	return $nc(this->arrayTable)->size();
}

$ObjectArray* ActionMap::allKeys() {
	$useLocalCurrentObjectStackCache();
	int32_t count = size();
	$var(ActionMap, parent, getParent());
	if (count == 0) {
		if (parent != nullptr) {
			return parent->allKeys();
		}
		return this->keys();
	}
	if (parent == nullptr) {
		return this->keys();
	}
	$var($ObjectArray, keys, this->keys());
	$var($ObjectArray, pKeys, $nc(parent)->allKeys());
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
	return $nc($(keyMap->keySet()))->toArray();
}

void ActionMap::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	$ArrayTable::writeArrayTable(s, this->arrayTable);
}

void ActionMap::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	for (int32_t counter = s->readInt() - 1; counter >= 0; --counter) {
		$var($Object, var$0, s->readObject());
		put(var$0, $cast($Action, $(s->readObject())));
	}
}

ActionMap::ActionMap() {
}

$Class* ActionMap::load$($String* name, bool initialize) {
	$loadClass(ActionMap, name, initialize, &_ActionMap_ClassInfo_, allocate$ActionMap);
	return class$;
}

$Class* ActionMap::class$ = nullptr;

	} // swing
} // javax