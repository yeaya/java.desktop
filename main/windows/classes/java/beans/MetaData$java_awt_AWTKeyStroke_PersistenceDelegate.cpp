#include <java/beans/MetaData$java_awt_AWTKeyStroke_PersistenceDelegate.h>

#include <java/awt/AWTKeyStroke.h>
#include <java/awt/event/KeyEvent.h>
#include <java/beans/Encoder.h>
#include <java/beans/Expression.h>
#include <java/beans/MetaData.h>
#include <java/beans/PersistenceDelegate.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef CHAR_UNDEFINED
#undef VK_UNDEFINED

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Encoder = ::java::beans::Encoder;
using $Expression = ::java::beans::Expression;
using $MetaData = ::java::beans::MetaData;
using $PersistenceDelegate = ::java::beans::PersistenceDelegate;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_awt_AWTKeyStroke_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_awt_AWTKeyStroke_PersistenceDelegate::*)()>(&MetaData$java_awt_AWTKeyStroke_PersistenceDelegate::init$))},
	{"instantiate", "(Ljava/lang/Object;Ljava/beans/Encoder;)Ljava/beans/Expression;", nullptr, $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_awt_AWTKeyStroke_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_awt_AWTKeyStroke_PersistenceDelegate", "java.beans.MetaData", "java_awt_AWTKeyStroke_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_awt_AWTKeyStroke_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_awt_AWTKeyStroke_PersistenceDelegate",
	"java.beans.PersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_awt_AWTKeyStroke_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_awt_AWTKeyStroke_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_awt_AWTKeyStroke_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_awt_AWTKeyStroke_PersistenceDelegate));
}

void MetaData$java_awt_AWTKeyStroke_PersistenceDelegate::init$() {
	$PersistenceDelegate::init$();
}

bool MetaData$java_awt_AWTKeyStroke_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	return $nc($of(oldInstance))->equals(newInstance);
}

$Expression* MetaData$java_awt_AWTKeyStroke_PersistenceDelegate::instantiate(Object$* oldInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$var($AWTKeyStroke, key, $cast($AWTKeyStroke, oldInstance));
	char16_t ch = $nc(key)->getKeyChar();
	int32_t code = key->getKeyCode();
	int32_t mask = key->getModifiers();
	bool onKeyRelease = key->isOnKeyRelease();
	$var($ObjectArray, args, nullptr);
	if (ch == $KeyEvent::CHAR_UNDEFINED) {
		$assign(args, !onKeyRelease ? $new($ObjectArray, {
			$($of($Integer::valueOf(code))),
			$($of($Integer::valueOf(mask)))
		}) : $new($ObjectArray, {
			$($of($Integer::valueOf(code))),
			$($of($Integer::valueOf(mask))),
			$($of($Boolean::valueOf(onKeyRelease)))
		}));
	} else if (code == $KeyEvent::VK_UNDEFINED) {
		if (!onKeyRelease) {
			$assign(args, (mask == 0) ? $new($ObjectArray, {$($of($Character::valueOf(ch)))}) : $new($ObjectArray, {
				$($of($Character::valueOf(ch))),
				$($of($Integer::valueOf(mask)))
			}));
		} else if (mask == 0) {
			$assign(args, $new($ObjectArray, {
				$($of($Character::valueOf(ch))),
				$($of($Boolean::valueOf(onKeyRelease)))
			}));
		}
	}
	if (args == nullptr) {
		$throwNew($IllegalStateException, $$str({"Unsupported KeyStroke: "_s, key}));
	}
	$Class* type = $of(key)->getClass();
	$var($String, name, $nc(type)->getName());
	int32_t index = $nc(name)->lastIndexOf((int32_t)u'.') + 1;
	if (index > 0) {
		$assign(name, name->substring(index));
	}
	return $new($Expression, key, type, $$str({"get"_s, name}), args);
}

MetaData$java_awt_AWTKeyStroke_PersistenceDelegate::MetaData$java_awt_AWTKeyStroke_PersistenceDelegate() {
}

$Class* MetaData$java_awt_AWTKeyStroke_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_awt_AWTKeyStroke_PersistenceDelegate, name, initialize, &_MetaData$java_awt_AWTKeyStroke_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_awt_AWTKeyStroke_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_awt_AWTKeyStroke_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java