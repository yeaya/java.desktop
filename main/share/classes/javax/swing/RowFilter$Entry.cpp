#include <javax/swing/RowFilter$Entry.h>

#include <javax/swing/RowFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _RowFilter$Entry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RowFilter$Entry::*)()>(&RowFilter$Entry::init$))},
	{"getIdentifier", "()Ljava/lang/Object;", "()TI;", $PUBLIC | $ABSTRACT},
	{"getModel", "()Ljava/lang/Object;", "()TM;", $PUBLIC | $ABSTRACT},
	{"getStringValue", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValueCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _RowFilter$Entry_InnerClassesInfo_[] = {
	{"javax.swing.RowFilter$Entry", "javax.swing.RowFilter", "Entry", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _RowFilter$Entry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.RowFilter$Entry",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RowFilter$Entry_MethodInfo_,
	"<M:Ljava/lang/Object;I:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_RowFilter$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RowFilter"
};

$Object* allocate$RowFilter$Entry($Class* clazz) {
	return $of($alloc(RowFilter$Entry));
}

void RowFilter$Entry::init$() {
}

$String* RowFilter$Entry::getStringValue(int32_t index) {
	$var($Object, value, getValue(index));
	return (value == nullptr) ? ""_s : $nc($of(value))->toString();
}

RowFilter$Entry::RowFilter$Entry() {
}

$Class* RowFilter$Entry::load$($String* name, bool initialize) {
	$loadClass(RowFilter$Entry, name, initialize, &_RowFilter$Entry_ClassInfo_, allocate$RowFilter$Entry);
	return class$;
}

$Class* RowFilter$Entry::class$ = nullptr;

	} // swing
} // javax