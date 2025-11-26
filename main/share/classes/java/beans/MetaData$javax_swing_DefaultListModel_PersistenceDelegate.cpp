#include <java/beans/MetaData$javax_swing_DefaultListModel_PersistenceDelegate.h>

#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <javax/swing/DefaultListModel.h>
#include <jcpp.h>

using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $MetaData = ::java::beans::MetaData;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListModel = ::javax::swing::DefaultListModel;

namespace java {
	namespace beans {

$MethodInfo _MetaData$javax_swing_DefaultListModel_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$javax_swing_DefaultListModel_PersistenceDelegate::*)()>(&MetaData$javax_swing_DefaultListModel_PersistenceDelegate::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$javax_swing_DefaultListModel_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$javax_swing_DefaultListModel_PersistenceDelegate", "java.beans.MetaData", "javax_swing_DefaultListModel_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$javax_swing_DefaultListModel_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$javax_swing_DefaultListModel_PersistenceDelegate",
	"java.beans.DefaultPersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$javax_swing_DefaultListModel_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$javax_swing_DefaultListModel_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$javax_swing_DefaultListModel_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$javax_swing_DefaultListModel_PersistenceDelegate));
}

void MetaData$javax_swing_DefaultListModel_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$javax_swing_DefaultListModel_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	$var($DefaultListModel, m, $cast($DefaultListModel, oldInstance));
	$var($DefaultListModel, n, $cast($DefaultListModel, newInstance));
	for (int32_t i = $nc(n)->getSize(); i < $nc(m)->getSize(); ++i) {
		invokeStatement(oldInstance, "add"_s, $$new($ObjectArray, {$(m->getElementAt(i))}), out);
	}
}

MetaData$javax_swing_DefaultListModel_PersistenceDelegate::MetaData$javax_swing_DefaultListModel_PersistenceDelegate() {
}

$Class* MetaData$javax_swing_DefaultListModel_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$javax_swing_DefaultListModel_PersistenceDelegate, name, initialize, &_MetaData$javax_swing_DefaultListModel_PersistenceDelegate_ClassInfo_, allocate$MetaData$javax_swing_DefaultListModel_PersistenceDelegate);
	return class$;
}

$Class* MetaData$javax_swing_DefaultListModel_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java