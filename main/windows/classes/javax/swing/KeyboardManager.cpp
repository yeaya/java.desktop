#include <javax/swing/KeyboardManager.h>

#include <java/applet/Applet.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/KeyboardManager$ComponentKeyStrokePair.h>
#include <sun/awt/EmbeddedFrame.h>
#include <jcpp.h>

#undef KEY_TYPED
#undef WHEN_IN_FOCUSED_WINDOW

using $Applet = ::java::applet::Applet;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JMenuBar = ::javax::swing::JMenuBar;
using $KeyStroke = ::javax::swing::KeyStroke;
using $KeyboardManager$ComponentKeyStrokePair = ::javax::swing::KeyboardManager$ComponentKeyStrokePair;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;

namespace javax {
	namespace swing {

$FieldInfo _KeyboardManager_FieldInfo_[] = {
	{"currentManager", "Ljavax/swing/KeyboardManager;", nullptr, $STATIC, $staticField(KeyboardManager, currentManager)},
	{"containerMap", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/awt/Container;Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;>;", 0, $field(KeyboardManager, containerMap)},
	{"componentKeyStrokeMap", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/swing/KeyboardManager$ComponentKeyStrokePair;Ljava/awt/Container;>;", 0, $field(KeyboardManager, componentKeyStrokeMap)},
	{}
};

$MethodInfo _KeyboardManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(KeyboardManager::*)()>(&KeyboardManager::init$))},
	{"fireBinding", "(Ljavax/swing/JComponent;Ljavax/swing/KeyStroke;Ljava/awt/event/KeyEvent;Z)V", nullptr, 0},
	{"fireKeyboardAction", "(Ljava/awt/event/KeyEvent;ZLjava/awt/Container;)Z", nullptr, $PUBLIC},
	{"getCurrentManager", "()Ljavax/swing/KeyboardManager;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyboardManager*(*)()>(&KeyboardManager::getCurrentManager))},
	{"getTopAncestor", "(Ljavax/swing/JComponent;)Ljava/awt/Container;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Container*(*)($JComponent*)>(&KeyboardManager::getTopAncestor))},
	{"registerKeyStroke", "(Ljavax/swing/KeyStroke;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"registerMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC},
	{"registerNewTopContainer", "(Ljava/awt/Container;)Ljava/util/Hashtable;", "(Ljava/awt/Container;)Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;", $PROTECTED},
	{"setCurrentManager", "(Ljavax/swing/KeyboardManager;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(KeyboardManager*)>(&KeyboardManager::setCurrentManager))},
	{"unregisterKeyStroke", "(Ljavax/swing/KeyStroke;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"unregisterMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _KeyboardManager_InnerClassesInfo_[] = {
	{"javax.swing.KeyboardManager$ComponentKeyStrokePair", "javax.swing.KeyboardManager", "ComponentKeyStrokePair", 0},
	{}
};

$ClassInfo _KeyboardManager_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.KeyboardManager",
	"java.lang.Object",
	nullptr,
	_KeyboardManager_FieldInfo_,
	_KeyboardManager_MethodInfo_,
	nullptr,
	nullptr,
	_KeyboardManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.KeyboardManager$ComponentKeyStrokePair"
};

$Object* allocate$KeyboardManager($Class* clazz) {
	return $of($alloc(KeyboardManager));
}

KeyboardManager* KeyboardManager::currentManager = nullptr;

void KeyboardManager::init$() {
	$set(this, containerMap, $new($Hashtable));
	$set(this, componentKeyStrokeMap, $new($Hashtable));
}

KeyboardManager* KeyboardManager::getCurrentManager() {
	$init(KeyboardManager);
	return KeyboardManager::currentManager;
}

void KeyboardManager::setCurrentManager(KeyboardManager* km) {
	$init(KeyboardManager);
	$assignStatic(KeyboardManager::currentManager, km);
}

void KeyboardManager::registerKeyStroke($KeyStroke* k, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Container, topContainer, getTopAncestor(c));
	if (topContainer == nullptr) {
		return;
	}
	$var($Hashtable, keyMap, $cast($Hashtable, $nc(this->containerMap)->get(topContainer)));
	if (keyMap == nullptr) {
		$assign(keyMap, registerNewTopContainer(topContainer));
	}
	$var($Object, tmp, $nc(keyMap)->get(k));
	if (tmp == nullptr) {
		keyMap->put(k, c);
	} else if ($instanceOf($Vector, tmp)) {
		$var($Vector, v, $cast($Vector, tmp));
		if (!$nc(v)->contains(c)) {
			v->addElement(c);
		}
	} else if ($instanceOf($JComponent, tmp)) {
		if (!$equals(tmp, c)) {
			$var($Vector, v, $new($Vector));
			v->addElement($cast($JComponent, tmp));
			v->addElement(c);
			keyMap->put(k, v);
		}
	} else {
		$init($System);
		$nc($System::out)->println("Unexpected condition in registerKeyStroke"_s);
		$Thread::dumpStack();
	}
	$nc(this->componentKeyStrokeMap)->put($$new($KeyboardManager$ComponentKeyStrokePair, this, c, k), topContainer);
	if ($instanceOf($EmbeddedFrame, topContainer)) {
		$nc(($cast($EmbeddedFrame, topContainer)))->registerAccelerator(k);
	}
}

$Container* KeyboardManager::getTopAncestor($JComponent* c) {
	$init(KeyboardManager);
	{
		$var($Container, p, $nc(c)->getParent());
		for (; p != nullptr; $assign(p, $nc(p)->getParent())) {
			if ($instanceOf($Window, p) && $nc(($cast($Window, p)))->isFocusableWindow() || $instanceOf($Applet, p) || $instanceOf($JInternalFrame, p)) {
				return p;
			}
		}
	}
	return nullptr;
}

void KeyboardManager::unregisterKeyStroke($KeyStroke* ks, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($KeyboardManager$ComponentKeyStrokePair, ckp, $new($KeyboardManager$ComponentKeyStrokePair, this, c, ks));
	$var($Container, topContainer, $cast($Container, $nc(this->componentKeyStrokeMap)->get(ckp)));
	if (topContainer == nullptr) {
		return;
	}
	$var($Hashtable, keyMap, $cast($Hashtable, $nc(this->containerMap)->get(topContainer)));
	if (keyMap == nullptr) {
		$Thread::dumpStack();
		return;
	}
	$var($Object, tmp, $nc(keyMap)->get(ks));
	if (tmp == nullptr) {
		$Thread::dumpStack();
		return;
	}
	if ($instanceOf($JComponent, tmp) && $equals(tmp, c)) {
		keyMap->remove(ks);
	} else if ($instanceOf($Vector, tmp)) {
		$var($Vector, v, $cast($Vector, tmp));
		$nc(v)->removeElement(c);
		if (v->isEmpty()) {
			keyMap->remove(ks);
		}
	}
	if (keyMap->isEmpty()) {
		$nc(this->containerMap)->remove(topContainer);
	}
	$nc(this->componentKeyStrokeMap)->remove(ckp);
	if ($instanceOf($EmbeddedFrame, topContainer)) {
		$nc(($cast($EmbeddedFrame, topContainer)))->unregisterAccelerator(ks);
	}
}

bool KeyboardManager::fireKeyboardAction($KeyEvent* e, bool pressed, $Container* topAncestor) {
	$useLocalCurrentObjectStackCache();
	if ($nc(e)->isConsumed()) {
		$init($System);
		$nc($System::out)->println("Acquired pre-used event!"_s);
		$Thread::dumpStack();
	}
	$var($KeyStroke, ks, nullptr);
	$var($KeyStroke, ksE, nullptr);
	if ($nc(e)->getID() == $KeyEvent::KEY_TYPED) {
		$assign(ks, $KeyStroke::getKeyStroke(e->getKeyChar()));
	} else {
		int32_t var$0 = e->getKeyCode();
		if (var$0 != e->getExtendedKeyCode()) {
			int32_t var$1 = e->getExtendedKeyCode();
			$assign(ksE, $KeyStroke::getKeyStroke(var$1, e->getModifiers(), !pressed));
		}
		int32_t var$2 = e->getKeyCode();
		$assign(ks, $KeyStroke::getKeyStroke(var$2, e->getModifiers(), !pressed));
	}
	$var($Hashtable, keyMap, $cast($Hashtable, $nc(this->containerMap)->get(topAncestor)));
	if (keyMap != nullptr) {
		$var($Object, tmp, nullptr);
		if (ksE != nullptr) {
			$assign(tmp, keyMap->get(ksE));
			if (tmp != nullptr) {
				$assign(ks, ksE);
			}
		}
		if (tmp == nullptr) {
			$assign(tmp, keyMap->get(ks));
		}
		if (tmp == nullptr) {
		} else if ($instanceOf($JComponent, tmp)) {
			$var($JComponent, c, $cast($JComponent, tmp));
			bool var$3 = $nc(c)->isShowing();
			if (var$3 && c->isEnabled()) {
				fireBinding(c, ks, e, pressed);
			}
		} else if ($instanceOf($Vector, tmp)) {
			$var($Vector, v, $cast($Vector, tmp));
			for (int32_t counter = $nc(v)->size() - 1; counter >= 0; --counter) {
				$var($JComponent, c, $cast($JComponent, v->elementAt(counter)));
				bool var$4 = $nc(c)->isShowing();
				if (var$4 && c->isEnabled()) {
					fireBinding(c, ks, e, pressed);
					if ($nc(e)->isConsumed()) {
						return true;
					}
				}
			}
		} else {
			$init($System);
			$nc($System::out)->println($$str({"Unexpected condition in fireKeyboardAction "_s, tmp}));
			$Thread::dumpStack();
		}
	}
	if ($nc(e)->isConsumed()) {
		return true;
	}
	if (keyMap != nullptr) {
		$load($JMenuBar);
		$var($Vector, v, $cast($Vector, keyMap->get($JMenuBar::class$)));
		if (v != nullptr) {
			$var($Enumeration, iter, v->elements());
			while ($nc(iter)->hasMoreElements()) {
				$var($JMenuBar, mb, $cast($JMenuBar, iter->nextElement()));
				bool var$5 = $nc(mb)->isShowing();
				if (var$5 && mb->isEnabled()) {
					bool extended = (ksE != nullptr) && !ksE->equals(ks);
					if (extended) {
						fireBinding(mb, ksE, e, pressed);
					}
					if (!extended || !$nc(e)->isConsumed()) {
						fireBinding(mb, ks, e, pressed);
					}
					if ($nc(e)->isConsumed()) {
						return true;
					}
				}
			}
		}
	}
	return $nc(e)->isConsumed();
}

void KeyboardManager::fireBinding($JComponent* c, $KeyStroke* ks, $KeyEvent* e, bool pressed) {
	if ($nc(c)->processKeyBinding(ks, e, $JComponent::WHEN_IN_FOCUSED_WINDOW, pressed)) {
		$nc(e)->consume();
	}
}

void KeyboardManager::registerMenuBar($JMenuBar* mb) {
	$useLocalCurrentObjectStackCache();
	$var($Container, top, getTopAncestor(mb));
	if (top == nullptr) {
		return;
	}
	$var($Hashtable, keyMap, $cast($Hashtable, $nc(this->containerMap)->get(top)));
	if (keyMap == nullptr) {
		$assign(keyMap, registerNewTopContainer(top));
	}
	$load($JMenuBar);
	$var($Vector, menuBars, $cast($Vector, $nc(keyMap)->get($JMenuBar::class$)));
	if (menuBars == nullptr) {
		$assign(menuBars, $new($Vector));
		keyMap->put($JMenuBar::class$, menuBars);
	}
	if (!$nc(menuBars)->contains(mb)) {
		menuBars->addElement(mb);
	}
}

void KeyboardManager::unregisterMenuBar($JMenuBar* mb) {
	$useLocalCurrentObjectStackCache();
	$var($Container, topContainer, getTopAncestor(mb));
	if (topContainer == nullptr) {
		return;
	}
	$var($Hashtable, keyMap, $cast($Hashtable, $nc(this->containerMap)->get(topContainer)));
	if (keyMap != nullptr) {
		$load($JMenuBar);
		$var($Vector, v, $cast($Vector, keyMap->get($JMenuBar::class$)));
		if (v != nullptr) {
			v->removeElement(mb);
			if (v->isEmpty()) {
				keyMap->remove($JMenuBar::class$);
				if (keyMap->isEmpty()) {
					$nc(this->containerMap)->remove(topContainer);
				}
			}
		}
	}
}

$Hashtable* KeyboardManager::registerNewTopContainer($Container* topContainer) {
	$var($Hashtable, keyMap, $new($Hashtable));
	$nc(this->containerMap)->put(topContainer, keyMap);
	return keyMap;
}

void clinit$KeyboardManager($Class* class$) {
	$assignStatic(KeyboardManager::currentManager, $new(KeyboardManager));
}

KeyboardManager::KeyboardManager() {
}

$Class* KeyboardManager::load$($String* name, bool initialize) {
	$loadClass(KeyboardManager, name, initialize, &_KeyboardManager_ClassInfo_, clinit$KeyboardManager, allocate$KeyboardManager);
	return class$;
}

$Class* KeyboardManager::class$ = nullptr;

	} // swing
} // javax