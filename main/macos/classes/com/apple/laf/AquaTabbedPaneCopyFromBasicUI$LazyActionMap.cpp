#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$LazyActionMap.h>

#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchMethodException.h>
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

using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
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

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneCopyFromBasicUI$LazyActionMap_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(AquaTabbedPaneCopyFromBasicUI$LazyActionMap, $assertionsDisabled)},
	{"_loader", "Ljava/lang/Object;", nullptr, $PRIVATE | $TRANSIENT, $field(AquaTabbedPaneCopyFromBasicUI$LazyActionMap, _loader)},
	{}
};

$MethodInfo _AquaTabbedPaneCopyFromBasicUI$LazyActionMap_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;>;)V", $PRIVATE, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$LazyActionMap::*)($Class*)>(&AquaTabbedPaneCopyFromBasicUI$LazyActionMap::init$))},
	{"allKeys", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/Object;)Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getActionMap", "(Ljava/lang/Class;Ljava/lang/String;)Ljavax/swing/ActionMap;", "(Ljava/lang/Class<Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;>;Ljava/lang/String;)Ljavax/swing/ActionMap;", $STATIC, $method(static_cast<$ActionMap*(*)($Class*,$String*)>(&AquaTabbedPaneCopyFromBasicUI$LazyActionMap::getActionMap))},
	{"installLazyActionMap", "(Ljavax/swing/JComponent;Ljava/lang/Class;Ljava/lang/String;)V", "(Ljavax/swing/JComponent;Ljava/lang/Class<Lcom/apple/laf/AquaTabbedPaneCopyFromBasicUI;>;Ljava/lang/String;)V", $STATIC, $method(static_cast<void(*)($JComponent*,$Class*,$String*)>(&AquaTabbedPaneCopyFromBasicUI$LazyActionMap::installLazyActionMap))},
	{"keys", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"loadIfNecessary", "()V", nullptr, $PRIVATE, $method(static_cast<void(AquaTabbedPaneCopyFromBasicUI$LazyActionMap::*)()>(&AquaTabbedPaneCopyFromBasicUI$LazyActionMap::loadIfNecessary))},
	{"put", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/Object;Ljavax/swing/Action;)V", nullptr, $PUBLIC},
	{"remove", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/ActionMap;)V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaTabbedPaneCopyFromBasicUI$LazyActionMap_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$LazyActionMap", "com.apple.laf.AquaTabbedPaneCopyFromBasicUI", "LazyActionMap", $STATIC},
	{}
};

$ClassInfo _AquaTabbedPaneCopyFromBasicUI$LazyActionMap_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI$LazyActionMap",
	"javax.swing.plaf.ActionMapUIResource",
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$LazyActionMap_FieldInfo_,
	_AquaTabbedPaneCopyFromBasicUI$LazyActionMap_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneCopyFromBasicUI$LazyActionMap_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI"
};

$Object* allocate$AquaTabbedPaneCopyFromBasicUI$LazyActionMap($Class* clazz) {
	return $of($alloc(AquaTabbedPaneCopyFromBasicUI$LazyActionMap));
}

bool AquaTabbedPaneCopyFromBasicUI$LazyActionMap::$assertionsDisabled = false;

void AquaTabbedPaneCopyFromBasicUI$LazyActionMap::installLazyActionMap($JComponent* c, $Class* loaderClass, $String* defaultsKey) {
	$init(AquaTabbedPaneCopyFromBasicUI$LazyActionMap);
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, map, $cast($ActionMap, $UIManager::get(defaultsKey)));
	if (map == nullptr) {
		$assign(map, $new(AquaTabbedPaneCopyFromBasicUI$LazyActionMap, loaderClass));
		$nc($($UIManager::getLookAndFeelDefaults()))->put(defaultsKey, map);
	}
	$SwingUtilities::replaceUIActionMap(c, map);
}

$ActionMap* AquaTabbedPaneCopyFromBasicUI$LazyActionMap::getActionMap($Class* loaderClass, $String* defaultsKey) {
	$init(AquaTabbedPaneCopyFromBasicUI$LazyActionMap);
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, map, $cast($ActionMap, $UIManager::get(defaultsKey)));
	if (map == nullptr) {
		$assign(map, $new(AquaTabbedPaneCopyFromBasicUI$LazyActionMap, loaderClass));
		$nc($($UIManager::getLookAndFeelDefaults()))->put(defaultsKey, map);
	}
	return map;
}

void AquaTabbedPaneCopyFromBasicUI$LazyActionMap::init$($Class* loader) {
	$ActionMapUIResource::init$();
	$set(this, _loader, loader);
}

void AquaTabbedPaneCopyFromBasicUI$LazyActionMap::put($Action* action) {
	$init($Action);
	put($($nc(action)->getValue($Action::NAME)), action);
}

void AquaTabbedPaneCopyFromBasicUI$LazyActionMap::put(Object$* key, $Action* action) {
	loadIfNecessary();
	$ActionMapUIResource::put(key, action);
}

$Action* AquaTabbedPaneCopyFromBasicUI$LazyActionMap::get(Object$* key) {
	loadIfNecessary();
	return $ActionMapUIResource::get(key);
}

void AquaTabbedPaneCopyFromBasicUI$LazyActionMap::remove(Object$* key) {
	loadIfNecessary();
	$ActionMapUIResource::remove(key);
}

void AquaTabbedPaneCopyFromBasicUI$LazyActionMap::clear() {
	loadIfNecessary();
	$ActionMapUIResource::clear();
}

$ObjectArray* AquaTabbedPaneCopyFromBasicUI$LazyActionMap::keys() {
	loadIfNecessary();
	return $ActionMapUIResource::keys();
}

int32_t AquaTabbedPaneCopyFromBasicUI$LazyActionMap::size() {
	loadIfNecessary();
	return $ActionMapUIResource::size();
}

$ObjectArray* AquaTabbedPaneCopyFromBasicUI$LazyActionMap::allKeys() {
	loadIfNecessary();
	return $ActionMapUIResource::allKeys();
}

void AquaTabbedPaneCopyFromBasicUI$LazyActionMap::setParent($ActionMap* map) {
	loadIfNecessary();
	$ActionMapUIResource::setParent(map);
}

void AquaTabbedPaneCopyFromBasicUI$LazyActionMap::loadIfNecessary() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (this->_loader != nullptr) {
		$var($Object, loader, this->_loader);
		$set(this, _loader, nullptr);
		$Class* klass = $cast($Class, loader);
		try {
			$var($Method, method, $nc(klass)->getDeclaredMethod("loadActionMap"_s, $$new($ClassArray, {AquaTabbedPaneCopyFromBasicUI$LazyActionMap::class$})));
			$nc(method)->invoke(klass, $$new($ObjectArray, {$of(this)}));
		} catch ($NoSuchMethodException& nsme) {
			if (!AquaTabbedPaneCopyFromBasicUI$LazyActionMap::$assertionsDisabled) {
				$throwNew($AssertionError, $of($$str({"LazyActionMap unable to load actions "_s, klass})));
			}
		} catch ($IllegalAccessException& iae) {
			if (!AquaTabbedPaneCopyFromBasicUI$LazyActionMap::$assertionsDisabled) {
				$throwNew($AssertionError, $of($$str({"LazyActionMap unable to load actions "_s, iae})));
			}
		} catch ($InvocationTargetException& ite) {
			if (!AquaTabbedPaneCopyFromBasicUI$LazyActionMap::$assertionsDisabled) {
				$throwNew($AssertionError, $of($$str({"LazyActionMap unable to load actions "_s, ite})));
			}
		} catch ($IllegalArgumentException& iae) {
			if (!AquaTabbedPaneCopyFromBasicUI$LazyActionMap::$assertionsDisabled) {
				$throwNew($AssertionError, $of($$str({"LazyActionMap unable to load actions "_s, iae})));
			}
		}
	}
}

void clinit$AquaTabbedPaneCopyFromBasicUI$LazyActionMap($Class* class$) {
	$load($AquaTabbedPaneCopyFromBasicUI);
	AquaTabbedPaneCopyFromBasicUI$LazyActionMap::$assertionsDisabled = !$AquaTabbedPaneCopyFromBasicUI::class$->desiredAssertionStatus();
}

AquaTabbedPaneCopyFromBasicUI$LazyActionMap::AquaTabbedPaneCopyFromBasicUI$LazyActionMap() {
}

$Class* AquaTabbedPaneCopyFromBasicUI$LazyActionMap::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneCopyFromBasicUI$LazyActionMap, name, initialize, &_AquaTabbedPaneCopyFromBasicUI$LazyActionMap_ClassInfo_, clinit$AquaTabbedPaneCopyFromBasicUI$LazyActionMap, allocate$AquaTabbedPaneCopyFromBasicUI$LazyActionMap);
	return class$;
}

$Class* AquaTabbedPaneCopyFromBasicUI$LazyActionMap::class$ = nullptr;

		} // laf
	} // apple
} // com