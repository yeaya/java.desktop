#include <java/beans/MetaData$javax_swing_JTabbedPane_PersistenceDelegate.h>

#include <java/awt/Component.h>
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
#include <javax/swing/Icon.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $MetaData = ::java::beans::MetaData;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JTabbedPane = ::javax::swing::JTabbedPane;

namespace java {
	namespace beans {

$MethodInfo _MetaData$javax_swing_JTabbedPane_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$javax_swing_JTabbedPane_PersistenceDelegate::*)()>(&MetaData$javax_swing_JTabbedPane_PersistenceDelegate::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$javax_swing_JTabbedPane_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$javax_swing_JTabbedPane_PersistenceDelegate", "java.beans.MetaData", "javax_swing_JTabbedPane_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$javax_swing_JTabbedPane_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$javax_swing_JTabbedPane_PersistenceDelegate",
	"java.beans.DefaultPersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$javax_swing_JTabbedPane_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$javax_swing_JTabbedPane_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$javax_swing_JTabbedPane_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$javax_swing_JTabbedPane_PersistenceDelegate));
}

void MetaData$javax_swing_JTabbedPane_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$javax_swing_JTabbedPane_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	$var($JTabbedPane, p, $cast($JTabbedPane, oldInstance));
	for (int32_t i = 0; i < $nc(p)->getTabCount(); ++i) {
		invokeStatement(oldInstance, "addTab"_s, $$new($ObjectArray, {
			$($of(p->getTitleAt(i))),
			$($of(p->getIconAt(i))),
			$($of(p->getComponentAt(i)))
		}), out);
	}
}

MetaData$javax_swing_JTabbedPane_PersistenceDelegate::MetaData$javax_swing_JTabbedPane_PersistenceDelegate() {
}

$Class* MetaData$javax_swing_JTabbedPane_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$javax_swing_JTabbedPane_PersistenceDelegate, name, initialize, &_MetaData$javax_swing_JTabbedPane_PersistenceDelegate_ClassInfo_, allocate$MetaData$javax_swing_JTabbedPane_PersistenceDelegate);
	return class$;
}

$Class* MetaData$javax_swing_JTabbedPane_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java