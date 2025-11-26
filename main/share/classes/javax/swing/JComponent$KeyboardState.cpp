#include <javax/swing/JComponent$KeyboardState.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/JComponent$IntVector.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef KEY_PRESSED
#undef KEY_RELEASED
#undef KEY_TYPED
#undef VK_PRINTSCREEN

using $AWTEvent = ::java::awt::AWTEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$IntVector = ::javax::swing::JComponent$IntVector;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

$FieldInfo _JComponent$KeyboardState_FieldInfo_[] = {
	{"keyCodesKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JComponent$KeyboardState, keyCodesKey)},
	{}
};

$MethodInfo _JComponent$KeyboardState_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JComponent$KeyboardState::*)()>(&JComponent$KeyboardState::init$))},
	{"getKeyCodeArray", "()Ljavax/swing/JComponent$IntVector;", nullptr, $STATIC, $method(static_cast<$JComponent$IntVector*(*)()>(&JComponent$KeyboardState::getKeyCodeArray))},
	{"keyIsPressed", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&JComponent$KeyboardState::keyIsPressed))},
	{"registerKeyPressed", "(I)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t)>(&JComponent$KeyboardState::registerKeyPressed))},
	{"registerKeyReleased", "(I)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t)>(&JComponent$KeyboardState::registerKeyReleased))},
	{"shouldProcess", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($KeyEvent*)>(&JComponent$KeyboardState::shouldProcess))},
	{}
};

$InnerClassInfo _JComponent$KeyboardState_InnerClassesInfo_[] = {
	{"javax.swing.JComponent$KeyboardState", "javax.swing.JComponent", "KeyboardState", $STATIC},
	{}
};

$ClassInfo _JComponent$KeyboardState_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JComponent$KeyboardState",
	"java.lang.Object",
	"java.io.Serializable",
	_JComponent$KeyboardState_FieldInfo_,
	_JComponent$KeyboardState_MethodInfo_,
	nullptr,
	nullptr,
	_JComponent$KeyboardState_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComponent"
};

$Object* allocate$JComponent$KeyboardState($Class* clazz) {
	return $of($alloc(JComponent$KeyboardState));
}

$Object* JComponent$KeyboardState::keyCodesKey = nullptr;

void JComponent$KeyboardState::init$() {
}

$JComponent$IntVector* JComponent$KeyboardState::getKeyCodeArray() {
	$init(JComponent$KeyboardState);
	$var($JComponent$IntVector, iv, $cast($JComponent$IntVector, $SwingUtilities::appContextGet(JComponent$KeyboardState::keyCodesKey)));
	if (iv == nullptr) {
		$assign(iv, $new($JComponent$IntVector));
		$SwingUtilities::appContextPut(JComponent$KeyboardState::keyCodesKey, iv);
	}
	return iv;
}

void JComponent$KeyboardState::registerKeyPressed(int32_t keyCode) {
	$init(JComponent$KeyboardState);
	$var($JComponent$IntVector, kca, getKeyCodeArray());
	int32_t count = $nc(kca)->size();
	int32_t i = 0;
	for (i = 0; i < count; ++i) {
		if (kca->elementAt(i) == -1) {
			kca->setElementAt(keyCode, i);
			return;
		}
	}
	kca->addElement(keyCode);
}

void JComponent$KeyboardState::registerKeyReleased(int32_t keyCode) {
	$init(JComponent$KeyboardState);
	$var($JComponent$IntVector, kca, getKeyCodeArray());
	int32_t count = $nc(kca)->size();
	int32_t i = 0;
	for (i = 0; i < count; ++i) {
		if (kca->elementAt(i) == keyCode) {
			kca->setElementAt(-1, i);
			return;
		}
	}
}

bool JComponent$KeyboardState::keyIsPressed(int32_t keyCode) {
	$init(JComponent$KeyboardState);
	$var($JComponent$IntVector, kca, getKeyCodeArray());
	int32_t count = $nc(kca)->size();
	int32_t i = 0;
	for (i = 0; i < count; ++i) {
		if (kca->elementAt(i) == keyCode) {
			return true;
		}
	}
	return false;
}

bool JComponent$KeyboardState::shouldProcess($KeyEvent* e) {
	$init(JComponent$KeyboardState);
	switch ($nc(e)->getID()) {
	case $KeyEvent::KEY_PRESSED:
		{
			if (!keyIsPressed(e->getKeyCode())) {
				registerKeyPressed(e->getKeyCode());
			}
			return true;
		}
	case $KeyEvent::KEY_RELEASED:
		{
			bool var$0 = keyIsPressed(e->getKeyCode());
			if (var$0 || e->getKeyCode() == $KeyEvent::VK_PRINTSCREEN) {
				registerKeyReleased(e->getKeyCode());
				return true;
			}
			return false;
		}
	case $KeyEvent::KEY_TYPED:
		{
			return true;
		}
	default:
		{
			return false;
		}
	}
}

void clinit$JComponent$KeyboardState($Class* class$) {
	$assignStatic(JComponent$KeyboardState::keyCodesKey, JComponent$KeyboardState::class$);
}

JComponent$KeyboardState::JComponent$KeyboardState() {
}

$Class* JComponent$KeyboardState::load$($String* name, bool initialize) {
	$loadClass(JComponent$KeyboardState, name, initialize, &_JComponent$KeyboardState_ClassInfo_, clinit$JComponent$KeyboardState, allocate$JComponent$KeyboardState);
	return class$;
}

$Class* JComponent$KeyboardState::class$ = nullptr;

	} // swing
} // javax