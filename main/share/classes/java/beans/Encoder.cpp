#include <java/beans/Encoder.h>

#include <com/sun/beans/finder/PersistenceDelegateFinder.h>
#include <java/beans/ExceptionListener.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/beans/Statement.h>
#include <java/lang/ClassLoader.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $PersistenceDelegateFinder = ::com::sun::beans::finder::PersistenceDelegateFinder;
using $ExceptionListener = ::java::beans::ExceptionListener;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $Statement = ::java::beans::Statement;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Map = ::java::util::Map;

namespace java {
	namespace beans {

$FieldInfo _Encoder_FieldInfo_[] = {
	{"finder", "Lcom/sun/beans/finder/PersistenceDelegateFinder;", nullptr, $PRIVATE | $FINAL, $field(Encoder, finder)},
	{"bindings", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/beans/Expression;>;", $PRIVATE, $field(Encoder, bindings)},
	{"exceptionListener", "Ljava/beans/ExceptionListener;", nullptr, $PRIVATE, $field(Encoder, exceptionListener)},
	{"executeStatements", "Z", nullptr, 0, $field(Encoder, executeStatements)},
	{"attributes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE, $field(Encoder, attributes)},
	{}
};

$MethodInfo _Encoder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Encoder::*)()>(&Encoder::init$))},
	{"clear", "()V", nullptr, 0},
	{"cloneStatement", "(Ljava/beans/Statement;)Ljava/beans/Statement;", nullptr, $PRIVATE, $method(static_cast<$Statement*(Encoder::*)($Statement*)>(&Encoder::cloneStatement))},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0},
	{"getExceptionListener", "()Ljava/beans/ExceptionListener;", nullptr, $PUBLIC},
	{"getPersistenceDelegate", "(Ljava/lang/Class;)Ljava/beans/PersistenceDelegate;", "(Ljava/lang/Class<*>;)Ljava/beans/PersistenceDelegate;", $PUBLIC},
	{"getValue", "(Ljava/beans/Expression;)Ljava/lang/Object;", nullptr, 0},
	{"remove", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0},
	{"setExceptionListener", "(Ljava/beans/ExceptionListener;)V", nullptr, $PUBLIC},
	{"setPersistenceDelegate", "(Ljava/lang/Class;Ljava/beans/PersistenceDelegate;)V", "(Ljava/lang/Class<*>;Ljava/beans/PersistenceDelegate;)V", $PUBLIC},
	{"writeExpression", "(Ljava/beans/Expression;)V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"writeObject1", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(Encoder::*)(Object$*)>(&Encoder::writeObject1))},
	{"writeStatement", "(Ljava/beans/Statement;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Encoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.Encoder",
	"java.lang.Object",
	nullptr,
	_Encoder_FieldInfo_,
	_Encoder_MethodInfo_
};

$Object* allocate$Encoder($Class* clazz) {
	return $of($alloc(Encoder));
}

void Encoder::init$() {
	$set(this, finder, $new($PersistenceDelegateFinder));
	$set(this, bindings, $new($IdentityHashMap));
	this->executeStatements = true;
}

void Encoder::writeObject(Object$* o) {
	if ($equals(o, this)) {
		return;
	}
	$var($PersistenceDelegate, info, getPersistenceDelegate(o == nullptr ? ($Class*)nullptr : $nc($of(o))->getClass()));
	$nc(info)->writeObject(o, this);
}

void Encoder::setExceptionListener($ExceptionListener* exceptionListener) {
	$set(this, exceptionListener, exceptionListener);
}

$ExceptionListener* Encoder::getExceptionListener() {
	$init($Statement);
	return (this->exceptionListener != nullptr) ? this->exceptionListener : $Statement::defaultExceptionListener;
}

$Object* Encoder::getValue($Expression* exp) {
	$useLocalCurrentObjectStackCache();
	try {
		return $of((exp == nullptr) ? ($Object*)nullptr : $nc(exp)->getValue());
	} catch ($Exception& e) {
		$nc($(getExceptionListener()))->exceptionThrown(e);
		$throwNew($RuntimeException, $$str({"failed to evaluate: "_s, $($nc(exp)->toString())}));
	}
	$shouldNotReachHere();
}

$PersistenceDelegate* Encoder::getPersistenceDelegate($Class* type) {
	$var($PersistenceDelegate, pd, $cast($PersistenceDelegate, $nc(this->finder)->find(type)));
	if (pd == nullptr) {
		$assign(pd, $MetaData::getPersistenceDelegate(type));
		if (pd != nullptr) {
			$nc(this->finder)->register$(type, pd);
		}
	}
	return pd;
}

void Encoder::setPersistenceDelegate($Class* type, $PersistenceDelegate* delegate) {
	$nc(this->finder)->register$(type, delegate);
}

$Object* Encoder::remove(Object$* oldInstance) {
	$var($Expression, exp, $cast($Expression, $nc(this->bindings)->remove(oldInstance)));
	return $of(getValue(exp));
}

$Object* Encoder::get(Object$* oldInstance) {
	if (oldInstance == nullptr || $equals(oldInstance, this) || $nc($of(oldInstance))->getClass() == $String::class$) {
		return $of(oldInstance);
	}
	$var($Expression, exp, $cast($Expression, $nc(this->bindings)->get(oldInstance)));
	return $of(getValue(exp));
}

$Object* Encoder::writeObject1(Object$* oldInstance) {
	$var($Object, o, get(oldInstance));
	if (o == nullptr) {
		writeObject(oldInstance);
		$assign(o, get(oldInstance));
	}
	return $of(o);
}

$Statement* Encoder::cloneStatement($Statement* oldExp) {
	$useLocalCurrentObjectStackCache();
	$var($Object, oldTarget, $nc(oldExp)->getTarget());
	$var($Object, newTarget, writeObject1(oldTarget));
	$var($ObjectArray, oldArgs, oldExp->getArguments());
	$var($ObjectArray, newArgs, $new($ObjectArray, $nc(oldArgs)->length));
	for (int32_t i = 0; i < oldArgs->length; ++i) {
		newArgs->set(i, $(writeObject1(oldArgs->get(i))));
	}
	$var($Statement, newExp, $of($Statement::class$)->equals($of(oldExp)->getClass()) ? $new($Statement, newTarget, $(oldExp->getMethodName()), newArgs) : static_cast<$Statement*>($new($Expression, newTarget, $(oldExp->getMethodName()), newArgs)));
	$set($nc(newExp), loader, oldExp->loader);
	return newExp;
}

void Encoder::writeStatement($Statement* oldStm) {
	$useLocalCurrentObjectStackCache();
	$var($Statement, newStm, cloneStatement(oldStm));
	if (!$equals($nc(oldStm)->getTarget(), this) && this->executeStatements) {
		try {
			$nc(newStm)->execute();
		} catch ($Exception& e) {
			$nc($(getExceptionListener()))->exceptionThrown($$new($Exception, $$str({"Encoder: discarding statement "_s, newStm}), e));
		}
	}
}

void Encoder::writeExpression($Expression* oldExp) {
	$useLocalCurrentObjectStackCache();
	$var($Object, oldValue, getValue(oldExp));
	if (get(oldValue) != nullptr) {
		return;
	}
	$nc(this->bindings)->put(oldValue, $cast($Expression, $(cloneStatement(oldExp))));
	writeObject(oldValue);
}

void Encoder::clear() {
	$nc(this->bindings)->clear();
}

void Encoder::setAttribute(Object$* key, Object$* value) {
	if (this->attributes == nullptr) {
		$set(this, attributes, $new($HashMap));
	}
	$nc(this->attributes)->put(key, value);
}

$Object* Encoder::getAttribute(Object$* key) {
	if (this->attributes == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(this->attributes)->get(key));
}

Encoder::Encoder() {
}

$Class* Encoder::load$($String* name, bool initialize) {
	$loadClass(Encoder, name, initialize, &_Encoder_ClassInfo_, allocate$Encoder);
	return class$;
}

$Class* Encoder::class$ = nullptr;

	} // beans
} // java