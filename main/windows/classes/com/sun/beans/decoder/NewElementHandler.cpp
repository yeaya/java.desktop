#include <com/sun/beans/decoder/NewElementHandler.h>

#include <com/sun/beans/decoder/DocumentHandler.h>
#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>
#include <com/sun/beans/decoder/ValueObjectImpl.h>
#include <com/sun/beans/finder/ConstructorFinder.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef VOID

using $DocumentHandler = ::com::sun::beans::decoder::DocumentHandler;
using $ElementHandler = ::com::sun::beans::decoder::ElementHandler;
using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ValueObjectImpl = ::com::sun::beans::decoder::ValueObjectImpl;
using $ConstructorFinder = ::com::sun::beans::finder::ConstructorFinder;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $Constructor = ::java::lang::reflect::Constructor;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _NewElementHandler_FieldInfo_[] = {
	{"arguments", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Object;>;", $PRIVATE, $field(NewElementHandler, arguments)},
	{"value", "Lcom/sun/beans/decoder/ValueObject;", nullptr, $PRIVATE, $field(NewElementHandler, value)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(NewElementHandler, type)},
	{}
};

$MethodInfo _NewElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NewElementHandler::*)()>(&NewElementHandler::init$))},
	{"addArgument", "(Ljava/lang/Object;)V", nullptr, $PROTECTED | $FINAL},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"getArgumentTypes", "([Ljava/lang/Object;)[Ljava/lang/Class;", "([Ljava/lang/Object;)[Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$ClassArray*(*)($ObjectArray*)>(&NewElementHandler::getArgumentTypes))},
	{"getArguments", "([Ljava/lang/Object;[Ljava/lang/Class;)[Ljava/lang/Object;", "([Ljava/lang/Object;[Ljava/lang/Class<*>;)[Ljava/lang/Object;", $STATIC, $method(static_cast<$ObjectArray*(*)($ObjectArray*,$ClassArray*)>(&NewElementHandler::getArguments))},
	{"getContextBean", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"getValueObject", "()Lcom/sun/beans/decoder/ValueObject;", nullptr, $PROTECTED | $FINAL},
	{"getValueObject", "(Ljava/lang/Class;[Ljava/lang/Object;)Lcom/sun/beans/decoder/ValueObject;", "(Ljava/lang/Class<*>;[Ljava/lang/Object;)Lcom/sun/beans/decoder/ValueObject;", 0, nullptr, "java.lang.Exception"},
	{}
};

$ClassInfo _NewElementHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.beans.decoder.NewElementHandler",
	"com.sun.beans.decoder.ElementHandler",
	nullptr,
	_NewElementHandler_FieldInfo_,
	_NewElementHandler_MethodInfo_
};

$Object* allocate$NewElementHandler($Class* clazz) {
	return $of($alloc(NewElementHandler));
}

void NewElementHandler::init$() {
	$ElementHandler::init$();
	$set(this, arguments, $new($ArrayList));
	$init($ValueObjectImpl);
	$set(this, value, $ValueObjectImpl::VOID);
}

void NewElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("class"_s)) {
		$set(this, type, $nc($(getOwner()))->findClass(value));
	} else {
		$ElementHandler::addAttribute(name, value);
	}
}

void NewElementHandler::addArgument(Object$* argument) {
	if (this->arguments == nullptr) {
		$throwNew($IllegalStateException, "Could not add argument to evaluated element"_s);
	}
	$nc(this->arguments)->add(argument);
}

$Object* NewElementHandler::getContextBean() {
	return $of((this->type != nullptr) ? $of(this->type) : $ElementHandler::getContextBean());
}

$ValueObject* NewElementHandler::getValueObject() {
	$useLocalCurrentObjectStackCache();
	if (this->arguments != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$set(this, value, getValueObject(this->type, $($nc(this->arguments)->toArray())));
				} catch ($Exception&) {
					$var($Exception, exception, $catch());
					$nc($(getOwner()))->handleException(exception);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$set(this, arguments, nullptr);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return this->value;
}

$ValueObject* NewElementHandler::getValueObject($Class* type, $ObjectArray* args$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, args, args$renamed);
	$beforeCallerSensitive();
	if (type == nullptr) {
		$throwNew($IllegalArgumentException, "Class name is not set"_s);
	}
	$var($ClassArray, types, getArgumentTypes(args));
	$var($Constructor, constructor, $ConstructorFinder::findConstructor(type, types));
	if ($nc(constructor)->isVarArgs()) {
		$assign(args, getArguments(args, $(constructor->getParameterTypes())));
	}
	return $ValueObjectImpl::create($($nc(constructor)->newInstance(args)));
}

$ClassArray* NewElementHandler::getArgumentTypes($ObjectArray* arguments) {
	$init(NewElementHandler);
	$var($ClassArray, types, $new($ClassArray, $nc(arguments)->length));
	for (int32_t i = 0; i < arguments->length; ++i) {
		if (arguments->get(i) != nullptr) {
			types->set(i, $nc($of(arguments->get(i)))->getClass());
		}
	}
	return types;
}

$ObjectArray* NewElementHandler::getArguments($ObjectArray* arguments, $ClassArray* types) {
	$init(NewElementHandler);
	$useLocalCurrentObjectStackCache();
	int32_t index = $nc(types)->length - 1;
	if (types->length == $nc(arguments)->length) {
		$var($Object0, argument, arguments->get(index));
		if (argument == nullptr) {
			return arguments;
		}
		$Class* type = types->get(index);
		if ($nc(type)->isAssignableFrom($nc($of(argument))->getClass())) {
			return arguments;
		}
	}
	int32_t length = $nc(arguments)->length - index;
	$Class* type = $nc(types->get(index))->getComponentType();
	$var($Object, array, $1Array::newInstance(type, length));
	$System::arraycopy(arguments, index, array, 0, length);
	$var($ObjectArray, args, $new($ObjectArray, types->length));
	$System::arraycopy(arguments, 0, args, 0, index);
	args->set(index, array);
	return args;
}

NewElementHandler::NewElementHandler() {
}

$Class* NewElementHandler::load$($String* name, bool initialize) {
	$loadClass(NewElementHandler, name, initialize, &_NewElementHandler_ClassInfo_, allocate$NewElementHandler);
	return class$;
}

$Class* NewElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com