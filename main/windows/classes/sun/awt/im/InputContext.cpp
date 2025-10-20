#include <sun/awt/im/InputContext.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Frame.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/InputMethodEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/WindowEvent.h>
#include <java/awt/event/WindowListener.h>
#include <java/awt/im/InputContext.h>
#include <java/awt/im/InputMethodRequests.h>
#include <java/awt/im/spi/InputMethod.h>
#include <java/awt/im/spi/InputMethodContext.h>
#include <java/awt/im/spi/InputMethodDescriptor.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Character$Subset.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/LinkageError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/text/MessageFormat.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/prefs/BackingStoreException.h>
#include <java/util/prefs/Preferences.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/im/InputContext$1.h>
#include <sun/awt/im/InputContext$2.h>
#include <sun/awt/im/InputMethodAdapter.h>
#include <sun/awt/im/InputMethodContext.h>
#include <sun/awt/im/InputMethodLocator.h>
#include <sun/awt/im/InputMethodManager.h>
#include <sun/awt/im/InputMethodWindow.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef CONFIG
#undef FINE
#undef FOCUS_GAINED
#undef FOCUS_LOST
#undef ICONIFIED
#undef KEY_PRESSED
#undef VK_UNDEFINED

using $Character$SubsetArray = $Array<::java::lang::Character$Subset>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $Frame = ::java::awt::Frame;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $InputMethodEvent = ::java::awt::event::InputMethodEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $WindowListener = ::java::awt::event::WindowListener;
using $InputContext = ::java::awt::im::InputContext;
using $InputMethodRequests = ::java::awt::im::InputMethodRequests;
using $InputMethod = ::java::awt::im::spi::InputMethod;
using $1InputMethodContext = ::java::awt::im::spi::InputMethodContext;
using $InputMethodDescriptor = ::java::awt::im::spi::InputMethodDescriptor;
using $Boolean = ::java::lang::Boolean;
using $Character$Subset = ::java::lang::Character$Subset;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Format = ::java::text::Format;
using $MessageFormat = ::java::text::MessageFormat;
using $Collection = ::java::util::Collection;
using $EventObject = ::java::util::EventObject;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $BackingStoreException = ::java::util::prefs::BackingStoreException;
using $Preferences = ::java::util::prefs::Preferences;
using $SunToolkit = ::sun::awt::SunToolkit;
using $InputContext$1 = ::sun::awt::im::InputContext$1;
using $InputContext$2 = ::sun::awt::im::InputContext$2;
using $InputMethodAdapter = ::sun::awt::im::InputMethodAdapter;
using $InputMethodContext = ::sun::awt::im::InputMethodContext;
using $InputMethodLocator = ::sun::awt::im::InputMethodLocator;
using $InputMethodManager = ::sun::awt::im::InputMethodManager;
using $InputMethodWindow = ::sun::awt::im::InputMethodWindow;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _InputContext_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputContext, log)},
	{"inputMethodLocator", "Lsun/awt/im/InputMethodLocator;", nullptr, $PRIVATE, $field(InputContext, inputMethodLocator)},
	{"inputMethod", "Ljava/awt/im/spi/InputMethod;", nullptr, $PRIVATE, $field(InputContext, inputMethod)},
	{"inputMethodCreationFailed", "Z", nullptr, $PRIVATE, $field(InputContext, inputMethodCreationFailed)},
	{"usedInputMethods", "Ljava/util/HashMap;", "Ljava/util/HashMap<Lsun/awt/im/InputMethodLocator;Ljava/awt/im/spi/InputMethod;>;", $PRIVATE, $field(InputContext, usedInputMethods)},
	{"currentClientComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(InputContext, currentClientComponent)},
	{"awtFocussedComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(InputContext, awtFocussedComponent)},
	{"isInputMethodActive", "Z", nullptr, $PRIVATE, $field(InputContext, isInputMethodActive)},
	{"characterSubsets", "[Ljava/lang/Character$Subset;", nullptr, $PRIVATE, $field(InputContext, characterSubsets)},
	{"compositionAreaHidden", "Z", nullptr, $PRIVATE, $field(InputContext, compositionAreaHidden)},
	{"inputMethodWindowContext", "Lsun/awt/im/InputContext;", nullptr, $PRIVATE | $STATIC, $staticField(InputContext, inputMethodWindowContext)},
	{"previousInputMethod", "Ljava/awt/im/spi/InputMethod;", nullptr, $PRIVATE | $STATIC, $staticField(InputContext, previousInputMethod)},
	{"clientWindowNotificationEnabled", "Z", nullptr, $PRIVATE, $field(InputContext, clientWindowNotificationEnabled)},
	{"clientWindowListened", "Ljava/awt/Window;", nullptr, $PRIVATE, $field(InputContext, clientWindowListened)},
	{"clientWindowLocation", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(InputContext, clientWindowLocation)},
	{"perInputMethodState", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/awt/im/spi/InputMethod;Ljava/lang/Boolean;>;", $PRIVATE, $field(InputContext, perInputMethodState)},
	{"inputMethodSelectionKey", "Ljava/awt/AWTKeyStroke;", nullptr, $PRIVATE | $STATIC, $staticField(InputContext, inputMethodSelectionKey)},
	{"inputMethodSelectionKeyInitialized", "Z", nullptr, $PRIVATE | $STATIC, $staticField(InputContext, inputMethodSelectionKeyInitialized)},
	{"inputMethodSelectionKeyPath", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputContext, inputMethodSelectionKeyPath)},
	{"inputMethodSelectionKeyCodeName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputContext, inputMethodSelectionKeyCodeName)},
	{"inputMethodSelectionKeyModifiersName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InputContext, inputMethodSelectionKeyModifiersName)},
	{}
};

$MethodInfo _InputContext_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(InputContext::*)()>(&InputContext::init$))},
	{"activateInputMethod", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(InputContext::*)(bool)>(&InputContext::activateInputMethod))},
	{"addClientWindowListeners", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(InputContext::*)()>(&InputContext::addClientWindowListeners))},
	{"addedClientWindowListeners", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(InputContext::*)()>(&InputContext::addedClientWindowListeners))},
	{"changeInputMethod", "(Lsun/awt/im/InputMethodLocator;)V", nullptr, $SYNCHRONIZED},
	{"checkInputMethodSelectionKey", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(InputContext::*)($KeyEvent*)>(&InputContext::checkInputMethodSelectionKey))},
	{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentMoved", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentResized", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"componentShown", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC},
	{"deactivateInputMethod", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(InputContext::*)(bool)>(&InputContext::deactivateInputMethod))},
	{"disableNativeIM", "()V", nullptr, $PUBLIC},
	{"dispatchEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"enableClientWindowNotification", "(Ljava/awt/im/spi/InputMethod;Z)V", nullptr, $SYNCHRONIZED},
	{"endComposition", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"focusGained", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(InputContext::*)($Component*)>(&InputContext::focusGained))},
	{"focusLost", "(Ljava/awt/Component;Z)V", nullptr, $PRIVATE, $method(static_cast<void(InputContext::*)($Component*,bool)>(&InputContext::focusLost))},
	{"getClientComponent", "()Ljava/awt/Component;", nullptr, 0},
	{"getComponentWindow", "(Ljava/awt/Component;)Ljava/awt/Window;", nullptr, $STATIC, $method(static_cast<$Window*(*)($Component*)>(&InputContext::getComponentWindow))},
	{"getInputMethod", "()Ljava/awt/im/spi/InputMethod;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$InputMethod*(InputContext::*)()>(&InputContext::getInputMethod))},
	{"getInputMethodControlObject", "()Ljava/lang/Object;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getInputMethodInfo", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInputMethodInstance", "()Ljava/awt/im/spi/InputMethod;", nullptr, $PRIVATE, $method(static_cast<$InputMethod*(InputContext::*)()>(&InputContext::getInputMethodInstance))},
	{"getInputMethodLocator", "()Lsun/awt/im/InputMethodLocator;", nullptr, 0},
	{"getInputMethodSelectionKeyStroke", "(Ljava/util/prefs/Preferences;)Ljava/awt/AWTKeyStroke;", nullptr, $PRIVATE, $method(static_cast<$AWTKeyStroke*(InputContext::*)($Preferences*)>(&InputContext::getInputMethodSelectionKeyStroke))},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC},
	{"initializeInputMethodSelectionKey", "()V", nullptr, $PRIVATE, $method(static_cast<void(InputContext::*)()>(&InputContext::initializeInputMethodSelectionKey))},
	{"isCompositionEnabled", "()Z", nullptr, $PUBLIC},
	{"logCreationFailed", "(Ljava/lang/Throwable;)V", nullptr, $PRIVATE, $method(static_cast<void(InputContext::*)($Throwable*)>(&InputContext::logCreationFailed))},
	{"notifyClientWindowChange", "(Ljava/awt/Window;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(InputContext::*)($Window*)>(&InputContext::notifyClientWindowChange))},
	{"reconvert", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeClientWindowListeners", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(InputContext::*)()>(&InputContext::removeClientWindowListeners))},
	{"removeNotify", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"selectInputMethod", "(Ljava/util/Locale;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setCharacterSubsets", "([Ljava/lang/Character$Subset;)V", nullptr, $PUBLIC},
	{"setCompositionEnabled", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosed", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeiconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowOpened", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _InputContext_InnerClassesInfo_[] = {
	{"sun.awt.im.InputContext$2", nullptr, nullptr, 0},
	{"sun.awt.im.InputContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InputContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.im.InputContext",
	"java.awt.im.InputContext",
	"java.awt.event.ComponentListener,java.awt.event.WindowListener",
	_InputContext_FieldInfo_,
	_InputContext_MethodInfo_,
	nullptr,
	nullptr,
	_InputContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.im.InputContext$2,sun.awt.im.InputContext$1"
};

$Object* allocate$InputContext($Class* clazz) {
	return $of($alloc(InputContext));
}

int32_t InputContext::hashCode() {
	 return this->$InputContext::hashCode();
}

bool InputContext::equals(Object$* arg0) {
	 return this->$InputContext::equals(arg0);
}

$Object* InputContext::clone() {
	 return this->$InputContext::clone();
}

$String* InputContext::toString() {
	 return this->$InputContext::toString();
}

void InputContext::finalize() {
	this->$InputContext::finalize();
}

$PlatformLogger* InputContext::log = nullptr;
InputContext* InputContext::inputMethodWindowContext = nullptr;
$InputMethod* InputContext::previousInputMethod = nullptr;
$AWTKeyStroke* InputContext::inputMethodSelectionKey = nullptr;
bool InputContext::inputMethodSelectionKeyInitialized = false;
$String* InputContext::inputMethodSelectionKeyPath = nullptr;
$String* InputContext::inputMethodSelectionKeyCodeName = nullptr;
$String* InputContext::inputMethodSelectionKeyModifiersName = nullptr;

void InputContext::init$() {
	$useLocalCurrentObjectStackCache();
	$InputContext::init$();
	$set(this, characterSubsets, nullptr);
	this->compositionAreaHidden = false;
	this->clientWindowNotificationEnabled = false;
	$set(this, clientWindowLocation, nullptr);
	$var($InputMethodManager, imm, $InputMethodManager::getInstance());
	$synchronized(InputContext::class$) {
		if (!InputContext::inputMethodSelectionKeyInitialized) {
			InputContext::inputMethodSelectionKeyInitialized = true;
			if ($nc(imm)->hasMultipleInputMethods()) {
				initializeInputMethodSelectionKey();
			}
		}
	}
	selectInputMethod($($nc(imm)->getDefaultKeyboardLocale()));
}

bool InputContext::selectInputMethod($Locale* locale) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (locale == nullptr) {
			$throwNew($NullPointerException);
		}
		if (this->inputMethod != nullptr) {
			if ($nc(this->inputMethod)->setLocale(locale)) {
				return true;
			}
		} else if (this->inputMethodLocator != nullptr) {
			if ($nc(this->inputMethodLocator)->isLocaleAvailable(locale)) {
				$set(this, inputMethodLocator, $nc(this->inputMethodLocator)->deriveLocator(locale));
				return true;
			}
		}
		$var($InputMethodLocator, newLocator, $nc($($InputMethodManager::getInstance()))->findInputMethod(locale));
		if (newLocator != nullptr) {
			changeInputMethod(newLocator);
			return true;
		}
		if (this->inputMethod == nullptr && this->inputMethodLocator != nullptr) {
			$set(this, inputMethod, getInputMethod());
			if (this->inputMethod != nullptr) {
				return $nc(this->inputMethod)->setLocale(locale);
			}
		}
		return false;
	}
}

$Locale* InputContext::getLocale() {
	if (this->inputMethod != nullptr) {
		return $nc(this->inputMethod)->getLocale();
	} else if (this->inputMethodLocator != nullptr) {
		return $nc(this->inputMethodLocator)->getLocale();
	} else {
		return nullptr;
	}
}

void InputContext::setCharacterSubsets($Character$SubsetArray* subsets) {
	if (subsets == nullptr) {
		$set(this, characterSubsets, nullptr);
	} else {
		$set(this, characterSubsets, $new($Character$SubsetArray, $nc(subsets)->length));
		$System::arraycopy(subsets, 0, this->characterSubsets, 0, $nc(this->characterSubsets)->length);
	}
	if (this->inputMethod != nullptr) {
		$nc(this->inputMethod)->setCharacterSubsets(subsets);
	}
}

void InputContext::reconvert() {
	$synchronized(this) {
		$var($InputMethod, inputMethod, getInputMethod());
		if (inputMethod == nullptr) {
			$throwNew($UnsupportedOperationException);
		}
		$nc(inputMethod)->reconvert();
	}
}

void InputContext::dispatchEvent($AWTEvent* event) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($InputMethodEvent, event)) {
		return;
	}
	if ($instanceOf($FocusEvent, event)) {
		$var($Component, opposite, $nc(($cast($FocusEvent, event)))->getOppositeComponent());
		bool var$0 = (opposite != nullptr) && ($instanceOf($InputMethodWindow, $(getComponentWindow(opposite))));
		if (var$0 && ($equals(opposite->getInputContext(), this))) {
			return;
		}
	}
	$var($InputMethod, inputMethod, getInputMethod());
	int32_t id = $nc(event)->getID();
	switch (id) {
	case $FocusEvent::FOCUS_GAINED:
		{
			focusGained($cast($Component, $(event->getSource())));
			break;
		}
	case $FocusEvent::FOCUS_LOST:
		{
			$var($Component, var$1, $cast($Component, event->getSource()));
			focusLost(var$1, $nc(($cast($FocusEvent, event)))->isTemporary());
			break;
		}
	case $KeyEvent::KEY_PRESSED:
		{
			if (checkInputMethodSelectionKey($cast($KeyEvent, event))) {
				$nc($($InputMethodManager::getInstance()))->notifyChangeRequestByHotKey($cast($Component, $(event->getSource())));
				break;
			}
		}
	default:
		{
			if ((inputMethod != nullptr) && ($instanceOf($InputEvent, event))) {
				inputMethod->dispatchEvent(event);
			}
		}
	}
}

void InputContext::focusGained($Component* source) {
	$useLocalCurrentObjectStackCache();
	$synchronized($nc(source)->getTreeLock()) {
		$synchronized(this) {
			if ("sun.awt.im.CompositionArea"_s->equals($($of(source)->getClass()->getName()))) {
			} else if ($instanceOf($InputMethodWindow, $(getComponentWindow(source)))) {
			} else {
				if (!source->isDisplayable()) {
					return;
				}
				if (this->inputMethod != nullptr) {
					if (this->currentClientComponent != nullptr && this->currentClientComponent != source) {
						if (!this->isInputMethodActive) {
							activateInputMethod(false);
						}
						endComposition();
						deactivateInputMethod(false);
					}
				}
				$set(this, currentClientComponent, source);
			}
			$set(this, awtFocussedComponent, source);
			if ($instanceOf($InputMethodAdapter, this->inputMethod)) {
				$nc(($cast($InputMethodAdapter, this->inputMethod)))->setAWTFocussedComponent(source);
			}
			if (!this->isInputMethodActive) {
				activateInputMethod(true);
			}
			$var($InputMethodContext, inputContext, $cast($InputMethodContext, this));
			if (!inputContext->isCompositionAreaVisible()) {
				$var($InputMethodRequests, req, source->getInputMethodRequests());
				if (req != nullptr && inputContext->useBelowTheSpotInput()) {
					inputContext->setCompositionAreaUndecorated(true);
				} else {
					inputContext->setCompositionAreaUndecorated(false);
				}
			}
			if (this->compositionAreaHidden == true) {
				$nc(($cast($InputMethodContext, this)))->setCompositionAreaVisible(true);
				this->compositionAreaHidden = false;
			}
		}
	}
}

void InputContext::activateInputMethod(bool updateCompositionArea) {
	$useLocalCurrentObjectStackCache();
	if (InputContext::inputMethodWindowContext != nullptr && InputContext::inputMethodWindowContext != this && $nc(InputContext::inputMethodWindowContext)->inputMethodLocator != nullptr && !$nc($nc(InputContext::inputMethodWindowContext)->inputMethodLocator)->sameInputMethod(this->inputMethodLocator) && $nc(InputContext::inputMethodWindowContext)->inputMethod != nullptr) {
		$nc($nc(InputContext::inputMethodWindowContext)->inputMethod)->hideWindows();
	}
	$assignStatic(InputContext::inputMethodWindowContext, this);
	if (this->inputMethod != nullptr) {
		if (InputContext::previousInputMethod != this->inputMethod && $instanceOf($InputMethodAdapter, InputContext::previousInputMethod)) {
			$nc(($cast($InputMethodAdapter, InputContext::previousInputMethod)))->stopListening();
		}
		$assignStatic(InputContext::previousInputMethod, nullptr);
		$init($PlatformLogger$Level);
		if ($nc(InputContext::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(InputContext::log)->fine($$str({"Current client component "_s, this->currentClientComponent}));
		}
		if ($instanceOf($InputMethodAdapter, this->inputMethod)) {
			$nc(($cast($InputMethodAdapter, this->inputMethod)))->setClientComponent(this->currentClientComponent);
		}
		$nc(this->inputMethod)->activate();
		this->isInputMethodActive = true;
		if (this->perInputMethodState != nullptr) {
			$var($Boolean, state, $cast($Boolean, $nc(this->perInputMethodState)->remove(this->inputMethod)));
			if (state != nullptr) {
				this->clientWindowNotificationEnabled = state->booleanValue();
			}
		}
		if (this->clientWindowNotificationEnabled) {
			if (!addedClientWindowListeners()) {
				addClientWindowListeners();
			}
			$synchronized(this) {
				if (this->clientWindowListened != nullptr) {
					notifyClientWindowChange(this->clientWindowListened);
				}
			}
		} else if (addedClientWindowListeners()) {
			removeClientWindowListeners();
		}
	}
	$nc($($InputMethodManager::getInstance()))->setInputContext(this);
	$nc(($cast($InputMethodContext, this)))->grabCompositionArea(updateCompositionArea);
}

$Window* InputContext::getComponentWindow($Component* component$renamed) {
	$init(InputContext);
	$var($Component, component, component$renamed);
	while (true) {
		if (component == nullptr) {
			return nullptr;
		} else if ($instanceOf($Window, component)) {
			return $cast($Window, component);
		} else {
			$assign(component, $nc(component)->getParent());
		}
	}
}

void InputContext::focusLost($Component* source, bool isTemporary) {
	$synchronized($nc(source)->getTreeLock()) {
		$synchronized(this) {
			if (this->isInputMethodActive) {
				deactivateInputMethod(isTemporary);
			}
			$set(this, awtFocussedComponent, nullptr);
			if ($instanceOf($InputMethodAdapter, this->inputMethod)) {
				$nc(($cast($InputMethodAdapter, this->inputMethod)))->setAWTFocussedComponent(nullptr);
			}
			$var($InputMethodContext, inputContext, $cast($InputMethodContext, this));
			if (inputContext->isCompositionAreaVisible()) {
				inputContext->setCompositionAreaVisible(false);
				this->compositionAreaHidden = true;
			}
		}
	}
}

bool InputContext::checkInputMethodSelectionKey($KeyEvent* event) {
	if (InputContext::inputMethodSelectionKey != nullptr) {
		$var($AWTKeyStroke, aKeyStroke, $AWTKeyStroke::getAWTKeyStrokeForEvent(event));
		return $nc(InputContext::inputMethodSelectionKey)->equals(aKeyStroke);
	} else {
		return false;
	}
}

void InputContext::deactivateInputMethod(bool isTemporary) {
	$nc($($InputMethodManager::getInstance()))->setInputContext(nullptr);
	if (this->inputMethod != nullptr) {
		this->isInputMethodActive = false;
		$nc(this->inputMethod)->deactivate(isTemporary);
		$assignStatic(InputContext::previousInputMethod, this->inputMethod);
	}
}

void InputContext::changeInputMethod($InputMethodLocator* newLocator$renamed) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($InputMethodLocator, newLocator, newLocator$renamed);
		if (this->inputMethodLocator == nullptr) {
			$set(this, inputMethodLocator, newLocator);
			this->inputMethodCreationFailed = false;
			return;
		}
		if ($nc(this->inputMethodLocator)->sameInputMethod(newLocator)) {
			$var($Locale, newLocale, $nc(newLocator)->getLocale());
			if (newLocale != nullptr && $nc(this->inputMethodLocator)->getLocale() != newLocale) {
				if (this->inputMethod != nullptr) {
					$nc(this->inputMethod)->setLocale(newLocale);
				}
				$set(this, inputMethodLocator, newLocator);
			}
			return;
		}
		$var($Locale, savedLocale, $nc(this->inputMethodLocator)->getLocale());
		bool wasInputMethodActive = this->isInputMethodActive;
		bool wasCompositionEnabledSupported = false;
		bool wasCompositionEnabled = false;
		if (this->inputMethod != nullptr) {
			try {
				wasCompositionEnabled = $nc(this->inputMethod)->isCompositionEnabled();
				wasCompositionEnabledSupported = true;
			} catch ($UnsupportedOperationException&) {
				$catch();
			}
			if (this->currentClientComponent != nullptr) {
				if (!this->isInputMethodActive) {
					activateInputMethod(false);
				}
				endComposition();
				deactivateInputMethod(false);
				if ($instanceOf($InputMethodAdapter, this->inputMethod)) {
					$nc(($cast($InputMethodAdapter, this->inputMethod)))->setClientComponent(nullptr);
				}
				if (nullptr == $nc(this->currentClientComponent)->getInputMethodRequests()) {
					wasCompositionEnabledSupported = false;
				}
			}
			$assign(savedLocale, $nc(this->inputMethod)->getLocale());
			if (this->usedInputMethods == nullptr) {
				$set(this, usedInputMethods, $new($HashMap, 5));
			}
			if (this->perInputMethodState == nullptr) {
				$set(this, perInputMethodState, $new($HashMap, 5));
			}
			$nc(this->usedInputMethods)->put($($nc(this->inputMethodLocator)->deriveLocator(nullptr)), this->inputMethod);
			$nc(this->perInputMethodState)->put(this->inputMethod, $($Boolean::valueOf(this->clientWindowNotificationEnabled)));
			enableClientWindowNotification(this->inputMethod, false);
			if (this == InputContext::inputMethodWindowContext) {
				$nc(this->inputMethod)->hideWindows();
				$nc(this->inputMethod)->removeNotify();
				$assignStatic(InputContext::inputMethodWindowContext, nullptr);
			}
			$set(this, inputMethodLocator, nullptr);
			$set(this, inputMethod, nullptr);
			this->inputMethodCreationFailed = false;
		}
		bool var$0 = $nc(newLocator)->getLocale() == nullptr && savedLocale != nullptr;
		if (var$0 && newLocator->isLocaleAvailable(savedLocale)) {
			$assign(newLocator, newLocator->deriveLocator(savedLocale));
		}
		$set(this, inputMethodLocator, newLocator);
		this->inputMethodCreationFailed = false;
		if (wasInputMethodActive) {
			$set(this, inputMethod, getInputMethodInstance());
			if ($instanceOf($InputMethodAdapter, this->inputMethod)) {
				$nc(($cast($InputMethodAdapter, this->inputMethod)))->setAWTFocussedComponent(this->awtFocussedComponent);
			}
			activateInputMethod(true);
		}
		if (wasCompositionEnabledSupported) {
			$set(this, inputMethod, getInputMethod());
			if (this->inputMethod != nullptr) {
				try {
					$nc(this->inputMethod)->setCompositionEnabled(wasCompositionEnabled);
				} catch ($UnsupportedOperationException&) {
					$catch();
				}
			}
		}
	}
}

$Component* InputContext::getClientComponent() {
	return this->currentClientComponent;
}

void InputContext::removeNotify($Component* component) {
	$synchronized(this) {
		if (component == nullptr) {
			$throwNew($NullPointerException);
		}
		if (this->inputMethod == nullptr) {
			if (component == this->currentClientComponent) {
				$set(this, currentClientComponent, nullptr);
			}
			return;
		}
		if (component == this->awtFocussedComponent) {
			focusLost(component, false);
		}
		if (component == this->currentClientComponent) {
			if (this->isInputMethodActive) {
				deactivateInputMethod(false);
			}
			$nc(this->inputMethod)->removeNotify();
			if (this->clientWindowNotificationEnabled && addedClientWindowListeners()) {
				removeClientWindowListeners();
			}
			$set(this, currentClientComponent, nullptr);
			if ($instanceOf($InputMethodAdapter, this->inputMethod)) {
				$nc(($cast($InputMethodAdapter, this->inputMethod)))->setClientComponent(nullptr);
			}
			if ($EventQueue::isDispatchThread()) {
				$nc(($cast($InputMethodContext, this)))->releaseCompositionArea();
			} else {
				$EventQueue::invokeLater($$new($InputContext$1, this));
			}
		}
	}
}

void InputContext::dispose() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->currentClientComponent != nullptr) {
			$throwNew($IllegalStateException, "Can\'t dispose InputContext while it\'s active"_s);
		}
		if (this->inputMethod != nullptr) {
			if (this == InputContext::inputMethodWindowContext) {
				$nc(this->inputMethod)->hideWindows();
				$assignStatic(InputContext::inputMethodWindowContext, nullptr);
			}
			if (this->inputMethod == InputContext::previousInputMethod) {
				$assignStatic(InputContext::previousInputMethod, nullptr);
			}
			if (this->clientWindowNotificationEnabled) {
				if (addedClientWindowListeners()) {
					removeClientWindowListeners();
				}
				this->clientWindowNotificationEnabled = false;
			}
			$nc(this->inputMethod)->dispose();
			if (this->clientWindowNotificationEnabled) {
				enableClientWindowNotification(this->inputMethod, false);
			}
			$set(this, inputMethod, nullptr);
		}
		$set(this, inputMethodLocator, nullptr);
		if (this->usedInputMethods != nullptr && !$nc(this->usedInputMethods)->isEmpty()) {
			$var($Iterator, iterator, $nc($($nc(this->usedInputMethods)->values()))->iterator());
			$set(this, usedInputMethods, nullptr);
			while ($nc(iterator)->hasNext()) {
				$nc(($cast($InputMethod, $(iterator->next()))))->dispose();
			}
		}
		this->clientWindowNotificationEnabled = false;
		$set(this, clientWindowListened, nullptr);
		$set(this, perInputMethodState, nullptr);
	}
}

$Object* InputContext::getInputMethodControlObject() {
	$synchronized(this) {
		$var($InputMethod, inputMethod, getInputMethod());
		if (inputMethod != nullptr) {
			return $of(inputMethod->getControlObject());
		} else {
			return $of(nullptr);
		}
	}
}

void InputContext::setCompositionEnabled(bool enable) {
	$var($InputMethod, inputMethod, getInputMethod());
	if (inputMethod == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	$nc(inputMethod)->setCompositionEnabled(enable);
}

bool InputContext::isCompositionEnabled() {
	$var($InputMethod, inputMethod, getInputMethod());
	if (inputMethod == nullptr) {
		$throwNew($UnsupportedOperationException);
	}
	return $nc(inputMethod)->isCompositionEnabled();
}

$String* InputContext::getInputMethodInfo() {
	$useLocalCurrentObjectStackCache();
	$var($InputMethod, inputMethod, getInputMethod());
	if (inputMethod == nullptr) {
		$throwNew($UnsupportedOperationException, "Null input method"_s);
	}
	$var($String, inputMethodInfo, nullptr);
	if ($instanceOf($InputMethodAdapter, inputMethod)) {
		$assign(inputMethodInfo, $nc(($cast($InputMethodAdapter, inputMethod)))->getNativeInputMethodInfo());
	}
	if (inputMethodInfo == nullptr && this->inputMethodLocator != nullptr) {
		$var($Locale, var$0, getLocale());
		$assign(inputMethodInfo, $nc($($nc(this->inputMethodLocator)->getDescriptor()))->getInputMethodDisplayName(var$0, $($SunToolkit::getStartupLocale())));
	}
	if (inputMethodInfo != nullptr && !inputMethodInfo->isEmpty()) {
		return inputMethodInfo;
	}
	$var($String, var$1, $$str({$($nc($of(inputMethod))->toString()), "-"_s}));
	return $concat(var$1, $($nc($(inputMethod->getLocale()))->toString()));
}

void InputContext::disableNativeIM() {
	$var($InputMethod, inputMethod, getInputMethod());
	if (inputMethod != nullptr && $instanceOf($InputMethodAdapter, inputMethod)) {
		$nc(($cast($InputMethodAdapter, inputMethod)))->stopListening();
	}
}

$InputMethod* InputContext::getInputMethod() {
	$synchronized(this) {
		if (this->inputMethod != nullptr) {
			return this->inputMethod;
		}
		if (this->inputMethodCreationFailed) {
			return nullptr;
		}
		$set(this, inputMethod, getInputMethodInstance());
		return this->inputMethod;
	}
}

$InputMethod* InputContext::getInputMethodInstance() {
	$useLocalCurrentObjectStackCache();
	$var($InputMethodLocator, locator, this->inputMethodLocator);
	if (locator == nullptr) {
		this->inputMethodCreationFailed = true;
		return nullptr;
	}
	$var($Locale, locale, $nc(locator)->getLocale());
	$var($InputMethod, inputMethodInstance, nullptr);
	if (this->usedInputMethods != nullptr) {
		$assign(inputMethodInstance, $cast($InputMethod, $nc(this->usedInputMethods)->remove($(locator->deriveLocator(nullptr)))));
		if (inputMethodInstance != nullptr) {
			if (locale != nullptr) {
				inputMethodInstance->setLocale(locale);
			}
			inputMethodInstance->setCharacterSubsets(this->characterSubsets);
			$var($Boolean, state, $cast($Boolean, $nc(this->perInputMethodState)->remove(inputMethodInstance)));
			if (state != nullptr) {
				enableClientWindowNotification(inputMethodInstance, state->booleanValue());
			}
			$nc(($cast($InputMethodContext, this)))->setInputMethodSupportsBelowTheSpot((!($instanceOf($InputMethodAdapter, inputMethodInstance))) || $nc(($cast($InputMethodAdapter, inputMethodInstance)))->supportsBelowTheSpot());
			return inputMethodInstance;
		}
	}
	try {
		$assign(inputMethodInstance, $nc($(locator->getDescriptor()))->createInputMethod());
		if (locale != nullptr) {
			$nc(inputMethodInstance)->setLocale(locale);
		}
		$nc(inputMethodInstance)->setInputMethodContext($cast($InputMethodContext, this));
		inputMethodInstance->setCharacterSubsets(this->characterSubsets);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		logCreationFailed(e);
		this->inputMethodCreationFailed = true;
		if (inputMethodInstance != nullptr) {
			$assign(inputMethodInstance, nullptr);
		}
	} catch ($LinkageError&) {
		$var($LinkageError, e, $catch());
		logCreationFailed(e);
		this->inputMethodCreationFailed = true;
	}
	$nc(($cast($InputMethodContext, this)))->setInputMethodSupportsBelowTheSpot((!($instanceOf($InputMethodAdapter, inputMethodInstance))) || $nc(($cast($InputMethodAdapter, inputMethodInstance)))->supportsBelowTheSpot());
	return inputMethodInstance;
}

void InputContext::logCreationFailed($Throwable* throwable) {
	$useLocalCurrentObjectStackCache();
	$var($PlatformLogger, logger, $PlatformLogger::getLogger("sun.awt.im"_s));
	$init($PlatformLogger$Level);
	if ($nc(logger)->isLoggable($PlatformLogger$Level::CONFIG)) {
		$var($String, errorTextFormat, $Toolkit::getProperty("AWT.InputMethodCreationFailed"_s, "Could not create {0}. Reason: {1}"_s));
		$var($ObjectArray, args, $new($ObjectArray, {
			$($of($nc($($nc(this->inputMethodLocator)->getDescriptor()))->getInputMethodDisplayName(nullptr, $($Locale::getDefault())))),
			$($of($nc(throwable)->getLocalizedMessage()))
		}));
		$var($MessageFormat, mf, $new($MessageFormat, errorTextFormat));
		logger->config($(mf->format(args)));
	}
}

$InputMethodLocator* InputContext::getInputMethodLocator() {
	if (this->inputMethod != nullptr) {
		return $nc(this->inputMethodLocator)->deriveLocator($($nc(this->inputMethod)->getLocale()));
	}
	return this->inputMethodLocator;
}

void InputContext::endComposition() {
	$synchronized(this) {
		if (this->inputMethod != nullptr) {
			$nc(this->inputMethod)->endComposition();
		}
	}
}

void InputContext::enableClientWindowNotification($InputMethod* requester, bool enable) {
	$synchronized(this) {
		if (requester != this->inputMethod) {
			if (this->perInputMethodState == nullptr) {
				$set(this, perInputMethodState, $new($HashMap, 5));
			}
			$nc(this->perInputMethodState)->put(requester, $($Boolean::valueOf(enable)));
			return;
		}
		if (this->clientWindowNotificationEnabled != enable) {
			$set(this, clientWindowLocation, nullptr);
			this->clientWindowNotificationEnabled = enable;
		}
		if (this->clientWindowNotificationEnabled) {
			if (!addedClientWindowListeners()) {
				addClientWindowListeners();
			}
			if (this->clientWindowListened != nullptr) {
				$set(this, clientWindowLocation, nullptr);
				notifyClientWindowChange(this->clientWindowListened);
			}
		} else if (addedClientWindowListeners()) {
			removeClientWindowListeners();
		}
	}
}

void InputContext::notifyClientWindowChange($Window* window) {
	$synchronized(this) {
		if (this->inputMethod == nullptr) {
			return;
		}
		bool var$0 = !$nc(window)->isVisible();
		if (var$0 || (($instanceOf($Frame, window)) && $nc(($cast($Frame, window)))->getState() == $Frame::ICONIFIED)) {
			$set(this, clientWindowLocation, nullptr);
			$nc(this->inputMethod)->notifyClientWindowChange(nullptr);
			return;
		}
		$var($Rectangle, location, $nc(window)->getBounds());
		if (this->clientWindowLocation == nullptr || !$nc(this->clientWindowLocation)->equals(location)) {
			$set(this, clientWindowLocation, location);
			$nc(this->inputMethod)->notifyClientWindowChange(this->clientWindowLocation);
		}
	}
}

void InputContext::addClientWindowListeners() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($Component, client, getClientComponent());
		if (client == nullptr) {
			return;
		}
		$var($Window, window, getComponentWindow(client));
		if (window == nullptr) {
			return;
		}
		$nc(window)->addComponentListener(this);
		window->addWindowListener(this);
		$set(this, clientWindowListened, window);
	}
}

void InputContext::removeClientWindowListeners() {
	$synchronized(this) {
		$nc(this->clientWindowListened)->removeComponentListener(this);
		$nc(this->clientWindowListened)->removeWindowListener(this);
		$set(this, clientWindowListened, nullptr);
	}
}

bool InputContext::addedClientWindowListeners() {
	return this->clientWindowListened != nullptr;
}

void InputContext::componentResized($ComponentEvent* e) {
	notifyClientWindowChange($cast($Window, $($nc(e)->getComponent())));
}

void InputContext::componentMoved($ComponentEvent* e) {
	notifyClientWindowChange($cast($Window, $($nc(e)->getComponent())));
}

void InputContext::componentShown($ComponentEvent* e) {
	notifyClientWindowChange($cast($Window, $($nc(e)->getComponent())));
}

void InputContext::componentHidden($ComponentEvent* e) {
	notifyClientWindowChange($cast($Window, $($nc(e)->getComponent())));
}

void InputContext::windowOpened($WindowEvent* e) {
}

void InputContext::windowClosing($WindowEvent* e) {
}

void InputContext::windowClosed($WindowEvent* e) {
}

void InputContext::windowIconified($WindowEvent* e) {
	notifyClientWindowChange($($nc(e)->getWindow()));
}

void InputContext::windowDeiconified($WindowEvent* e) {
	notifyClientWindowChange($($nc(e)->getWindow()));
}

void InputContext::windowActivated($WindowEvent* e) {
}

void InputContext::windowDeactivated($WindowEvent* e) {
}

void InputContext::initializeInputMethodSelectionKey() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($InputContext$2, this)));
}

$AWTKeyStroke* InputContext::getInputMethodSelectionKeyStroke($Preferences* root) {
	try {
		if ($nc(root)->nodeExists(InputContext::inputMethodSelectionKeyPath)) {
			$var($Preferences, node, root->node(InputContext::inputMethodSelectionKeyPath));
			int32_t keyCode = $nc(node)->getInt(InputContext::inputMethodSelectionKeyCodeName, $KeyEvent::VK_UNDEFINED);
			if (keyCode != $KeyEvent::VK_UNDEFINED) {
				int32_t modifiers = node->getInt(InputContext::inputMethodSelectionKeyModifiersName, 0);
				return $AWTKeyStroke::getAWTKeyStroke(keyCode, modifiers);
			}
		}
	} catch ($BackingStoreException&) {
		$catch();
	}
	return nullptr;
}

void clinit$InputContext($Class* class$) {
	$assignStatic(InputContext::inputMethodSelectionKeyPath, "/java/awt/im/selectionKey"_s);
	$assignStatic(InputContext::inputMethodSelectionKeyCodeName, "keyCode"_s);
	$assignStatic(InputContext::inputMethodSelectionKeyModifiersName, "modifiers"_s);
	$assignStatic(InputContext::log, $PlatformLogger::getLogger("sun.awt.im.InputContext"_s));
	$assignStatic(InputContext::previousInputMethod, nullptr);
	InputContext::inputMethodSelectionKeyInitialized = false;
}

InputContext::InputContext() {
}

$Class* InputContext::load$($String* name, bool initialize) {
	$loadClass(InputContext, name, initialize, &_InputContext_ClassInfo_, clinit$InputContext, allocate$InputContext);
	return class$;
}

$Class* InputContext::class$ = nullptr;

		} // im
	} // awt
} // sun