#include <com/sun/beans/util/Cache$Kind.h>

#include <com/sun/beans/util/Cache$Kind$1.h>
#include <com/sun/beans/util/Cache$Kind$2.h>
#include <com/sun/beans/util/Cache$Kind$3.h>
#include <com/sun/beans/util/Cache$Ref.h>
#include <com/sun/beans/util/Cache.h>
#include <java/lang/Enum.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <jcpp.h>

#undef SOFT
#undef STRONG
#undef WEAK

using $Cache$KindArray = $Array<::com::sun::beans::util::Cache$Kind>;
using $Cache = ::com::sun::beans::util::Cache;
using $Cache$Kind$1 = ::com::sun::beans::util::Cache$Kind$1;
using $Cache$Kind$2 = ::com::sun::beans::util::Cache$Kind$2;
using $Cache$Kind$3 = ::com::sun::beans::util::Cache$Kind$3;
using $Cache$Ref = ::com::sun::beans::util::Cache$Ref;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;

namespace com {
	namespace sun {
		namespace beans {
			namespace util {

$FieldInfo _Cache$Kind_FieldInfo_[] = {
	{"STRONG", "Lcom/sun/beans/util/Cache$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Cache$Kind, STRONG)},
	{"SOFT", "Lcom/sun/beans/util/Cache$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Cache$Kind, SOFT)},
	{"WEAK", "Lcom/sun/beans/util/Cache$Kind;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Cache$Kind, WEAK)},
	{"$VALUES", "[Lcom/sun/beans/util/Cache$Kind;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Cache$Kind, $VALUES)},
	{}
};

$MethodInfo _Cache$Kind_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/beans/util/Cache$Kind;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Cache$KindArray*(*)()>(&Cache$Kind::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(Cache$Kind::*)($String*,int32_t)>(&Cache$Kind::init$))},
	{"create", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)Lcom/sun/beans/util/Cache$Ref;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;TT;Ljava/lang/ref/ReferenceQueue<-TT;>;)Lcom/sun/beans/util/Cache$Ref<TT;>;", $ABSTRACT},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/beans/util/Cache$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Cache$Kind*(*)($String*)>(&Cache$Kind::valueOf))},
	{"values", "()[Lcom/sun/beans/util/Cache$Kind;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Cache$KindArray*(*)()>(&Cache$Kind::values))},
	{}
};

$InnerClassInfo _Cache$Kind_InnerClassesInfo_[] = {
	{"com.sun.beans.util.Cache$Kind", "com.sun.beans.util.Cache", "Kind", $PUBLIC | $STATIC | $ABSTRACT | $ENUM},
	{"com.sun.beans.util.Cache$Kind$Weak", "com.sun.beans.util.Cache$Kind", "Weak", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.beans.util.Cache$Kind$Soft", "com.sun.beans.util.Cache$Kind", "Soft", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.beans.util.Cache$Kind$Strong", "com.sun.beans.util.Cache$Kind", "Strong", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.beans.util.Cache$Kind$3", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.beans.util.Cache$Kind$2", nullptr, nullptr, $FINAL | $ENUM},
	{"com.sun.beans.util.Cache$Kind$1", nullptr, nullptr, $FINAL | $ENUM},
	{}
};

$ClassInfo _Cache$Kind_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT | $ENUM,
	"com.sun.beans.util.Cache$Kind",
	"java.lang.Enum",
	nullptr,
	_Cache$Kind_FieldInfo_,
	_Cache$Kind_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/beans/util/Cache$Kind;>;",
	nullptr,
	_Cache$Kind_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.beans.util.Cache"
};

$Object* allocate$Cache$Kind($Class* clazz) {
	return $of($alloc(Cache$Kind));
}

Cache$Kind* Cache$Kind::STRONG = nullptr;
Cache$Kind* Cache$Kind::SOFT = nullptr;
Cache$Kind* Cache$Kind::WEAK = nullptr;
$Cache$KindArray* Cache$Kind::$VALUES = nullptr;

$Cache$KindArray* Cache$Kind::$values() {
	$init(Cache$Kind);
	return $new($Cache$KindArray, {
		Cache$Kind::STRONG,
		Cache$Kind::SOFT,
		Cache$Kind::WEAK
	});
}

$Cache$KindArray* Cache$Kind::values() {
	$init(Cache$Kind);
	return $cast($Cache$KindArray, Cache$Kind::$VALUES->clone());
}

Cache$Kind* Cache$Kind::valueOf($String* name) {
	$init(Cache$Kind);
	return $cast(Cache$Kind, $Enum::valueOf(Cache$Kind::class$, name));
}

void Cache$Kind::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$Cache$Kind($Class* class$) {
	$assignStatic(Cache$Kind::STRONG, $new($Cache$Kind$1, "STRONG"_s, 0));
	$assignStatic(Cache$Kind::SOFT, $new($Cache$Kind$2, "SOFT"_s, 1));
	$assignStatic(Cache$Kind::WEAK, $new($Cache$Kind$3, "WEAK"_s, 2));
	$assignStatic(Cache$Kind::$VALUES, Cache$Kind::$values());
}

Cache$Kind::Cache$Kind() {
}

$Class* Cache$Kind::load$($String* name, bool initialize) {
	$loadClass(Cache$Kind, name, initialize, &_Cache$Kind_ClassInfo_, clinit$Cache$Kind, allocate$Cache$Kind);
	return class$;
}

$Class* Cache$Kind::class$ = nullptr;

			} // util
		} // beans
	} // sun
} // com