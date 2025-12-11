#include <com/sun/beans/introspect/ClassInfo$1.h>

#include <com/sun/beans/introspect/ClassInfo.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache.h>
#include <jcpp.h>

using $1ClassInfo = ::com::sun::beans::introspect::ClassInfo;
using $Cache = ::com::sun::beans::util::Cache;
using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

$MethodInfo _ClassInfo$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/beans/util/Cache$Kind;Lcom/sun/beans/util/Cache$Kind;)V", nullptr, 0, $method(static_cast<void(ClassInfo$1::*)($Cache$Kind*,$Cache$Kind*)>(&ClassInfo$1::init$))},
	{"create", "(Ljava/lang/Class;)Lcom/sun/beans/introspect/ClassInfo;", "(Ljava/lang/Class<*>;)Lcom/sun/beans/introspect/ClassInfo;", $PUBLIC},
	{"create", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _ClassInfo$1_EnclosingMethodInfo_ = {
	"com.sun.beans.introspect.ClassInfo",
	nullptr,
	nullptr
};

$InnerClassInfo _ClassInfo$1_InnerClassesInfo_[] = {
	{"com.sun.beans.introspect.ClassInfo$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClassInfo$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.beans.introspect.ClassInfo$1",
	"com.sun.beans.util.Cache",
	nullptr,
	nullptr,
	_ClassInfo$1_MethodInfo_,
	"Lcom/sun/beans/util/Cache<Ljava/lang/Class<*>;Lcom/sun/beans/introspect/ClassInfo;>;",
	&_ClassInfo$1_EnclosingMethodInfo_,
	_ClassInfo$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.beans.introspect.ClassInfo"
};

$Object* allocate$ClassInfo$1($Class* clazz) {
	return $of($alloc(ClassInfo$1));
}

void ClassInfo$1::init$($Cache$Kind* keyKind, $Cache$Kind* valueKind) {
	$Cache::init$(keyKind, valueKind);
}

$1ClassInfo* ClassInfo$1::create($Class* type) {
	return $new($1ClassInfo, type);
}

$Object* ClassInfo$1::create(Object$* type) {
	return $of(this->create($cast($Class, type)));
}

ClassInfo$1::ClassInfo$1() {
}

$Class* ClassInfo$1::load$($String* name, bool initialize) {
	$loadClass(ClassInfo$1, name, initialize, &_ClassInfo$1_ClassInfo_, allocate$ClassInfo$1);
	return class$;
}

$Class* ClassInfo$1::class$ = nullptr;

			} // introspect
		} // beans
	} // sun
} // com