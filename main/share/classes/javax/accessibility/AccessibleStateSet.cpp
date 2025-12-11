#include <javax/accessibility/AccessibleStateSet.h>

#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleState.h>
#include <jcpp.h>

using $AccessibleStateArray = $Array<::javax::accessibility::AccessibleState>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $AccessibleState = ::javax::accessibility::AccessibleState;

namespace javax {
	namespace accessibility {

$FieldInfo _AccessibleStateSet_FieldInfo_[] = {
	{"states", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/accessibility/AccessibleState;>;", $PROTECTED, $field(AccessibleStateSet, states)},
	{}
};

$MethodInfo _AccessibleStateSet_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleStateSet::*)()>(&AccessibleStateSet::init$))},
	{"<init>", "([Ljavax/accessibility/AccessibleState;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleStateSet::*)($AccessibleStateArray*)>(&AccessibleStateSet::init$))},
	{"add", "(Ljavax/accessibility/AccessibleState;)Z", nullptr, $PUBLIC},
	{"addAll", "([Ljavax/accessibility/AccessibleState;)V", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"contains", "(Ljavax/accessibility/AccessibleState;)Z", nullptr, $PUBLIC},
	{"remove", "(Ljavax/accessibility/AccessibleState;)Z", nullptr, $PUBLIC},
	{"toArray", "()[Ljavax/accessibility/AccessibleState;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AccessibleStateSet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.accessibility.AccessibleStateSet",
	"java.lang.Object",
	nullptr,
	_AccessibleStateSet_FieldInfo_,
	_AccessibleStateSet_MethodInfo_
};

$Object* allocate$AccessibleStateSet($Class* clazz) {
	return $of($alloc(AccessibleStateSet));
}

void AccessibleStateSet::init$() {
	$set(this, states, nullptr);
	$set(this, states, nullptr);
}

void AccessibleStateSet::init$($AccessibleStateArray* states) {
	$set(this, states, nullptr);
	if ($nc(states)->length != 0) {
		$set(this, states, $new($Vector, states->length));
		for (int32_t i = 0; i < states->length; ++i) {
			if (!$nc(this->states)->contains(states->get(i))) {
				$nc(this->states)->addElement(states->get(i));
			}
		}
	}
}

bool AccessibleStateSet::add($AccessibleState* state) {
	if (this->states == nullptr) {
		$set(this, states, $new($Vector));
	}
	if (!$nc(this->states)->contains(state)) {
		$nc(this->states)->addElement(state);
		return true;
	} else {
		return false;
	}
}

void AccessibleStateSet::addAll($AccessibleStateArray* states) {
	if ($nc(states)->length != 0) {
		if (this->states == nullptr) {
			$set(this, states, $new($Vector, states->length));
		}
		for (int32_t i = 0; i < states->length; ++i) {
			if (!$nc(this->states)->contains(states->get(i))) {
				$nc(this->states)->addElement(states->get(i));
			}
		}
	}
}

bool AccessibleStateSet::remove($AccessibleState* state) {
	if (this->states == nullptr) {
		return false;
	} else {
		return $nc(this->states)->removeElement(state);
	}
}

void AccessibleStateSet::clear() {
	if (this->states != nullptr) {
		$nc(this->states)->removeAllElements();
	}
}

bool AccessibleStateSet::contains($AccessibleState* state) {
	if (this->states == nullptr) {
		return false;
	} else {
		return $nc(this->states)->contains(state);
	}
}

$AccessibleStateArray* AccessibleStateSet::toArray() {
	$useLocalCurrentObjectStackCache();
	if (this->states == nullptr) {
		return $new($AccessibleStateArray, 0);
	} else {
		$var($AccessibleStateArray, stateArray, $new($AccessibleStateArray, $nc(this->states)->size()));
		for (int32_t i = 0; i < stateArray->length; ++i) {
			stateArray->set(i, $cast($AccessibleState, $($nc(this->states)->elementAt(i))));
		}
		return stateArray;
	}
}

$String* AccessibleStateSet::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, ret, nullptr);
	if ((this->states != nullptr) && ($nc(this->states)->size() > 0)) {
		$assign(ret, $nc(($cast($AccessibleState, $($nc(this->states)->elementAt(0)))))->toDisplayString());
		for (int32_t i = 1; i < $nc(this->states)->size(); ++i) {
			$assign(ret, $str({ret, ","_s, $($nc(($cast($AccessibleState, $($nc(this->states)->elementAt(i)))))->toDisplayString())}));
		}
	}
	return ret;
}

AccessibleStateSet::AccessibleStateSet() {
}

$Class* AccessibleStateSet::load$($String* name, bool initialize) {
	$loadClass(AccessibleStateSet, name, initialize, &_AccessibleStateSet_ClassInfo_, allocate$AccessibleStateSet);
	return class$;
}

$Class* AccessibleStateSet::class$ = nullptr;

	} // accessibility
} // javax