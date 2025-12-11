#include <sun/awt/SoftCache$EntrySet$1.h>

#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Set.h>
#include <sun/awt/SoftCache$Entry.h>
#include <sun/awt/SoftCache$EntrySet.h>
#include <sun/awt/SoftCache$ValueCell.h>
#include <sun/awt/SoftCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Set = ::java::util::Set;
using $SoftCache$Entry = ::sun::awt::SoftCache$Entry;
using $SoftCache$EntrySet = ::sun::awt::SoftCache$EntrySet;
using $SoftCache$ValueCell = ::sun::awt::SoftCache$ValueCell;

namespace sun {
	namespace awt {

$FieldInfo _SoftCache$EntrySet$1_FieldInfo_[] = {
	{"this$1", "Lsun/awt/SoftCache$EntrySet;", nullptr, $FINAL | $SYNTHETIC, $field(SoftCache$EntrySet$1, this$1)},
	{"hashIterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;", 0, $field(SoftCache$EntrySet$1, hashIterator)},
	{"next", "Lsun/awt/SoftCache$Entry;", nullptr, 0, $field(SoftCache$EntrySet$1, next$)},
	{}
};

$MethodInfo _SoftCache$EntrySet$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/SoftCache$EntrySet;)V", nullptr, 0, $method(static_cast<void(SoftCache$EntrySet$1::*)($SoftCache$EntrySet*)>(&SoftCache$EntrySet$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/util/Map$Entry;", "()Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SoftCache$EntrySet$1_EnclosingMethodInfo_ = {
	"sun.awt.SoftCache$EntrySet",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _SoftCache$EntrySet$1_InnerClassesInfo_[] = {
	{"sun.awt.SoftCache$EntrySet", "sun.awt.SoftCache", "EntrySet", $PRIVATE},
	{"sun.awt.SoftCache$EntrySet$1", nullptr, nullptr, 0},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SoftCache$EntrySet$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.SoftCache$EntrySet$1",
	"java.lang.Object",
	"java.util.Iterator",
	_SoftCache$EntrySet$1_FieldInfo_,
	_SoftCache$EntrySet$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/Object;Ljava/lang/Object;>;>;",
	&_SoftCache$EntrySet$1_EnclosingMethodInfo_,
	_SoftCache$EntrySet$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.SoftCache"
};

$Object* allocate$SoftCache$EntrySet$1($Class* clazz) {
	return $of($alloc(SoftCache$EntrySet$1));
}

void SoftCache$EntrySet$1::init$($SoftCache$EntrySet* this$1) {
	$set(this, this$1, this$1);
	$set(this, hashIterator, $nc(this->this$1->hashEntries)->iterator());
	$set(this, next$, nullptr);
}

bool SoftCache$EntrySet$1::hasNext() {
	$useLocalCurrentObjectStackCache();
	while ($nc(this->hashIterator)->hasNext()) {
		$var($Map$Entry, ent, $cast($Map$Entry, $nc(this->hashIterator)->next()));
		$var($SoftCache$ValueCell, vc, $cast($SoftCache$ValueCell, $nc(ent)->getValue()));
		$var($Object, v, nullptr);
		if ((vc != nullptr) && (($assign(v, vc->get())) == nullptr)) {
			continue;
		}
		$set(this, next$, $new($SoftCache$Entry, this->this$1->this$0, ent, v));
		return true;
	}
	return false;
}

$Object* SoftCache$EntrySet$1::next() {
	if ((this->next$ == nullptr) && !hasNext()) {
		$throwNew($NoSuchElementException);
	}
	$var($SoftCache$Entry, e, this->next$);
	$set(this, next$, nullptr);
	return $of(e);
}

void SoftCache$EntrySet$1::remove() {
	$nc(this->hashIterator)->remove();
}

SoftCache$EntrySet$1::SoftCache$EntrySet$1() {
}

$Class* SoftCache$EntrySet$1::load$($String* name, bool initialize) {
	$loadClass(SoftCache$EntrySet$1, name, initialize, &_SoftCache$EntrySet$1_ClassInfo_, allocate$SoftCache$EntrySet$1);
	return class$;
}

$Class* SoftCache$EntrySet$1::class$ = nullptr;

	} // awt
} // sun