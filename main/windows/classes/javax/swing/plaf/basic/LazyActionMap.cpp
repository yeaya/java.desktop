#include <javax/swing/plaf/basic/LazyActionMap.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <jcpp.h>

#undef NAME

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _LazyActionMap_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LazyActionMap, $assertionsDisabled)},
	{"_loader", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(LazyActionMap, _loader)},
	{}
};

$MethodInfo _LazyActionMap_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(LazyActionMap::*)($Class*)>(&LazyActionMap::init$))},
	{"allKeys", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getActionMap", "(Ljava/lang/Class;Ljava/lang/String;)Ljavax/swing/ActionMap;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljavax/swing/ActionMap;", $STATIC, $method(static_cast<$ActionMap*(*)($Class*,$String*)>(&LazyActionMap::getActionMap))},
	{"installLazyActionMap", "(Ljavax/swing/JComponent;Ljava/lang/Class;Ljava/lang/String;)V", "(Ljavax/swing/JComponent;Ljava/lang/Class<*>;Ljava/lang/String;)V", $STATIC, $method(static_cast<void(*)($JComponent*,$Class*,$String*)>(&LazyActionMap::installLazyActionMap))},
	{"keys", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"loadIfNecessary", "()V", nullptr, $PRIVATE, $method(static_cast<void(LazyActionMap::*)()>(&LazyActionMap::loadIfNecessary))},
	{"put", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/Object;Ljavax/swing/Action;)V", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/ActionMap;)V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LazyActionMap_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.LazyActionMap",
	"javax.swing.plaf.ActionMapUIResource",
	nullptr,
	_LazyActionMap_FieldInfo_,
	_LazyActionMap_MethodInfo_
};

$Object* allocate$LazyActionMap($Class* clazz) {
	return $of($alloc(LazyActionMap));
}

bool LazyActionMap::$assertionsDisabled = false;

void LazyActionMap::installLazyActionMap($JComponent* c, $Class* loaderClass, $String* defaultsKey) {
	$init(LazyActionMap);
	$var($ActionMap, map, $cast($ActionMap, $UIManager::get(defaultsKey)));
	if (map == nullptr) {
		$assign(map, $new(LazyActionMap, loaderClass));
		$nc($($UIManager::getLookAndFeelDefaults()))->put(defaultsKey, map);
	}
	$SwingUtilities::replaceUIActionMap(c, map);
}

$ActionMap* LazyActionMap::getActionMap($Class* loaderClass, $String* defaultsKey) {
	$init(LazyActionMap);
	$var($ActionMap, map, $cast($ActionMap, $UIManager::get(defaultsKey)));
	if (map == nullptr) {
		$assign(map, $new(LazyActionMap, loaderClass));
		$nc($($UIManager::getLookAndFeelDefaults()))->put(defaultsKey, map);
	}
	return map;
}

void LazyActionMap::init$($Class* loader) {
	$ActionMapUIResource::init$();
	$set(this, _loader, loader);
}

void LazyActionMap::put($Action* action) {
	$init($Action);
	put($($nc(action)->getValue($Action::NAME)), action);
}

void LazyActionMap::put(Object$* key, $Action* action) {
	loadIfNecessary();
	$ActionMapUIResource::put(key, action);
}

$Action* LazyActionMap::get(Object$* key) {
	loadIfNecessary();
	return $ActionMapUIResource::get(key);
}

void LazyActionMap::remove(Object$* key) {
	loadIfNecessary();
	$ActionMapUIResource::remove(key);
}

void LazyActionMap::clear() {
	loadIfNecessary();
	$ActionMapUIResource::clear();
}

$ObjectArray* LazyActionMap::keys() {
	loadIfNecessary();
	return $ActionMapUIResource::keys();
}

int32_t LazyActionMap::size() {
	loadIfNecessary();
	return $ActionMapUIResource::size();
}

$ObjectArray* LazyActionMap::allKeys() {
	loadIfNecessary();
	return $ActionMapUIResource::allKeys();
}

void LazyActionMap::setParent($ActionMap* map) {
	loadIfNecessary();
	$ActionMapUIResource::setParent(map);
}

void LazyActionMap::loadIfNecessary() {
	$beforeCallerSensitive();
	if (this->_loader != nullptr) {
		$var($Object, loader, this->_loader);
		$set(this, _loader, nullptr);
		$Class* klass = $cast($Class, loader);
		try {
			$var($Method, method, $nc(klass)->getDeclaredMethod("loadActionMap"_s, $$new($ClassArray, {LazyActionMap::class$})));
			$nc(method)->invoke(klass, $$new($ObjectArray, {$of(this)}));
		} catch ($NoSuchMethodException&) {
			$var($NoSuchMethodException, nsme, $catch());
			if (!LazyActionMap::$assertionsDisabled) {
				$throwNew($AssertionError, $of($$str({"LazyActionMap unable to load actions "_s, klass})));
			}
		} catch ($IllegalAccessException&) {
			$var($IllegalAccessException, iae, $catch());
			if (!LazyActionMap::$assertionsDisabled) {
				$throwNew($AssertionError, $of($$str({"LazyActionMap unable to load actions "_s, iae})));
			}
		} catch ($InvocationTargetException&) {
			$var($InvocationTargetException, ite, $catch());
			if (!LazyActionMap::$assertionsDisabled) {
				$throwNew($AssertionError, $of($$str({"LazyActionMap unable to load actions "_s, ite})));
			}
		} catch ($IllegalArgumentException&) {
			$var($IllegalArgumentException, iae, $catch());
			if (!LazyActionMap::$assertionsDisabled) {
				$throwNew($AssertionError, $of($$str({"LazyActionMap unable to load actions "_s, iae})));
			}
		}
	}
}

void clinit$LazyActionMap($Class* class$) {
	LazyActionMap::$assertionsDisabled = !LazyActionMap::class$->desiredAssertionStatus();
}

LazyActionMap::LazyActionMap() {
}

$Class* LazyActionMap::load$($String* name, bool initialize) {
	$loadClass(LazyActionMap, name, initialize, &_LazyActionMap_ClassInfo_, clinit$LazyActionMap, allocate$LazyActionMap);
	return class$;
}

$Class* LazyActionMap::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax