#include <java/beans/MetaData$java_awt_Menu_PersistenceDelegate.h>

#include <java/awt/Menu.h>
#include <java/awt/MenuItem.h>
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
#include <jcpp.h>

using $Menu = ::java::awt::Menu;
using $MenuItem = ::java::awt::MenuItem;
using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $MetaData = ::java::beans::MetaData;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_awt_Menu_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_awt_Menu_PersistenceDelegate::*)()>(&MetaData$java_awt_Menu_PersistenceDelegate::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_awt_Menu_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_awt_Menu_PersistenceDelegate", "java.beans.MetaData", "java_awt_Menu_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_awt_Menu_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_awt_Menu_PersistenceDelegate",
	"java.beans.DefaultPersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_awt_Menu_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_awt_Menu_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_awt_Menu_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_awt_Menu_PersistenceDelegate));
}

void MetaData$java_awt_Menu_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$java_awt_Menu_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	$var($Menu, m, $cast($Menu, oldInstance));
	$var($Menu, n, $cast($Menu, newInstance));
	for (int32_t i = $nc(n)->getItemCount(); i < $nc(m)->getItemCount(); ++i) {
		invokeStatement(oldInstance, "add"_s, $$new($ObjectArray, {$($of(m->getItem(i)))}), out);
	}
}

MetaData$java_awt_Menu_PersistenceDelegate::MetaData$java_awt_Menu_PersistenceDelegate() {
}

$Class* MetaData$java_awt_Menu_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_awt_Menu_PersistenceDelegate, name, initialize, &_MetaData$java_awt_Menu_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_awt_Menu_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_awt_Menu_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java