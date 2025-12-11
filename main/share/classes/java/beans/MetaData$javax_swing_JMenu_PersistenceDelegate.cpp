#include <java/beans/MetaData$javax_swing_JMenu_PersistenceDelegate.h>

#include <java/awt/Component.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <javax/swing/JMenu.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenu = ::javax::swing::JMenu;

namespace java {
	namespace beans {

$MethodInfo _MetaData$javax_swing_JMenu_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$javax_swing_JMenu_PersistenceDelegate::*)()>(&MetaData$javax_swing_JMenu_PersistenceDelegate::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$javax_swing_JMenu_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$javax_swing_JMenu_PersistenceDelegate", "java.beans.MetaData", "javax_swing_JMenu_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$javax_swing_JMenu_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$javax_swing_JMenu_PersistenceDelegate",
	"java.beans.DefaultPersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$javax_swing_JMenu_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$javax_swing_JMenu_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$javax_swing_JMenu_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$javax_swing_JMenu_PersistenceDelegate));
}

void MetaData$javax_swing_JMenu_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$javax_swing_JMenu_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	$var($JMenu, m, $cast($JMenu, oldInstance));
	$var($ComponentArray, c, $nc(m)->getMenuComponents());
	for (int32_t i = 0; i < $nc(c)->length; ++i) {
		invokeStatement(oldInstance, "add"_s, $$new($ObjectArray, {$of(c->get(i))}), out);
	}
}

MetaData$javax_swing_JMenu_PersistenceDelegate::MetaData$javax_swing_JMenu_PersistenceDelegate() {
}

$Class* MetaData$javax_swing_JMenu_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$javax_swing_JMenu_PersistenceDelegate, name, initialize, &_MetaData$javax_swing_JMenu_PersistenceDelegate_ClassInfo_, allocate$MetaData$javax_swing_JMenu_PersistenceDelegate);
	return class$;
}

$Class* MetaData$javax_swing_JMenu_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java