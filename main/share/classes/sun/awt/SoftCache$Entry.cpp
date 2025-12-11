#include <sun/awt/SoftCache$Entry.h>

#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/Map$Entry.h>
#include <sun/awt/SoftCache$ValueCell.h>
#include <sun/awt/SoftCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map$Entry = ::java::util::Map$Entry;
using $SoftCache = ::sun::awt::SoftCache;
using $SoftCache$ValueCell = ::sun::awt::SoftCache$ValueCell;

namespace sun {
	namespace awt {

$FieldInfo _SoftCache$Entry_FieldInfo_[] = {
	{"this$0", "Lsun/awt/SoftCache;", nullptr, $FINAL | $SYNTHETIC, $field(SoftCache$Entry, this$0)},
	{"ent", "Ljava/util/Map$Entry;", "Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE, $field(SoftCache$Entry, ent)},
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(SoftCache$Entry, value)},
	{}
};

$MethodInfo _SoftCache$Entry_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/SoftCache;Ljava/util/Map$Entry;Ljava/lang/Object;)V", "(Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;Ljava/lang/Object;)V", 0, $method(static_cast<void(SoftCache$Entry::*)($SoftCache*,$Map$Entry*,Object$*)>(&SoftCache$Entry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftCache$Entry_InnerClassesInfo_[] = {
	{"sun.awt.SoftCache$Entry", "sun.awt.SoftCache", "Entry", $PRIVATE},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SoftCache$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.SoftCache$Entry",
	"java.lang.Object",
	"java.util.Map$Entry",
	_SoftCache$Entry_FieldInfo_,
	_SoftCache$Entry_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;",
	nullptr,
	_SoftCache$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.SoftCache"
};

$Object* allocate$SoftCache$Entry($Class* clazz) {
	return $of($alloc(SoftCache$Entry));
}

void SoftCache$Entry::init$($SoftCache* this$0, $Map$Entry* ent, Object$* value) {
	$set(this, this$0, this$0);
	$set(this, ent, ent);
	$set(this, value, value);
}

$Object* SoftCache$Entry::getKey() {
	return $of($nc(this->ent)->getKey());
}

$Object* SoftCache$Entry::getValue() {
	return $of(this->value);
}

$Object* SoftCache$Entry::setValue(Object$* value) {
	$useLocalCurrentObjectStackCache();
	return $of($nc(this->ent)->setValue($($SoftCache$ValueCell::create($($nc(this->ent)->getKey()), value, this->this$0->queue))));
}

bool SoftCache$Entry::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($Map$Entry, o))) {
		return false;
	}
	$var($Map$Entry, e, $cast($Map$Entry, o));
	$var($Object, var$1, $nc(this->ent)->getKey());
	bool var$0 = $SoftCache::valEquals(var$1, $($nc(e)->getKey()));
	return (var$0 && $SoftCache::valEquals(this->value, $($nc(e)->getValue())));
}

int32_t SoftCache$Entry::hashCode() {
	$var($Object, k, nullptr);
	int32_t var$0 = ((($assign(k, getKey())) == nullptr) ? 0 : $nc($of(k))->hashCode());
	return (var$0 ^ ((this->value == nullptr) ? 0 : $nc($of(this->value))->hashCode()));
}

SoftCache$Entry::SoftCache$Entry() {
}

$Class* SoftCache$Entry::load$($String* name, bool initialize) {
	$loadClass(SoftCache$Entry, name, initialize, &_SoftCache$Entry_ClassInfo_, allocate$SoftCache$Entry);
	return class$;
}

$Class* SoftCache$Entry::class$ = nullptr;

	} // awt
} // sun