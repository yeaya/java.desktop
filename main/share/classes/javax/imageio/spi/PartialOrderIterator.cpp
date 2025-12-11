#include <javax/imageio/spi/PartialOrderIterator.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/Map.h>
#include <javax/imageio/spi/DigraphNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $Map = ::java::util::Map;
using $DigraphNode = ::javax::imageio::spi::DigraphNode;

namespace javax {
	namespace imageio {
		namespace spi {

$FieldInfo _PartialOrderIterator_FieldInfo_[] = {
	{"zeroList", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljavax/imageio/spi/DigraphNode<TE;>;>;", 0, $field(PartialOrderIterator, zeroList)},
	{"inDegrees", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/imageio/spi/DigraphNode<TE;>;Ljava/lang/Integer;>;", 0, $field(PartialOrderIterator, inDegrees)},
	{}
};

$MethodInfo _PartialOrderIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Ljavax/imageio/spi/DigraphNode<TE;>;>;)V", $PUBLIC, $method(static_cast<void(PartialOrderIterator::*)($Iterator*)>(&PartialOrderIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PartialOrderIterator_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.spi.PartialOrderIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_PartialOrderIterator_FieldInfo_,
	_PartialOrderIterator_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Iterator<TE;>;"
};

$Object* allocate$PartialOrderIterator($Class* clazz) {
	return $of($alloc(PartialOrderIterator));
}

void PartialOrderIterator::init$($Iterator* iter) {
	$useLocalCurrentObjectStackCache();
	$set(this, zeroList, $new($LinkedList));
	$set(this, inDegrees, $new($HashMap));
	while ($nc(iter)->hasNext()) {
		$var($DigraphNode, node, $cast($DigraphNode, iter->next()));
		int32_t inDegree = $nc(node)->getInDegree();
		$nc(this->inDegrees)->put(node, $($Integer::valueOf(inDegree)));
		if (inDegree == 0) {
			$nc(this->zeroList)->add(node);
		}
	}
}

bool PartialOrderIterator::hasNext() {
	return !$nc(this->zeroList)->isEmpty();
}

$Object* PartialOrderIterator::next() {
	$useLocalCurrentObjectStackCache();
	$var($DigraphNode, first, $cast($DigraphNode, $nc(this->zeroList)->removeFirst()));
	$var($Iterator, outNodes, $nc(first)->getOutNodes());
	while ($nc(outNodes)->hasNext()) {
		$var($DigraphNode, node, $cast($DigraphNode, outNodes->next()));
		int32_t inDegree = $nc(($cast($Integer, $($nc(this->inDegrees)->get(node)))))->intValue() - 1;
		$nc(this->inDegrees)->put(node, $($Integer::valueOf(inDegree)));
		if (inDegree == 0) {
			$nc(this->zeroList)->add(node);
		}
	}
	return $of(first->getData());
}

void PartialOrderIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

PartialOrderIterator::PartialOrderIterator() {
}

$Class* PartialOrderIterator::load$($String* name, bool initialize) {
	$loadClass(PartialOrderIterator, name, initialize, &_PartialOrderIterator_ClassInfo_, allocate$PartialOrderIterator);
	return class$;
}

$Class* PartialOrderIterator::class$ = nullptr;

		} // spi
	} // imageio
} // javax