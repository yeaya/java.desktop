#include <java/beans/MethodDescriptor.h>

#include <java/beans/FeatureDescriptor.h>
#include <java/beans/Introspector.h>
#include <java/beans/MethodRef.h>
#include <java/beans/ParameterDescriptor.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ParameterDescriptorArray = $Array<::java::beans::ParameterDescriptor>;
using $FeatureDescriptor = ::java::beans::FeatureDescriptor;
using $Introspector = ::java::beans::Introspector;
using $MethodRef = ::java::beans::MethodRef;
using $ParameterDescriptor = ::java::beans::ParameterDescriptor;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Method = ::java::lang::reflect::Method;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace java {
	namespace beans {

$FieldInfo _MethodDescriptor_FieldInfo_[] = {
	{"methodRef", "Ljava/beans/MethodRef;", nullptr, $PRIVATE | $FINAL, $field(MethodDescriptor, methodRef)},
	{"paramNames", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(MethodDescriptor, paramNames)},
	{"params", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/ref/WeakReference<Ljava/lang/Class<*>;>;>;", $PRIVATE, $field(MethodDescriptor, params)},
	{"parameterDescriptors", "[Ljava/beans/ParameterDescriptor;", nullptr, $PRIVATE, $field(MethodDescriptor, parameterDescriptors)},
	{}
};

$MethodInfo _MethodDescriptor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Method;)V", nullptr, $PUBLIC, $method(static_cast<void(MethodDescriptor::*)($Method*)>(&MethodDescriptor::init$))},
	{"<init>", "(Ljava/lang/reflect/Method;[Ljava/beans/ParameterDescriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(MethodDescriptor::*)($Method*,$ParameterDescriptorArray*)>(&MethodDescriptor::init$))},
	{"<init>", "(Ljava/beans/MethodDescriptor;Ljava/beans/MethodDescriptor;)V", nullptr, 0, $method(static_cast<void(MethodDescriptor::*)(MethodDescriptor*,MethodDescriptor*)>(&MethodDescriptor::init$))},
	{"<init>", "(Ljava/beans/MethodDescriptor;)V", nullptr, 0, $method(static_cast<void(MethodDescriptor::*)(MethodDescriptor*)>(&MethodDescriptor::init$))},
	{"appendTo", "(Ljava/lang/StringBuilder;)V", nullptr, 0},
	{"getMethod", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getParamNames", "()[Ljava/lang/String;", nullptr, 0},
	{"getParameterDescriptors", "()[Ljava/beans/ParameterDescriptor;", nullptr, $PUBLIC},
	{"getParams", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PRIVATE | $SYNCHRONIZED, $method(static_cast<$ClassArray*(MethodDescriptor::*)()>(&MethodDescriptor::getParams))},
	{"resolve", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Method*(*)($Method*,$Method*)>(&MethodDescriptor::resolve))},
	{"setMethod", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(MethodDescriptor::*)($Method*)>(&MethodDescriptor::setMethod))},
	{"setParams", "([Ljava/lang/Class;)V", "([Ljava/lang/Class<*>;)V", $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(MethodDescriptor::*)($ClassArray*)>(&MethodDescriptor::setParams))},
	{}
};

$ClassInfo _MethodDescriptor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.MethodDescriptor",
	"java.beans.FeatureDescriptor",
	nullptr,
	_MethodDescriptor_FieldInfo_,
	_MethodDescriptor_MethodInfo_
};

$Object* allocate$MethodDescriptor($Class* clazz) {
	return $of($alloc(MethodDescriptor));
}

void MethodDescriptor::init$($Method* method) {
	MethodDescriptor::init$(method, ($ParameterDescriptorArray*)nullptr);
}

void MethodDescriptor::init$($Method* method, $ParameterDescriptorArray* parameterDescriptors) {
	$FeatureDescriptor::init$();
	$set(this, methodRef, $new($MethodRef));
	setName($($nc(method)->getName()));
	setMethod(method);
	$set(this, parameterDescriptors, (parameterDescriptors != nullptr) ? $cast($ParameterDescriptorArray, $nc(parameterDescriptors)->clone()) : ($ParameterDescriptorArray*)nullptr);
}

$Method* MethodDescriptor::getMethod() {
	$synchronized(this) {
		$var($Method, method, $nc(this->methodRef)->get());
		if (method == nullptr) {
			$Class* cls = getClass0();
			$var($String, name, getName());
			if ((cls != nullptr) && (name != nullptr)) {
				$var($ClassArray, params, getParams());
				if (params == nullptr) {
					for (int32_t i = 0; i < 3; ++i) {
						$assign(method, $Introspector::findMethod(cls, name, i, nullptr));
						if (method != nullptr) {
							break;
						}
					}
				} else {
					$assign(method, $Introspector::findMethod(cls, name, $nc(params)->length, params));
				}
				setMethod(method);
			}
		}
		return method;
	}
}

void MethodDescriptor::setMethod($Method* method) {
	$synchronized(this) {
		if (method == nullptr) {
			return;
		}
		if (getClass0() == nullptr) {
			setClass0($nc(method)->getDeclaringClass());
		}
		setParams($(getParameterTypes(getClass0(), method)));
		$nc(this->methodRef)->set(method);
	}
}

void MethodDescriptor::setParams($ClassArray* param) {
	$synchronized(this) {
		if (param == nullptr) {
			return;
		}
		$set(this, paramNames, $new($StringArray, $nc(param)->length));
		$set(this, params, $new($ArrayList, param->length));
		for (int32_t i = 0; i < param->length; ++i) {
			$nc(this->paramNames)->set(i, $($nc(param->get(i))->getName()));
			$nc(this->params)->add($$new($WeakReference, param->get(i)));
		}
	}
}

$StringArray* MethodDescriptor::getParamNames() {
	return this->paramNames;
}

$ClassArray* MethodDescriptor::getParams() {
	$synchronized(this) {
		$var($ClassArray, clss, $new($ClassArray, $nc(this->params)->size()));
		for (int32_t i = 0; i < $nc(this->params)->size(); ++i) {
			$var($Reference, ref, $cast($Reference, $nc(this->params)->get(i)));
			$Class* cls = $cast($Class, $nc(ref)->get());
			if (cls == nullptr) {
				return nullptr;
			} else {
				clss->set(i, cls);
			}
		}
		return clss;
	}
}

$ParameterDescriptorArray* MethodDescriptor::getParameterDescriptors() {
	return (this->parameterDescriptors != nullptr) ? $cast($ParameterDescriptorArray, $nc(this->parameterDescriptors)->clone()) : ($ParameterDescriptorArray*)nullptr;
}

$Method* MethodDescriptor::resolve($Method* oldMethod, $Method* newMethod) {
	$init(MethodDescriptor);
	if (oldMethod == nullptr) {
		return newMethod;
	}
	if (newMethod == nullptr) {
		return oldMethod;
	}
	bool var$0 = !$nc(oldMethod)->isSynthetic();
	return var$0 && $nc(newMethod)->isSynthetic() ? oldMethod : newMethod;
}

void MethodDescriptor::init$(MethodDescriptor* x, MethodDescriptor* y) {
	$FeatureDescriptor::init$(x, y);
	$set(this, methodRef, $new($MethodRef));
	$var($Method, var$0, $nc($nc(x)->methodRef)->get());
	$nc(this->methodRef)->set($(resolve(var$0, $($nc($nc(y)->methodRef)->get()))));
	$set(this, params, $nc(x)->params);
	if ($nc(y)->params != nullptr) {
		$set(this, params, y->params);
	}
	$set(this, paramNames, x->paramNames);
	if ($nc(y)->paramNames != nullptr) {
		$set(this, paramNames, y->paramNames);
	}
	$set(this, parameterDescriptors, x->parameterDescriptors);
	if ($nc(y)->parameterDescriptors != nullptr) {
		$set(this, parameterDescriptors, y->parameterDescriptors);
	}
}

void MethodDescriptor::init$(MethodDescriptor* old) {
	$FeatureDescriptor::init$(old);
	$set(this, methodRef, $new($MethodRef));
	$nc(this->methodRef)->set($($nc(old)->getMethod()));
	$set(this, params, $nc(old)->params);
	$set(this, paramNames, old->paramNames);
	if (old->parameterDescriptors != nullptr) {
		int32_t len = $nc(old->parameterDescriptors)->length;
		$set(this, parameterDescriptors, $new($ParameterDescriptorArray, len));
		for (int32_t i = 0; i < len; ++i) {
			$nc(this->parameterDescriptors)->set(i, $$new($ParameterDescriptor, $nc(old->parameterDescriptors)->get(i)));
		}
	}
}

void MethodDescriptor::appendTo($StringBuilder* sb) {
	$FeatureDescriptor::appendTo(sb, "method"_s, $($of($nc(this->methodRef)->get())));
	if (this->parameterDescriptors != nullptr) {
		$nc(sb)->append("; parameterDescriptors={"_s);
		{
			$var($ParameterDescriptorArray, arr$, this->parameterDescriptors);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($ParameterDescriptor, pd, arr$->get(i$));
				{
					sb->append($of(pd))->append(", "_s);
				}
			}
		}
		sb->setLength(sb->length() - 2);
		sb->append("}"_s);
	}
}

MethodDescriptor::MethodDescriptor() {
}

$Class* MethodDescriptor::load$($String* name, bool initialize) {
	$loadClass(MethodDescriptor, name, initialize, &_MethodDescriptor_ClassInfo_, allocate$MethodDescriptor);
	return class$;
}

$Class* MethodDescriptor::class$ = nullptr;

	} // beans
} // java