#include <javax/swing/JTable$4.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTable$Resizable3.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $JTable$Resizable2 = ::javax::swing::JTable$Resizable2;
using $JTable$Resizable3 = ::javax::swing::JTable$Resizable3;

namespace javax {
	namespace swing {

$FieldInfo _JTable$4_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$4, this$0)},
	{"val$r", "Ljavax/swing/JTable$Resizable3;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$4, val$r)},
	{}
};

$MethodInfo _JTable$4_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTable;Ljavax/swing/JTable$Resizable3;)V", "()V", 0, $method(static_cast<void(JTable$4::*)($JTable*,$JTable$Resizable3*)>(&JTable$4::init$))},
	{"getElementCount", "()I", nullptr, $PUBLIC},
	{"getLowerBoundAt", "(I)I", nullptr, $PUBLIC},
	{"getUpperBoundAt", "(I)I", nullptr, $PUBLIC},
	{"setSizeAt", "(II)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JTable$4_EnclosingMethodInfo_ = {
	"javax.swing.JTable",
	"adjustSizes",
	"(JLjavax/swing/JTable$Resizable3;Z)V"
};

$InnerClassInfo _JTable$4_InnerClassesInfo_[] = {
	{"javax.swing.JTable$4", nullptr, nullptr, 0},
	{"javax.swing.JTable$Resizable2", "javax.swing.JTable", "Resizable2", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"javax.swing.JTable$Resizable3", "javax.swing.JTable", "Resizable3", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JTable$4_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$4",
	"java.lang.Object",
	"javax.swing.JTable$Resizable2",
	_JTable$4_FieldInfo_,
	_JTable$4_MethodInfo_,
	nullptr,
	&_JTable$4_EnclosingMethodInfo_,
	_JTable$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$4($Class* clazz) {
	return $of($alloc(JTable$4));
}

void JTable$4::init$($JTable* this$0, $JTable$Resizable3* val$r) {
	$set(this, this$0, this$0);
	$set(this, val$r, val$r);
}

int32_t JTable$4::getElementCount() {
	return $nc(this->val$r)->getElementCount();
}

int32_t JTable$4::getLowerBoundAt(int32_t i) {
	return $nc(this->val$r)->getLowerBoundAt(i);
}

int32_t JTable$4::getUpperBoundAt(int32_t i) {
	return $nc(this->val$r)->getMidPointAt(i);
}

void JTable$4::setSizeAt(int32_t newSize, int32_t i) {
	$nc(this->val$r)->setSizeAt(newSize, i);
}

JTable$4::JTable$4() {
}

$Class* JTable$4::load$($String* name, bool initialize) {
	$loadClass(JTable$4, name, initialize, &_JTable$4_ClassInfo_, allocate$JTable$4);
	return class$;
}

$Class* JTable$4::class$ = nullptr;

	} // swing
} // javax