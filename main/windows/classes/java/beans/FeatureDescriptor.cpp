#include <java/beans/FeatureDescriptor.h>

#include <com/sun/beans/TypeResolver.h>
#include <java/beans/Transient.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/SoftReference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef TRANSIENT

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $TypeResolver = ::com::sun::beans::TypeResolver;
using $Transient = ::java::beans::Transient;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $SoftReference = ::java::lang::ref::SoftReference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Method = ::java::lang::reflect::Method;
using $Type = ::java::lang::reflect::Type;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace java {
	namespace beans {

$FieldInfo _FeatureDescriptor_FieldInfo_[] = {
	{"TRANSIENT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FeatureDescriptor, TRANSIENT)},
	{"classRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<+Ljava/lang/Class<*>;>;", $PRIVATE, $field(FeatureDescriptor, classRef)},
	{"expert", "Z", nullptr, $PRIVATE, $field(FeatureDescriptor, expert)},
	{"hidden", "Z", nullptr, $PRIVATE, $field(FeatureDescriptor, hidden)},
	{"preferred", "Z", nullptr, $PRIVATE, $field(FeatureDescriptor, preferred)},
	{"shortDescription", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FeatureDescriptor, shortDescription)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FeatureDescriptor, name)},
	{"displayName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FeatureDescriptor, displayName)},
	{"table", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(FeatureDescriptor, table)},
	{}
};

$MethodInfo _FeatureDescriptor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FeatureDescriptor::*)()>(&FeatureDescriptor::init$))},
	{"<init>", "(Ljava/beans/FeatureDescriptor;Ljava/beans/FeatureDescriptor;)V", nullptr, 0, $method(static_cast<void(FeatureDescriptor::*)(FeatureDescriptor*,FeatureDescriptor*)>(&FeatureDescriptor::init$))},
	{"<init>", "(Ljava/beans/FeatureDescriptor;)V", nullptr, 0, $method(static_cast<void(FeatureDescriptor::*)(FeatureDescriptor*)>(&FeatureDescriptor::init$))},
	{"addTable", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;)V", $PRIVATE, $method(static_cast<void(FeatureDescriptor::*)($Hashtable*)>(&FeatureDescriptor::addTable))},
	{"appendTo", "(Ljava/lang/StringBuilder;)V", nullptr, 0},
	{"appendTo", "(Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/lang/ref/Reference;)V", "(Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/lang/ref/Reference<*>;)V", $STATIC, $method(static_cast<void(*)($StringBuilder*,$String*,$Reference*)>(&FeatureDescriptor::appendTo))},
	{"appendTo", "(Ljava/lang/StringBuilder;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($StringBuilder*,$String*,Object$*)>(&FeatureDescriptor::appendTo))},
	{"appendTo", "(Ljava/lang/StringBuilder;Ljava/lang/String;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($StringBuilder*,$String*,bool)>(&FeatureDescriptor::appendTo))},
	{"attributeNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getClass0", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0},
	{"getDisplayName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParameterTypes", "(Ljava/lang/Class;Ljava/lang/reflect/Method;)[Ljava/lang/Class;", "(Ljava/lang/Class<*>;Ljava/lang/reflect/Method;)[Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$ClassArray*(*)($Class*,$Method*)>(&FeatureDescriptor::getParameterTypes))},
	{"getReturnType", "(Ljava/lang/Class;Ljava/lang/reflect/Method;)Ljava/lang/Class;", "(Ljava/lang/Class<*>;Ljava/lang/reflect/Method;)Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$Class*(*)($Class*,$Method*)>(&FeatureDescriptor::getReturnType))},
	{"getShortDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSoftReference", "(Ljava/lang/Object;)Ljava/lang/ref/Reference;", "<T:Ljava/lang/Object;>(TT;)Ljava/lang/ref/Reference<TT;>;", $STATIC, $method(static_cast<$Reference*(*)(Object$*)>(&FeatureDescriptor::getSoftReference))},
	{"getTable", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $method(static_cast<$Hashtable*(FeatureDescriptor::*)()>(&FeatureDescriptor::getTable))},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getWeakReference", "(Ljava/lang/Object;)Ljava/lang/ref/Reference;", "<T:Ljava/lang/Object;>(TT;)Ljava/lang/ref/Reference<TT;>;", $STATIC, $method(static_cast<$Reference*(*)(Object$*)>(&FeatureDescriptor::getWeakReference))},
	{"isExpert", "()Z", nullptr, $PUBLIC},
	{"isHidden", "()Z", nullptr, $PUBLIC},
	{"isPreferred", "()Z", nullptr, $PUBLIC},
	{"isTransient", "()Z", nullptr, 0},
	{"setClass0", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", 0},
	{"setDisplayName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setExpert", "(Z)V", nullptr, $PUBLIC},
	{"setHidden", "(Z)V", nullptr, $PUBLIC},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setPreferred", "(Z)V", nullptr, $PUBLIC},
	{"setShortDescription", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setTransient", "(Ljava/beans/Transient;)V", nullptr, 0},
	{"setValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FeatureDescriptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.FeatureDescriptor",
	"java.lang.Object",
	nullptr,
	_FeatureDescriptor_FieldInfo_,
	_FeatureDescriptor_MethodInfo_
};

$Object* allocate$FeatureDescriptor($Class* clazz) {
	return $of($alloc(FeatureDescriptor));
}

$String* FeatureDescriptor::TRANSIENT = nullptr;

void FeatureDescriptor::init$() {
}

$String* FeatureDescriptor::getName() {
	return this->name;
}

void FeatureDescriptor::setName($String* name) {
	$set(this, name, name);
}

$String* FeatureDescriptor::getDisplayName() {
	if (this->displayName == nullptr) {
		return getName();
	}
	return this->displayName;
}

void FeatureDescriptor::setDisplayName($String* displayName) {
	$set(this, displayName, displayName);
}

bool FeatureDescriptor::isExpert() {
	return this->expert;
}

void FeatureDescriptor::setExpert(bool expert) {
	this->expert = expert;
}

bool FeatureDescriptor::isHidden() {
	return this->hidden;
}

void FeatureDescriptor::setHidden(bool hidden) {
	this->hidden = hidden;
}

bool FeatureDescriptor::isPreferred() {
	return this->preferred;
}

void FeatureDescriptor::setPreferred(bool preferred) {
	this->preferred = preferred;
}

$String* FeatureDescriptor::getShortDescription() {
	if (this->shortDescription == nullptr) {
		return getDisplayName();
	}
	return this->shortDescription;
}

void FeatureDescriptor::setShortDescription($String* text) {
	$set(this, shortDescription, text);
}

void FeatureDescriptor::setValue($String* attributeName, Object$* value) {
	$nc($(getTable()))->put(attributeName, value);
}

$Object* FeatureDescriptor::getValue($String* attributeName) {
	return $of((this->table != nullptr) ? $nc(this->table)->get(attributeName) : ($Object*)nullptr);
}

$Enumeration* FeatureDescriptor::attributeNames() {
	return $nc($(getTable()))->keys();
}

void FeatureDescriptor::init$(FeatureDescriptor* x, FeatureDescriptor* y) {
	this->expert = $nc(x)->expert | $nc(y)->expert;
	this->hidden = x->hidden | y->hidden;
	this->preferred = x->preferred | y->preferred;
	$set(this, name, y->name);
	$set(this, shortDescription, x->shortDescription);
	if (y->shortDescription != nullptr) {
		$set(this, shortDescription, y->shortDescription);
	}
	$set(this, displayName, x->displayName);
	if (y->displayName != nullptr) {
		$set(this, displayName, y->displayName);
	}
	$set(this, classRef, x->classRef);
	if (y->classRef != nullptr) {
		$set(this, classRef, y->classRef);
	}
	addTable(x->table);
	addTable(y->table);
}

void FeatureDescriptor::init$(FeatureDescriptor* old) {
	this->expert = $nc(old)->expert;
	this->hidden = old->hidden;
	this->preferred = old->preferred;
	$set(this, name, old->name);
	$set(this, shortDescription, old->shortDescription);
	$set(this, displayName, old->displayName);
	$set(this, classRef, old->classRef);
	addTable(old->table);
}

void FeatureDescriptor::addTable($Hashtable* table) {
	if ((table != nullptr) && !table->isEmpty()) {
		$nc($(getTable()))->putAll(table);
	}
}

$Hashtable* FeatureDescriptor::getTable() {
	if (this->table == nullptr) {
		$set(this, table, $new($Hashtable));
	}
	return this->table;
}

void FeatureDescriptor::setTransient($Transient* annotation) {
	if ((annotation != nullptr) && (nullptr == getValue(FeatureDescriptor::TRANSIENT))) {
		setValue(FeatureDescriptor::TRANSIENT, $($Boolean::valueOf(annotation->value())));
	}
}

bool FeatureDescriptor::isTransient() {
	$var($Object, value, getValue(FeatureDescriptor::TRANSIENT));
	return ($instanceOf($Boolean, value)) ? $nc(($cast($Boolean, value)))->booleanValue() : false;
}

void FeatureDescriptor::setClass0($Class* cls) {
	$set(this, classRef, getWeakReference(cls));
}

$Class* FeatureDescriptor::getClass0() {
	return (this->classRef != nullptr) ? $cast($Class, $nc(this->classRef)->get()) : ($Class*)nullptr;
}

$Reference* FeatureDescriptor::getSoftReference(Object$* object) {
	$init(FeatureDescriptor);
	return (object != nullptr) ? static_cast<$Reference*>($new($SoftReference, object)) : ($Reference*)nullptr;
}

$Reference* FeatureDescriptor::getWeakReference(Object$* object) {
	$init(FeatureDescriptor);
	return (object != nullptr) ? static_cast<$Reference*>($new($WeakReference, object)) : ($Reference*)nullptr;
}

$Class* FeatureDescriptor::getReturnType($Class* base, $Method* method) {
	$init(FeatureDescriptor);
	$useLocalCurrentObjectStackCache();
	if (base == nullptr) {
		base = $nc(method)->getDeclaringClass();
	}
	return $TypeResolver::erase($($TypeResolver::resolveInClass(base, $($nc(method)->getGenericReturnType()))));
}

$ClassArray* FeatureDescriptor::getParameterTypes($Class* base, $Method* method) {
	$init(FeatureDescriptor);
	$useLocalCurrentObjectStackCache();
	if (base == nullptr) {
		base = $nc(method)->getDeclaringClass();
	}
	return $TypeResolver::erase($($TypeResolver::resolveInClass(base, $($nc(method)->getGenericParameterTypes()))));
}

$String* FeatureDescriptor::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, $($of(this)->getClass()->getName())));
	sb->append("[name="_s)->append(this->name);
	appendTo(sb, "displayName"_s, $of(this->displayName));
	appendTo(sb, "shortDescription"_s, $of(this->shortDescription));
	appendTo(sb, "preferred"_s, this->preferred);
	appendTo(sb, "hidden"_s, this->hidden);
	appendTo(sb, "expert"_s, this->expert);
	if ((this->table != nullptr) && !$nc(this->table)->isEmpty()) {
		sb->append("; values={"_s);
		{
			$var($Iterator, i$, $nc($($nc(this->table)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					sb->append($cast($String, $($nc(entry)->getKey())))->append("="_s)->append($($nc(entry)->getValue()))->append("; "_s);
				}
			}
		}
		sb->setLength(sb->length() - 2);
		sb->append("}"_s);
	}
	appendTo(sb);
	return sb->append("]"_s)->toString();
}

void FeatureDescriptor::appendTo($StringBuilder* sb) {
}

void FeatureDescriptor::appendTo($StringBuilder* sb, $String* name, $Reference* reference) {
	$init(FeatureDescriptor);
	if (reference != nullptr) {
		appendTo(sb, name, $(reference->get()));
	}
}

void FeatureDescriptor::appendTo($StringBuilder* sb, $String* name, Object$* value) {
	$init(FeatureDescriptor);
	if (value != nullptr) {
		$nc(sb)->append("; "_s)->append(name)->append("="_s)->append(value);
	}
}

void FeatureDescriptor::appendTo($StringBuilder* sb, $String* name, bool value) {
	$init(FeatureDescriptor);
	if (value) {
		$nc(sb)->append("; "_s)->append(name);
	}
}

FeatureDescriptor::FeatureDescriptor() {
}

void clinit$FeatureDescriptor($Class* class$) {
	$assignStatic(FeatureDescriptor::TRANSIENT, "transient"_s);
}

$Class* FeatureDescriptor::load$($String* name, bool initialize) {
	$loadClass(FeatureDescriptor, name, initialize, &_FeatureDescriptor_ClassInfo_, clinit$FeatureDescriptor, allocate$FeatureDescriptor);
	return class$;
}

$Class* FeatureDescriptor::class$ = nullptr;

	} // beans
} // java