#include <java/beans/MetaData$javax_swing_JFrame_PersistenceDelegate.h>

#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _MetaData$javax_swing_JFrame_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$javax_swing_JFrame_PersistenceDelegate::*)()>(&MetaData$javax_swing_JFrame_PersistenceDelegate::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$javax_swing_JFrame_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$javax_swing_JFrame_PersistenceDelegate", "java.beans.MetaData", "javax_swing_JFrame_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$javax_swing_JFrame_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$javax_swing_JFrame_PersistenceDelegate",
	"java.beans.DefaultPersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$javax_swing_JFrame_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$javax_swing_JFrame_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$javax_swing_JFrame_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$javax_swing_JFrame_PersistenceDelegate));
}

void MetaData$javax_swing_JFrame_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$javax_swing_JFrame_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	$var($Window, oldC, $cast($Window, oldInstance));
	$var($Window, newC, $cast($Window, newInstance));
	bool oldV = $nc(oldC)->isVisible();
	bool newV = $nc(newC)->isVisible();
	if (newV != oldV) {
		bool executeStatements = $nc(out)->executeStatements;
		out->executeStatements = false;
		invokeStatement(oldInstance, "setVisible"_s, $$new($ObjectArray, {$($of($Boolean::valueOf(oldV)))}), out);
		out->executeStatements = executeStatements;
	}
}

MetaData$javax_swing_JFrame_PersistenceDelegate::MetaData$javax_swing_JFrame_PersistenceDelegate() {
}

$Class* MetaData$javax_swing_JFrame_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$javax_swing_JFrame_PersistenceDelegate, name, initialize, &_MetaData$javax_swing_JFrame_PersistenceDelegate_ClassInfo_, allocate$MetaData$javax_swing_JFrame_PersistenceDelegate);
	return class$;
}

$Class* MetaData$javax_swing_JFrame_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java