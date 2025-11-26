#include <com/sun/beans/util/Cache$Kind$1.h>

#include <com/sun/beans/util/Cache$Kind$Strong.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache$Ref.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $Cache$Kind$Strong = ::com::sun::beans::util::Cache$Kind$Strong;
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

$MethodInfo _Cache$Kind$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(Cache$Kind$1::*)($String*,int32_t)>(&Cache$Kind$1::init$))},
	{"create", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)Lcom/sun/beans/util/Cache$Ref;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;TT;Ljava/lang/ref/ReferenceQueue<-TT;>;)Lcom/sun/beans/util/Cache$Ref<TT;>;", 0},
	{}
};

$EnclosingMethodInfo _Cache$Kind$1_EnclosingMethodInfo_ = {
	"com.sun.beans.util.Cache$Kind",
	nullptr,
	nullptr
};

$InnerClassInfo _Cache$Kind$1_InnerClassesInfo_[] = {
	{"com.sun.beans.util.Cache$Kind", "com.sun.beans.util.Cache", "Kind", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.beans.util.Cache$Kind$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Cache$Kind$1_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"com.sun.beans.util.Cache$Kind$1",
	"com.sun.beans.util.Cache$Kind",
	nullptr,
	nullptr,
	_Cache$Kind$1_MethodInfo_,
	nullptr,
	&_Cache$Kind$1_EnclosingMethodInfo_,
	_Cache$Kind$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.beans.util.Cache"
};

$Object* allocate$Cache$Kind$1($Class* clazz) {
	return $of($alloc(Cache$Kind$1));
}

void Cache$Kind$1::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Cache$Kind::init$($enum$name, $enum$ordinal);
}

$Cache$Ref* Cache$Kind$1::create(Object$* owner, Object$* value, $ReferenceQueue* queue) {
	return $new($Cache$Kind$Strong, owner, value);
}

Cache$Kind$1::Cache$Kind$1() {
}

$Class* Cache$Kind$1::load$($String* name, bool initialize) {
	$loadClass(Cache$Kind$1, name, initialize, &_Cache$Kind$1_ClassInfo_, allocate$Cache$Kind$1);
	return class$;
}

$Class* Cache$Kind$1::class$ = nullptr;

			} // util
		} // beans
	} // sun
} // com