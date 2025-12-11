#include <javax/swing/GroupLayout$SpringDelta.h>

#include <java/lang/Comparable.h>
#include <javax/swing/GroupLayout.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$FieldInfo _GroupLayout$SpringDelta_FieldInfo_[] = {
	{"index", "I", nullptr, $PUBLIC | $FINAL, $field(GroupLayout$SpringDelta, index)},
	{"delta", "I", nullptr, $PUBLIC, $field(GroupLayout$SpringDelta, delta)},
	{}
};

$MethodInfo _GroupLayout$SpringDelta_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(GroupLayout$SpringDelta::*)(int32_t,int32_t)>(&GroupLayout$SpringDelta::init$))},
	{"compareTo", "(Ljavax/swing/GroupLayout$SpringDelta;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(GroupLayout$SpringDelta::*)(GroupLayout$SpringDelta*)>(&GroupLayout$SpringDelta::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GroupLayout$SpringDelta_InnerClassesInfo_[] = {
	{"javax.swing.GroupLayout$SpringDelta", "javax.swing.GroupLayout", "SpringDelta", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _GroupLayout$SpringDelta_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.GroupLayout$SpringDelta",
	"java.lang.Object",
	"java.lang.Comparable",
	_GroupLayout$SpringDelta_FieldInfo_,
	_GroupLayout$SpringDelta_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Ljavax/swing/GroupLayout$SpringDelta;>;",
	nullptr,
	_GroupLayout$SpringDelta_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.GroupLayout"
};

$Object* allocate$GroupLayout$SpringDelta($Class* clazz) {
	return $of($alloc(GroupLayout$SpringDelta));
}

void GroupLayout$SpringDelta::init$(int32_t index, int32_t delta) {
	this->index = index;
	this->delta = delta;
}

int32_t GroupLayout$SpringDelta::compareTo(GroupLayout$SpringDelta* o) {
	return this->delta - $nc(o)->delta;
}

$String* GroupLayout$SpringDelta::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($Comparable::toString()), "[index="_s, $$str(this->index), ", delta="_s, $$str(this->delta), "]"_s});
}

int32_t GroupLayout$SpringDelta::compareTo(Object$* o) {
	return this->compareTo($cast(GroupLayout$SpringDelta, o));
}

GroupLayout$SpringDelta::GroupLayout$SpringDelta() {
}

$Class* GroupLayout$SpringDelta::load$($String* name, bool initialize) {
	$loadClass(GroupLayout$SpringDelta, name, initialize, &_GroupLayout$SpringDelta_ClassInfo_, allocate$GroupLayout$SpringDelta);
	return class$;
}

$Class* GroupLayout$SpringDelta::class$ = nullptr;

	} // swing
} // javax