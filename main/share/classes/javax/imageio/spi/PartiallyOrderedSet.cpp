#include <javax/imageio/spi/PartiallyOrderedSet.h>

#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/imageio/spi/DigraphNode.h>
#include <javax/imageio/spi/PartialOrderIterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $DigraphNode = ::javax::imageio::spi::DigraphNode;
using $PartialOrderIterator = ::javax::imageio::spi::PartialOrderIterator;

namespace javax {
	namespace imageio {
		namespace spi {

$FieldInfo _PartiallyOrderedSet_FieldInfo_[] = {
	{"poNodes", "Ljava/util/Map;", "Ljava/util/Map<TE;Ljavax/imageio/spi/DigraphNode<TE;>;>;", $PRIVATE, $field(PartiallyOrderedSet, poNodes)},
	{"nodes", "Ljava/util/Set;", "Ljava/util/Set<TE;>;", $PRIVATE, $field(PartiallyOrderedSet, nodes)},
	{}
};

$MethodInfo _PartiallyOrderedSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PartiallyOrderedSet::*)()>(&PartiallyOrderedSet::init$))},
	{"add", "(Ljava/lang/Object;)Z", "(TE;)Z", $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hasOrdering", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TE;TE;)Z", $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"setOrdering", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TE;TE;)Z", $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"unsetOrdering", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "(TE;TE;)Z", $PUBLIC},
	{}
};

$ClassInfo _PartiallyOrderedSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.spi.PartiallyOrderedSet",
	"java.util.AbstractSet",
	nullptr,
	_PartiallyOrderedSet_FieldInfo_,
	_PartiallyOrderedSet_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/util/AbstractSet<TE;>;"
};

$Object* allocate$PartiallyOrderedSet($Class* clazz) {
	return $of($alloc(PartiallyOrderedSet));
}

void PartiallyOrderedSet::init$() {
	$AbstractSet::init$();
	$set(this, poNodes, $new($HashMap));
	$set(this, nodes, $nc(this->poNodes)->keySet());
}

int32_t PartiallyOrderedSet::size() {
	return $nc(this->nodes)->size();
}

bool PartiallyOrderedSet::contains(Object$* o) {
	return $nc(this->nodes)->contains(o);
}

$Iterator* PartiallyOrderedSet::iterator() {
	$useLocalCurrentObjectStackCache();
	return $new($PartialOrderIterator, $($nc($($nc(this->poNodes)->values()))->iterator()));
}

bool PartiallyOrderedSet::add(Object$* o) {
	if ($nc(this->nodes)->contains(o)) {
		return false;
	}
	$var($DigraphNode, node, $new($DigraphNode, o));
	$nc(this->poNodes)->put(o, node);
	return true;
}

bool PartiallyOrderedSet::remove(Object$* o) {
	$var($DigraphNode, node, $cast($DigraphNode, $nc(this->poNodes)->get(o)));
	if (node == nullptr) {
		return false;
	}
	$nc(this->poNodes)->remove(o);
	$nc(node)->dispose();
	return true;
}

void PartiallyOrderedSet::clear() {
	$nc(this->poNodes)->clear();
}

bool PartiallyOrderedSet::setOrdering(Object$* first, Object$* second) {
	$useLocalCurrentObjectStackCache();
	$var($DigraphNode, firstPONode, $cast($DigraphNode, $nc(this->poNodes)->get(first)));
	$var($DigraphNode, secondPONode, $cast($DigraphNode, $nc(this->poNodes)->get(second)));
	$nc(secondPONode)->removeEdge(firstPONode);
	return $nc(firstPONode)->addEdge(secondPONode);
}

bool PartiallyOrderedSet::unsetOrdering(Object$* first, Object$* second) {
	$useLocalCurrentObjectStackCache();
	$var($DigraphNode, firstPONode, $cast($DigraphNode, $nc(this->poNodes)->get(first)));
	$var($DigraphNode, secondPONode, $cast($DigraphNode, $nc(this->poNodes)->get(second)));
	bool var$0 = $nc(firstPONode)->removeEdge(secondPONode);
	return var$0 || $nc(secondPONode)->removeEdge(firstPONode);
}

bool PartiallyOrderedSet::hasOrdering(Object$* preferred, Object$* other) {
	$useLocalCurrentObjectStackCache();
	$var($DigraphNode, preferredPONode, $cast($DigraphNode, $nc(this->poNodes)->get(preferred)));
	$var($DigraphNode, otherPONode, $cast($DigraphNode, $nc(this->poNodes)->get(other)));
	return $nc(preferredPONode)->hasEdge(otherPONode);
}

PartiallyOrderedSet::PartiallyOrderedSet() {
}

$Class* PartiallyOrderedSet::load$($String* name, bool initialize) {
	$loadClass(PartiallyOrderedSet, name, initialize, &_PartiallyOrderedSet_ClassInfo_, allocate$PartiallyOrderedSet);
	return class$;
}

$Class* PartiallyOrderedSet::class$ = nullptr;

		} // spi
	} // imageio
} // javax