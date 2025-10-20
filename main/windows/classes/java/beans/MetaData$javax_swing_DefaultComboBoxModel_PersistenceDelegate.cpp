#include <java/beans/MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate.h>

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
#include <javax/swing/DefaultComboBoxModel.h>
#include <jcpp.h>

using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $MetaData = ::java::beans::MetaData;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultComboBoxModel = ::javax::swing::DefaultComboBoxModel;

namespace java {
	namespace beans {

$MethodInfo _MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate::*)()>(&MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate", "java.beans.MetaData", "javax_swing_DefaultComboBoxModel_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate",
	"java.beans.DefaultPersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate));
}

void MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	$var($DefaultComboBoxModel, m, $cast($DefaultComboBoxModel, oldInstance));
	for (int32_t i = 0; i < $nc(m)->getSize(); ++i) {
		invokeStatement(oldInstance, "addElement"_s, $$new($ObjectArray, {$(m->getElementAt(i))}), out);
	}
}

MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate::MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate() {
}

$Class* MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate, name, initialize, &_MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate_ClassInfo_, allocate$MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate);
	return class$;
}

$Class* MetaData$javax_swing_DefaultComboBoxModel_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java