#include <com/sun/beans/util/Cache$Ref.h>

#include <com/sun/beans/util/Cache.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Cache = ::com::sun::beans::util::Cache;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

$MethodInfo _Cache$Ref_MethodInfo_[] = {
	{"getOwner", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getReferent", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT},
	{"isStale", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeOwner", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Cache$Ref_InnerClassesInfo_[] = {
	{"com.sun.beans.util.Cache$Ref", "com.sun.beans.util.Cache", "Ref", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Cache$Ref_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.beans.util.Cache$Ref",
	nullptr,
	nullptr,
	nullptr,
	_Cache$Ref_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Cache$Ref_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.beans.util.Cache"
};

$Object* allocate$Cache$Ref($Class* clazz) {
	return $of($alloc(Cache$Ref));
}

$Class* Cache$Ref::load$($String* name, bool initialize) {
	$loadClass(Cache$Ref, name, initialize, &_Cache$Ref_ClassInfo_, allocate$Cache$Ref);
	return class$;
}

$Class* Cache$Ref::class$ = nullptr;

			} // util
		} // beans
	} // sun
} // com