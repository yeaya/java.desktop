#include <com/sun/beans/decoder/StringElementHandler.h>

#include <com/sun/beans/decoder/DocumentHandler.h>
#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>
#include <com/sun/beans/decoder/ValueObjectImpl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef NULL

using $DocumentHandler = ::com::sun::beans::decoder::DocumentHandler;
using $ElementHandler = ::com::sun::beans::decoder::ElementHandler;
using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ValueObjectImpl = ::com::sun::beans::decoder::ValueObjectImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _StringElementHandler_FieldInfo_[] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PRIVATE, $field(StringElementHandler, sb)},
	{"value", "Lcom/sun/beans/decoder/ValueObject;", nullptr, $PRIVATE, $field(StringElementHandler, value)},
	{}
};

$MethodInfo _StringElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringElementHandler::*)()>(&StringElementHandler::init$))},
	{"addArgument", "(Ljava/lang/Object;)V", nullptr, $PROTECTED | $FINAL},
	{"addCharacter", "(C)V", nullptr, $PUBLIC | $FINAL},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getValueObject", "()Lcom/sun/beans/decoder/ValueObject;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _StringElementHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.beans.decoder.StringElementHandler",
	"com.sun.beans.decoder.ElementHandler",
	nullptr,
	_StringElementHandler_FieldInfo_,
	_StringElementHandler_MethodInfo_
};

$Object* allocate$StringElementHandler($Class* clazz) {
	return $of($alloc(StringElementHandler));
}

void StringElementHandler::init$() {
	$ElementHandler::init$();
	$set(this, sb, $new($StringBuilder));
	$init($ValueObjectImpl);
	$set(this, value, $ValueObjectImpl::NULL);
}

void StringElementHandler::addCharacter(char16_t ch) {
	if (this->sb == nullptr) {
		$throwNew($IllegalStateException, "Could not add chararcter to evaluated string element"_s);
	}
	$nc(this->sb)->append(ch);
}

void StringElementHandler::addArgument(Object$* argument) {
	if (this->sb == nullptr) {
		$throwNew($IllegalStateException, "Could not add argument to evaluated string element"_s);
	}
	$nc(this->sb)->append(argument);
}

$ValueObject* StringElementHandler::getValueObject() {
	$useLocalCurrentObjectStackCache();
	if (this->sb != nullptr) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$set(this, value, $ValueObjectImpl::create($(getValue($($nc(this->sb)->toString())))));
				} catch ($RuntimeException&) {
					$var($RuntimeException, exception, $catch());
					$nc($(getOwner()))->handleException(exception);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$set(this, sb, nullptr);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return this->value;
}

$Object* StringElementHandler::getValue($String* argument) {
	return $of(argument);
}

StringElementHandler::StringElementHandler() {
}

$Class* StringElementHandler::load$($String* name, bool initialize) {
	$loadClass(StringElementHandler, name, initialize, &_StringElementHandler_ClassInfo_, allocate$StringElementHandler);
	return class$;
}

$Class* StringElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com