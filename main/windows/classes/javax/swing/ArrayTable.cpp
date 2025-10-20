#include <javax/swing/ArrayTable.h>

#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <javax/swing/ClientPropertyKey.h>
#include <jcpp.h>

#undef ARRAY_BOUNDARY

using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $ClientPropertyKey = ::javax::swing::ClientPropertyKey;

namespace javax {
	namespace swing {

$FieldInfo _ArrayTable_FieldInfo_[] = {
	{"table", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(ArrayTable, table)},
	{"ARRAY_BOUNDARY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ArrayTable, ARRAY_BOUNDARY)},
	{}
};

$MethodInfo _ArrayTable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ArrayTable::*)()>(&ArrayTable::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"containsKey", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getKeys", "([Ljava/lang/Object;)[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"grow", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArrayTable::*)()>(&ArrayTable::grow))},
	{"isArray", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ArrayTable::*)()>(&ArrayTable::isArray))},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"shrink", "()V", nullptr, $PRIVATE, $method(static_cast<void(ArrayTable::*)()>(&ArrayTable::shrink))},
	{"size", "()I", nullptr, $PUBLIC},
	{"writeArrayTable", "(Ljava/io/ObjectOutputStream;Ljavax/swing/ArrayTable;)V", nullptr, $STATIC, $method(static_cast<void(*)($ObjectOutputStream*,ArrayTable*)>(&ArrayTable::writeArrayTable)), "java.io.IOException"},
	{}
};

$ClassInfo _ArrayTable_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.ArrayTable",
	"java.lang.Object",
	"java.lang.Cloneable",
	_ArrayTable_FieldInfo_,
	_ArrayTable_MethodInfo_
};

$Object* allocate$ArrayTable($Class* clazz) {
	return $of($alloc(ArrayTable));
}

void ArrayTable::init$() {
	$set(this, table, nullptr);
}

void ArrayTable::writeArrayTable($ObjectOutputStream* s, ArrayTable* table) {
	$init(ArrayTable);
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, keys, nullptr);
	if (table == nullptr || ($assign(keys, $nc(table)->getKeys(nullptr))) == nullptr) {
		$nc(s)->writeInt(0);
	} else {
		int32_t validCount = 0;
		for (int32_t counter = 0; counter < $nc(keys)->length; ++counter) {
			$var($Object0, key, keys->get(counter));
			bool var$0 = ($instanceOf($Serializable, key) && $instanceOf($Serializable, $(table->get(key))));
			if (var$0 || ($instanceOf($ClientPropertyKey, key) && $nc(($cast($ClientPropertyKey, key)))->getReportValueNotSerializable())) {
				++validCount;
			} else {
				keys->set(counter, nullptr);
			}
		}
		$nc(s)->writeInt(validCount);
		if (validCount > 0) {
			{
				$var($ObjectArray, arr$, keys);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($Object0, key, arr$->get(i$));
					{
						if (key != nullptr) {
							s->writeObject(key);
							s->writeObject($(table->get(key)));
							if (--validCount == 0) {
								break;
							}
						}
					}
				}
			}
		}
	}
}

void ArrayTable::put(Object$* key, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if (this->table == nullptr) {
		$set(this, table, $new($ObjectArray, {
			key,
			value
		}));
	} else {
		int32_t size = this->size();
		if (size < ArrayTable::ARRAY_BOUNDARY) {
			if (containsKey(key)) {
				$var($ObjectArray, tmp, $cast($ObjectArray, this->table));
				for (int32_t i = 0; i < $nc(tmp)->length - 1; i += 2) {
					if ($nc($of(tmp->get(i)))->equals(key)) {
						tmp->set(i + 1, value);
						break;
					}
				}
			} else {
				$var($ObjectArray, array, $cast($ObjectArray, this->table));
				int32_t i = $nc(array)->length;
				$var($ObjectArray, tmp, $new($ObjectArray, i + 2));
				$System::arraycopy(array, 0, tmp, 0, i);
				tmp->set(i, key);
				tmp->set(i + 1, value);
				$set(this, table, tmp);
			}
		} else {
			if ((size == ArrayTable::ARRAY_BOUNDARY) && isArray()) {
				grow();
			}
			$var($Hashtable, tmp, $cast($Hashtable, this->table));
			$nc(tmp)->put(key, value);
		}
	}
}

$Object* ArrayTable::get(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, nullptr);
	if (this->table != nullptr) {
		if (isArray()) {
			$var($ObjectArray, array, $cast($ObjectArray, this->table));
			for (int32_t i = 0; i < $nc(array)->length - 1; i += 2) {
				if ($nc($of(array->get(i)))->equals(key)) {
					$assign(value, array->get(i + 1));
					break;
				}
			}
		} else {
			$assign(value, $nc(($cast($Hashtable, this->table)))->get(key));
		}
	}
	return $of(value);
}

int32_t ArrayTable::size() {
	int32_t size = 0;
	if (this->table == nullptr) {
		return 0;
	}
	if (isArray()) {
		size = $nc(($cast($ObjectArray, this->table)))->length / 2;
	} else {
		size = $nc(($cast($Hashtable, this->table)))->size();
	}
	return size;
}

bool ArrayTable::containsKey(Object$* key) {
	bool contains = false;
	if (this->table != nullptr) {
		if (isArray()) {
			$var($ObjectArray, array, $cast($ObjectArray, this->table));
			for (int32_t i = 0; i < $nc(array)->length - 1; i += 2) {
				if ($nc($of(array->get(i)))->equals(key)) {
					contains = true;
					break;
				}
			}
		} else {
			contains = $nc(($cast($Hashtable, this->table)))->containsKey(key);
		}
	}
	return contains;
}

$Object* ArrayTable::remove(Object$* key) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, nullptr);
	if (key == nullptr) {
		return $of(nullptr);
	}
	if (this->table != nullptr) {
		if (isArray()) {
			int32_t index = -1;
			$var($ObjectArray, array, $cast($ObjectArray, this->table));
			for (int32_t i = $nc(array)->length - 2; i >= 0; i -= 2) {
				if ($nc($of(array->get(i)))->equals(key)) {
					index = i;
					$assign(value, array->get(i + 1));
					break;
				}
			}
			if (index != -1) {
				$var($ObjectArray, tmp, $new($ObjectArray, array->length - 2));
				$System::arraycopy(array, 0, tmp, 0, index);
				if (index < tmp->length) {
					$System::arraycopy(array, index + 2, tmp, index, tmp->length - index);
				}
				$set(this, table, (tmp->length == 0) ? ($Object*)nullptr : $of(tmp));
			}
		} else {
			$assign(value, $nc(($cast($Hashtable, this->table)))->remove(key));
		}
		bool var$0 = size() == ArrayTable::ARRAY_BOUNDARY - 1;
		if (var$0 && !isArray()) {
			shrink();
		}
	}
	return $of(value);
}

void ArrayTable::clear() {
	$set(this, table, nullptr);
}

$Object* ArrayTable::clone() {
	$useLocalCurrentObjectStackCache();
	$var(ArrayTable, newArrayTable, $new(ArrayTable));
	if (this->table != nullptr) {
		if (isArray()) {
			$var($ObjectArray, array, $cast($ObjectArray, this->table));
			for (int32_t i = 0; i < $nc(array)->length - 1; i += 2) {
				newArrayTable->put(array->get(i), array->get(i + 1));
			}
		} else {
			$var($Hashtable, tmp, $cast($Hashtable, this->table));
			$var($Enumeration, keys, $nc(tmp)->keys());
			while ($nc(keys)->hasMoreElements()) {
				$var($Object, o, keys->nextElement());
				newArrayTable->put(o, $(tmp->get(o)));
			}
		}
	}
	return $of(newArrayTable);
}

$ObjectArray* ArrayTable::getKeys($ObjectArray* keys$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, keys, keys$renamed);
	if (this->table == nullptr) {
		return nullptr;
	}
	if (isArray()) {
		$var($ObjectArray, array, $cast($ObjectArray, this->table));
		if (keys == nullptr) {
			$assign(keys, $new($ObjectArray, $nc(array)->length / 2));
		}
		{
			int32_t i = 0;
			int32_t index = 0;
			for (; i < $nc(array)->length - 1; i += 2, ++index) {
				$nc(keys)->set(index, array->get(i));
			}
		}
	} else {
		$var($Hashtable, tmp, $cast($Hashtable, this->table));
		$var($Enumeration, enum_, $nc(tmp)->keys());
		int32_t counter = tmp->size();
		if (keys == nullptr) {
			$assign(keys, $new($ObjectArray, counter));
		}
		while (counter > 0) {
			$nc(keys)->set(--counter, $($nc(enum_)->nextElement()));
		}
	}
	return keys;
}

bool ArrayTable::isArray() {
	return ($instanceOf($ObjectArray, this->table));
}

void ArrayTable::grow() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, array, $cast($ObjectArray, this->table));
	$var($Hashtable, tmp, $new($Hashtable, $nc(array)->length / 2));
	for (int32_t i = 0; i < $nc(array)->length; i += 2) {
		tmp->put(array->get(i), array->get(i + 1));
	}
	$set(this, table, tmp);
}

void ArrayTable::shrink() {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, tmp, $cast($Hashtable, this->table));
	$var($ObjectArray, array, $new($ObjectArray, $nc(tmp)->size() * 2));
	$var($Enumeration, keys, tmp->keys());
	int32_t j = 0;
	while ($nc(keys)->hasMoreElements()) {
		$var($Object, o, keys->nextElement());
		array->set(j, o);
		array->set(j + 1, $(tmp->get(o)));
		j += 2;
	}
	$set(this, table, array);
}

ArrayTable::ArrayTable() {
}

$Class* ArrayTable::load$($String* name, bool initialize) {
	$loadClass(ArrayTable, name, initialize, &_ArrayTable_ClassInfo_, allocate$ArrayTable);
	return class$;
}

$Class* ArrayTable::class$ = nullptr;

	} // swing
} // javax