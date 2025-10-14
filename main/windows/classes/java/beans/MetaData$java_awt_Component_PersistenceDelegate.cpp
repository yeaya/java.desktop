#include <java/beans/MetaData$java_awt_Component_PersistenceDelegate.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $MetaData = ::java::beans::MetaData;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_awt_Component_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_awt_Component_PersistenceDelegate::*)()>(&MetaData$java_awt_Component_PersistenceDelegate::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_awt_Component_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_awt_Component_PersistenceDelegate", "java.beans.MetaData", "java_awt_Component_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_awt_Component_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_awt_Component_PersistenceDelegate",
	"java.beans.DefaultPersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_awt_Component_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_awt_Component_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_awt_Component_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_awt_Component_PersistenceDelegate));
}

void MetaData$java_awt_Component_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$java_awt_Component_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	$var($Component, c, $cast($Component, oldInstance));
	$var($Component, c2, $cast($Component, newInstance));
	if (!($instanceOf($Window, oldInstance))) {
		$var($Object, oldBackground, $nc(c)->isBackgroundSet() ? $of($nc(c)->getBackground()) : ($Object*)nullptr);
		$var($Object, newBackground, $nc(c2)->isBackgroundSet() ? $of($nc(c2)->getBackground()) : ($Object*)nullptr);
		if (!$Objects::equals(oldBackground, newBackground)) {
			invokeStatement(oldInstance, "setBackground"_s, $$new($ObjectArray, {oldBackground}), out);
		}
		$var($Object, oldForeground, c->isForegroundSet() ? $of(c->getForeground()) : ($Object*)nullptr);
		$var($Object, newForeground, c2->isForegroundSet() ? $of(c2->getForeground()) : ($Object*)nullptr);
		if (!$Objects::equals(oldForeground, newForeground)) {
			invokeStatement(oldInstance, "setForeground"_s, $$new($ObjectArray, {oldForeground}), out);
		}
		$var($Object, oldFont, c->isFontSet() ? $of(c->getFont()) : ($Object*)nullptr);
		$var($Object, newFont, c2->isFontSet() ? $of(c2->getFont()) : ($Object*)nullptr);
		if (!$Objects::equals(oldFont, newFont)) {
			invokeStatement(oldInstance, "setFont"_s, $$new($ObjectArray, {oldFont}), out);
		}
	}
	$var($Container, p, $nc(c)->getParent());
	if (p == nullptr || $nc(p)->getLayout() == nullptr) {
		bool locationCorrect = $nc($(c->getLocation()))->equals($($nc(c2)->getLocation()));
		bool sizeCorrect = $nc($(c->getSize()))->equals($($nc(c2)->getSize()));
		if (!locationCorrect && !sizeCorrect) {
			invokeStatement(oldInstance, "setBounds"_s, $$new($ObjectArray, {$($of(c->getBounds()))}), out);
		} else if (!locationCorrect) {
			invokeStatement(oldInstance, "setLocation"_s, $$new($ObjectArray, {$($of(c->getLocation()))}), out);
		} else if (!sizeCorrect) {
			invokeStatement(oldInstance, "setSize"_s, $$new($ObjectArray, {$($of(c->getSize()))}), out);
		}
	}
}

MetaData$java_awt_Component_PersistenceDelegate::MetaData$java_awt_Component_PersistenceDelegate() {
}

$Class* MetaData$java_awt_Component_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_awt_Component_PersistenceDelegate, name, initialize, &_MetaData$java_awt_Component_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_awt_Component_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_awt_Component_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java