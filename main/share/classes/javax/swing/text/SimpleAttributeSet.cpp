#include <javax/swing/text/SimpleAttributeSet.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/Set.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet$EmptyAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext.h>
#include <jcpp.h>

#undef EMPTY

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet$EmptyAttributeSet = ::javax::swing::text::SimpleAttributeSet$EmptyAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _SimpleAttributeSet_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SimpleAttributeSet, serialVersionUID)},
	{"EMPTY", "Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SimpleAttributeSet, EMPTY)},
	{"table", "Ljava/util/LinkedHashMap;", "Ljava/util/LinkedHashMap<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE | $TRANSIENT, $field(SimpleAttributeSet, table)},
	{}
};

$MethodInfo _SimpleAttributeSet_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SimpleAttributeSet::*)()>(&SimpleAttributeSet::init$))},
	{"<init>", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleAttributeSet::*)($AttributeSet*)>(&SimpleAttributeSet::init$))},
	{"addAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"addAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"containsAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"containsAttributes", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"copyAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAttributeCount", "()I", nullptr, $PUBLIC},
	{"getAttributeNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<*>;", $PUBLIC},
	{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"isEqual", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(SimpleAttributeSet::*)($ObjectInputStream*)>(&SimpleAttributeSet::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"removeAttribute", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"removeAttributes", "(Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<*>;)V", $PUBLIC},
	{"removeAttributes", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"setResolveParent", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(SimpleAttributeSet::*)($ObjectOutputStream*)>(&SimpleAttributeSet::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _SimpleAttributeSet_InnerClassesInfo_[] = {
	{"javax.swing.text.SimpleAttributeSet$EmptyAttributeSet", "javax.swing.text.SimpleAttributeSet", "EmptyAttributeSet", $STATIC},
	{}
};

$ClassInfo _SimpleAttributeSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.SimpleAttributeSet",
	"java.lang.Object",
	"javax.swing.text.MutableAttributeSet,java.io.Serializable,java.lang.Cloneable",
	_SimpleAttributeSet_FieldInfo_,
	_SimpleAttributeSet_MethodInfo_,
	nullptr,
	nullptr,
	_SimpleAttributeSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.SimpleAttributeSet$EmptyAttributeSet"
};

$Object* allocate$SimpleAttributeSet($Class* clazz) {
	return $of($alloc(SimpleAttributeSet));
}

void SimpleAttributeSet::finalize() {
	this->$MutableAttributeSet::finalize();
}

$AttributeSet* SimpleAttributeSet::EMPTY = nullptr;

void SimpleAttributeSet::init$() {
	$set(this, table, $new($LinkedHashMap, 3));
}

void SimpleAttributeSet::init$($AttributeSet* source) {
	$set(this, table, $new($LinkedHashMap, 3));
	addAttributes(source);
}

bool SimpleAttributeSet::isEmpty() {
	return $nc(this->table)->isEmpty();
}

int32_t SimpleAttributeSet::getAttributeCount() {
	return $nc(this->table)->size();
}

bool SimpleAttributeSet::isDefined(Object$* attrName) {
	return $nc(this->table)->containsKey(attrName);
}

bool SimpleAttributeSet::isEqual($AttributeSet* attr) {
	int32_t var$1 = getAttributeCount();
	bool var$0 = (var$1 == $nc(attr)->getAttributeCount());
	return (var$0 && containsAttributes(attr));
}

$AttributeSet* SimpleAttributeSet::copyAttributes() {
	return $cast($AttributeSet, clone());
}

$Enumeration* SimpleAttributeSet::getAttributeNames() {
	return $Collections::enumeration($($nc(this->table)->keySet()));
}

$Object* SimpleAttributeSet::getAttribute(Object$* name) {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, $nc(this->table)->get(name));
	if (value == nullptr) {
		$var($AttributeSet, parent, getResolveParent());
		if (parent != nullptr) {
			$assign(value, parent->getAttribute(name));
		}
	}
	return $of(value);
}

bool SimpleAttributeSet::containsAttribute(Object$* name, Object$* value) {
	return $nc($of(value))->equals($(getAttribute(name)));
}

bool SimpleAttributeSet::containsAttributes($AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	bool result = true;
	$var($Enumeration, names, $nc(attributes)->getAttributeNames());
	while (result && $nc(names)->hasMoreElements()) {
		$var($Object, name, names->nextElement());
		result = $nc($of($(attributes->getAttribute(name))))->equals($(getAttribute(name)));
	}
	return result;
}

void SimpleAttributeSet::addAttribute(Object$* name, Object$* value) {
	$nc(this->table)->put(name, value);
}

void SimpleAttributeSet::addAttributes($AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$var($Enumeration, names, $nc(attributes)->getAttributeNames());
	while ($nc(names)->hasMoreElements()) {
		$var($Object, name, names->nextElement());
		addAttribute(name, $(attributes->getAttribute(name)));
	}
}

void SimpleAttributeSet::removeAttribute(Object$* name) {
	$nc(this->table)->remove(name);
}

void SimpleAttributeSet::removeAttributes($Enumeration* names) {
	$useLocalCurrentObjectStackCache();
	while ($nc(names)->hasMoreElements()) {
		removeAttribute($(names->nextElement()));
	}
}

void SimpleAttributeSet::removeAttributes($AttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	if ($equals(attributes, this)) {
		$nc(this->table)->clear();
	} else {
		$var($Enumeration, names, attributes->getAttributeNames());
		while ($nc(names)->hasMoreElements()) {
			$var($Object, name, names->nextElement());
			$var($Object, value, attributes->getAttribute(name));
			if ($nc($of(value))->equals($(getAttribute(name)))) {
				removeAttribute(name);
			}
		}
	}
}

$AttributeSet* SimpleAttributeSet::getResolveParent() {
	$init($StyleConstants);
	return $cast($AttributeSet, $nc(this->table)->get($StyleConstants::ResolveAttribute));
}

void SimpleAttributeSet::setResolveParent($AttributeSet* parent) {
	$init($StyleConstants);
	addAttribute($StyleConstants::ResolveAttribute, parent);
}

$Object* SimpleAttributeSet::clone() {
	$var(SimpleAttributeSet, attr, nullptr);
	try {
		$assign(attr, $cast(SimpleAttributeSet, $MutableAttributeSet::clone()));
		$set($nc(attr), table, $cast($LinkedHashMap, $nc(this->table)->clone()));
	} catch ($CloneNotSupportedException& cnse) {
		$assign(attr, nullptr);
	}
	return $of(attr);
}

int32_t SimpleAttributeSet::hashCode() {
	return $nc(this->table)->hashCode();
}

bool SimpleAttributeSet::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if ($instanceOf($AttributeSet, obj)) {
		$var($AttributeSet, attrs, $cast($AttributeSet, obj));
		return isEqual(attrs);
	}
	return false;
}

$String* SimpleAttributeSet::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, s, ""_s);
	$var($Enumeration, names, getAttributeNames());
	while ($nc(names)->hasMoreElements()) {
		$var($Object, key, names->nextElement());
		$var($Object, value, getAttribute(key));
		if ($instanceOf($AttributeSet, value)) {
			$assign(s, $str({s, key, "=**AttributeSet** "_s}));
		} else {
			$assign(s, $str({s, key, "="_s, value, " "_s}));
		}
	}
	return s;
}

void SimpleAttributeSet::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	$StyleContext::writeAttributeSet(s, this);
}

void SimpleAttributeSet::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$set(this, table, $new($LinkedHashMap, 3));
	$StyleContext::readAttributeSet(s, this);
}

void clinit$SimpleAttributeSet($Class* class$) {
	$assignStatic(SimpleAttributeSet::EMPTY, $new($SimpleAttributeSet$EmptyAttributeSet));
}

SimpleAttributeSet::SimpleAttributeSet() {
}

$Class* SimpleAttributeSet::load$($String* name, bool initialize) {
	$loadClass(SimpleAttributeSet, name, initialize, &_SimpleAttributeSet_ClassInfo_, clinit$SimpleAttributeSet, allocate$SimpleAttributeSet);
	return class$;
}

$Class* SimpleAttributeSet::class$ = nullptr;

		} // text
	} // swing
} // javax