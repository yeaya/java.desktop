#include <javax/swing/SpinnerListModel.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;

namespace javax {
	namespace swing {

$FieldInfo _SpinnerListModel_FieldInfo_[] = {
	{"list", "Ljava/util/List;", "Ljava/util/List<*>;", $PRIVATE, $field(SpinnerListModel, list)},
	{"index", "I", nullptr, $PRIVATE, $field(SpinnerListModel, index)},
	{}
};

$MethodInfo _SpinnerListModel_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<*>;)V", $PUBLIC, $method(static_cast<void(SpinnerListModel::*)($List*)>(&SpinnerListModel::init$))},
	{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(SpinnerListModel::*)($ObjectArray*)>(&SpinnerListModel::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SpinnerListModel::*)()>(&SpinnerListModel::init$))},
	{"findNextMatch", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"getList", "()Ljava/util/List;", "()Ljava/util/List<*>;", $PUBLIC},
	{"getNextValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPreviousValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setList", "(Ljava/util/List;)V", "(Ljava/util/List<*>;)V", $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SpinnerListModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.SpinnerListModel",
	"javax.swing.AbstractSpinnerModel",
	nullptr,
	_SpinnerListModel_FieldInfo_,
	_SpinnerListModel_MethodInfo_
};

$Object* allocate$SpinnerListModel($Class* clazz) {
	return $of($alloc(SpinnerListModel));
}

void SpinnerListModel::init$($List* values) {
	$AbstractSpinnerModel::init$();
	if (values == nullptr || $nc(values)->size() == 0) {
		$throwNew($IllegalArgumentException, "SpinnerListModel(List) expects non-null non-empty List"_s);
	}
	$set(this, list, values);
	this->index = 0;
}

void SpinnerListModel::init$($ObjectArray* values) {
	$AbstractSpinnerModel::init$();
	if (values == nullptr || $nc(values)->length == 0) {
		$throwNew($IllegalArgumentException, "SpinnerListModel(Object[]) expects non-null non-empty Object[]"_s);
	}
	$set(this, list, $Arrays::asList(values));
	this->index = 0;
}

void SpinnerListModel::init$() {
	SpinnerListModel::init$($$new($ObjectArray, {$of("empty"_s)}));
}

$List* SpinnerListModel::getList() {
	return this->list;
}

void SpinnerListModel::setList($List* list) {
	if ((list == nullptr) || ($nc(list)->size() == 0)) {
		$throwNew($IllegalArgumentException, "invalid list"_s);
	}
	if (!$nc(list)->equals(this->list)) {
		$set(this, list, list);
		this->index = 0;
		fireStateChanged();
	}
}

$Object* SpinnerListModel::getValue() {
	return $of($nc(this->list)->get(this->index));
}

void SpinnerListModel::setValue(Object$* elt) {
	int32_t index = $nc(this->list)->indexOf(elt);
	if (index == -1) {
		$throwNew($IllegalArgumentException, "invalid sequence element"_s);
	} else if (index != this->index) {
		this->index = index;
		fireStateChanged();
	}
}

$Object* SpinnerListModel::getNextValue() {
	return $of((this->index >= ($nc(this->list)->size() - 1)) ? ($Object*)nullptr : $nc(this->list)->get(this->index + 1));
}

$Object* SpinnerListModel::getPreviousValue() {
	return $of((this->index <= 0) ? ($Object*)nullptr : $nc(this->list)->get(this->index - 1));
}

$Object* SpinnerListModel::findNextMatch($String* substring) {
	$useLocalCurrentObjectStackCache();
	int32_t max = $nc(this->list)->size();
	if (max == 0) {
		return $of(nullptr);
	}
	int32_t counter = this->index;
	do {
		$var($Object, value, $nc(this->list)->get(counter));
		if (value != nullptr) {
			$var($String, string, $of(value)->toString());
			if (string != nullptr && string->startsWith(substring)) {
				return $of(value);
			}
		}
		counter = $mod((counter + 1), max);
	} while (counter != this->index);
	return $of(nullptr);
}

SpinnerListModel::SpinnerListModel() {
}

$Class* SpinnerListModel::load$($String* name, bool initialize) {
	$loadClass(SpinnerListModel, name, initialize, &_SpinnerListModel_ClassInfo_, allocate$SpinnerListModel);
	return class$;
}

$Class* SpinnerListModel::class$ = nullptr;

	} // swing
} // javax