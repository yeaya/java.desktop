#include <java/beans/MetaData$java_awt_GridBagLayout_PersistenceDelegate.h>

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
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $DefaultPersistenceDelegate = ::java::beans::DefaultPersistenceDelegate;
using $Encoder = ::java::beans::Encoder;
using $MetaData = ::java::beans::MetaData;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace java {
	namespace beans {

$MethodInfo _MetaData$java_awt_GridBagLayout_PersistenceDelegate_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetaData$java_awt_GridBagLayout_PersistenceDelegate::*)()>(&MetaData$java_awt_GridBagLayout_PersistenceDelegate::init$))},
	{"getHashtable", "(Ljava/lang/Object;)Ljava/util/Hashtable;", "(Ljava/lang/Object;)Ljava/util/Hashtable<**>;", $PRIVATE | $STATIC, $method(static_cast<$Hashtable*(*)(Object$*)>(&MetaData$java_awt_GridBagLayout_PersistenceDelegate::getHashtable))},
	{"initialize", "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", "(Ljava/lang/Class<*>;Ljava/lang/Object;Ljava/lang/Object;Ljava/beans/Encoder;)V", $PROTECTED},
	{"mutatesTo", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetaData$java_awt_GridBagLayout_PersistenceDelegate_InnerClassesInfo_[] = {
	{"java.beans.MetaData$java_awt_GridBagLayout_PersistenceDelegate", "java.beans.MetaData", "java_awt_GridBagLayout_PersistenceDelegate", $STATIC | $FINAL},
	{}
};

$ClassInfo _MetaData$java_awt_GridBagLayout_PersistenceDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.beans.MetaData$java_awt_GridBagLayout_PersistenceDelegate",
	"java.beans.DefaultPersistenceDelegate",
	nullptr,
	nullptr,
	_MetaData$java_awt_GridBagLayout_PersistenceDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_MetaData$java_awt_GridBagLayout_PersistenceDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.beans.MetaData"
};

$Object* allocate$MetaData$java_awt_GridBagLayout_PersistenceDelegate($Class* clazz) {
	return $of($alloc(MetaData$java_awt_GridBagLayout_PersistenceDelegate));
}

void MetaData$java_awt_GridBagLayout_PersistenceDelegate::init$() {
	$DefaultPersistenceDelegate::init$();
}

void MetaData$java_awt_GridBagLayout_PersistenceDelegate::initialize($Class* type, Object$* oldInstance, Object$* newInstance, $Encoder* out) {
	$useLocalCurrentObjectStackCache();
	$DefaultPersistenceDelegate::initialize(type, oldInstance, newInstance, out);
	if ($nc($(getHashtable(newInstance)))->isEmpty()) {
		{
			$var($Iterator, i$, $nc($($nc($(getHashtable(oldInstance)))->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					$var($ObjectArray, args, $new($ObjectArray, {
						$($nc(entry)->getKey()),
						$(entry->getValue())
					}));
					invokeStatement(oldInstance, "addLayoutComponent"_s, args, out);
				}
			}
		}
	}
}

bool MetaData$java_awt_GridBagLayout_PersistenceDelegate::mutatesTo(Object$* oldInstance, Object$* newInstance) {
	bool var$0 = $DefaultPersistenceDelegate::mutatesTo(oldInstance, newInstance);
	return var$0 && $nc($(getHashtable(newInstance)))->isEmpty();
}

$Hashtable* MetaData$java_awt_GridBagLayout_PersistenceDelegate::getHashtable(Object$* instance) {
	$init(MetaData$java_awt_GridBagLayout_PersistenceDelegate);
	return $cast($Hashtable, $MetaData::getPrivateFieldValue(instance, "java.awt.GridBagLayout.comptable"_s));
}

MetaData$java_awt_GridBagLayout_PersistenceDelegate::MetaData$java_awt_GridBagLayout_PersistenceDelegate() {
}

$Class* MetaData$java_awt_GridBagLayout_PersistenceDelegate::load$($String* name, bool initialize) {
	$loadClass(MetaData$java_awt_GridBagLayout_PersistenceDelegate, name, initialize, &_MetaData$java_awt_GridBagLayout_PersistenceDelegate_ClassInfo_, allocate$MetaData$java_awt_GridBagLayout_PersistenceDelegate);
	return class$;
}

$Class* MetaData$java_awt_GridBagLayout_PersistenceDelegate::class$ = nullptr;

	} // beans
} // java