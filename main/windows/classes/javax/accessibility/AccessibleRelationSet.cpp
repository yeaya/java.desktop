#include <javax/accessibility/AccessibleRelationSet.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleRelation.h>
#include <jcpp.h>

using $AccessibleRelationArray = $Array<::javax::accessibility::AccessibleRelation>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AccessibleBundle = ::javax::accessibility::AccessibleBundle;
using $AccessibleRelation = ::javax::accessibility::AccessibleRelation;

namespace javax {
	namespace accessibility {

$FieldInfo _AccessibleRelationSet_FieldInfo_[] = {
	{"relations", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/accessibility/AccessibleRelation;>;", $PROTECTED, $field(AccessibleRelationSet, relations)},
	{}
};

$MethodInfo _AccessibleRelationSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleRelationSet::*)()>(&AccessibleRelationSet::init$))},
	{"<init>", "([Ljavax/accessibility/AccessibleRelation;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleRelationSet::*)($AccessibleRelationArray*)>(&AccessibleRelationSet::init$))},
	{"add", "(Ljavax/accessibility/AccessibleRelation;)Z", nullptr, $PUBLIC},
	{"addAll", "([Ljavax/accessibility/AccessibleRelation;)V", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;)Ljavax/accessibility/AccessibleRelation;", nullptr, $PUBLIC},
	{"remove", "(Ljavax/accessibility/AccessibleRelation;)Z", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toArray", "()[Ljavax/accessibility/AccessibleRelation;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AccessibleRelationSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.accessibility.AccessibleRelationSet",
	"java.lang.Object",
	nullptr,
	_AccessibleRelationSet_FieldInfo_,
	_AccessibleRelationSet_MethodInfo_
};

$Object* allocate$AccessibleRelationSet($Class* clazz) {
	return $of($alloc(AccessibleRelationSet));
}

void AccessibleRelationSet::init$() {
	$set(this, relations, nullptr);
	$set(this, relations, nullptr);
}

void AccessibleRelationSet::init$($AccessibleRelationArray* relations) {
	$set(this, relations, nullptr);
	if ($nc(relations)->length != 0) {
		$set(this, relations, $new($Vector, relations->length));
		for (int32_t i = 0; i < relations->length; ++i) {
			add(relations->get(i));
		}
	}
}

bool AccessibleRelationSet::add($AccessibleRelation* relation) {
	$useLocalCurrentObjectStackCache();
	if (this->relations == nullptr) {
		$set(this, relations, $new($Vector));
	}
	$var($AccessibleRelation, existingRelation, get($($nc(relation)->getKey())));
	if (existingRelation == nullptr) {
		$nc(this->relations)->addElement(relation);
		return true;
	} else {
		$var($ObjectArray, existingTarget, $nc(existingRelation)->getTarget());
		$var($ObjectArray, newTarget, $nc(relation)->getTarget());
		int32_t mergedLength = $nc(existingTarget)->length + $nc(newTarget)->length;
		$var($ObjectArray, mergedTarget, $new($ObjectArray, mergedLength));
		for (int32_t i = 0; i < existingTarget->length; ++i) {
			mergedTarget->set(i, existingTarget->get(i));
		}
		{
			int32_t i = existingTarget->length;
			int32_t j = 0;
			for (; i < mergedLength; ++i, ++j) {
				mergedTarget->set(i, newTarget->get(j));
			}
		}
		existingRelation->setTarget(mergedTarget);
	}
	return true;
}

void AccessibleRelationSet::addAll($AccessibleRelationArray* relations) {
	if ($nc(relations)->length != 0) {
		if (this->relations == nullptr) {
			$set(this, relations, $new($Vector, relations->length));
		}
		for (int32_t i = 0; i < relations->length; ++i) {
			add(relations->get(i));
		}
	}
}

bool AccessibleRelationSet::remove($AccessibleRelation* relation) {
	if (this->relations == nullptr) {
		return false;
	} else {
		return $nc(this->relations)->removeElement(relation);
	}
}

void AccessibleRelationSet::clear() {
	if (this->relations != nullptr) {
		$nc(this->relations)->removeAllElements();
	}
}

int32_t AccessibleRelationSet::size() {
	if (this->relations == nullptr) {
		return 0;
	} else {
		return $nc(this->relations)->size();
	}
}

bool AccessibleRelationSet::contains($String* key) {
	return get(key) != nullptr;
}

$AccessibleRelation* AccessibleRelationSet::get($String* key) {
	$useLocalCurrentObjectStackCache();
	if (this->relations == nullptr) {
		return nullptr;
	} else {
		int32_t len = $nc(this->relations)->size();
		for (int32_t i = 0; i < len; ++i) {
			$var($AccessibleRelation, relation, $cast($AccessibleRelation, $nc(this->relations)->elementAt(i)));
			if (relation != nullptr && $nc($(relation->getKey()))->equals(key)) {
				return relation;
			}
		}
		return nullptr;
	}
}

$AccessibleRelationArray* AccessibleRelationSet::toArray() {
	$useLocalCurrentObjectStackCache();
	if (this->relations == nullptr) {
		return $new($AccessibleRelationArray, 0);
	} else {
		$var($AccessibleRelationArray, relationArray, $new($AccessibleRelationArray, $nc(this->relations)->size()));
		for (int32_t i = 0; i < relationArray->length; ++i) {
			relationArray->set(i, $cast($AccessibleRelation, $($nc(this->relations)->elementAt(i))));
		}
		return relationArray;
	}
}

$String* AccessibleRelationSet::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, ret, ""_s);
	if ((this->relations != nullptr) && ($nc(this->relations)->size() > 0)) {
		$assign(ret, $nc(($cast($AccessibleRelation, $($nc(this->relations)->elementAt(0)))))->toDisplayString());
		for (int32_t i = 1; i < $nc(this->relations)->size(); ++i) {
			$assign(ret, $str({ret, ","_s, $($nc(($cast($AccessibleRelation, $($nc(this->relations)->elementAt(i)))))->toDisplayString())}));
		}
	}
	return ret;
}

AccessibleRelationSet::AccessibleRelationSet() {
}

$Class* AccessibleRelationSet::load$($String* name, bool initialize) {
	$loadClass(AccessibleRelationSet, name, initialize, &_AccessibleRelationSet_ClassInfo_, allocate$AccessibleRelationSet);
	return class$;
}

$Class* AccessibleRelationSet::class$ = nullptr;

	} // accessibility
} // javax