#include <Test7195179$1$1.h>

#include <Test7195179$1.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/basic/BasicComboBoxRenderer.h>
#include <jcpp.h>

using $Test7195179$1 = ::Test7195179$1;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $BasicComboBoxRenderer = ::javax::swing::plaf::basic::BasicComboBoxRenderer;

$FieldInfo _Test7195179$1$1_FieldInfo_[] = {
	{"this$0", "LTest7195179$1;", nullptr, $FINAL | $SYNTHETIC, $field(Test7195179$1$1, this$0)},
	{"renderer", "Ljavax/swing/plaf/basic/BasicComboBoxRenderer;", nullptr, $PRIVATE | $FINAL, $field(Test7195179$1$1, renderer)},
	{}
};

$MethodInfo _Test7195179$1$1_MethodInfo_[] = {
	{"<init>", "(LTest7195179$1;)V", nullptr, 0, $method(static_cast<void(Test7195179$1$1::*)($Test7195179$1*)>(&Test7195179$1$1::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Integer;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<+Ljava/lang/Integer;>;Ljava/lang/Integer;IZZ)Ljava/awt/Component;", $PUBLIC},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _Test7195179$1$1_EnclosingMethodInfo_ = {
	"Test7195179$1",
	"run",
	"()V"
};

$InnerClassInfo _Test7195179$1$1_InnerClassesInfo_[] = {
	{"Test7195179$1", nullptr, nullptr, 0},
	{"Test7195179$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test7195179$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"Test7195179$1$1",
	"java.lang.Object",
	"javax.swing.ListCellRenderer",
	_Test7195179$1$1_FieldInfo_,
	_Test7195179$1$1_MethodInfo_,
	"Ljava/lang/Object;Ljavax/swing/ListCellRenderer<Ljava/lang/Integer;>;",
	&_Test7195179$1$1_EnclosingMethodInfo_,
	_Test7195179$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test7195179"
};

$Object* allocate$Test7195179$1$1($Class* clazz) {
	return $of($alloc(Test7195179$1$1));
}

void Test7195179$1$1::init$($Test7195179$1* this$0) {
	$set(this, this$0, this$0);
	$set(this, renderer, $new($BasicComboBoxRenderer));
}

$Component* Test7195179$1$1::getListCellRendererComponent($JList* list, $Integer* value, int32_t index, bool isSelected, bool cellHasFocus) {
	return $nc(this->renderer)->getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
}

$Component* Test7195179$1$1::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	return this->getListCellRendererComponent(list, $cast($Integer, value), index, isSelected, cellHasFocus);
}

Test7195179$1$1::Test7195179$1$1() {
}

$Class* Test7195179$1$1::load$($String* name, bool initialize) {
	$loadClass(Test7195179$1$1, name, initialize, &_Test7195179$1$1_ClassInfo_, allocate$Test7195179$1$1);
	return class$;
}

$Class* Test7195179$1$1::class$ = nullptr;