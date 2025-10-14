#include <javax/swing/KeyStroke.h>

#include <java/awt/AWTKeyStroke.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/KeyStroke$1.h>
#include <sun/swing/SwingAccessor$KeyStrokeAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

#undef VK_UNDEFINED

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStroke$1 = ::javax::swing::KeyStroke$1;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$KeyStrokeAccessor = ::sun::swing::SwingAccessor$KeyStrokeAccessor;

namespace javax {
	namespace swing {

$CompoundAttribute _KeyStroke_MethodAnnotations_getKeyStroke3[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _KeyStroke_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeyStroke, serialVersionUID)},
	{}
};

$MethodInfo _KeyStroke_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(KeyStroke::*)()>(&KeyStroke::init$))},
	{"<init>", "(CIIZ)V", nullptr, $PRIVATE, $method(static_cast<void(KeyStroke::*)(char16_t,int32_t,int32_t,bool)>(&KeyStroke::init$))},
	{"getKeyStroke", "(C)Ljavax/swing/KeyStroke;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyStroke*(*)(char16_t)>(&KeyStroke::getKeyStroke))},
	{"getKeyStroke", "(CZ)Ljavax/swing/KeyStroke;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<KeyStroke*(*)(char16_t,bool)>(&KeyStroke::getKeyStroke)), nullptr, nullptr, _KeyStroke_MethodAnnotations_getKeyStroke3},
	{"getKeyStroke", "(Ljava/lang/Character;I)Ljavax/swing/KeyStroke;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyStroke*(*)($Character*,int32_t)>(&KeyStroke::getKeyStroke))},
	{"getKeyStroke", "(IIZ)Ljavax/swing/KeyStroke;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyStroke*(*)(int32_t,int32_t,bool)>(&KeyStroke::getKeyStroke))},
	{"getKeyStroke", "(II)Ljavax/swing/KeyStroke;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyStroke*(*)(int32_t,int32_t)>(&KeyStroke::getKeyStroke))},
	{"getKeyStroke", "(Ljava/lang/String;)Ljavax/swing/KeyStroke;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyStroke*(*)($String*)>(&KeyStroke::getKeyStroke))},
	{"getKeyStrokeForEvent", "(Ljava/awt/event/KeyEvent;)Ljavax/swing/KeyStroke;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyStroke*(*)($KeyEvent*)>(&KeyStroke::getKeyStrokeForEvent))},
	{}
};

$InnerClassInfo _KeyStroke_InnerClassesInfo_[] = {
	{"javax.swing.KeyStroke$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyStroke_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.KeyStroke",
	"java.awt.AWTKeyStroke",
	nullptr,
	_KeyStroke_FieldInfo_,
	_KeyStroke_MethodInfo_,
	nullptr,
	nullptr,
	_KeyStroke_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.KeyStroke$1"
};

$Object* allocate$KeyStroke($Class* clazz) {
	return $of($alloc(KeyStroke));
}

void KeyStroke::init$() {
	$AWTKeyStroke::init$();
}

void KeyStroke::init$(char16_t keyChar, int32_t keyCode, int32_t modifiers, bool onKeyRelease) {
	$AWTKeyStroke::init$(keyChar, keyCode, modifiers, onKeyRelease);
}

KeyStroke* KeyStroke::getKeyStroke(char16_t keyChar) {
	$init(KeyStroke);
	$load($AWTKeyStroke);
	$synchronized($AWTKeyStroke::class$) {
		return $cast(KeyStroke, getAWTKeyStroke(keyChar));
	}
}

KeyStroke* KeyStroke::getKeyStroke(char16_t keyChar, bool onKeyRelease) {
	$init(KeyStroke);
	return $new(KeyStroke, keyChar, $KeyEvent::VK_UNDEFINED, 0, onKeyRelease);
}

KeyStroke* KeyStroke::getKeyStroke($Character* keyChar, int32_t modifiers) {
	$init(KeyStroke);
	$load($AWTKeyStroke);
	$synchronized($AWTKeyStroke::class$) {
		return $cast(KeyStroke, getAWTKeyStroke(keyChar, modifiers));
	}
}

KeyStroke* KeyStroke::getKeyStroke(int32_t keyCode, int32_t modifiers, bool onKeyRelease) {
	$init(KeyStroke);
	$load($AWTKeyStroke);
	$synchronized($AWTKeyStroke::class$) {
		return $cast(KeyStroke, getAWTKeyStroke(keyCode, modifiers, onKeyRelease));
	}
}

KeyStroke* KeyStroke::getKeyStroke(int32_t keyCode, int32_t modifiers) {
	$init(KeyStroke);
	$load($AWTKeyStroke);
	$synchronized($AWTKeyStroke::class$) {
		return $cast(KeyStroke, getAWTKeyStroke(keyCode, modifiers));
	}
}

KeyStroke* KeyStroke::getKeyStrokeForEvent($KeyEvent* anEvent) {
	$init(KeyStroke);
	$load($AWTKeyStroke);
	$synchronized($AWTKeyStroke::class$) {
		return $cast(KeyStroke, getAWTKeyStrokeForEvent(anEvent));
	}
}

KeyStroke* KeyStroke::getKeyStroke($String* s) {
	$init(KeyStroke);
	if (s == nullptr || $nc(s)->length() == 0) {
		return nullptr;
	}
	$load($AWTKeyStroke);
	$synchronized($AWTKeyStroke::class$) {
		try {
			return $cast(KeyStroke, getAWTKeyStroke(s));
		} catch ($IllegalArgumentException&) {
			$var($IllegalArgumentException, e, $catch());
			return nullptr;
		}
	}
	$shouldNotReachHere();
}

void clinit$KeyStroke($Class* class$) {
	{
		$SwingAccessor::setKeyStrokeAccessor($$new($KeyStroke$1));
	}
}

KeyStroke::KeyStroke() {
}

$Class* KeyStroke::load$($String* name, bool initialize) {
	$loadClass(KeyStroke, name, initialize, &_KeyStroke_ClassInfo_, clinit$KeyStroke, allocate$KeyStroke);
	return class$;
}

$Class* KeyStroke::class$ = nullptr;

	} // swing
} // javax