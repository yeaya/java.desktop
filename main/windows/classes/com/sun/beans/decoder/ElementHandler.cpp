#include <com/sun/beans/decoder/ElementHandler.h>

#include <com/sun/beans/decoder/DocumentHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DocumentHandler = ::com::sun::beans::decoder::DocumentHandler;
using $ValueObject = ::com::sun::beans::decoder::ValueObject;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$FieldInfo _ElementHandler_FieldInfo_[] = {
	{"owner", "Lcom/sun/beans/decoder/DocumentHandler;", nullptr, $PRIVATE, $field(ElementHandler, owner)},
	{"parent", "Lcom/sun/beans/decoder/ElementHandler;", nullptr, $PRIVATE, $field(ElementHandler, parent)},
	{"id", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ElementHandler, id)},
	{}
};

$MethodInfo _ElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ElementHandler::*)()>(&ElementHandler::init$))},
	{"addArgument", "(Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addCharacter", "(C)V", nullptr, $PUBLIC},
	{"endElement", "()V", nullptr, $PUBLIC},
	{"getContextBean", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getOwner", "()Lcom/sun/beans/decoder/DocumentHandler;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$DocumentHandler*(ElementHandler::*)()>(&ElementHandler::getOwner))},
	{"getParent", "()Lcom/sun/beans/decoder/ElementHandler;", nullptr, $PUBLIC | $FINAL, $method(static_cast<ElementHandler*(ElementHandler::*)()>(&ElementHandler::getParent))},
	{"getValueObject", "()Lcom/sun/beans/decoder/ValueObject;", nullptr, $PROTECTED | $ABSTRACT},
	{"getVariable", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Object*(ElementHandler::*)($String*)>(&ElementHandler::getVariable))},
	{"isArgument", "()Z", nullptr, $PROTECTED},
	{"setOwner", "(Lcom/sun/beans/decoder/DocumentHandler;)V", nullptr, $FINAL, $method(static_cast<void(ElementHandler::*)($DocumentHandler*)>(&ElementHandler::setOwner))},
	{"setParent", "(Lcom/sun/beans/decoder/ElementHandler;)V", nullptr, $FINAL, $method(static_cast<void(ElementHandler::*)(ElementHandler*)>(&ElementHandler::setParent))},
	{"startElement", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ElementHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.beans.decoder.ElementHandler",
	"java.lang.Object",
	nullptr,
	_ElementHandler_FieldInfo_,
	_ElementHandler_MethodInfo_
};

$Object* allocate$ElementHandler($Class* clazz) {
	return $of($alloc(ElementHandler));
}

void ElementHandler::init$() {
}

$DocumentHandler* ElementHandler::getOwner() {
	return this->owner;
}

void ElementHandler::setOwner($DocumentHandler* owner) {
	if (owner == nullptr) {
		$throwNew($IllegalArgumentException, "Every element should have owner"_s);
	}
	$set(this, owner, owner);
}

ElementHandler* ElementHandler::getParent() {
	return this->parent;
}

void ElementHandler::setParent(ElementHandler* parent) {
	$set(this, parent, parent);
}

$Object* ElementHandler::getVariable($String* id) {
	if ($nc(id)->equals(this->id)) {
		$var($ValueObject, value, getValueObject());
		if ($nc(value)->isVoid()) {
			$throwNew($IllegalStateException, "The element does not return value"_s);
		}
		return $of($nc(value)->getValue());
	}
	return $of((this->parent != nullptr) ? $nc(this->parent)->getVariable(id) : $nc(this->owner)->getVariable(id));
}

$Object* ElementHandler::getContextBean() {
	$useLocalCurrentObjectStackCache();
	if (this->parent != nullptr) {
		$var($ValueObject, value, $nc(this->parent)->getValueObject());
		if (!$nc(value)->isVoid()) {
			return $of(value->getValue());
		}
		$throwNew($IllegalStateException, "The outer element does not return value"_s);
	} else {
		$var($Object, value, $nc(this->owner)->getOwner());
		if (value != nullptr) {
			return $of(value);
		}
		$throwNew($IllegalStateException, "The topmost element does not have context"_s);
	}
}

void ElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("id"_s)) {
		$set(this, id, value);
	} else {
		$throwNew($IllegalArgumentException, $$str({"Unsupported attribute: "_s, name}));
	}
}

void ElementHandler::startElement() {
}

void ElementHandler::endElement() {
	$useLocalCurrentObjectStackCache();
	$var($ValueObject, value, getValueObject());
	if (!$nc(value)->isVoid()) {
		if (this->id != nullptr) {
			$nc(this->owner)->setVariable(this->id, $(value->getValue()));
		}
		if (isArgument()) {
			if (this->parent != nullptr) {
				$nc(this->parent)->addArgument($(value->getValue()));
			} else {
				$nc(this->owner)->addObject($(value->getValue()));
			}
		}
	}
}

void ElementHandler::addCharacter(char16_t ch) {
	$useLocalCurrentObjectStackCache();
	if ((ch != u' ') && (ch != u'\n') && (ch != u'\t') && (ch != u'\r')) {
		$throwNew($IllegalStateException, $$str({"Illegal character with code "_s, $$str((int32_t)ch)}));
	}
}

void ElementHandler::addArgument(Object$* argument) {
	$throwNew($IllegalStateException, "Could not add argument to simple element"_s);
}

bool ElementHandler::isArgument() {
	return this->id == nullptr;
}

ElementHandler::ElementHandler() {
}

$Class* ElementHandler::load$($String* name, bool initialize) {
	$loadClass(ElementHandler, name, initialize, &_ElementHandler_ClassInfo_, allocate$ElementHandler);
	return class$;
}

$Class* ElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com