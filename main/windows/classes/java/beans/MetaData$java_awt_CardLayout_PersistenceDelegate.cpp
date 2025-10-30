#include <java/beans/MetaData$java_awt_CardLayout_PersistenceDelegate.h>

#include <java/beans/DefaultPersistenceDelegate.h>
#include <java/beans/Encoder.h>
#include <java/beans/MetaData.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $MetaData = ::java::beans::MetaData;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_awt_CardLayout_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_awt_CardLayout_PersistenceDelegate::*)()>(&MetaData$java_awt_CardLayout_PersistenceDelegate::init$))},
	{"getVector", "(Ljava/lang/Object;)Ljava/util/Vector;", "(Ljava/lang/Object;)Ljava/util/Vector<*>;", $PRIVATE | $STATIC, $method(static_cast<$Vector*(*)(Object$*)>(&MetaData$java_awt_CardLayout_PersistenceDelegate::getVector))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_awt_CardLayout_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_awt_CardLayout_PersistenceDelegate", "java.beans.MetaData", "java_awt_CardLayout_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_awt_CardLayout_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_awt_CardLayout_PersistenceDelegate",
	"java.beans.DefaultPersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_awt_CardLayout_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_awt_CardLayout_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_awt_CardLayout_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_awt_CardLayout_PersistenceDelegate));
}

void MetaData$java_awt_CardLayout_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$java_awt_CardLayout_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	if ($nc($(getVector(newInstance)))->isEmpty()) {
		{
			$var($Iterator, i$, $nc($(getVector(oldInstance)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Object, card, i$->next());
				{
					$var($ObjectArray, args, $new($ObjectArray, {
						$($MetaData::getPrivateFieldValue(card, "java.awt.CardLayout$Card.name"_s)),
						$($MetaData::getPrivateFieldValue(card, "java.awt.CardLayout$Card.comp"_s))
					}));
					invokeStatement(oldInstance, "addLayoutComponent"_s, args, out);
				}
			}
		}
	}
}

bool MetaData$java_awt_CardLayout_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	bool var$0 = $DefaultPersistenceDelegate::mutatesTo(oldInstance, newInstance);
	return var$0 && $nc($(getVector(newInstance)))->isEmpty();
}

$Vector* MetaData$java_awt_CardLayout_PersistenceDelegate::getVector(Object$* instance) {
	$init(MetaData$java_awt_CardLayout_PersistenceDelegate);
	return $cast($Vector, $MetaData::getPrivateFieldValue(instance, "java.awt.CardLayout.vector"_s));
}

MetaData$java_awt_CardLayout_PersistenceDelegate::MetaData$java_awt_CardLayout_PersistenceDelegate() {
}

$Class* MetaData$java_awt_CardLayout_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_awt_CardLayout_PersistenceDelegate, name, initialize, &_MetaData$java_awt_CardLayout_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_awt_CardLayout_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_awt_CardLayout_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java