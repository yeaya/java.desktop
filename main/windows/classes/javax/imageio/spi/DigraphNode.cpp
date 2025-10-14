#include <javax/imageio/spi/DigraphNode.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Cloneable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace javax {
	namespace imageio {
		namespace spi {

$FieldInfo _DigraphNode_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigraphNode, serialVersionUID)},
	{"data", "Ljava/lang/Object;", "TE;", $PROTECTED, $field(DigraphNode, data)},
	{"outNodes", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/imageio/spi/DigraphNode<TE;>;>;", $PROTECTED, $field(DigraphNode, outNodes)},
	{"inDegree", "I", nullptr, $PROTECTED, $field(DigraphNode, inDegree)},
	{"inNodes", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/imageio/spi/DigraphNode<TE;>;>;", $PRIVATE, $field(DigraphNode, inNodes)},
	{}
};

$MethodInfo _DigraphNode_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, $method(static_cast<void(DigraphNode::*)(Object$*)>(&DigraphNode::init$))},
	{"addEdge", "(Ljavax/imageio/spi/DigraphNode;)Z", "(Ljavax/imageio/spi/DigraphNode<TE;>;)Z", $PUBLIC},
	{"decrementInDegree", "()V", nullptr, $PRIVATE, $method(static_cast<void(DigraphNode::*)()>(&DigraphNode::decrementInDegree))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"getData", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"getInDegree", "()I", nullptr, $PUBLIC},
	{"getOutNodes", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljavax/imageio/spi/DigraphNode<TE;>;>;", $PUBLIC},
	{"hasEdge", "(Ljavax/imageio/spi/DigraphNode;)Z", "(Ljavax/imageio/spi/DigraphNode<TE;>;)Z", $PUBLIC},
	{"incrementInDegree", "()V", nullptr, $PRIVATE, $method(static_cast<void(DigraphNode::*)()>(&DigraphNode::incrementInDegree))},
	{"removeEdge", "(Ljavax/imageio/spi/DigraphNode;)Z", "(Ljavax/imageio/spi/DigraphNode<TE;>;)Z", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DigraphNode_ClassInfo_ = {
	$ACC_SUPER,
	"javax.imageio.spi.DigraphNode",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable",
	_DigraphNode_FieldInfo_,
	_DigraphNode_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljava/lang/Cloneable;Ljava/io/Serializable;"
};

$Object* allocate$DigraphNode($Class* clazz) {
	return $of($alloc(DigraphNode));
}

int32_t DigraphNode::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool DigraphNode::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$Object* DigraphNode::clone() {
	 return this->$Cloneable::clone();
}

$String* DigraphNode::toString() {
	 return this->$Cloneable::toString();
}

void DigraphNode::finalize() {
	this->$Cloneable::finalize();
}

void DigraphNode::init$(Object$* data) {
	$set(this, outNodes, $new($HashSet));
	this->inDegree = 0;
	$set(this, inNodes, $new($HashSet));
	$set(this, data, data);
}

$Object* DigraphNode::getData() {
	return $of(this->data);
}

$Iterator* DigraphNode::getOutNodes() {
	return $nc(this->outNodes)->iterator();
}

bool DigraphNode::addEdge(DigraphNode* node) {
	if ($nc(this->outNodes)->contains(node)) {
		return false;
	}
	$nc(this->outNodes)->add(node);
	$nc($nc(node)->inNodes)->add(this);
	node->incrementInDegree();
	return true;
}

bool DigraphNode::hasEdge(DigraphNode* node) {
	return $nc(this->outNodes)->contains(node);
}

bool DigraphNode::removeEdge(DigraphNode* node) {
	if (!$nc(this->outNodes)->contains(node)) {
		return false;
	}
	$nc(this->outNodes)->remove(node);
	$nc($nc(node)->inNodes)->remove(this);
	node->decrementInDegree();
	return true;
}

void DigraphNode::dispose() {
	$var($ObjectArray, inNodesArray, $nc(this->inNodes)->toArray());
	for (int32_t i = 0; i < $nc(inNodesArray)->length; ++i) {
		$var(DigraphNode, node, $cast(DigraphNode, inNodesArray->get(i)));
		$nc(node)->removeEdge(this);
	}
	$var($ObjectArray, outNodesArray, $nc(this->outNodes)->toArray());
	for (int32_t i = 0; i < $nc(outNodesArray)->length; ++i) {
		$var(DigraphNode, node, $cast(DigraphNode, outNodesArray->get(i)));
		removeEdge(node);
	}
}

int32_t DigraphNode::getInDegree() {
	return this->inDegree;
}

void DigraphNode::incrementInDegree() {
	++this->inDegree;
}

void DigraphNode::decrementInDegree() {
	--this->inDegree;
}

DigraphNode::DigraphNode() {
}

$Class* DigraphNode::load$($String* name, bool initialize) {
	$loadClass(DigraphNode, name, initialize, &_DigraphNode_ClassInfo_, allocate$DigraphNode);
	return class$;
}

$Class* DigraphNode::class$ = nullptr;

		} // spi
	} // imageio
} // javax