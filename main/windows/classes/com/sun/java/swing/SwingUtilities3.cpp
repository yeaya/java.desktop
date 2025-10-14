#include <com/sun/java/swing/SwingUtilities3.h>

#include <java/applet/Applet.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/RepaintManager.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef DELEGATE_REPAINT_MANAGER_KEY
#undef TRUE

using $Applet = ::java::applet::Applet;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;
using $JComponent = ::javax::swing::JComponent;
using $RepaintManager = ::javax::swing::RepaintManager;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {

$FieldInfo _SwingUtilities3_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SwingUtilities3, $assertionsDisabled)},
	{"DELEGATE_REPAINT_MANAGER_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SwingUtilities3, DELEGATE_REPAINT_MANAGER_KEY)},
	{"vsyncedMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/Container;Ljava/lang/Boolean;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SwingUtilities3, vsyncedMap)},
	{}
};

$MethodInfo _SwingUtilities3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SwingUtilities3::*)()>(&SwingUtilities3::init$))},
	{"getDelegateRepaintManager", "(Ljava/awt/Component;)Ljavax/swing/RepaintManager;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$RepaintManager*(*)($Component*)>(&SwingUtilities3::getDelegateRepaintManager))},
	{"isVsyncRequested", "(Ljava/awt/Container;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Container*)>(&SwingUtilities3::isVsyncRequested))},
	{"setDelegateRepaintManager", "(Ljavax/swing/JComponent;Ljavax/swing/RepaintManager;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*,$RepaintManager*)>(&SwingUtilities3::setDelegateRepaintManager))},
	{"setVsyncRequested", "(Ljava/awt/Container;Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Container*,bool)>(&SwingUtilities3::setVsyncRequested))},
	{}
};

$ClassInfo _SwingUtilities3_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.SwingUtilities3",
	"java.lang.Object",
	nullptr,
	_SwingUtilities3_FieldInfo_,
	_SwingUtilities3_MethodInfo_
};

$Object* allocate$SwingUtilities3($Class* clazz) {
	return $of($alloc(SwingUtilities3));
}

bool SwingUtilities3::$assertionsDisabled = false;

$Object* SwingUtilities3::DELEGATE_REPAINT_MANAGER_KEY = nullptr;
$Map* SwingUtilities3::vsyncedMap = nullptr;

void SwingUtilities3::init$() {
}

void SwingUtilities3::setDelegateRepaintManager($JComponent* component, $RepaintManager* repaintManager) {
	$init(SwingUtilities3);
	$init($Boolean);
	$nc($($AppContext::getAppContext()))->put(SwingUtilities3::DELEGATE_REPAINT_MANAGER_KEY, $Boolean::TRUE);
	$nc(component)->putClientProperty(SwingUtilities3::DELEGATE_REPAINT_MANAGER_KEY, repaintManager);
}

void SwingUtilities3::setVsyncRequested($Container* rootContainer, bool isRequested) {
	$init(SwingUtilities3);
	if (!SwingUtilities3::$assertionsDisabled && !(($instanceOf($Applet, rootContainer)) || ($instanceOf($Window, rootContainer)))) {
		$throwNew($AssertionError);
	}
	if (isRequested) {
		$init($Boolean);
		$nc(SwingUtilities3::vsyncedMap)->put(rootContainer, $Boolean::TRUE);
	} else {
		$nc(SwingUtilities3::vsyncedMap)->remove(rootContainer);
	}
}

bool SwingUtilities3::isVsyncRequested($Container* rootContainer) {
	$init(SwingUtilities3);
	if (!SwingUtilities3::$assertionsDisabled && !(($instanceOf($Applet, rootContainer)) || ($instanceOf($Window, rootContainer)))) {
		$throwNew($AssertionError);
	}
	$init($Boolean);
	return $equals($Boolean::TRUE, $nc(SwingUtilities3::vsyncedMap)->get(rootContainer));
}

$RepaintManager* SwingUtilities3::getDelegateRepaintManager($Component* component$renamed) {
	$init(SwingUtilities3);
	$var($Component, component, component$renamed);
	$var($RepaintManager, delegate, nullptr);
	$init($Boolean);
	if ($equals($Boolean::TRUE, $nc($($SunToolkit::targetToAppContext(component)))->get(SwingUtilities3::DELEGATE_REPAINT_MANAGER_KEY))) {
		while (delegate == nullptr && component != nullptr) {
			while (component != nullptr && !($instanceOf($JComponent, component))) {
				$assign(component, component->getParent());
			}
			if (component != nullptr) {
				$assign(delegate, $cast($RepaintManager, $nc(($cast($JComponent, component)))->getClientProperty(SwingUtilities3::DELEGATE_REPAINT_MANAGER_KEY)));
				$assign(component, component->getParent());
			}
		}
	}
	return delegate;
}

void clinit$SwingUtilities3($Class* class$) {
	SwingUtilities3::$assertionsDisabled = !SwingUtilities3::class$->desiredAssertionStatus();
	$assignStatic(SwingUtilities3::DELEGATE_REPAINT_MANAGER_KEY, $new($StringBuilder, "DelegateRepaintManagerKey"_s));
	$assignStatic(SwingUtilities3::vsyncedMap, $Collections::synchronizedMap($$new($WeakHashMap)));
}

SwingUtilities3::SwingUtilities3() {
}

$Class* SwingUtilities3::load$($String* name, bool initialize) {
	$loadClass(SwingUtilities3, name, initialize, &_SwingUtilities3_ClassInfo_, clinit$SwingUtilities3, allocate$SwingUtilities3);
	return class$;
}

$Class* SwingUtilities3::class$ = nullptr;

			} // swing
		} // java
	} // sun
} // com