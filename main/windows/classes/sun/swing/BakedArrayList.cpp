#include <sun/swing/BakedArrayList.h>

#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace sun {
	namespace swing {

$FieldInfo _BakedArrayList_FieldInfo_[] = {
	{"_hashCode", "I", nullptr, $PRIVATE, $field(BakedArrayList, _hashCode)},
	{}
};

$MethodInfo _BakedArrayList_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BakedArrayList::*)(int32_t)>(&BakedArrayList::init$))},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<+TE;>;)V", $PUBLIC, $method(static_cast<void(BakedArrayList::*)($List*)>(&BakedArrayList::init$))},
	{"cacheHashCode", "()V", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BakedArrayList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.BakedArrayList",
	"java.util.ArrayList",
	nullptr,
	_BakedArrayList_FieldInfo_,
	_BakedArrayList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/ArrayList<TE;>;"
};

$Object* allocate$BakedArrayList($Class* clazz) {
	return $of($alloc(BakedArrayList));
}

void BakedArrayList::init$(int32_t size) {
	$ArrayList::init$(size);
}

void BakedArrayList::init$($List* data) {
	$useLocalCurrentObjectStackCache();
	BakedArrayList::init$($nc(data)->size());
	{
		int32_t counter = 0;
		int32_t max = $nc(data)->size();
		for (; counter < max; ++counter) {
			add($(data->get(counter)));
		}
	}
	cacheHashCode();
}

void BakedArrayList::cacheHashCode() {
	$useLocalCurrentObjectStackCache();
	this->_hashCode = 1;
	for (int32_t counter = size() - 1; counter >= 0; --counter) {
		this->_hashCode = 31 * this->_hashCode + $nc($of($(get(counter))))->hashCode();
	}
}

int32_t BakedArrayList::hashCode() {
	return this->_hashCode;
}

bool BakedArrayList::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var(BakedArrayList, list, $cast(BakedArrayList, o));
	int32_t size = this->size();
	if ($nc(list)->size() != size) {
		return false;
	}
	while (size-- > 0) {
		if (!$nc($of($(get(size))))->equals($($nc(list)->get(size)))) {
			return false;
		}
	}
	return true;
}

BakedArrayList::BakedArrayList() {
}

$Class* BakedArrayList::load$($String* name, bool initialize) {
	$loadClass(BakedArrayList, name, initialize, &_BakedArrayList_ClassInfo_, allocate$BakedArrayList);
	return class$;
}

$Class* BakedArrayList::class$ = nullptr;

	} // swing
} // sun