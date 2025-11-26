#include <javax/print/attribute/HashAttributeSet.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <jcpp.h>

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $AttributeSetUtilities = ::javax::print::attribute::AttributeSetUtilities;

namespace javax {
	namespace print {
		namespace attribute {

$FieldInfo _HashAttributeSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HashAttributeSet, serialVersionUID)},
	{"myInterface", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(HashAttributeSet, myInterface)},
	{"attrMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Class<*>;Ljavax/print/attribute/Attribute;>;", $PRIVATE | $TRANSIENT, $field(HashAttributeSet, attrMap)},
	{}
};

$MethodInfo _HashAttributeSet_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HashAttributeSet::*)()>(&HashAttributeSet::init$))},
	{"<init>", "(Ljavax/print/attribute/Attribute;)V", nullptr, $PUBLIC, $method(static_cast<void(HashAttributeSet::*)($Attribute*)>(&HashAttributeSet::init$))},
	{"<init>", "([Ljavax/print/attribute/Attribute;)V", nullptr, $PUBLIC, $method(static_cast<void(HashAttributeSet::*)($AttributeArray*)>(&HashAttributeSet::init$))},
	{"<init>", "(Ljavax/print/attribute/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(HashAttributeSet::*)($AttributeSet*)>(&HashAttributeSet::init$))},
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PROTECTED, $method(static_cast<void(HashAttributeSet::*)($Class*)>(&HashAttributeSet::init$))},
	{"<init>", "(Ljavax/print/attribute/Attribute;Ljava/lang/Class;)V", "(Ljavax/print/attribute/Attribute;Ljava/lang/Class<*>;)V", $PROTECTED, $method(static_cast<void(HashAttributeSet::*)($Attribute*,$Class*)>(&HashAttributeSet::init$))},
	{"<init>", "([Ljavax/print/attribute/Attribute;Ljava/lang/Class;)V", "([Ljavax/print/attribute/Attribute;Ljava/lang/Class<*>;)V", $PROTECTED, $method(static_cast<void(HashAttributeSet::*)($AttributeArray*,$Class*)>(&HashAttributeSet::init$))},
	{"<init>", "(Ljavax/print/attribute/AttributeSet;Ljava/lang/Class;)V", "(Ljavax/print/attribute/AttributeSet;Ljava/lang/Class<*>;)V", $PROTECTED, $method(static_cast<void(HashAttributeSet::*)($AttributeSet*,$Class*)>(&HashAttributeSet::init$))},
	{"add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
	{"addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"containsKey", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC},
	{"containsValue", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Class;)Ljavax/print/attribute/Attribute;", "(Ljava/lang/Class<*>;)Ljavax/print/attribute/Attribute;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(HashAttributeSet::*)($ObjectInputStream*)>(&HashAttributeSet::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"remove", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<*>;)Z", $PUBLIC},
	{"remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(HashAttributeSet::*)($ObjectOutputStream*)>(&HashAttributeSet::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _HashAttributeSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.attribute.HashAttributeSet",
	"java.lang.Object",
	"javax.print.attribute.AttributeSet,java.io.Serializable",
	_HashAttributeSet_FieldInfo_,
	_HashAttributeSet_MethodInfo_
};

$Object* allocate$HashAttributeSet($Class* clazz) {
	return $of($alloc(HashAttributeSet));
}

$Object* HashAttributeSet::clone() {
	 return this->$AttributeSet::clone();
}

$String* HashAttributeSet::toString() {
	 return this->$AttributeSet::toString();
}

void HashAttributeSet::finalize() {
	this->$AttributeSet::finalize();
}

void HashAttributeSet::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	$var($AttributeArray, attrs, toArray());
	s->writeInt($nc(attrs)->length);
	for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
		s->writeObject(attrs->get(i));
	}
}

void HashAttributeSet::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$set(this, attrMap, $new($HashMap));
	int32_t count = s->readInt();
	$var($Attribute, attr, nullptr);
	for (int32_t i = 0; i < count; ++i) {
		$assign(attr, $cast($Attribute, s->readObject()));
		add(attr);
	}
}

void HashAttributeSet::init$() {
	$load($Attribute);
	HashAttributeSet::init$($Attribute::class$);
}

void HashAttributeSet::init$($Attribute* attribute) {
	$load($Attribute);
	HashAttributeSet::init$(attribute, $Attribute::class$);
}

void HashAttributeSet::init$($AttributeArray* attributes) {
	$load($Attribute);
	HashAttributeSet::init$(attributes, $Attribute::class$);
}

void HashAttributeSet::init$($AttributeSet* attributes) {
	$load($Attribute);
	HashAttributeSet::init$(attributes, $Attribute::class$);
}

void HashAttributeSet::init$($Class* interfaceName) {
	$set(this, attrMap, $new($HashMap));
	if (interfaceName == nullptr) {
		$throwNew($NullPointerException, "null interface"_s);
	}
	$set(this, myInterface, interfaceName);
}

void HashAttributeSet::init$($Attribute* attribute, $Class* interfaceName) {
	$set(this, attrMap, $new($HashMap));
	if (interfaceName == nullptr) {
		$throwNew($NullPointerException, "null interface"_s);
	}
	$set(this, myInterface, interfaceName);
	add(attribute);
}

void HashAttributeSet::init$($AttributeArray* attributes, $Class* interfaceName) {
	$set(this, attrMap, $new($HashMap));
	if (interfaceName == nullptr) {
		$throwNew($NullPointerException, "null interface"_s);
	}
	$set(this, myInterface, interfaceName);
	int32_t n = attributes == nullptr ? 0 : $nc(attributes)->length;
	for (int32_t i = 0; i < n; ++i) {
		add(attributes->get(i));
	}
}

void HashAttributeSet::init$($AttributeSet* attributes, $Class* interfaceName) {
	$set(this, attrMap, $new($HashMap));
	$set(this, myInterface, interfaceName);
	if (attributes != nullptr) {
		$var($AttributeArray, attribArray, attributes->toArray());
		int32_t n = attribArray == nullptr ? 0 : $nc(attribArray)->length;
		for (int32_t i = 0; i < n; ++i) {
			add(attribArray->get(i));
		}
	}
}

$Attribute* HashAttributeSet::get($Class* category) {
	$load($Attribute);
	return $cast($Attribute, $nc(this->attrMap)->get($AttributeSetUtilities::verifyAttributeCategory(category, $Attribute::class$)));
}

bool HashAttributeSet::add($Attribute* attribute) {
	$useLocalCurrentObjectStackCache();
	$var($Object, var$0, $of($nc(attribute)->getCategory()));
	$var($Object, oldAttribute, $nc(this->attrMap)->put(var$0, $($AttributeSetUtilities::verifyAttributeValue(attribute, this->myInterface))));
	return (!$nc($of(attribute))->equals(oldAttribute));
}

bool HashAttributeSet::remove($Class* category) {
	$load($Attribute);
	bool var$0 = category != nullptr && $AttributeSetUtilities::verifyAttributeCategory(category, $Attribute::class$) != nullptr;
	return var$0 && $nc(this->attrMap)->remove(category) != nullptr;
}

bool HashAttributeSet::remove($Attribute* attribute) {
	return attribute != nullptr && $nc(this->attrMap)->remove(attribute->getCategory()) != nullptr;
}

bool HashAttributeSet::containsKey($Class* category) {
	$load($Attribute);
	bool var$0 = category != nullptr && $AttributeSetUtilities::verifyAttributeCategory(category, $Attribute::class$) != nullptr;
	return var$0 && $nc(this->attrMap)->get(category) != nullptr;
}

bool HashAttributeSet::containsValue($Attribute* attribute) {
	return attribute != nullptr && $instanceOf($Attribute, attribute) && $of(attribute)->equals($($nc(this->attrMap)->get(attribute->getCategory())));
}

bool HashAttributeSet::addAll($AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($AttributeArray, attrs, $nc(attributes)->toArray());
	bool result = false;
	for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
		$var($Attribute, newValue, $AttributeSetUtilities::verifyAttributeValue(attrs->get(i), this->myInterface));
		$var($Object, oldValue, $nc(this->attrMap)->put($nc(newValue)->getCategory(), newValue));
		result = (!$nc($of(newValue))->equals(oldValue)) || result;
	}
	return result;
}

int32_t HashAttributeSet::size() {
	return $nc(this->attrMap)->size();
}

$AttributeArray* HashAttributeSet::toArray() {
	$useLocalCurrentObjectStackCache();
	$var($AttributeArray, attrs, $new($AttributeArray, size()));
	$nc($($nc(this->attrMap)->values()))->toArray(attrs);
	return attrs;
}

void HashAttributeSet::clear() {
	$nc(this->attrMap)->clear();
}

bool HashAttributeSet::isEmpty() {
	return $nc(this->attrMap)->isEmpty();
}

bool HashAttributeSet::equals(Object$* object) {
	$useLocalCurrentObjectStackCache();
	if (object == nullptr || !($instanceOf($AttributeSet, object))) {
		return false;
	}
	$var($AttributeSet, aset, $cast($AttributeSet, object));
	int32_t var$0 = $nc(aset)->size();
	if (var$0 != size()) {
		return false;
	}
	$var($AttributeArray, attrs, toArray());
	for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
		if (!$nc(aset)->containsValue(attrs->get(i))) {
			return false;
		}
	}
	return true;
}

int32_t HashAttributeSet::hashCode() {
	int32_t hcode = 0;
	$var($AttributeArray, attrs, toArray());
	for (int32_t i = 0; i < $nc(attrs)->length; ++i) {
		hcode += $nc($of(attrs->get(i)))->hashCode();
	}
	return hcode;
}

HashAttributeSet::HashAttributeSet() {
}

$Class* HashAttributeSet::load$($String* name, bool initialize) {
	$loadClass(HashAttributeSet, name, initialize, &_HashAttributeSet_ClassInfo_, allocate$HashAttributeSet);
	return class$;
}

$Class* HashAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax