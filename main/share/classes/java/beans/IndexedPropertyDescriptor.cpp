#include <java/beans/IndexedPropertyDescriptor.h>

#include <com/sun/beans/introspect/PropertyInfo.h>
#include <java/beans/FeatureDescriptor.h>
#include <java/beans/IntrospectionException.h>
#include <java/beans/Introspector.h>
#include <java/beans/MethodRef.h>
#include <java/beans/NameGenerator.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/beans/Transient.h>
#include <java/lang/AssertionError.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

#undef GET_PREFIX
#undef IS_PREFIX
#undef SET_PREFIX
#undef TYPE

using $PropertyInfo = ::com::sun::beans::introspect::PropertyInfo;
using $FeatureDescriptor = ::java::beans::FeatureDescriptor;
using $IntrospectionException = ::java::beans::IntrospectionException;
using $Introspector = ::java::beans::Introspector;
using $MethodRef = ::java::beans::MethodRef;
using $NameGenerator = ::java::beans::NameGenerator;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $Transient = ::java::beans::Transient;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $Reference = ::java::lang::ref::Reference;
using $Method = ::java::lang::reflect::Method;
using $Map$Entry = ::java::util::Map$Entry;

namespace java {
	namespace beans {

$FieldInfo _IndexedPropertyDescriptor_FieldInfo_[] = {
	{"indexedPropertyTypeRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<+Ljava/lang/Class<*>;>;", $PRIVATE, $field(IndexedPropertyDescriptor, indexedPropertyTypeRef)},
	{"indexedReadMethodRef", "Ljava/beans/MethodRef;", nullptr, $PRIVATE | $FINAL, $field(IndexedPropertyDescriptor, indexedReadMethodRef)},
	{"indexedWriteMethodRef", "Ljava/beans/MethodRef;", nullptr, $PRIVATE | $FINAL, $field(IndexedPropertyDescriptor, indexedWriteMethodRef)},
	{"indexedReadMethodName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IndexedPropertyDescriptor, indexedReadMethodName)},
	{"indexedWriteMethodName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IndexedPropertyDescriptor, indexedWriteMethodName)},
	{}
};

$MethodInfo _IndexedPropertyDescriptor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(IndexedPropertyDescriptor::*)($String*,$Class*)>(&IndexedPropertyDescriptor::init$)), "java.beans.IntrospectionException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(IndexedPropertyDescriptor::*)($String*,$Class*,$String*,$String*,$String*,$String*)>(&IndexedPropertyDescriptor::init$)), "java.beans.IntrospectionException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC, $method(static_cast<void(IndexedPropertyDescriptor::*)($String*,$Method*,$Method*,$Method*,$Method*)>(&IndexedPropertyDescriptor::init$)), "java.beans.IntrospectionException"},
	{"<init>", "(Ljava/util/Map$Entry;Z)V", "(Ljava/util/Map$Entry<Ljava/lang/String;Lcom/sun/beans/introspect/PropertyInfo;>;Z)V", 0, $method(static_cast<void(IndexedPropertyDescriptor::*)($Map$Entry*,bool)>(&IndexedPropertyDescriptor::init$))},
	{"<init>", "(Ljava/beans/PropertyDescriptor;Ljava/beans/PropertyDescriptor;)V", nullptr, 0, $method(static_cast<void(IndexedPropertyDescriptor::*)($PropertyDescriptor*,$PropertyDescriptor*)>(&IndexedPropertyDescriptor::init$))},
	{"<init>", "(Ljava/beans/IndexedPropertyDescriptor;)V", nullptr, 0, $method(static_cast<void(IndexedPropertyDescriptor::*)(IndexedPropertyDescriptor*)>(&IndexedPropertyDescriptor::init$))},
	{"appendTo", "(Ljava/lang/StringBuilder;)V", nullptr, 0},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"findIndexedPropertyType", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)Ljava/lang/Class;", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)Ljava/lang/Class<*>;", $PRIVATE, $method(static_cast<$Class*(IndexedPropertyDescriptor::*)($Method*,$Method*)>(&IndexedPropertyDescriptor::findIndexedPropertyType)), "java.beans.IntrospectionException"},
	{"getIndexedPropertyType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $SYNCHRONIZED},
	{"getIndexedPropertyType0", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PRIVATE, $method(static_cast<$Class*(IndexedPropertyDescriptor::*)()>(&IndexedPropertyDescriptor::getIndexedPropertyType0))},
	{"getIndexedReadMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getIndexedWriteMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setIndexedPropertyType", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(IndexedPropertyDescriptor::*)($Class*)>(&IndexedPropertyDescriptor::setIndexedPropertyType))},
	{"setIndexedReadMethod", "(Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.beans.IntrospectionException"},
	{"setIndexedReadMethod0", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE, $method(static_cast<void(IndexedPropertyDescriptor::*)($Method*)>(&IndexedPropertyDescriptor::setIndexedReadMethod0))},
	{"setIndexedWriteMethod", "(Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.beans.IntrospectionException"},
	{"setIndexedWriteMethod0", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE, $method(static_cast<void(IndexedPropertyDescriptor::*)($Method*)>(&IndexedPropertyDescriptor::setIndexedWriteMethod0))},
	{"updateGenericsFor", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", 0},
	{}
};

$ClassInfo _IndexedPropertyDescriptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.IndexedPropertyDescriptor",
	"java.beans.PropertyDescriptor",
	nullptr,
	_IndexedPropertyDescriptor_FieldInfo_,
	_IndexedPropertyDescriptor_MethodInfo_
};

$Object* allocate$IndexedPropertyDescriptor($Class* clazz) {
	return $of($alloc(IndexedPropertyDescriptor));
}

void IndexedPropertyDescriptor::init$($String* propertyName, $Class* beanClass) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, propertyName);
	$Class* var$1 = beanClass;
	$init($Introspector);
	$var($String, var$2, $str({$Introspector::GET_PREFIX, $($NameGenerator::capitalize(propertyName))}));
	$var($String, var$3, $str({$Introspector::SET_PREFIX, $($NameGenerator::capitalize(propertyName))}));
	$var($String, var$4, $str({$Introspector::GET_PREFIX, $($NameGenerator::capitalize(propertyName))}));
	IndexedPropertyDescriptor::init$(var$0, var$1, var$2, var$3, var$4, $$str({$Introspector::SET_PREFIX, $($NameGenerator::capitalize(propertyName))}));
}

void IndexedPropertyDescriptor::init$($String* propertyName, $Class* beanClass, $String* readMethodName, $String* writeMethodName, $String* indexedReadMethodName, $String* indexedWriteMethodName) {
	$useLocalCurrentObjectStackCache();
	$PropertyDescriptor::init$(propertyName, beanClass, readMethodName, writeMethodName);
	$set(this, indexedReadMethodRef, $new($MethodRef));
	$set(this, indexedWriteMethodRef, $new($MethodRef));
	$set(this, indexedReadMethodName, indexedReadMethodName);
	if (indexedReadMethodName != nullptr && getIndexedReadMethod() == nullptr) {
		$throwNew($IntrospectionException, $$str({"Method not found: "_s, indexedReadMethodName}));
	}
	$set(this, indexedWriteMethodName, indexedWriteMethodName);
	if (indexedWriteMethodName != nullptr && getIndexedWriteMethod() == nullptr) {
		$throwNew($IntrospectionException, $$str({"Method not found: "_s, indexedWriteMethodName}));
	}
	$var($Method, var$0, getIndexedReadMethod());
	findIndexedPropertyType(var$0, $(getIndexedWriteMethod()));
}

void IndexedPropertyDescriptor::init$($String* propertyName, $Method* readMethod, $Method* writeMethod, $Method* indexedReadMethod, $Method* indexedWriteMethod) {
	$PropertyDescriptor::init$(propertyName, readMethod, writeMethod);
	$set(this, indexedReadMethodRef, $new($MethodRef));
	$set(this, indexedWriteMethodRef, $new($MethodRef));
	setIndexedReadMethod0(indexedReadMethod);
	setIndexedWriteMethod0(indexedWriteMethod);
	setIndexedPropertyType(findIndexedPropertyType(indexedReadMethod, indexedWriteMethod));
}

void IndexedPropertyDescriptor::init$($Map$Entry* entry, bool bound) {
	$useLocalCurrentObjectStackCache();
	$PropertyDescriptor::init$(entry, bound);
	$set(this, indexedReadMethodRef, $new($MethodRef));
	$set(this, indexedWriteMethodRef, $new($MethodRef));
	$var($PropertyInfo, info, $nc(($cast($PropertyInfo, $($nc(entry)->getValue()))))->getIndexed());
	setIndexedReadMethod0($($nc(info)->getReadMethod()));
	setIndexedWriteMethod0($($nc(info)->getWriteMethod()));
	setIndexedPropertyType($nc(info)->getPropertyType());
}

$Method* IndexedPropertyDescriptor::getIndexedReadMethod() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Method, indexedReadMethod, $nc(this->indexedReadMethodRef)->get());
		if (indexedReadMethod == nullptr) {
			$Class* cls = getClass0();
			if (cls == nullptr || (this->indexedReadMethodName == nullptr && !$nc(this->indexedReadMethodRef)->isSet())) {
				return nullptr;
			}
			$init($Introspector);
			$var($String, nextMethodName, $str({$Introspector::GET_PREFIX, $(getBaseName())}));
			if (this->indexedReadMethodName == nullptr) {
				$Class* type = getIndexedPropertyType0();
				$init($Boolean);
				if (type == $Boolean::TYPE || type == nullptr) {
					$set(this, indexedReadMethodName, $str({$Introspector::IS_PREFIX, $(getBaseName())}));
				} else {
					$set(this, indexedReadMethodName, nextMethodName);
				}
			}
			$init($Integer);
			$var($ClassArray, args, $new($ClassArray, {$Integer::TYPE}));
			$assign(indexedReadMethod, $Introspector::findMethod(cls, this->indexedReadMethodName, 1, args));
			if ((indexedReadMethod == nullptr) && !$nc(this->indexedReadMethodName)->equals(nextMethodName)) {
				$set(this, indexedReadMethodName, nextMethodName);
				$assign(indexedReadMethod, $Introspector::findMethod(cls, this->indexedReadMethodName, 1, args));
			}
			setIndexedReadMethod0(indexedReadMethod);
		}
		return indexedReadMethod;
	}
}

void IndexedPropertyDescriptor::setIndexedReadMethod($Method* readMethod) {
	$synchronized(this) {
		setIndexedPropertyType(findIndexedPropertyType(readMethod, $($nc(this->indexedWriteMethodRef)->get())));
		setIndexedReadMethod0(readMethod);
	}
}

void IndexedPropertyDescriptor::setIndexedReadMethod0($Method* readMethod) {
	$nc(this->indexedReadMethodRef)->set(readMethod);
	if (readMethod == nullptr) {
		$set(this, indexedReadMethodName, nullptr);
		return;
	}
	setClass0($nc(readMethod)->getDeclaringClass());
	$set(this, indexedReadMethodName, $nc(readMethod)->getName());
	$load($Transient);
	setTransient($cast($Transient, $(readMethod->getAnnotation($Transient::class$))));
}

$Method* IndexedPropertyDescriptor::getIndexedWriteMethod() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Method, indexedWriteMethod, $nc(this->indexedWriteMethodRef)->get());
		if (indexedWriteMethod == nullptr) {
			$Class* cls = getClass0();
			if (cls == nullptr || (this->indexedWriteMethodName == nullptr && !$nc(this->indexedWriteMethodRef)->isSet())) {
				return nullptr;
			}
			$Class* type = getIndexedPropertyType0();
			if (type == nullptr) {
				try {
					type = findIndexedPropertyType($(getIndexedReadMethod()), nullptr);
					setIndexedPropertyType(type);
				} catch ($IntrospectionException& ex) {
					$Class* propType = getPropertyType();
					if ($nc(propType)->isArray()) {
						type = propType->getComponentType();
					}
				}
			}
			if (this->indexedWriteMethodName == nullptr) {
				$init($Introspector);
				$set(this, indexedWriteMethodName, $str({$Introspector::SET_PREFIX, $(getBaseName())}));
			}
			$init($Integer);
			$var($ClassArray, args, (type == nullptr) ? ($ClassArray*)nullptr : $new($ClassArray, {
				$Integer::TYPE,
				type
			}));
			$assign(indexedWriteMethod, $Introspector::findMethod(cls, this->indexedWriteMethodName, 2, args));
			if (indexedWriteMethod != nullptr) {
				$init($Void);
				if (!$nc($of(indexedWriteMethod->getReturnType()))->equals($Void::TYPE)) {
					$assign(indexedWriteMethod, nullptr);
				}
			}
			setIndexedWriteMethod0(indexedWriteMethod);
		}
		return indexedWriteMethod;
	}
}

void IndexedPropertyDescriptor::setIndexedWriteMethod($Method* writeMethod) {
	$synchronized(this) {
		$Class* type = findIndexedPropertyType($(getIndexedReadMethod()), writeMethod);
		setIndexedPropertyType(type);
		setIndexedWriteMethod0(writeMethod);
	}
}

void IndexedPropertyDescriptor::setIndexedWriteMethod0($Method* writeMethod) {
	$nc(this->indexedWriteMethodRef)->set(writeMethod);
	if (writeMethod == nullptr) {
		$set(this, indexedWriteMethodName, nullptr);
		return;
	}
	setClass0($nc(writeMethod)->getDeclaringClass());
	$set(this, indexedWriteMethodName, $nc(writeMethod)->getName());
	$load($Transient);
	setTransient($cast($Transient, $(writeMethod->getAnnotation($Transient::class$))));
}

$Class* IndexedPropertyDescriptor::getIndexedPropertyType() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$Class* type = getIndexedPropertyType0();
		if (type == nullptr) {
			try {
				$var($Method, var$0, getIndexedReadMethod());
				type = findIndexedPropertyType(var$0, $(getIndexedWriteMethod()));
				setIndexedPropertyType(type);
			} catch ($IntrospectionException& ex) {
			}
		}
		return type;
	}
}

void IndexedPropertyDescriptor::setIndexedPropertyType($Class* type) {
	$set(this, indexedPropertyTypeRef, getWeakReference(type));
}

$Class* IndexedPropertyDescriptor::getIndexedPropertyType0() {
	return (this->indexedPropertyTypeRef != nullptr) ? $cast($Class, $nc(this->indexedPropertyTypeRef)->get()) : ($Class*)nullptr;
}

$Class* IndexedPropertyDescriptor::findIndexedPropertyType($Method* indexedReadMethod, $Method* indexedWriteMethod) {
	$useLocalCurrentObjectStackCache();
	$Class* indexedPropertyType = nullptr;
	if (indexedReadMethod != nullptr) {
		$var($ClassArray, params, getParameterTypes(getClass0(), indexedReadMethod));
		if ($nc(params)->length != 1) {
			$throwNew($IntrospectionException, "bad indexed read method arg count"_s);
		}
		$init($Integer);
		if ($nc(params)->get(0) != $Integer::TYPE) {
			$throwNew($IntrospectionException, "non int index to indexed read method"_s);
		}
		indexedPropertyType = getReturnType(getClass0(), indexedReadMethod);
		$init($Void);
		if (indexedPropertyType == $Void::TYPE) {
			$throwNew($IntrospectionException, "indexed read method returns void"_s);
		}
	}
	if (indexedWriteMethod != nullptr) {
		$var($ClassArray, params, getParameterTypes(getClass0(), indexedWriteMethod));
		if ($nc(params)->length != 2) {
			$throwNew($IntrospectionException, "bad indexed write method arg count"_s);
		}
		$init($Integer);
		if ($nc(params)->get(0) != $Integer::TYPE) {
			$throwNew($IntrospectionException, "non int index to indexed write method"_s);
		}
		if (indexedPropertyType == nullptr || $nc($nc(params)->get(1))->isAssignableFrom(indexedPropertyType)) {
			indexedPropertyType = params->get(1);
		} else if (!$nc(indexedPropertyType)->isAssignableFrom(params->get(1))) {
			$throwNew($IntrospectionException, $$str({"type mismatch between indexed read and indexed write methods: "_s, $(getName())}));
		}
	}
	$Class* propertyType = getPropertyType();
	bool var$0 = propertyType != nullptr;
	if (var$0) {
		bool var$1 = !propertyType->isArray();
		var$0 = (var$1 || propertyType->getComponentType() != indexedPropertyType);
	}
	if (var$0) {
		$throwNew($IntrospectionException, $$str({"type mismatch between indexed and non-indexed methods: "_s, $(getName())}));
	}
	return indexedPropertyType;
}

bool IndexedPropertyDescriptor::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, obj)) {
		return true;
	}
	if (obj != nullptr && $instanceOf(IndexedPropertyDescriptor, obj)) {
		$var(IndexedPropertyDescriptor, other, $cast(IndexedPropertyDescriptor, obj));
		$var($Method, otherIndexedReadMethod, other->getIndexedReadMethod());
		$var($Method, otherIndexedWriteMethod, other->getIndexedWriteMethod());
		if (!compareMethods($(getIndexedReadMethod()), otherIndexedReadMethod)) {
			return false;
		}
		if (!compareMethods($(getIndexedWriteMethod()), otherIndexedWriteMethod)) {
			return false;
		}
		if (getIndexedPropertyType() != other->getIndexedPropertyType()) {
			return false;
		}
		return $PropertyDescriptor::equals(obj);
	}
	return false;
}

void IndexedPropertyDescriptor::init$($PropertyDescriptor* x, $PropertyDescriptor* y) {
	$useLocalCurrentObjectStackCache();
	$PropertyDescriptor::init$(x, y);
	$set(this, indexedReadMethodRef, $new($MethodRef));
	$set(this, indexedWriteMethodRef, $new($MethodRef));
	$var($Method, tr, nullptr);
	$var($Method, tw, nullptr);
	if ($instanceOf(IndexedPropertyDescriptor, x)) {
		$var(IndexedPropertyDescriptor, ix, $cast(IndexedPropertyDescriptor, x));
		$assign(tr, $nc(ix)->getIndexedReadMethod());
		$assign(tw, ix->getIndexedWriteMethod());
	}
	if ($instanceOf(IndexedPropertyDescriptor, y)) {
		$var(IndexedPropertyDescriptor, iy, $cast(IndexedPropertyDescriptor, y));
		$var($Method, yr, $nc(iy)->getIndexedReadMethod());
		if (isAssignable(tr, yr)) {
			$assign(tr, yr);
		}
		$var($Method, yw, iy->getIndexedWriteMethod());
		if (isAssignable(tw, yw)) {
			$assign(tw, yw);
		}
	}
	try {
		if (tr != nullptr) {
			setIndexedReadMethod(tr);
		}
		if (tw != nullptr) {
			setIndexedWriteMethod(tw);
		}
	} catch ($IntrospectionException& ex) {
		$throwNew($AssertionError, $of(ex));
	}
}

void IndexedPropertyDescriptor::init$(IndexedPropertyDescriptor* old) {
	$useLocalCurrentObjectStackCache();
	$PropertyDescriptor::init$(old);
	$set(this, indexedReadMethodRef, $new($MethodRef));
	$set(this, indexedWriteMethodRef, $new($MethodRef));
	$nc(this->indexedReadMethodRef)->set($($nc($nc(old)->indexedReadMethodRef)->get()));
	$nc(this->indexedWriteMethodRef)->set($($nc($nc(old)->indexedWriteMethodRef)->get()));
	$set(this, indexedPropertyTypeRef, $nc(old)->indexedPropertyTypeRef);
	$set(this, indexedWriteMethodName, old->indexedWriteMethodName);
	$set(this, indexedReadMethodName, old->indexedReadMethodName);
}

void IndexedPropertyDescriptor::updateGenericsFor($Class* type) {
	$useLocalCurrentObjectStackCache();
	$PropertyDescriptor::updateGenericsFor(type);
	try {
		$var($Method, var$0, $nc(this->indexedReadMethodRef)->get());
		setIndexedPropertyType(findIndexedPropertyType(var$0, $($nc(this->indexedWriteMethodRef)->get())));
	} catch ($IntrospectionException& exception) {
		setIndexedPropertyType(nullptr);
	}
}

int32_t IndexedPropertyDescriptor::hashCode() {
	int32_t result = $PropertyDescriptor::hashCode();
	result = 37 * result + ((this->indexedWriteMethodName == nullptr) ? 0 : $nc(this->indexedWriteMethodName)->hashCode());
	result = 37 * result + ((this->indexedReadMethodName == nullptr) ? 0 : $nc(this->indexedReadMethodName)->hashCode());
	result = 37 * result + ((getIndexedPropertyType() == nullptr) ? 0 : $nc($of(getIndexedPropertyType()))->hashCode());
	return result;
}

void IndexedPropertyDescriptor::appendTo($StringBuilder* sb) {
	$useLocalCurrentObjectStackCache();
	$PropertyDescriptor::appendTo(sb);
	$FeatureDescriptor::appendTo(sb, "indexedPropertyType"_s, this->indexedPropertyTypeRef);
	$FeatureDescriptor::appendTo(sb, "indexedReadMethod"_s, $($of($nc(this->indexedReadMethodRef)->get())));
	$FeatureDescriptor::appendTo(sb, "indexedWriteMethod"_s, $($of($nc(this->indexedWriteMethodRef)->get())));
}

IndexedPropertyDescriptor::IndexedPropertyDescriptor() {
}

$Class* IndexedPropertyDescriptor::load$($String* name, bool initialize) {
	$loadClass(IndexedPropertyDescriptor, name, initialize, &_IndexedPropertyDescriptor_ClassInfo_, allocate$IndexedPropertyDescriptor);
	return class$;
}

$Class* IndexedPropertyDescriptor::class$ = nullptr;

	} // beans
} // java