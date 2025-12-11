#include <javax/swing/JTable$5.h>

#include <javax/swing/JTable$Resizable3.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $JTable$Resizable3 = ::javax::swing::JTable$Resizable3;

namespace javax {
	namespace swing {

$FieldInfo _JTable$5_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$5, this$0)},
	{"val$r", "Ljavax/swing/JTable$Resizable3;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$5, val$r)},
	{}
};

$MethodInfo _JTable$5_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTable;Ljavax/swing/JTable$Resizable3;)V", "()V", 0, $method(static_cast<void(JTable$5::*)($JTable*,$JTable$Resizable3*)>(&JTable$5::init$))},
	{"getElementCount", "()I", nullptr, $PUBLIC},
	{"getLowerBoundAt", "(I)I", nullptr, $PUBLIC},
	{"getUpperBoundAt", "(I)I", nullptr, $PUBLIC},
	{"setSizeAt", "(II)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTable$5_EnclosingMethodInfo_ = {
	"javax.swing.JTable",
	"adjustSizes",
	"(JLjavax/swing/JTable$Resizable3;Z)V"
};

$InnerClassInfo _JTable$5_InnerClassesInfo_[] = {
	{"javax.swing.JTable$5", nullptr, nullptr, 0},
	{"javax.swing.JTable$Resizable2", "javax.swing.JTable", "Resizable2", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.JTable$Resizable3", "javax.swing.JTable", "Resizable3", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JTable$5_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$5",
	"java.lang.Object",
	"javax.swing.JTable$Resizable2",
	_JTable$5_FieldInfo_,
	_JTable$5_MethodInfo_,
	nullptr,
	&_JTable$5_EnclosingMethodInfo_,
	_JTable$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$5($Class* clazz) {
	return $of($alloc(JTable$5));
}

void JTable$5::init$($JTable* this$0, $JTable$Resizable3* val$r) {
	$set(this, this$0, this$0);
	$set(this, val$r, val$r);
}

int32_t JTable$5::getElementCount() {
	return $nc(this->val$r)->getElementCount();
}

int32_t JTable$5::getLowerBoundAt(int32_t i) {
	return $nc(this->val$r)->getMidPointAt(i);
}

int32_t JTable$5::getUpperBoundAt(int32_t i) {
	return $nc(this->val$r)->getUpperBoundAt(i);
}

void JTable$5::setSizeAt(int32_t newSize, int32_t i) {
	$nc(this->val$r)->setSizeAt(newSize, i);
}

JTable$5::JTable$5() {
}

$Class* JTable$5::load$($String* name, bool initialize) {
	$loadClass(JTable$5, name, initialize, &_JTable$5_ClassInfo_, allocate$JTable$5);
	return class$;
}

$Class* JTable$5::class$ = nullptr;

	} // swing
} // javax