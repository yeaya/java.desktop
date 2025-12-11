#include <sun/awt/im/ExecutableInputMethodManager.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTException.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Frame.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/InvocationEvent.h>
#include <java/awt/im/spi/InputMethodDescriptor.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Hashtable.h>
#include <java/util/Locale.h>
#include <java/util/Vector.h>
#include <java/util/prefs/BackingStoreException.h>
#include <java/util/prefs/Preferences.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/InputMethodSupport.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/im/ExecutableInputMethodManager$1.h>
#include <sun/awt/im/ExecutableInputMethodManager$1AWTInvocationLock.h>
#include <sun/awt/im/ExecutableInputMethodManager$2.h>
#include <sun/awt/im/ExecutableInputMethodManager$3.h>
#include <sun/awt/im/ExecutableInputMethodManager$4.h>
#include <sun/awt/im/InputContext.h>
#include <sun/awt/im/InputMethodLocator.h>
#include <sun/awt/im/InputMethodManager.h>
#include <sun/awt/im/InputMethodPopupMenu.h>
#include <jcpp.h>

#undef JAPAN
#undef JAPANESE
#undef KOREA
#undef KOREAN

using $LocaleArray = $Array<::java::util::Locale>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTException = ::java::awt::AWTException;
using $Component = ::java::awt::Component;
using $Dialog = ::java::awt::Dialog;
using $EventQueue = ::java::awt::EventQueue;
using $Frame = ::java::awt::Frame;
using $Toolkit = ::java::awt::Toolkit;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $InputMethodDescriptor = ::java::awt::im::spi::InputMethodDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Hashtable = ::java::util::Hashtable;
using $Locale = ::java::util::Locale;
using $Vector = ::java::util::Vector;
using $BackingStoreException = ::java::util::prefs::BackingStoreException;
using $Preferences = ::java::util::prefs::Preferences;
using $AppContext = ::sun::awt::AppContext;
using $InputMethodSupport = ::sun::awt::InputMethodSupport;
using $SunToolkit = ::sun::awt::SunToolkit;
using $ExecutableInputMethodManager$1 = ::sun::awt::im::ExecutableInputMethodManager$1;
using $ExecutableInputMethodManager$1AWTInvocationLock = ::sun::awt::im::ExecutableInputMethodManager$1AWTInvocationLock;
using $ExecutableInputMethodManager$2 = ::sun::awt::im::ExecutableInputMethodManager$2;
using $ExecutableInputMethodManager$3 = ::sun::awt::im::ExecutableInputMethodManager$3;
using $ExecutableInputMethodManager$4 = ::sun::awt::im::ExecutableInputMethodManager$4;
using $InputContext = ::sun::awt::im::InputContext;
using $InputMethodLocator = ::sun::awt::im::InputMethodLocator;
using $InputMethodManager = ::sun::awt::im::InputMethodManager;
using $InputMethodPopupMenu = ::sun::awt::im::InputMethodPopupMenu;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _ExecutableInputMethodManager_FieldInfo_[] = {
	{"currentInputContext", "Lsun/awt/im/InputContext;", nullptr, $PRIVATE, $field(ExecutableInputMethodManager, currentInputContext)},
	{"triggerMenuString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ExecutableInputMethodManager, triggerMenuString)},
	{"selectionMenu", "Lsun/awt/im/InputMethodPopupMenu;", nullptr, $PRIVATE, $field(ExecutableInputMethodManager, selectionMenu)},
	{"selectInputMethodMenuTitle", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(ExecutableInputMethodManager, selectInputMethodMenuTitle)},
	{"hostAdapterLocator", "Lsun/awt/im/InputMethodLocator;", nullptr, $PRIVATE, $field(ExecutableInputMethodManager, hostAdapterLocator)},
	{"javaInputMethodCount", "I", nullptr, $PRIVATE, $field(ExecutableInputMethodManager, javaInputMethodCount)},
	{"javaInputMethodLocatorList", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/awt/im/InputMethodLocator;>;", $PRIVATE, $field(ExecutableInputMethodManager, javaInputMethodLocatorList)},
	{"requestComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(ExecutableInputMethodManager, requestComponent)},
	{"requestInputContext", "Lsun/awt/im/InputContext;", nullptr, $PRIVATE, $field(ExecutableInputMethodManager, requestInputContext)},
	{"preferredIMNode", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExecutableInputMethodManager, preferredIMNode)},
	{"descriptorKey", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExecutableInputMethodManager, descriptorKey)},
	{"preferredLocatorCache", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Lsun/awt/im/InputMethodLocator;>;", $PRIVATE, $field(ExecutableInputMethodManager, preferredLocatorCache)},
	{"userRoot", "Ljava/util/prefs/Preferences;", nullptr, $PRIVATE, $field(ExecutableInputMethodManager, userRoot)},
	{}
};

$MethodInfo _ExecutableInputMethodManager_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ExecutableInputMethodManager::*)()>(&ExecutableInputMethodManager::init$))},
	{"changeInputMethod", "(Ljava/lang/String;)V", nullptr, $SYNCHRONIZED},
	{"createLocalePath", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ExecutableInputMethodManager::*)($Locale*)>(&ExecutableInputMethodManager::createLocalePath))},
	{"findInputMethod", "(Ljava/util/Locale;)Lsun/awt/im/InputMethodLocator;", nullptr, 0},
	{"findPreferredInputMethodNode", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ExecutableInputMethodManager::*)($Locale*)>(&ExecutableInputMethodManager::findPreferredInputMethodNode))},
	{"getAdvertisedLocale", "(Lsun/awt/im/InputMethodLocator;Ljava/util/Locale;)Ljava/util/Locale;", nullptr, $PRIVATE, $method(static_cast<$Locale*(ExecutableInputMethodManager::*)($InputMethodLocator*,$Locale*)>(&ExecutableInputMethodManager::getAdvertisedLocale))},
	{"getCurrentSelection", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ExecutableInputMethodManager::*)()>(&ExecutableInputMethodManager::getCurrentSelection))},
	{"getDefaultKeyboardLocale", "()Ljava/util/Locale;", nullptr, 0},
	{"getPreferredInputMethod", "(Ljava/util/Locale;)Lsun/awt/im/InputMethodLocator;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<$InputMethodLocator*(ExecutableInputMethodManager::*)($Locale*)>(&ExecutableInputMethodManager::getPreferredInputMethod))},
	{"getTriggerMenuString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUserRoot", "()Ljava/util/prefs/Preferences;", nullptr, $PRIVATE, $method(static_cast<$Preferences*(ExecutableInputMethodManager::*)()>(&ExecutableInputMethodManager::getUserRoot))},
	{"hasMultipleInputMethods", "()Z", nullptr, 0},
	{"initialize", "()V", nullptr, $SYNCHRONIZED},
	{"initializeInputMethodLocatorList", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExecutableInputMethodManager::*)()>(&ExecutableInputMethodManager::initializeInputMethodLocatorList))},
	{"notifyChangeRequest", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"notifyChangeRequestByHotKey", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"putPreferredInputMethod", "(Lsun/awt/im/InputMethodLocator;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(ExecutableInputMethodManager::*)($InputMethodLocator*)>(&ExecutableInputMethodManager::putPreferredInputMethod))},
	{"readPreferredInputMethod", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ExecutableInputMethodManager::*)($String*)>(&ExecutableInputMethodManager::readPreferredInputMethod))},
	{"run", "()V", nullptr, $PUBLIC},
	{"setInputContext", "(Lsun/awt/im/InputContext;)V", nullptr, 0},
	{"showInputMethodMenu", "()V", nullptr, $PRIVATE, $method(static_cast<void(ExecutableInputMethodManager::*)()>(&ExecutableInputMethodManager::showInputMethodMenu))},
	{"showInputMethodMenuOnRequesterEDT", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(static_cast<void(ExecutableInputMethodManager::*)($Component*)>(&ExecutableInputMethodManager::showInputMethodMenuOnRequesterEDT)), "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"waitForChangeRequest", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(ExecutableInputMethodManager::*)()>(&ExecutableInputMethodManager::waitForChangeRequest))},
	{"writePreferredInputMethod", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(ExecutableInputMethodManager::*)($String*,$String*)>(&ExecutableInputMethodManager::writePreferredInputMethod))},
	{}
};

$InnerClassInfo _ExecutableInputMethodManager_InnerClassesInfo_[] = {
	{"sun.awt.im.ExecutableInputMethodManager$4", nullptr, nullptr, 0},
	{"sun.awt.im.ExecutableInputMethodManager$3", nullptr, nullptr, 0},
	{"sun.awt.im.ExecutableInputMethodManager$2", nullptr, nullptr, 0},
	{"sun.awt.im.ExecutableInputMethodManager$1AWTInvocationLock", nullptr, "AWTInvocationLock", 0},
	{"sun.awt.im.ExecutableInputMethodManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ExecutableInputMethodManager_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.im.ExecutableInputMethodManager",
	"sun.awt.im.InputMethodManager",
	"java.lang.Runnable",
	_ExecutableInputMethodManager_FieldInfo_,
	_ExecutableInputMethodManager_MethodInfo_,
	nullptr,
	nullptr,
	_ExecutableInputMethodManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.im.ExecutableInputMethodManager$4,sun.awt.im.ExecutableInputMethodManager$3,sun.awt.im.ExecutableInputMethodManager$2,sun.awt.im.ExecutableInputMethodManager$1AWTInvocationLock,sun.awt.im.ExecutableInputMethodManager$1"
};

$Object* allocate$ExecutableInputMethodManager($Class* clazz) {
	return $of($alloc(ExecutableInputMethodManager));
}

int32_t ExecutableInputMethodManager::hashCode() {
	 return this->$InputMethodManager::hashCode();
}

bool ExecutableInputMethodManager::equals(Object$* arg0) {
	 return this->$InputMethodManager::equals(arg0);
}

$Object* ExecutableInputMethodManager::clone() {
	 return this->$InputMethodManager::clone();
}

$String* ExecutableInputMethodManager::toString() {
	 return this->$InputMethodManager::toString();
}

void ExecutableInputMethodManager::finalize() {
	this->$InputMethodManager::finalize();
}

$String* ExecutableInputMethodManager::selectInputMethodMenuTitle = nullptr;
$String* ExecutableInputMethodManager::preferredIMNode = nullptr;
$String* ExecutableInputMethodManager::descriptorKey = nullptr;

void ExecutableInputMethodManager::init$() {
	$useLocalCurrentObjectStackCache();
	$InputMethodManager::init$();
	$set(this, preferredLocatorCache, $new($Hashtable));
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	try {
		if ($instanceOf($InputMethodSupport, toolkit)) {
			$var($InputMethodDescriptor, hostAdapterDescriptor, $nc(($cast($InputMethodSupport, toolkit)))->getInputMethodAdapterDescriptor());
			if (hostAdapterDescriptor != nullptr) {
				$set(this, hostAdapterLocator, $new($InputMethodLocator, hostAdapterDescriptor, nullptr, nullptr));
			}
		}
	} catch ($AWTException& e) {
	}
	$set(this, javaInputMethodLocatorList, $new($Vector));
	initializeInputMethodLocatorList();
}

void ExecutableInputMethodManager::initialize() {
	$synchronized(this) {
		$assignStatic(ExecutableInputMethodManager::selectInputMethodMenuTitle, $Toolkit::getProperty("AWT.InputMethodSelectionMenu"_s, "Select Input Method"_s));
		$set(this, triggerMenuString, ExecutableInputMethodManager::selectInputMethodMenuTitle);
	}
}

void ExecutableInputMethodManager::run() {
	$useLocalCurrentObjectStackCache();
	while (!hasMultipleInputMethods()) {
		try {
			$synchronized(this) {
				$of(this)->wait();
			}
		} catch ($InterruptedException& e) {
		}
	}
	while (true) {
		waitForChangeRequest();
		initializeInputMethodLocatorList();
		try {
			if (this->requestComponent != nullptr) {
				showInputMethodMenuOnRequesterEDT(this->requestComponent);
			} else {
				$EventQueue::invokeAndWait($$new($ExecutableInputMethodManager$1, this));
			}
		} catch ($InterruptedException& ie) {
		} catch ($InvocationTargetException& ite) {
		}
	}
}

void ExecutableInputMethodManager::showInputMethodMenuOnRequesterEDT($Component* requester) {
	$useLocalCurrentObjectStackCache();
	if (requester == nullptr) {
		return;
	}
	{
	}
	$var($Object, lock, $new($ExecutableInputMethodManager$1AWTInvocationLock, this));
	$var($InvocationEvent, event, $new($InvocationEvent, $of(requester), static_cast<$Runnable*>($$new($ExecutableInputMethodManager$2, this)), lock, true));
	$var($AppContext, requesterAppContext, $SunToolkit::targetToAppContext(requester));
	$synchronized(lock) {
		$SunToolkit::postEvent(requesterAppContext, event);
		while (!event->isDispatched()) {
			$of(lock)->wait();
		}
	}
	$var($Throwable, eventThrowable, event->getThrowable());
	if (eventThrowable != nullptr) {
		$throwNew($InvocationTargetException, eventThrowable);
	}
}

void ExecutableInputMethodManager::setInputContext($InputContext* inputContext) {
	if (this->currentInputContext != nullptr && inputContext != nullptr) {
	}
	$set(this, currentInputContext, inputContext);
}

void ExecutableInputMethodManager::notifyChangeRequest($Component* comp) {
	$synchronized(this) {
		if (!($instanceOf($Frame, comp) || $instanceOf($Dialog, comp))) {
			return;
		}
		if (this->requestComponent != nullptr) {
			return;
		}
		$set(this, requestComponent, comp);
		$of(this)->notify();
	}
}

void ExecutableInputMethodManager::notifyChangeRequestByHotKey($Component* comp$renamed) {
	$synchronized(this) {
		$var($Component, comp, comp$renamed);
		while (!($instanceOf($Frame, comp) || $instanceOf($Dialog, comp))) {
			if (comp == nullptr) {
				return;
			}
			$assign(comp, $nc(comp)->getParent());
		}
		notifyChangeRequest(comp);
	}
}

$String* ExecutableInputMethodManager::getTriggerMenuString() {
	return this->triggerMenuString;
}

bool ExecutableInputMethodManager::hasMultipleInputMethods() {
	return ((this->hostAdapterLocator != nullptr) && (this->javaInputMethodCount > 0) || (this->javaInputMethodCount > 1));
}

void ExecutableInputMethodManager::waitForChangeRequest() {
	$synchronized(this) {
		try {
			while (this->requestComponent == nullptr) {
				$of(this)->wait();
			}
		} catch ($InterruptedException& e) {
		}
	}
}

void ExecutableInputMethodManager::initializeInputMethodLocatorList() {
	$beforeCallerSensitive();
	$synchronized(this->javaInputMethodLocatorList) {
		$nc(this->javaInputMethodLocatorList)->clear();
		try {
			$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($ExecutableInputMethodManager$3, this)));
		} catch ($PrivilegedActionException& e) {
			e->printStackTrace();
		}
		this->javaInputMethodCount = $nc(this->javaInputMethodLocatorList)->size();
	}
	if (hasMultipleInputMethods()) {
		if (this->userRoot == nullptr) {
			$set(this, userRoot, getUserRoot());
		}
	} else {
		$set(this, triggerMenuString, nullptr);
	}
}

void ExecutableInputMethodManager::showInputMethodMenu() {
	$useLocalCurrentObjectStackCache();
	if (!hasMultipleInputMethods()) {
		$set(this, requestComponent, nullptr);
		return;
	}
	$set(this, selectionMenu, $InputMethodPopupMenu::getInstance(this->requestComponent, ExecutableInputMethodManager::selectInputMethodMenuTitle));
	$nc(this->selectionMenu)->removeAll();
	$var($String, currentSelection, getCurrentSelection());
	if (this->hostAdapterLocator != nullptr) {
		$nc(this->selectionMenu)->addOneInputMethodToMenu(this->hostAdapterLocator, currentSelection);
		$nc(this->selectionMenu)->addSeparator();
	}
	for (int32_t i = 0; i < $nc(this->javaInputMethodLocatorList)->size(); ++i) {
		$var($InputMethodLocator, locator, $cast($InputMethodLocator, $nc(this->javaInputMethodLocatorList)->get(i)));
		$nc(this->selectionMenu)->addOneInputMethodToMenu(locator, currentSelection);
	}
	$synchronized(this) {
		$nc(this->selectionMenu)->addToComponent(this->requestComponent);
		$set(this, requestInputContext, this->currentInputContext);
		$nc(this->selectionMenu)->show(this->requestComponent, 60, 80);
		$set(this, requestComponent, nullptr);
	}
}

$String* ExecutableInputMethodManager::getCurrentSelection() {
	$useLocalCurrentObjectStackCache();
	$var($InputContext, inputContext, this->currentInputContext);
	if (inputContext != nullptr) {
		$var($InputMethodLocator, locator, inputContext->getInputMethodLocator());
		if (locator != nullptr) {
			return locator->getActionCommandString();
		}
	}
	return nullptr;
}

void ExecutableInputMethodManager::changeInputMethod($String* choice) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($InputMethodLocator, locator, nullptr);
		$var($String, inputMethodName, choice);
		$var($String, localeString, nullptr);
		int32_t index = $nc(choice)->indexOf((int32_t)u'\n');
		if (index != -1) {
			$assign(localeString, choice->substring(index + 1));
			$assign(inputMethodName, choice->substring(0, index));
		}
		if ($nc($($nc(this->hostAdapterLocator)->getActionCommandString()))->equals(inputMethodName)) {
			$assign(locator, this->hostAdapterLocator);
		} else {
			for (int32_t i = 0; i < $nc(this->javaInputMethodLocatorList)->size(); ++i) {
				$var($InputMethodLocator, candidate, $cast($InputMethodLocator, $nc(this->javaInputMethodLocatorList)->get(i)));
				$var($String, name, $nc(candidate)->getActionCommandString());
				if ($nc(name)->equals(inputMethodName)) {
					$assign(locator, candidate);
					break;
				}
			}
		}
		if (locator != nullptr && localeString != nullptr) {
			$var($String, language, ""_s);
			$var($String, country, ""_s);
			$var($String, variant, ""_s);
			int32_t postIndex = localeString->indexOf((int32_t)u'_');
			if (postIndex == -1) {
				$assign(language, localeString);
			} else {
				$assign(language, localeString->substring(0, postIndex));
				int32_t preIndex = postIndex + 1;
				postIndex = localeString->indexOf((int32_t)u'_', preIndex);
				if (postIndex == -1) {
					$assign(country, localeString->substring(preIndex));
				} else {
					$assign(country, localeString->substring(preIndex, postIndex));
					$assign(variant, localeString->substring(postIndex + 1));
				}
			}
			$var($Locale, locale, $new($Locale, language, country, variant));
			$assign(locator, locator->deriveLocator(locale));
		}
		if (locator == nullptr) {
			return;
		}
		if (this->requestInputContext != nullptr) {
			$nc(this->requestInputContext)->changeInputMethod(locator);
			$set(this, requestInputContext, nullptr);
			putPreferredInputMethod(locator);
		}
	}
}

$InputMethodLocator* ExecutableInputMethodManager::findInputMethod($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($InputMethodLocator, locator, getPreferredInputMethod(locale));
	if (locator != nullptr) {
		return locator;
	}
	if (this->hostAdapterLocator != nullptr && $nc(this->hostAdapterLocator)->isLocaleAvailable(locale)) {
		return $nc(this->hostAdapterLocator)->deriveLocator(locale);
	}
	initializeInputMethodLocatorList();
	for (int32_t i = 0; i < $nc(this->javaInputMethodLocatorList)->size(); ++i) {
		$var($InputMethodLocator, candidate, $cast($InputMethodLocator, $nc(this->javaInputMethodLocatorList)->get(i)));
		if ($nc(candidate)->isLocaleAvailable(locale)) {
			return candidate->deriveLocator(locale);
		}
	}
	return nullptr;
}

$Locale* ExecutableInputMethodManager::getDefaultKeyboardLocale() {
	$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
	if ($instanceOf($InputMethodSupport, toolkit)) {
		return $nc(($cast($InputMethodSupport, toolkit)))->getDefaultKeyboardLocale();
	} else {
		return $Locale::getDefault();
	}
}

$InputMethodLocator* ExecutableInputMethodManager::getPreferredInputMethod($Locale* locale) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($InputMethodLocator, preferredLocator, nullptr);
		if (!hasMultipleInputMethods()) {
			return nullptr;
		}
		$assign(preferredLocator, $cast($InputMethodLocator, $nc(this->preferredLocatorCache)->get($($nc($($nc(locale)->toString()))->intern()))));
		if (preferredLocator != nullptr) {
			return preferredLocator;
		}
		$var($String, nodePath, findPreferredInputMethodNode(locale));
		$var($String, descriptorName, readPreferredInputMethod(nodePath));
		$var($Locale, advertised, nullptr);
		if (descriptorName != nullptr) {
			if (this->hostAdapterLocator != nullptr && $nc($($nc($of($($nc(this->hostAdapterLocator)->getDescriptor())))->getClass()->getName()))->equals(descriptorName)) {
				$assign(advertised, getAdvertisedLocale(this->hostAdapterLocator, locale));
				if (advertised != nullptr) {
					$assign(preferredLocator, $nc(this->hostAdapterLocator)->deriveLocator(advertised));
					$nc(this->preferredLocatorCache)->put($($nc($($nc(locale)->toString()))->intern()), preferredLocator);
				}
				return preferredLocator;
			}
			for (int32_t i = 0; i < $nc(this->javaInputMethodLocatorList)->size(); ++i) {
				$var($InputMethodLocator, locator, $cast($InputMethodLocator, $nc(this->javaInputMethodLocatorList)->get(i)));
				$var($InputMethodDescriptor, descriptor, $nc(locator)->getDescriptor());
				if ($nc($($nc($of(descriptor))->getClass()->getName()))->equals(descriptorName)) {
					$assign(advertised, getAdvertisedLocale(locator, locale));
					if (advertised != nullptr) {
						$assign(preferredLocator, locator->deriveLocator(advertised));
						$nc(this->preferredLocatorCache)->put($($nc($($nc(locale)->toString()))->intern()), preferredLocator);
					}
					return preferredLocator;
				}
			}
			writePreferredInputMethod(nodePath, nullptr);
		}
		return nullptr;
	}
}

$String* ExecutableInputMethodManager::findPreferredInputMethodNode($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	if (this->userRoot == nullptr) {
		return nullptr;
	}
	$var($String, nodePath, $str({ExecutableInputMethodManager::preferredIMNode, "/"_s, $(createLocalePath(locale))}));
	while (!$nc(nodePath)->equals(ExecutableInputMethodManager::preferredIMNode)) {
		try {
			if ($nc(this->userRoot)->nodeExists(nodePath)) {
				if (readPreferredInputMethod(nodePath) != nullptr) {
					return nodePath;
				}
			}
		} catch ($BackingStoreException& bse) {
		}
		$assign(nodePath, nodePath->substring(0, nodePath->lastIndexOf((int32_t)u'/')));
	}
	return nullptr;
}

$String* ExecutableInputMethodManager::readPreferredInputMethod($String* nodePath) {
	if ((this->userRoot == nullptr) || (nodePath == nullptr)) {
		return nullptr;
	}
	return $nc($($nc(this->userRoot)->node(nodePath)))->get(ExecutableInputMethodManager::descriptorKey, nullptr);
}

void ExecutableInputMethodManager::putPreferredInputMethod($InputMethodLocator* locator) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($InputMethodDescriptor, descriptor, $nc(locator)->getDescriptor());
		$var($Locale, preferredLocale, locator->getLocale());
		if (preferredLocale == nullptr) {
			try {
				$var($LocaleArray, availableLocales, $nc(descriptor)->getAvailableLocales());
				if ($nc(availableLocales)->length == 1) {
					$assign(preferredLocale, availableLocales->get(0));
				} else {
					return;
				}
			} catch ($AWTException& ae) {
				return;
			}
		}
		$init($Locale);
		if ($nc(preferredLocale)->equals($Locale::JAPAN)) {
			$assign(preferredLocale, $Locale::JAPANESE);
		}
		if ($nc(preferredLocale)->equals($Locale::KOREA)) {
			$assign(preferredLocale, $Locale::KOREAN);
		}
		if ($nc(preferredLocale)->equals($$new($Locale, "th"_s, "TH"_s))) {
			$assign(preferredLocale, $new($Locale, "th"_s));
		}
		$var($String, path, $str({ExecutableInputMethodManager::preferredIMNode, "/"_s, $(createLocalePath(preferredLocale))}));
		writePreferredInputMethod(path, $($nc($of(descriptor))->getClass()->getName()));
		$var($Object, var$0, $of($nc($($nc(preferredLocale)->toString()))->intern()));
		$nc(this->preferredLocatorCache)->put(var$0, $(locator->deriveLocator(preferredLocale)));
		return;
	}
}

$String* ExecutableInputMethodManager::createLocalePath($Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($String, language, $nc(locale)->getLanguage());
	$var($String, country, locale->getCountry());
	$var($String, variant, locale->getVariant());
	$var($String, localePath, nullptr);
	if (!$nc(variant)->isEmpty()) {
		$assign(localePath, $str({"_"_s, language, "/_"_s, country, "/_"_s, variant}));
	} else if (!$nc(country)->isEmpty()) {
		$assign(localePath, $str({"_"_s, language, "/_"_s, country}));
	} else {
		$assign(localePath, $str({"_"_s, language}));
	}
	return localePath;
}

void ExecutableInputMethodManager::writePreferredInputMethod($String* path, $String* descriptorName) {
	if (this->userRoot != nullptr) {
		$var($Preferences, node, $nc(this->userRoot)->node(path));
		if (descriptorName != nullptr) {
			$nc(node)->put(ExecutableInputMethodManager::descriptorKey, descriptorName);
		} else {
			$nc(node)->remove(ExecutableInputMethodManager::descriptorKey);
		}
	}
}

$Preferences* ExecutableInputMethodManager::getUserRoot() {
	$beforeCallerSensitive();
	return $cast($Preferences, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ExecutableInputMethodManager$4, this))));
}

$Locale* ExecutableInputMethodManager::getAdvertisedLocale($InputMethodLocator* locator, $Locale* locale) {
	$useLocalCurrentObjectStackCache();
	$var($Locale, advertised, nullptr);
	if ($nc(locator)->isLocaleAvailable(locale)) {
		$assign(advertised, locale);
	} else if ($nc($($nc(locale)->getLanguage()))->equals("ja"_s)) {
		$init($Locale);
		if (locator->isLocaleAvailable($Locale::JAPAN)) {
			$assign(advertised, $Locale::JAPAN);
		} else {
			if (locator->isLocaleAvailable($Locale::JAPANESE)) {
				$assign(advertised, $Locale::JAPANESE);
			}
		}
	} else if ($nc($(locale->getLanguage()))->equals("ko"_s)) {
		$init($Locale);
		if (locator->isLocaleAvailable($Locale::KOREA)) {
			$assign(advertised, $Locale::KOREA);
		} else {
			if (locator->isLocaleAvailable($Locale::KOREAN)) {
				$assign(advertised, $Locale::KOREAN);
			}
		}
	} else if ($nc($(locale->getLanguage()))->equals("th"_s)) {
		if (locator->isLocaleAvailable($$new($Locale, "th"_s, "TH"_s))) {
			$assign(advertised, $new($Locale, "th"_s, "TH"_s));
		} else if (locator->isLocaleAvailable($$new($Locale, "th"_s))) {
			$assign(advertised, $new($Locale, "th"_s));
		}
	}
	return advertised;
}

ExecutableInputMethodManager::ExecutableInputMethodManager() {
}

void clinit$ExecutableInputMethodManager($Class* class$) {
	$assignStatic(ExecutableInputMethodManager::preferredIMNode, "/sun/awt/im/preferredInputMethod"_s);
	$assignStatic(ExecutableInputMethodManager::descriptorKey, "descriptor"_s);
}

$Class* ExecutableInputMethodManager::load$($String* name, bool initialize) {
	$loadClass(ExecutableInputMethodManager, name, initialize, &_ExecutableInputMethodManager_ClassInfo_, clinit$ExecutableInputMethodManager, allocate$ExecutableInputMethodManager);
	return class$;
}

$Class* ExecutableInputMethodManager::class$ = nullptr;

		} // im
	} // awt
} // sun