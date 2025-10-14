#include <com/sun/beans/util/Cache$Kind$3.h>

#include <com/sun/beans/util/Cache$Kind$Strong.h>
#include <com/sun/beans/util/Cache$Kind$Weak.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache$Ref.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $Cache$Kind$Strong = ::com::sun::beans::util::Cache$Kind$Strong;
using $Cache$Kind$Weak = ::com::sun::beans::util::Cache$Kind$Weak;
using $Cache$Ref = ::com::sun::beans::util::Cache$Ref;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

$MethodInfo _Cache$Kind$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Cache$Kind$3::*)($String*,int32_t)>(&Cache$Kind$3::init$))},
	{"create", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)Lcom/sun/beans/util/Cache$Ref;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;TT;Ljava/lang/ref/ReferenceQueue<-TT;>;)Lcom/sun/beans/util/Cache$Ref<TT;>;", 0},
	{}
};

$EnclosingMethodInfo _Cache$Kind$3_EnclosingMethodInfo_ = {
	"com.sun.beans.util.Cache$Kind",
	nullptr,
	nullptr
};

$InnerClassInfo _Cache$Kind$3_InnerClassesInfo_[] = {
	{"com.sun.beans.util.Cache$Kind", "com.sun.beans.util.Cache", "Kind", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.beans.util.Cache$Kind$3", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Cache$Kind$3_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.beans.util.Cache$Kind$3",
	"com.sun.beans.util.Cache$Kind",
	nullptr,
	nullptr,
	_Cache$Kind$3_MethodInfo_,
	nullptr,
	&_Cache$Kind$3_EnclosingMethodInfo_,
	_Cache$Kind$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.beans.util.Cache"
};

$Object* allocate$Cache$Kind$3($Class* clazz) {
	return $of($alloc(Cache$Kind$3));
}

void Cache$Kind$3::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Cache$Kind::init$($enum$name, $enum$ordinal);
}

$Cache$Ref* Cache$Kind$3::create(Object$* owner, Object$* referent, $ReferenceQueue* queue) {
	return (referent == nullptr) ? static_cast<$Cache$Ref*>($new($Cache$Kind$Strong, owner, referent)) : static_cast<$Cache$Ref*>($new($Cache$Kind$Weak, owner, referent, queue));
}

Cache$Kind$3::Cache$Kind$3() {
}

$Class* Cache$Kind$3::load$($String* name, bool initialize) {
	$loadClass(Cache$Kind$3, name, initialize, &_Cache$Kind$3_ClassInfo_, allocate$Cache$Kind$3);
	return class$;
}

$Class* Cache$Kind$3::class$ = nullptr;

			} // util
		} // beans
	} // sun
} // com