#include <com/sun/beans/decoder/CharElementHandler.h>

#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/StringElementHandler.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ElementHandler = ::com::sun::beans::decoder::ElementHandler;
using $StringElementHandler = ::com::sun::beans::decoder::StringElementHandler;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

$MethodInfo _CharElementHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CharElementHandler::*)()>(&CharElementHandler::init$))},
	{"addAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CharElementHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.decoder.CharElementHandler",
	"com.sun.beans.decoder.StringElementHandler",
	nullptr,
	nullptr,
	_CharElementHandler_MethodInfo_
};

$Object* allocate$CharElementHandler($Class* clazz) {
	return $of($alloc(CharElementHandler));
}

void CharElementHandler::init$() {
	$StringElementHandler::init$();
}

void CharElementHandler::addAttribute($String* name, $String* value) {
	if ($nc(name)->equals("code"_s)) {
		int32_t code = $nc($($Integer::decode(value)))->intValue();
		{
			$var($chars, arr$, $Character::toChars(code));
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				char16_t ch = arr$->get(i$);
				{
					addCharacter(ch);
				}
			}
		}
	} else {
		$StringElementHandler::addAttribute(name, value);
	}
}

$Object* CharElementHandler::getValue($String* argument) {
	if ($nc(argument)->length() != 1) {
		$throwNew($IllegalArgumentException, "Wrong characters count"_s);
	}
	return $of($Character::valueOf($nc(argument)->charAt(0)));
}

CharElementHandler::CharElementHandler() {
}

$Class* CharElementHandler::load$($String* name, bool initialize) {
	$loadClass(CharElementHandler, name, initialize, &_CharElementHandler_ClassInfo_, allocate$CharElementHandler);
	return class$;
}

$Class* CharElementHandler::class$ = nullptr;

			} // decoder
		} // beans
	} // sun
} // com