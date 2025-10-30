#include <java/beans/PropertyDescriptor.h>

#include <com/sun/beans/introspect/PropertyInfo$Name.h>
#include <com/sun/beans/introspect/PropertyInfo.h>
#include <java/beans/FeatureDescriptor.h>
#include <java/beans/IntrospectionException.h>
#include <java/beans/Introspector.h>
#include <java/beans/MethodRef.h>
#include <java/beans/NameGenerator.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/beans/PropertyEditor.h>
#include <java/beans/Transient.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map$Entry.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef GET_PREFIX
#undef IS_PREFIX
#undef SET_PREFIX
#undef TYPE

using $PropertyInfo = ::com::sun::beans::introspect::PropertyInfo;
using $PropertyInfo$Name = ::com::sun::beans::introspect::PropertyInfo$Name;
using $FeatureDescriptor = ::java::beans::FeatureDescriptor;
using $IntrospectionException = ::java::beans::IntrospectionException;
using $Introspector = ::java::beans::Introspector;
using $MethodRef = ::java::beans::MethodRef;
using $NameGenerator = ::java::beans::NameGenerator;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyEditor = ::java::beans::PropertyEditor;
using $Transient = ::java::beans::Transient;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Void = ::java::lang::Void;
using $Annotation = ::java::lang::annotation::Annotation;
using $Reference = ::java::lang::ref::Reference;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $Map$Entry = ::java::util::Map$Entry;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace java {
	namespace beans {

$FieldInfo _PropertyDescriptor_FieldInfo_[] = {
	{"propertyTypeRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<+Ljava/lang/Class<*>;>;", $PRIVATE, $field(PropertyDescriptor, propertyTypeRef)},
	{"readMethodRef", "Ljava/beans/MethodRef;", nullptr, $PRIVATE | $FINAL, $field(PropertyDescriptor, readMethodRef)},
	{"writeMethodRef", "Ljava/beans/MethodRef;", nullptr, $PRIVATE | $FINAL, $field(PropertyDescriptor, writeMethodRef)},
	{"propertyEditorClassRef", "Ljava/lang/ref/Reference;", "Ljava/lang/ref/Reference<+Ljava/lang/Class<*>;>;", $PRIVATE, $field(PropertyDescriptor, propertyEditorClassRef)},
	{"bound", "Z", nullptr, $PRIVATE, $field(PropertyDescriptor, bound)},
	{"constrained", "Z", nullptr, $PRIVATE, $field(PropertyDescriptor, constrained)},
	{"baseName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PropertyDescriptor, baseName)},
	{"writeMethodName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PropertyDescriptor, writeMethodName)},
	{"readMethodName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PropertyDescriptor, readMethodName)},
	{}
};

$MethodInfo _PropertyDescriptor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(PropertyDescriptor::*)($String*,$Class*)>(&PropertyDescriptor::init$)), "java.beans.IntrospectionException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Class;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/lang/String;Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(PropertyDescriptor::*)($String*,$Class*,$String*,$String*)>(&PropertyDescriptor::init$)), "java.beans.IntrospectionException"},
	{"<init>", "(Ljava/lang/String;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC, $method(static_cast<void(PropertyDescriptor::*)($String*,$Method*,$Method*)>(&PropertyDescriptor::init$)), "java.beans.IntrospectionException"},
	{"<init>", "(Ljava/util/Map$Entry;Z)V", "(Ljava/util/Map$Entry<Ljava/lang/String;Lcom/sun/beans/introspect/PropertyInfo;>;Z)V", 0, $method(static_cast<void(PropertyDescriptor::*)($Map$Entry*,bool)>(&PropertyDescriptor::init$))},
	{"<init>", "(Ljava/beans/PropertyDescriptor;Ljava/beans/PropertyDescriptor;)V", nullptr, 0, $method(static_cast<void(PropertyDescriptor::*)(PropertyDescriptor*,PropertyDescriptor*)>(&PropertyDescriptor::init$))},
	{"<init>", "(Ljava/beans/PropertyDescriptor;)V", nullptr, 0, $method(static_cast<void(PropertyDescriptor::*)(PropertyDescriptor*)>(&PropertyDescriptor::init$))},
	{"appendTo", "(Ljava/lang/StringBuilder;)V", nullptr, 0},
	{"compareMethods", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)Z", nullptr, 0},
	{"createPropertyEditor", "(Ljava/lang/Object;)Ljava/beans/PropertyEditor;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"findPropertyType", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)Ljava/lang/Class;", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)Ljava/lang/Class<*>;", $PRIVATE, $method(static_cast<$Class*(PropertyDescriptor::*)($Method*,$Method*)>(&PropertyDescriptor::findPropertyType)), "java.beans.IntrospectionException"},
	{"getBaseName", "()Ljava/lang/String;", nullptr, 0},
	{"getPropertyEditorClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{"getPropertyType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $SYNCHRONIZED},
	{"getPropertyType0", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PRIVATE, $method(static_cast<$Class*(PropertyDescriptor::*)()>(&PropertyDescriptor::getPropertyType0))},
	{"getReadMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getWriteMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isAssignable", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)Z", nullptr, 0},
	{"isBound", "()Z", nullptr, $PUBLIC},
	{"isConstrained", "()Z", nullptr, $PUBLIC},
	{"setBound", "(Z)V", nullptr, $PUBLIC},
	{"setClass0", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", 0},
	{"setConstrained", "(Z)V", nullptr, $PUBLIC},
	{"setPropertyEditorClass", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC},
	{"setPropertyType", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(PropertyDescriptor::*)($Class*)>(&PropertyDescriptor::setPropertyType))},
	{"setReadMethod", "(Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.beans.IntrospectionException"},
	{"setReadMethod0", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE, $method(static_cast<void(PropertyDescriptor::*)($Method*)>(&PropertyDescriptor::setReadMethod0))},
	{"setWriteMethod", "(Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.beans.IntrospectionException"},
	{"setWriteMethod0", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE, $method(static_cast<void(PropertyDescriptor::*)($Method*)>(&PropertyDescriptor::setWriteMethod0))},
	{"updateGenericsFor", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", 0},
	{}
};

$ClassInfo _PropertyDescriptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.PropertyDescriptor",
	"java.beans.FeatureDescriptor",
	nullptr,
	_PropertyDescriptor_FieldInfo_,
	_PropertyDescriptor_MethodInfo_
};

$Object* allocate$PropertyDescriptor($Class* clazz) {
	return $of($alloc(PropertyDescriptor));
}

void PropertyDescriptor::init$($String* propertyName, $Class* beanClass) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, propertyName);
	$Class* var$1 = beanClass;
	$init($Introspector);
	$var($String, var$2, $str({$Introspector::IS_PREFIX, $($NameGenerator::capitalize(propertyName))}));
	PropertyDescriptor::init$(var$0, var$1, var$2, $$str({$Introspector::SET_PREFIX, $($NameGenerator::capitalize(propertyName))}));
}

void PropertyDescriptor::init$($String* propertyName, $Class* beanClass, $String* readMethodName, $String* writeMethodName) {
	$useLocalCurrentObjectStackCache();
	$FeatureDescriptor::init$();
	$set(this, readMethodRef, $new($MethodRef));
	$set(this, writeMethodRef, $new($MethodRef));
	if (beanClass == nullptr) {
		$throwNew($IntrospectionException, "Target Bean class is null"_s);
	}
	if (propertyName == nullptr || $nc(propertyName)->length() == 0) {
		$throwNew($IntrospectionException, "bad property name"_s);
	}
	bool var$0 = ""_s->equals(readMethodName);
	if (var$0 || ""_s->equals(writeMethodName)) {
		$throwNew($IntrospectionException, "read or write method name should not be the empty string"_s);
	}
	setName(propertyName);
	setClass0(beanClass);
	$set(this, readMethodName, readMethodName);
	if (readMethodName != nullptr && getReadMethod() == nullptr) {
		$throwNew($IntrospectionException, $$str({"Method not found: "_s, readMethodName}));
	}
	$set(this, writeMethodName, writeMethodName);
	if (writeMethodName != nullptr && getWriteMethod() == nullptr) {
		$throwNew($IntrospectionException, $$str({"Method not found: "_s, writeMethodName}));
	}
	$load($PropertyChangeListener);
	$var($ClassArray, args, $new($ClassArray, {$PropertyChangeListener::class$}));
	this->bound = nullptr != $Introspector::findMethod(beanClass, "addPropertyChangeListener"_s, args->length, args);
}

void PropertyDescriptor::init$($String* propertyName, $Method* readMethod, $Method* writeMethod) {
	$FeatureDescriptor::init$();
	$set(this, readMethodRef, $new($MethodRef));
	$set(this, writeMethodRef, $new($MethodRef));
	if (propertyName == nullptr || $nc(propertyName)->length() == 0) {
		$throwNew($IntrospectionException, "bad property name"_s);
	}
	setName(propertyName);
	setReadMethod(readMethod);
	setWriteMethod(writeMethod);
}

void PropertyDescriptor::init$($Map$Entry* entry, bool bound) {
	$useLocalCurrentObjectStackCache();
	$FeatureDescriptor::init$();
	$set(this, readMethodRef, $new($MethodRef));
	$set(this, writeMethodRef, $new($MethodRef));
	$var($String, base, $cast($String, $nc(entry)->getKey()));
	$var($PropertyInfo, info, $cast($PropertyInfo, entry->getValue()));
	setName($($Introspector::decapitalize(base)));
	setReadMethod0($($nc(info)->getReadMethod()));
	setWriteMethod0($($nc(info)->getWriteMethod()));
	setPropertyType($nc(info)->getPropertyType());
	setConstrained($nc(info)->isConstrained());
	$init($PropertyInfo$Name);
	setBound(bound && $nc(info)->is($PropertyInfo$Name::bound));
	bool isExpert = $nc(info)->is($PropertyInfo$Name::expert);
	$var($String, var$0, $PropertyInfo$Name::expert->name());
	setValue(var$0, $($Boolean::valueOf(isExpert)));
	setExpert(isExpert);
	bool isHidden = info->is($PropertyInfo$Name::hidden);
	$var($String, var$1, $PropertyInfo$Name::hidden->name());
	setValue(var$1, $($Boolean::valueOf(isHidden)));
	setHidden(isHidden);
	setPreferred(info->is($PropertyInfo$Name::preferred));
	bool isRequired = info->is($PropertyInfo$Name::required);
	$var($String, var$2, $PropertyInfo$Name::required->name());
	setValue(var$2, $($Boolean::valueOf(isRequired)));
	bool visual = info->is($PropertyInfo$Name::visualUpdate);
	$var($String, var$3, $PropertyInfo$Name::visualUpdate->name());
	setValue(var$3, $($Boolean::valueOf(visual)));
	$var($Object, description, info->get($PropertyInfo$Name::description));
	if (description != nullptr) {
		setShortDescription($($of(description)->toString()));
	}
	$var($Object, values, info->get($PropertyInfo$Name::enumerationValues));
	if (values == nullptr) {
		$assign(values, $new($ObjectArray, 0));
	}
	setValue($($PropertyInfo$Name::enumerationValues->name()), values);
	$set(this, baseName, base);
}

$Class* PropertyDescriptor::getPropertyType() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$Class* type = getPropertyType0();
		if (type == nullptr) {
			try {
				$var($Method, var$0, getReadMethod());
				type = findPropertyType(var$0, $(getWriteMethod()));
				setPropertyType(type);
			} catch ($IntrospectionException& ex) {
			}
		}
		return type;
	}
}

void PropertyDescriptor::setPropertyType($Class* type) {
	$set(this, propertyTypeRef, getWeakReference(type));
}

$Class* PropertyDescriptor::getPropertyType0() {
	return (this->propertyTypeRef != nullptr) ? $cast($Class, $nc(this->propertyTypeRef)->get()) : ($Class*)nullptr;
}

$Method* PropertyDescriptor::getReadMethod() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Method, readMethod, $nc(this->readMethodRef)->get());
		if (readMethod == nullptr) {
			$Class* cls = getClass0();
			if (cls == nullptr || (this->readMethodName == nullptr && !$nc(this->readMethodRef)->isSet())) {
				return nullptr;
			}
			$init($Introspector);
			$var($String, nextMethodName, $str({$Introspector::GET_PREFIX, $(getBaseName())}));
			if (this->readMethodName == nullptr) {
				$Class* type = getPropertyType0();
				$init($Boolean);
				if (type == $Boolean::TYPE || type == nullptr) {
					$set(this, readMethodName, $str({$Introspector::IS_PREFIX, $(getBaseName())}));
				} else {
					$set(this, readMethodName, nextMethodName);
				}
			}
			$assign(readMethod, $Introspector::findMethod(cls, this->readMethodName, 0));
			if ((readMethod == nullptr) && !$nc(this->readMethodName)->equals(nextMethodName)) {
				$set(this, readMethodName, nextMethodName);
				$assign(readMethod, $Introspector::findMethod(cls, this->readMethodName, 0));
			}
			try {
				setReadMethod(readMethod);
			} catch ($IntrospectionException& ex) {
			}
		}
		return readMethod;
	}
}

void PropertyDescriptor::setReadMethod($Method* readMethod) {
	$synchronized(this) {
		setPropertyType(findPropertyType(readMethod, $($nc(this->writeMethodRef)->get())));
		setReadMethod0(readMethod);
	}
}

void PropertyDescriptor::setReadMethod0($Method* readMethod) {
	$nc(this->readMethodRef)->set(readMethod);
	if (readMethod == nullptr) {
		$set(this, readMethodName, nullptr);
		return;
	}
	setClass0($nc(readMethod)->getDeclaringClass());
	$set(this, readMethodName, $nc(readMethod)->getName());
	$load($Transient);
	setTransient($cast($Transient, $(readMethod->getAnnotation($Transient::class$))));
}

$Method* PropertyDescriptor::getWriteMethod() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Method, writeMethod, $nc(this->writeMethodRef)->get());
		if (writeMethod == nullptr) {
			$Class* cls = getClass0();
			if (cls == nullptr || (this->writeMethodName == nullptr && !$nc(this->writeMethodRef)->isSet())) {
				return nullptr;
			}
			$Class* type = getPropertyType0();
			if (type == nullptr) {
				try {
					type = findPropertyType($(getReadMethod()), nullptr);
					setPropertyType(type);
				} catch ($IntrospectionException& ex) {
					return nullptr;
				}
			}
			if (this->writeMethodName == nullptr) {
				$init($Introspector);
				$set(this, writeMethodName, $str({$Introspector::SET_PREFIX, $(getBaseName())}));
			}
			$var($ClassArray, args, (type == nullptr) ? ($ClassArray*)nullptr : $new($ClassArray, {type}));
			$assign(writeMethod, $Introspector::findMethod(cls, this->writeMethodName, 1, args));
			if (writeMethod != nullptr) {
				$init($Void);
				if (!$nc($of(writeMethod->getReturnType()))->equals($Void::TYPE)) {
					$assign(writeMethod, nullptr);
				}
			}
			try {
				setWriteMethod(writeMethod);
			} catch ($IntrospectionException& ex) {
			}
		}
		return writeMethod;
	}
}

void PropertyDescriptor::setWriteMethod($Method* writeMethod) {
	$synchronized(this) {
		setPropertyType(findPropertyType($(getReadMethod()), writeMethod));
		setWriteMethod0(writeMethod);
	}
}

void PropertyDescriptor::setWriteMethod0($Method* writeMethod) {
	$nc(this->writeMethodRef)->set(writeMethod);
	if (writeMethod == nullptr) {
		$set(this, writeMethodName, nullptr);
		return;
	}
	setClass0($nc(writeMethod)->getDeclaringClass());
	$set(this, writeMethodName, $nc(writeMethod)->getName());
	$load($Transient);
	setTransient($cast($Transient, $(writeMethod->getAnnotation($Transient::class$))));
}

void PropertyDescriptor::setClass0($Class* clz) {
	bool var$0 = getClass0() != nullptr;
	if (var$0 && $nc(clz)->isAssignableFrom(getClass0())) {
		return;
	}
	$FeatureDescriptor::setClass0(clz);
}

bool PropertyDescriptor::isBound() {
	return this->bound;
}

void PropertyDescriptor::setBound(bool bound) {
	this->bound = bound;
}

bool PropertyDescriptor::isConstrained() {
	return this->constrained;
}

void PropertyDescriptor::setConstrained(bool constrained) {
	this->constrained = constrained;
}

void PropertyDescriptor::setPropertyEditorClass($Class* propertyEditorClass) {
	$set(this, propertyEditorClassRef, getWeakReference(propertyEditorClass));
}

$Class* PropertyDescriptor::getPropertyEditorClass() {
	return (this->propertyEditorClassRef != nullptr) ? $cast($Class, $nc(this->propertyEditorClassRef)->get()) : ($Class*)nullptr;
}

$PropertyEditor* PropertyDescriptor::createPropertyEditor(Object$* bean) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Object, editor, nullptr);
	$Class* cls = getPropertyEditorClass();
	$load($PropertyEditor);
	bool var$0 = cls != nullptr && $PropertyEditor::class$->isAssignableFrom(cls);
	if (var$0 && $ReflectUtil::isPackageAccessible(cls)) {
		$var($Constructor, ctor, nullptr);
		if (bean != nullptr) {
			try {
				$assign(ctor, cls->getConstructor($$new($ClassArray, {$Object::class$})));
			} catch ($Exception& ex) {
			}
		}
		try {
			if (ctor == nullptr) {
				$assign(editor, cls->newInstance());
			} else {
				$assign(editor, $nc(ctor)->newInstance($$new($ObjectArray, {bean})));
			}
		} catch ($Exception& ex) {
		}
	}
	return $cast($PropertyEditor, editor);
}

bool PropertyDescriptor::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, obj)) {
		return true;
	}
	if (obj != nullptr && $instanceOf(PropertyDescriptor, obj)) {
		$var(PropertyDescriptor, other, $cast(PropertyDescriptor, obj));
		$var($Method, otherReadMethod, other->getReadMethod());
		$var($Method, otherWriteMethod, other->getWriteMethod());
		if (!compareMethods($(getReadMethod()), otherReadMethod)) {
			return false;
		}
		if (!compareMethods($(getWriteMethod()), otherWriteMethod)) {
			return false;
		}
		bool var$2 = getPropertyType() == other->getPropertyType();
		if (var$2) {
			var$2 = getPropertyEditorClass() == other->getPropertyEditorClass();
		}
		bool var$1 = var$2;
		bool var$0 = var$1 && this->bound == other->isBound();
		if (var$0 && this->constrained == other->isConstrained() && this->writeMethodName == other->writeMethodName && this->readMethodName == other->readMethodName) {
			return true;
		}
	}
	return false;
}

bool PropertyDescriptor::compareMethods($Method* a, $Method* b) {
	if ((a == nullptr) != (b == nullptr)) {
		return false;
	}
	if (a != nullptr && b != nullptr) {
		if (!a->equals(b)) {
			return false;
		}
	}
	return true;
}

void PropertyDescriptor::init$(PropertyDescriptor* x, PropertyDescriptor* y) {
	$useLocalCurrentObjectStackCache();
	$FeatureDescriptor::init$(x, y);
	$set(this, readMethodRef, $new($MethodRef));
	$set(this, writeMethodRef, $new($MethodRef));
	if ($nc(y)->baseName != nullptr) {
		$set(this, baseName, y->baseName);
	} else {
		$set(this, baseName, $nc(x)->baseName);
	}
	if ($nc(y)->readMethodName != nullptr) {
		$set(this, readMethodName, y->readMethodName);
	} else {
		$set(this, readMethodName, $nc(x)->readMethodName);
	}
	if ($nc(y)->writeMethodName != nullptr) {
		$set(this, writeMethodName, y->writeMethodName);
	} else {
		$set(this, writeMethodName, $nc(x)->writeMethodName);
	}
	if ($nc(y)->propertyTypeRef != nullptr) {
		$set(this, propertyTypeRef, y->propertyTypeRef);
	} else {
		$set(this, propertyTypeRef, $nc(x)->propertyTypeRef);
	}
	$var($Method, xr, $nc(x)->getReadMethod());
	$var($Method, yr, $nc(y)->getReadMethod());
	try {
		if (isAssignable(xr, yr)) {
			setReadMethod(yr);
		} else {
			setReadMethod(xr);
		}
	} catch ($IntrospectionException& ex) {
	}
	bool var$4 = xr != nullptr && yr != nullptr;
	if (var$4) {
		var$4 = xr->getDeclaringClass() == yr->getDeclaringClass();
	}
	bool var$3 = var$4;
	$init($Boolean);
	bool var$2 = var$3 && getReturnType(getClass0(), xr) == $Boolean::TYPE;
	bool var$1 = var$2 && getReturnType(getClass0(), yr) == $Boolean::TYPE;
	$init($Introspector);
	bool var$0 = var$1 && $nc($(xr->getName()))->indexOf($Introspector::IS_PREFIX) == 0;
	if (var$0 && $nc($(yr->getName()))->indexOf($Introspector::GET_PREFIX) == 0) {
		try {
			setReadMethod(xr);
		} catch ($IntrospectionException& ex) {
		}
	}
	$var($Method, xw, x->getWriteMethod());
	$var($Method, yw, y->getWriteMethod());
	try {
		if (yw != nullptr) {
			setWriteMethod(yw);
		} else {
			setWriteMethod(xw);
		}
	} catch ($IntrospectionException& ex) {
	}
	if (y->getPropertyEditorClass() != nullptr) {
		setPropertyEditorClass(y->getPropertyEditorClass());
	} else {
		setPropertyEditorClass(x->getPropertyEditorClass());
	}
	this->bound = x->bound | y->bound;
	this->constrained = x->constrained | y->constrained;
}

void PropertyDescriptor::init$(PropertyDescriptor* old) {
	$useLocalCurrentObjectStackCache();
	$FeatureDescriptor::init$(old);
	$set(this, readMethodRef, $new($MethodRef));
	$set(this, writeMethodRef, $new($MethodRef));
	$set(this, propertyTypeRef, $nc(old)->propertyTypeRef);
	$nc(this->readMethodRef)->set($($nc(old->readMethodRef)->get()));
	$nc(this->writeMethodRef)->set($($nc(old->writeMethodRef)->get()));
	$set(this, propertyEditorClassRef, old->propertyEditorClassRef);
	$set(this, writeMethodName, old->writeMethodName);
	$set(this, readMethodName, old->readMethodName);
	$set(this, baseName, old->baseName);
	this->bound = old->bound;
	this->constrained = old->constrained;
}

void PropertyDescriptor::updateGenericsFor($Class* type) {
	$useLocalCurrentObjectStackCache();
	setClass0(type);
	try {
		$var($Method, var$0, $nc(this->readMethodRef)->get());
		setPropertyType(findPropertyType(var$0, $($nc(this->writeMethodRef)->get())));
	} catch ($IntrospectionException& exception) {
		setPropertyType(nullptr);
	}
}

$Class* PropertyDescriptor::findPropertyType($Method* readMethod, $Method* writeMethod) {
	$useLocalCurrentObjectStackCache();
	$Class* propertyType = nullptr;
	try {
		if (readMethod != nullptr) {
			$var($ClassArray, params, getParameterTypes(getClass0(), readMethod));
			if ($nc(params)->length != 0) {
				$throwNew($IntrospectionException, $$str({"bad read method arg count: "_s, readMethod}));
			}
			propertyType = getReturnType(getClass0(), readMethod);
			$init($Void);
			if (propertyType == $Void::TYPE) {
				$throwNew($IntrospectionException, $$str({"read method "_s, $(readMethod->getName()), " returns void"_s}));
			}
		}
		if (writeMethod != nullptr) {
			$var($ClassArray, params, getParameterTypes(getClass0(), writeMethod));
			if ($nc(params)->length != 1) {
				$throwNew($IntrospectionException, $$str({"bad write method arg count: "_s, writeMethod}));
			}
			if (propertyType != nullptr && !$nc($nc(params)->get(0))->isAssignableFrom(propertyType)) {
				$throwNew($IntrospectionException, "type mismatch between read and write methods"_s);
			}
			propertyType = $nc(params)->get(0);
		}
	} catch ($IntrospectionException& ex) {
		$throw(ex);
	}
	return propertyType;
}

int32_t PropertyDescriptor::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t result = 7;
	result = 37 * result + ((getPropertyType() == nullptr) ? 0 : $nc($of(getPropertyType()))->hashCode());
	result = 37 * result + ((getReadMethod() == nullptr) ? 0 : $nc($(getReadMethod()))->hashCode());
	result = 37 * result + ((getWriteMethod() == nullptr) ? 0 : $nc($(getWriteMethod()))->hashCode());
	result = 37 * result + ((getPropertyEditorClass() == nullptr) ? 0 : $nc($of(getPropertyEditorClass()))->hashCode());
	result = 37 * result + ((this->writeMethodName == nullptr) ? 0 : $nc(this->writeMethodName)->hashCode());
	result = 37 * result + ((this->readMethodName == nullptr) ? 0 : $nc(this->readMethodName)->hashCode());
	result = 37 * result + $nc($(getName()))->hashCode();
	result = 37 * result + ((this->bound == false) ? 0 : 1);
	result = 37 * result + ((this->constrained == false) ? 0 : 1);
	return result;
}

$String* PropertyDescriptor::getBaseName() {
	if (this->baseName == nullptr) {
		$set(this, baseName, $NameGenerator::capitalize($(getName())));
	}
	return this->baseName;
}

void PropertyDescriptor::appendTo($StringBuilder* sb) {
	$useLocalCurrentObjectStackCache();
	$FeatureDescriptor::appendTo(sb, "bound"_s, this->bound);
	$FeatureDescriptor::appendTo(sb, "constrained"_s, this->constrained);
	$FeatureDescriptor::appendTo(sb, "propertyEditorClass"_s, this->propertyEditorClassRef);
	$FeatureDescriptor::appendTo(sb, "propertyType"_s, this->propertyTypeRef);
	$FeatureDescriptor::appendTo(sb, "readMethod"_s, $($of($nc(this->readMethodRef)->get())));
	$FeatureDescriptor::appendTo(sb, "writeMethod"_s, $($of($nc(this->writeMethodRef)->get())));
}

bool PropertyDescriptor::isAssignable($Method* m1, $Method* m2) {
	$useLocalCurrentObjectStackCache();
	if (m1 == nullptr) {
		return true;
	}
	if (m2 == nullptr) {
		return false;
	}
	if (!$nc($($nc(m1)->getName()))->equals($($nc(m2)->getName()))) {
		return true;
	}
	$Class* type1 = $nc(m1)->getDeclaringClass();
	$Class* type2 = $nc(m2)->getDeclaringClass();
	if (!$nc(type1)->isAssignableFrom(type2)) {
		return false;
	}
	type1 = getReturnType(getClass0(), m1);
	type2 = getReturnType(getClass0(), m2);
	if (!$nc(type1)->isAssignableFrom(type2)) {
		return false;
	}
	$var($ClassArray, args1, getParameterTypes(getClass0(), m1));
	$var($ClassArray, args2, getParameterTypes(getClass0(), m2));
	if ($nc(args1)->length != $nc(args2)->length) {
		return true;
	}
	for (int32_t i = 0; i < $nc(args1)->length; ++i) {
		if (!$nc(args1->get(i))->isAssignableFrom($nc(args2)->get(i))) {
			return false;
		}
	}
	return true;
}

PropertyDescriptor::PropertyDescriptor() {
}

$Class* PropertyDescriptor::load$($String* name, bool initialize) {
	$loadClass(PropertyDescriptor, name, initialize, &_PropertyDescriptor_ClassInfo_, allocate$PropertyDescriptor);
	return class$;
}

$Class* PropertyDescriptor::class$ = nullptr;

	} // beans
} // java